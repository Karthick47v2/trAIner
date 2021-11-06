import cv2
import mediapipe as mp
import time
import math

class poseDetector():
    def __init__(self,mode=False,complexity=1,smooth=True, enable_segmentation=False,smooth_segmentation=True,
               detcon=0.5, trackingcon=0.5):
        self.mode = mode
        self.complexitiy=complexity
        self.smooth=smooth
        self.enable_segmentation=enable_segmentation
        self.smooth_segmentation=smooth_segmentation
        self.detcon=detcon
        self.trackingcon=trackingcon

        self.mpDraw = mp.solutions.drawing_utils
        self.mpPose = mp.solutions.pose
        self.pose = self.mpPose.Pose(self.mode , self.complexitiy,self.smooth,self.enable_segmentation,
                                    self.smooth_segmentation,self.detcon,self.trackingcon)

        self.drawSpec1 = self.mpDraw.DrawingSpec(color=(0, 255, 0), thickness=2)
        self.drawSpec2 = self.mpDraw.DrawingSpec(color=(0, 0, 255), thickness=2, circle_radius=2)


    def findpose(self,img,draw=True):

        imgRGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        self.results = self.pose.process(imgRGB)
        #print(results.pose_landmarks)

        if self.results.pose_landmarks:
            if draw:
                self.mpDraw.draw_landmarks(img, self.results.pose_landmarks, self.mpPose.POSE_CONNECTIONS, self.drawSpec2, self.drawSpec1)

        return img


    def findposition(self,img,draw=True):


        self.lmlist = []
        if self.results.pose_landmarks:
            for id, lm in enumerate(self.results.pose_landmarks.landmark):
                h, w, c = img.shape
                #print(id, lm)
                cx, cy = int(lm.x * w), int(lm.y * h)
                self.lmlist.append([id,cx,cy])

                if draw:
                    cv2.circle(img, (cx, cy), 15, (255, 0, 255),cv2.FILLED)  # img, position, radius of the circle, color, filled/not
        return img,self.lmlist

    def getAngle(self,img,p1,p2,p3, draw=True):#index values
        #find landmarks
        x1,y1 = self.lmlist[p1][1:]
        x2, y2 = self.lmlist[p2][1:]
        x3, y3 = self.lmlist[p3][1:]

        #angle
        angle = math.degrees(math.atan2((y3-y2), (x3-x2)) - math.atan2((y1-y2), (x1-x2)))

        if angle < 0:
            angle += 360

        #print(angle)



        #draw
        if draw:
            cv2.line(img, (x1,y1),(x2,y2),(255,255,255),2)
            cv2.line(img, (x2,y2),(x3,y3),(255,255,255),2)
            cv2.circle(img, (x1, y1), 5, (0, 0, 255),cv2.FILLED)
            cv2.circle(img, (x1, y1), 10, (0, 0, 255),2)
            cv2.circle(img, (x2, y2), 5, (0, 0, 255),cv2.FILLED)
            cv2.circle(img, (x2, y2), 10, (0, 0, 255),2)
            cv2.circle(img, (x3, y3), 5, (0, 0, 255),cv2.FILLED)
            cv2.circle(img, (x3, y3), 10, (0, 0, 255),2)

            cv2.putText(img, str(int(angle)), (x2+10,y2-10), cv2.FONT_HERSHEY_COMPLEX,0.5, (0,0,0),2 )

        return img,angle


def main():
    cap = cv2.VideoCapture(0)

    detector = poseDetector()
    pTime = 0

    while True:
        success, img = cap.read()
        img = detector.findpose(img)
        img,lmlist = detector.findposition(img,draw=False)

        cTime = time.time()
        fps = 1 / (cTime - pTime)
        pTime = cTime

        cv2.putText(img, str(int(fps)), (70, 50), cv2.FONT_HERSHEY_PLAIN, 3, (255, 0, 0), 3)
        cv2.imshow('Image', img)

        cv2.waitKey(1)


if __name__=='__main__':
    main()