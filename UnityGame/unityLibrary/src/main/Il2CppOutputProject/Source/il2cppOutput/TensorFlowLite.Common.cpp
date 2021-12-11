#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Func`2<System.Double,System.Double>
struct Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857;
// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149;
// System.Func`2<UnityEngine.WebCamDevice,System.Int32>
struct Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t4DFA5CB8F95829BAC3B2C5251EA018F27F9EFCB2;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerable`1<UnityEngine.WebCamDevice>
struct IEnumerable_1_t275E4637ED83E87F5DE73A10DCDAE7D321F5D8B0;
// System.Linq.IOrderedEnumerable`1<UnityEngine.WebCamDevice>
struct IOrderedEnumerable_1_tE111E92700E186DB2E83868A24610D31123E6661;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>
struct IStateMachineRunnerPromise_1_t48380E37AA5955789017DBA7B3C5ED7C2FE3F3C5;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_t35BC53B57A9D4ACCD139841E4165831832EC7874;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Texture>
struct UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;
// System.SByte[0...,0...,0...]
struct SByteU5BU2CU2CU5D_t9B3C3F9A876AC242D4BD465135089223F3DB4ACA;
// System.Single[0...,0...,0...]
struct SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427;
// UnityEngine.ComputeShader
struct ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Exception
struct Exception_t;
// TensorFlowLite.FilePopupAttribute
struct FilePopupAttribute_t7EBC1A05BE35CACC18DAED8B9BDEE79E5FB5FFE7;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// TensorFlowLite.Interpreter
struct Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9;
// TensorFlowLite.InterpreterOptions
struct InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.LightProbeProxyVolume
struct LightProbeProxyVolume_t55DEBA762A0DB23C4497DE22E5595517A7176959;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// TensorFlowLite.PrimitiveDraw
struct PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TensorFlowLite.TextureResizer
struct TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575;
// TensorFlowLite.TextureToTensor
struct TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// TensorFlowLite.WebCamInput
struct WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF;
// TensorFlowLite.WebCamName
struct WebCamName_t78A858FDAD229F0DAE08C91DB342CE0B8F163920;
// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// TensorFlowLite.MathTF/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE;
// TensorFlowLite.MathTF/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB;
// TensorFlowLite.PrimitiveDraw/MeshBuffer
struct MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058;
// TensorFlowLite.WebCamInput/TextureUpdateEvent
struct TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14;
// TensorFlowLite.WebCamUtil/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C;

IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A0B2CF5DC485D0B8A8A807D0088CF6730FB2BDD;
IL2CPP_EXTERN_C String_t* _stringLiteral0B112A45AF7EB2AA7809D91549390A31A3ECCF64;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8D2CD12448421DD3C31CF4A88C6CBCFD143532;
IL2CPP_EXTERN_C String_t* _stringLiteral179E8064BD0D567C832BC3C24C5979B76547443C;
IL2CPP_EXTERN_C String_t* _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
IL2CPP_EXTERN_C String_t* _stringLiteral186C317106771B7B34F0840738B27A2CE8181156;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral6270A9A3CF86F3B615CE7EAC735058FB6089BA94;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B5024D6C2A93ECDF3DFB54A395211A21F751679;
IL2CPP_EXTERN_C String_t* _stringLiteral81785C0709828B0330D6987D0BC8063ECCA4DE55;
IL2CPP_EXTERN_C String_t* _stringLiteral974EC53FABB83A35680AD82D7F8C49DDE80B63EC;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E134912E4F26F2F6E6B380FC96D32FB257D8FA;
IL2CPP_EXTERN_C String_t* _stringLiteralB249F16D93A7079142DF003DE7DE26B18AFFB480;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB5A4E8096BFAAAF4264E3B6B27A30C2D653DDDC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB82C0D2D51BC7F727346CBAC41D5AC8BAEFEAF34;
IL2CPP_EXTERN_C String_t* _stringLiteralD356BAD4D0F4DD6D4F4A44A9BD87D2917B639F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralEFCDE62CA56D5436F953EEC7C371F60AEF6AFC4A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m55F67D834141C2905E9688540EB3585651E08C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_m8F6F47B343AF0B1C5DA24AA9AA23026954A77AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderByDescending_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F20CCA32326376F782EE49B698CA5AE8B422AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE0DBB61EE2F07C43EE90FFE59DA18800291598EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD9D37C7B21C1D9A88E4CC02D7E91D544E0F69A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30_m546D5961FB95F55CAE76CC5A5FDBC99B2F52D487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureResizer_GetTextureST_mAE670BDA6C1CEA54BD9887FCA1528CB668BB85DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CFindNameU3Eb__0_mAEBC9ABF478C8F145C2D47E8E56F0D9D06A6617F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m48259DB36BED661EFFEF9AF1D8716C0548E9D736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_mC77BBE2D6D6D27C5CF19902F855526EE256C3754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m986B2E5EF684F3F2CD817810145BF759A90030D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m06DA1EFB275CBB4C9F2A40E65BFB4D88FF505F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m5B2E9FDA26F8678E0532EEF7E34ED319BBB4A75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m05DC188D92C9F6FD42CE7905370B22DE551A1E63_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 ;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;
struct SByteU5BU2CU2CU5D_t9B3C3F9A876AC242D4BD465135089223F3DB4ACA;
struct SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t05A39EE5520D0980A663EDBD99878AFDFE2F343E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// TensorFlowLite.ArrayExtension
struct ArrayExtension_t8CCE242958336F24BF595053A084B0DFC87D51F3  : public RuntimeObject
{
public:

public:
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// TensorFlowLite.Color32Extension
struct Color32Extension_t480FCF5D191F55DBC87F33C1E7EF618359E90256  : public RuntimeObject
{
public:

public:
};


// TensorFlowLite.DisposeUtil
struct DisposeUtil_t08A55A57FE57C15ADED865A17C4B594FC4671D78  : public RuntimeObject
{
public:

public:
};


// TensorFlowLite.FileUtil
struct FileUtil_t48A7858BCEDA29CD4B78CA0A03C804401D7AF76A  : public RuntimeObject
{
public:

public:
};


// TensorFlowLite.InterpreterExtension
struct InterpreterExtension_tA46F7DD8529CBC366BC70464AE07A5409A650FC6  : public RuntimeObject
{
public:

public:
};


// TensorFlowLite.MathTF
struct MathTF_tA5A823349BCBEFF766D3EE48049563BA92CDE3CA  : public RuntimeObject
{
public:

public:
};


// TensorFlowLite.MatrixExtension
struct MatrixExtension_t3B885D8C3A9A9A14C5EDFD14CC52753D16F2E3A2  : public RuntimeObject
{
public:

public:
};


// TensorFlowLite.PrimitiveDraw
struct PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967  : public RuntimeObject
{
public:
	// UnityEngine.Material TensorFlowLite.PrimitiveDraw::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_0;
	// UnityEngine.MaterialPropertyBlock TensorFlowLite.PrimitiveDraw::mpb
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___mpb_1;
	// TensorFlowLite.PrimitiveDraw/MeshBuffer TensorFlowLite.PrimitiveDraw::cube
	MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * ___cube_2;
	// TensorFlowLite.PrimitiveDraw/MeshBuffer TensorFlowLite.PrimitiveDraw::quad
	MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * ___quad_3;
	// UnityEngine.Camera TensorFlowLite.PrimitiveDraw::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_4;
	// System.Int32 TensorFlowLite.PrimitiveDraw::layer
	int32_t ___layer_5;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967, ___material_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_0() const { return ___material_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_0), (void*)value);
	}

	inline static int32_t get_offset_of_mpb_1() { return static_cast<int32_t>(offsetof(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967, ___mpb_1)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_mpb_1() const { return ___mpb_1; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_mpb_1() { return &___mpb_1; }
	inline void set_mpb_1(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___mpb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mpb_1), (void*)value);
	}

	inline static int32_t get_offset_of_cube_2() { return static_cast<int32_t>(offsetof(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967, ___cube_2)); }
	inline MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * get_cube_2() const { return ___cube_2; }
	inline MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 ** get_address_of_cube_2() { return &___cube_2; }
	inline void set_cube_2(MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * value)
	{
		___cube_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cube_2), (void*)value);
	}

	inline static int32_t get_offset_of_quad_3() { return static_cast<int32_t>(offsetof(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967, ___quad_3)); }
	inline MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * get_quad_3() const { return ___quad_3; }
	inline MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 ** get_address_of_quad_3() { return &___quad_3; }
	inline void set_quad_3(MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * value)
	{
		___quad_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quad_3), (void*)value);
	}

	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967, ___camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_4() const { return ___camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_layer_5() { return static_cast<int32_t>(offsetof(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967, ___layer_5)); }
	inline int32_t get_layer_5() const { return ___layer_5; }
	inline int32_t* get_address_of_layer_5() { return &___layer_5; }
	inline void set_layer_5(int32_t value)
	{
		___layer_5 = value;
	}
};

struct PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_StaticFields
{
public:
	// System.Int32 TensorFlowLite.PrimitiveDraw::_Color
	int32_t ____Color_6;

public:
	inline static int32_t get_offset_of__Color_6() { return static_cast<int32_t>(offsetof(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_StaticFields, ____Color_6)); }
	inline int32_t get__Color_6() const { return ____Color_6; }
	inline int32_t* get_address_of__Color_6() { return &____Color_6; }
	inline void set__Color_6(int32_t value)
	{
		____Color_6 = value;
	}
};


// TensorFlowLite.RectExtension
struct RectExtension_t99574FEEE393262DD11B61209F7FA34B3768CAE3  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// TensorFlowLite.TextureToTensor
struct TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::fetchTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___fetchTexture_0;
	// UnityEngine.ComputeShader TensorFlowLite.TextureToTensor::compute
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___compute_1;
	// UnityEngine.ComputeBuffer TensorFlowLite.TextureToTensor::tensorBuffer
	ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___tensorBuffer_2;

public:
	inline static int32_t get_offset_of_fetchTexture_0() { return static_cast<int32_t>(offsetof(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8, ___fetchTexture_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_fetchTexture_0() const { return ___fetchTexture_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_fetchTexture_0() { return &___fetchTexture_0; }
	inline void set_fetchTexture_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___fetchTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fetchTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_compute_1() { return static_cast<int32_t>(offsetof(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8, ___compute_1)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_compute_1() const { return ___compute_1; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_compute_1() { return &___compute_1; }
	inline void set_compute_1(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___compute_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compute_1), (void*)value);
	}

	inline static int32_t get_offset_of_tensorBuffer_2() { return static_cast<int32_t>(offsetof(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8, ___tensorBuffer_2)); }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * get_tensorBuffer_2() const { return ___tensorBuffer_2; }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 ** get_address_of_tensorBuffer_2() { return &___tensorBuffer_2; }
	inline void set_tensorBuffer_2(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * value)
	{
		___tensorBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tensorBuffer_2), (void*)value);
	}
};

struct TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields
{
public:
	// System.Int32 TensorFlowLite.TextureToTensor::InputTexture
	int32_t ___InputTexture_3;
	// System.Int32 TensorFlowLite.TextureToTensor::OutputFloatTensor
	int32_t ___OutputFloatTensor_4;
	// System.Int32 TensorFlowLite.TextureToTensor::TextureWidth
	int32_t ___TextureWidth_5;
	// System.Int32 TensorFlowLite.TextureToTensor::TextureHeight
	int32_t ___TextureHeight_6;

public:
	inline static int32_t get_offset_of_InputTexture_3() { return static_cast<int32_t>(offsetof(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields, ___InputTexture_3)); }
	inline int32_t get_InputTexture_3() const { return ___InputTexture_3; }
	inline int32_t* get_address_of_InputTexture_3() { return &___InputTexture_3; }
	inline void set_InputTexture_3(int32_t value)
	{
		___InputTexture_3 = value;
	}

	inline static int32_t get_offset_of_OutputFloatTensor_4() { return static_cast<int32_t>(offsetof(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields, ___OutputFloatTensor_4)); }
	inline int32_t get_OutputFloatTensor_4() const { return ___OutputFloatTensor_4; }
	inline int32_t* get_address_of_OutputFloatTensor_4() { return &___OutputFloatTensor_4; }
	inline void set_OutputFloatTensor_4(int32_t value)
	{
		___OutputFloatTensor_4 = value;
	}

	inline static int32_t get_offset_of_TextureWidth_5() { return static_cast<int32_t>(offsetof(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields, ___TextureWidth_5)); }
	inline int32_t get_TextureWidth_5() const { return ___TextureWidth_5; }
	inline int32_t* get_address_of_TextureWidth_5() { return &___TextureWidth_5; }
	inline void set_TextureWidth_5(int32_t value)
	{
		___TextureWidth_5 = value;
	}

	inline static int32_t get_offset_of_TextureHeight_6() { return static_cast<int32_t>(offsetof(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields, ___TextureHeight_6)); }
	inline int32_t get_TextureHeight_6() const { return ___TextureHeight_6; }
	inline int32_t* get_address_of_TextureHeight_6() { return &___TextureHeight_6; }
	inline void set_TextureHeight_6(int32_t value)
	{
		___TextureHeight_6 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// TensorFlowLite.WebCamUtil
struct WebCamUtil_tA6BAC5F4562E25A3EC756C1247FB34699F287957  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// TensorFlowLite.MathTF/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE  : public RuntimeObject
{
public:
	// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::max
	float ___max_0;
	// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::sum
	float ___sum_1;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE, ___max_0)); }
	inline float get_max_0() const { return ___max_0; }
	inline float* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(float value)
	{
		___max_0 = value;
	}

	inline static int32_t get_offset_of_sum_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE, ___sum_1)); }
	inline float get_sum_1() const { return ___sum_1; }
	inline float* get_address_of_sum_1() { return &___sum_1; }
	inline void set_sum_1(float value)
	{
		___sum_1 = value;
	}
};


// TensorFlowLite.MathTF/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB  : public RuntimeObject
{
public:
	// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::max
	double ___max_0;
	// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::sum
	double ___sum_1;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB, ___max_0)); }
	inline double get_max_0() const { return ___max_0; }
	inline double* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(double value)
	{
		___max_0 = value;
	}

	inline static int32_t get_offset_of_sum_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB, ___sum_1)); }
	inline double get_sum_1() const { return ___sum_1; }
	inline double* get_address_of_sum_1() { return &___sum_1; }
	inline void set_sum_1(double value)
	{
		___sum_1 = value;
	}
};


// TensorFlowLite.PrimitiveDraw/MeshBuffer
struct MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058  : public RuntimeObject
{
public:
	// UnityEngine.Mesh TensorFlowLite.PrimitiveDraw/MeshBuffer::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_0;
	// UnityEngine.Matrix4x4[] TensorFlowLite.PrimitiveDraw/MeshBuffer::buffer
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___buffer_1;
	// System.Int32 TensorFlowLite.PrimitiveDraw/MeshBuffer::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058, ___mesh_0)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058, ___buffer_1)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_buffer_1() const { return ___buffer_1; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};


// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>
struct AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 
{
public:
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t * ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	bool ___result_2;

public:
	inline static int32_t get_offset_of_runnerPromise_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0, ___runnerPromise_0)); }
	inline RuntimeObject* get_runnerPromise_0() const { return ___runnerPromise_0; }
	inline RuntimeObject** get_address_of_runnerPromise_0() { return &___runnerPromise_0; }
	inline void set_runnerPromise_0(RuntimeObject* value)
	{
		___runnerPromise_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerPromise_0), (void*)value);
	}

	inline static int32_t get_offset_of_ex_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0, ___ex_1)); }
	inline Exception_t * get_ex_1() const { return ___ex_1; }
	inline Exception_t ** get_address_of_ex_1() { return &___ex_1; }
	inline void set_ex_1(Exception_t * value)
	{
		___ex_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ex_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0, ___result_2)); }
	inline bool get_result_2() const { return ___result_2; }
	inline bool* get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(bool value)
	{
		___result_2 = value;
	}
};


// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8, ___result_1)); }
	inline bool get_result_1() const { return ___result_1; }
	inline bool* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(bool value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Texture>
struct UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable
struct SwitchToThreadPoolAwaitable_t4D34FB36C1586BB62ABB20946858B444B090E88B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SwitchToThreadPoolAwaitable_t4D34FB36C1586BB62ABB20946858B444B090E88B__padding[1];
	};

public:
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Mathematics.float4
struct float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 
{
public:
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// TensorFlowLite.Interpreter/QuantizationParams
struct QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157 
{
public:
	// System.Single TensorFlowLite.Interpreter/QuantizationParams::scale
	float ___scale_0;
	// System.Int32 TensorFlowLite.Interpreter/QuantizationParams::zeroPoint
	int32_t ___zeroPoint_1;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157, ___scale_0)); }
	inline float get_scale_0() const { return ___scale_0; }
	inline float* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(float value)
	{
		___scale_0 = value;
	}

	inline static int32_t get_offset_of_zeroPoint_1() { return static_cast<int32_t>(offsetof(QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157, ___zeroPoint_1)); }
	inline int32_t get_zeroPoint_1() const { return ___zeroPoint_1; }
	inline int32_t* get_address_of_zeroPoint_1() { return &___zeroPoint_1; }
	inline void set_zeroPoint_1(int32_t value)
	{
		___zeroPoint_1 = value;
	}
};


// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter
struct Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057__padding[1];
	};

public:
};

struct Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_StaticFields
{
public:
	// System.Threading.WaitCallback Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::switchToCallback
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___switchToCallback_0;

public:
	inline static int32_t get_offset_of_switchToCallback_0() { return static_cast<int32_t>(offsetof(Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_StaticFields, ___switchToCallback_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_switchToCallback_0() const { return ___switchToCallback_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_switchToCallback_0() { return &___switchToCallback_0; }
	inline void set_switchToCallback_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___switchToCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchToCallback_0), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.AspectMode
struct AspectMode_t1F9D66070ECF50A39176B09D408D1F3818A8F8A9 
{
public:
	// System.Int32 TensorFlowLite.AspectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AspectMode_t1F9D66070ECF50A39176B09D408D1F3818A8F8A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TensorFlowLite.FilePopupAttribute
struct FilePopupAttribute_t7EBC1A05BE35CACC18DAED8B9BDEE79E5FB5FFE7  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String TensorFlowLite.FilePopupAttribute::regex
	String_t* ___regex_0;

public:
	inline static int32_t get_offset_of_regex_0() { return static_cast<int32_t>(offsetof(FilePopupAttribute_t7EBC1A05BE35CACC18DAED8B9BDEE79E5FB5FFE7, ___regex_0)); }
	inline String_t* get_regex_0() const { return ___regex_0; }
	inline String_t** get_address_of_regex_0() { return &___regex_0; }
	inline void set_regex_0(String_t* value)
	{
		___regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regex_0), (void*)value);
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.Interpreter
struct Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9  : public RuntimeObject
{
public:
	// System.IntPtr TensorFlowLite.Interpreter::model
	intptr_t ___model_0;
	// System.IntPtr TensorFlowLite.Interpreter::interpreter
	intptr_t ___interpreter_1;
	// TensorFlowLite.InterpreterOptions TensorFlowLite.Interpreter::options
	InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * ___options_2;

public:
	inline static int32_t get_offset_of_model_0() { return static_cast<int32_t>(offsetof(Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9, ___model_0)); }
	inline intptr_t get_model_0() const { return ___model_0; }
	inline intptr_t* get_address_of_model_0() { return &___model_0; }
	inline void set_model_0(intptr_t value)
	{
		___model_0 = value;
	}

	inline static int32_t get_offset_of_interpreter_1() { return static_cast<int32_t>(offsetof(Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9, ___interpreter_1)); }
	inline intptr_t get_interpreter_1() const { return ___interpreter_1; }
	inline intptr_t* get_address_of_interpreter_1() { return &___interpreter_1; }
	inline void set_interpreter_1(intptr_t value)
	{
		___interpreter_1 = value;
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9, ___options_2)); }
	inline InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * get_options_2() const { return ___options_2; }
	inline InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_2), (void*)value);
	}
};


// UnityEngine.Rendering.LightProbeUsage
struct LightProbeUsage_tA8F991FA2CEE02CC835D4EF4E0D1C5BA6ADC72AE 
{
public:
	// System.Int32 UnityEngine.Rendering.LightProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightProbeUsage_tA8F991FA2CEE02CC835D4EF4E0D1C5BA6ADC72AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Cysharp.Threading.Tasks.PlayerLoopTiming
struct PlayerLoopTiming_tB34EB7F009734F327EAB60670DA7DC0A69619BB2 
{
public:
	// System.Int32 Cysharp.Threading.Tasks.PlayerLoopTiming::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerLoopTiming_tB34EB7F009734F327EAB60670DA7DC0A69619BB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowCastingMode
struct ShadowCastingMode_t4193084D236CFA695FE2F3FD04D0898ABF03F8B2 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t4193084D236CFA695FE2F3FD04D0898ABF03F8B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.TextureResizer
struct TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575  : public RuntimeObject
{
public:
	// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::resizeTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___resizeTexture_0;
	// UnityEngine.Material TensorFlowLite.TextureResizer::_blitMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____blitMaterial_1;

public:
	inline static int32_t get_offset_of_resizeTexture_0() { return static_cast<int32_t>(offsetof(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575, ___resizeTexture_0)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_resizeTexture_0() const { return ___resizeTexture_0; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_resizeTexture_0() { return &___resizeTexture_0; }
	inline void set_resizeTexture_0(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___resizeTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resizeTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of__blitMaterial_1() { return static_cast<int32_t>(offsetof(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575, ____blitMaterial_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__blitMaterial_1() const { return ____blitMaterial_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__blitMaterial_1() { return &____blitMaterial_1; }
	inline void set__blitMaterial_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____blitMaterial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____blitMaterial_1), (void*)value);
	}
};

struct TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields
{
public:
	// System.Int32 TensorFlowLite.TextureResizer::_VertTransform
	int32_t ____VertTransform_2;
	// System.Int32 TensorFlowLite.TextureResizer::_UVRect
	int32_t ____UVRect_3;
	// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::PUSH_MATRIX
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___PUSH_MATRIX_4;
	// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::POP_MATRIX
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___POP_MATRIX_5;

public:
	inline static int32_t get_offset_of__VertTransform_2() { return static_cast<int32_t>(offsetof(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields, ____VertTransform_2)); }
	inline int32_t get__VertTransform_2() const { return ____VertTransform_2; }
	inline int32_t* get_address_of__VertTransform_2() { return &____VertTransform_2; }
	inline void set__VertTransform_2(int32_t value)
	{
		____VertTransform_2 = value;
	}

	inline static int32_t get_offset_of__UVRect_3() { return static_cast<int32_t>(offsetof(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields, ____UVRect_3)); }
	inline int32_t get__UVRect_3() const { return ____UVRect_3; }
	inline int32_t* get_address_of__UVRect_3() { return &____UVRect_3; }
	inline void set__UVRect_3(int32_t value)
	{
		____UVRect_3 = value;
	}

	inline static int32_t get_offset_of_PUSH_MATRIX_4() { return static_cast<int32_t>(offsetof(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields, ___PUSH_MATRIX_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_PUSH_MATRIX_4() const { return ___PUSH_MATRIX_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_PUSH_MATRIX_4() { return &___PUSH_MATRIX_4; }
	inline void set_PUSH_MATRIX_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___PUSH_MATRIX_4 = value;
	}

	inline static int32_t get_offset_of_POP_MATRIX_5() { return static_cast<int32_t>(offsetof(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields, ___POP_MATRIX_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_POP_MATRIX_5() const { return ___POP_MATRIX_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_POP_MATRIX_5() { return &___POP_MATRIX_5; }
	inline void set_POP_MATRIX_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___POP_MATRIX_5 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.WebCamKind
struct WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2 
{
public:
	// System.Int32 UnityEngine.WebCamKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.WebCamName
struct WebCamName_t78A858FDAD229F0DAE08C91DB342CE0B8F163920  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// UnityEngine.UI.AspectRatioFitter/AspectMode
struct AspectMode_t36213FA489787D7A0D888D00CD344AD5349CD563 
{
public:
	// System.Int32 UnityEngine.UI.AspectRatioFitter/AspectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AspectMode_t36213FA489787D7A0D888D00CD344AD5349CD563, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.Interpreter/DataType
struct DataType_t8A84A65E04F07EADD7F07ADFBE798BAFE85D1176 
{
public:
	// System.Int32 TensorFlowLite.Interpreter/DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_t8A84A65E04F07EADD7F07ADFBE798BAFE85D1176, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.WebCamInput/TextureUpdateEvent
struct TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14  : public UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7
{
public:

public:
};


// Unity.Collections.NativeArray`1<UnityEngine.Color32>
struct NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ComputeShader
struct ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
struct SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D 
{
public:
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable::playerLoopTiming
	int32_t ___playerLoopTiming_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_1;

public:
	inline static int32_t get_offset_of_playerLoopTiming_0() { return static_cast<int32_t>(offsetof(SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D, ___playerLoopTiming_0)); }
	inline int32_t get_playerLoopTiming_0() const { return ___playerLoopTiming_0; }
	inline int32_t* get_address_of_playerLoopTiming_0() { return &___playerLoopTiming_0; }
	inline void set_playerLoopTiming_0(int32_t value)
	{
		___playerLoopTiming_0 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_1() { return static_cast<int32_t>(offsetof(SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D, ___cancellationToken_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_1() const { return ___cancellationToken_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_1() { return &___cancellationToken_1; }
	inline void set_cancellationToken_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
struct SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D_marshaled_pinvoke
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke ___cancellationToken_1;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
struct SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D_marshaled_com
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com ___cancellationToken_1;
};

// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* ___m_Resolutions_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthCameraName_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_DepthCameraName_1)); }
	inline String_t* get_m_DepthCameraName_1() const { return ___m_DepthCameraName_1; }
	inline String_t** get_address_of_m_DepthCameraName_1() { return &___m_DepthCameraName_1; }
	inline void set_m_DepthCameraName_1(String_t* value)
	{
		___m_DepthCameraName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DepthCameraName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_Kind_3() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Kind_3)); }
	inline int32_t get_m_Kind_3() const { return ___m_Kind_3; }
	inline int32_t* get_address_of_m_Kind_3() { return &___m_Kind_3; }
	inline void set_m_Kind_3(int32_t value)
	{
		___m_Kind_3 = value;
	}

	inline static int32_t get_offset_of_m_Resolutions_4() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Resolutions_4)); }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* get_m_Resolutions_4() const { return ___m_Resolutions_4; }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597** get_address_of_m_Resolutions_4() { return &___m_Resolutions_4; }
	inline void set_m_Resolutions_4(ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* value)
	{
		___m_Resolutions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resolutions_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};

// TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F 
{
public:
	// System.String TensorFlowLite.Interpreter/TensorInfo::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// TensorFlowLite.Interpreter/DataType TensorFlowLite.Interpreter/TensorInfo::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32[] TensorFlowLite.Interpreter/TensorInfo::<shape>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CshapeU3Ek__BackingField_2;
	// TensorFlowLite.Interpreter/QuantizationParams TensorFlowLite.Interpreter/TensorInfo::<quantizationParams>k__BackingField
	QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157  ___U3CquantizationParamsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CshapeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F, ___U3CshapeU3Ek__BackingField_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CshapeU3Ek__BackingField_2() const { return ___U3CshapeU3Ek__BackingField_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CshapeU3Ek__BackingField_2() { return &___U3CshapeU3Ek__BackingField_2; }
	inline void set_U3CshapeU3Ek__BackingField_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CshapeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshapeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquantizationParamsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F, ___U3CquantizationParamsU3Ek__BackingField_3)); }
	inline QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157  get_U3CquantizationParamsU3Ek__BackingField_3() const { return ___U3CquantizationParamsU3Ek__BackingField_3; }
	inline QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157 * get_address_of_U3CquantizationParamsU3Ek__BackingField_3() { return &___U3CquantizationParamsU3Ek__BackingField_3; }
	inline void set_U3CquantizationParamsU3Ek__BackingField_3(QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157  value)
	{
		___U3CquantizationParamsU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	int32_t ___U3CtypeU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CshapeU3Ek__BackingField_2;
	QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157  ___U3CquantizationParamsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of TensorFlowLite.Interpreter/TensorInfo
struct TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	int32_t ___U3CtypeU3Ek__BackingField_1;
	Il2CppSafeArray/*NONE*/* ___U3CshapeU3Ek__BackingField_2;
	QuantizationParams_t3F1DEDB38C98A773B4CCF1E9B71F694503EEF157  ___U3CquantizationParamsU3Ek__BackingField_3;
};

// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter
struct Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A 
{
public:
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::playerLoopTiming
	int32_t ___playerLoopTiming_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_1;

public:
	inline static int32_t get_offset_of_playerLoopTiming_0() { return static_cast<int32_t>(offsetof(Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A, ___playerLoopTiming_0)); }
	inline int32_t get_playerLoopTiming_0() const { return ___playerLoopTiming_0; }
	inline int32_t* get_address_of_playerLoopTiming_0() { return &___playerLoopTiming_0; }
	inline void set_playerLoopTiming_0(int32_t value)
	{
		___playerLoopTiming_0 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_1() { return static_cast<int32_t>(offsetof(Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A, ___cancellationToken_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_1() const { return ___cancellationToken_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_1() { return &___cancellationToken_1; }
	inline void set_cancellationToken_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter
struct Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_marshaled_pinvoke
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke ___cancellationToken_1;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter
struct Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_marshaled_com
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com ___cancellationToken_1;
};

// TensorFlowLite.TextureResizer/ResizeOptions
struct ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239 
{
public:
	// System.Int32 TensorFlowLite.TextureResizer/ResizeOptions::width
	int32_t ___width_0;
	// System.Int32 TensorFlowLite.TextureResizer/ResizeOptions::height
	int32_t ___height_1;
	// System.Single TensorFlowLite.TextureResizer/ResizeOptions::rotationDegree
	float ___rotationDegree_2;
	// System.Boolean TensorFlowLite.TextureResizer/ResizeOptions::mirrorHorizontal
	bool ___mirrorHorizontal_3;
	// System.Boolean TensorFlowLite.TextureResizer/ResizeOptions::mirrorVertical
	bool ___mirrorVertical_4;
	// TensorFlowLite.AspectMode TensorFlowLite.TextureResizer/ResizeOptions::aspectMode
	int32_t ___aspectMode_5;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_rotationDegree_2() { return static_cast<int32_t>(offsetof(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239, ___rotationDegree_2)); }
	inline float get_rotationDegree_2() const { return ___rotationDegree_2; }
	inline float* get_address_of_rotationDegree_2() { return &___rotationDegree_2; }
	inline void set_rotationDegree_2(float value)
	{
		___rotationDegree_2 = value;
	}

	inline static int32_t get_offset_of_mirrorHorizontal_3() { return static_cast<int32_t>(offsetof(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239, ___mirrorHorizontal_3)); }
	inline bool get_mirrorHorizontal_3() const { return ___mirrorHorizontal_3; }
	inline bool* get_address_of_mirrorHorizontal_3() { return &___mirrorHorizontal_3; }
	inline void set_mirrorHorizontal_3(bool value)
	{
		___mirrorHorizontal_3 = value;
	}

	inline static int32_t get_offset_of_mirrorVertical_4() { return static_cast<int32_t>(offsetof(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239, ___mirrorVertical_4)); }
	inline bool get_mirrorVertical_4() const { return ___mirrorVertical_4; }
	inline bool* get_address_of_mirrorVertical_4() { return &___mirrorVertical_4; }
	inline void set_mirrorVertical_4(bool value)
	{
		___mirrorVertical_4 = value;
	}

	inline static int32_t get_offset_of_aspectMode_5() { return static_cast<int32_t>(offsetof(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239, ___aspectMode_5)); }
	inline int32_t get_aspectMode_5() const { return ___aspectMode_5; }
	inline int32_t* get_address_of_aspectMode_5() { return &___aspectMode_5; }
	inline void set_aspectMode_5(int32_t value)
	{
		___aspectMode_5 = value;
	}
};

// Native definition for P/Invoke marshalling of TensorFlowLite.TextureResizer/ResizeOptions
struct ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	float ___rotationDegree_2;
	int32_t ___mirrorHorizontal_3;
	int32_t ___mirrorVertical_4;
	int32_t ___aspectMode_5;
};
// Native definition for COM marshalling of TensorFlowLite.TextureResizer/ResizeOptions
struct ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	float ___rotationDegree_2;
	int32_t ___mirrorHorizontal_3;
	int32_t ___mirrorVertical_4;
	int32_t ___aspectMode_5;
};

// TensorFlowLite.WebCamUtil/PreferSpec
struct PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B 
{
public:
	// UnityEngine.WebCamKind TensorFlowLite.WebCamUtil/PreferSpec::kind
	int32_t ___kind_0;
	// System.Boolean TensorFlowLite.WebCamUtil/PreferSpec::isFrontFacing
	bool ___isFrontFacing_1;

public:
	inline static int32_t get_offset_of_kind_0() { return static_cast<int32_t>(offsetof(PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B, ___kind_0)); }
	inline int32_t get_kind_0() const { return ___kind_0; }
	inline int32_t* get_address_of_kind_0() { return &___kind_0; }
	inline void set_kind_0(int32_t value)
	{
		___kind_0 = value;
	}

	inline static int32_t get_offset_of_isFrontFacing_1() { return static_cast<int32_t>(offsetof(PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B, ___isFrontFacing_1)); }
	inline bool get_isFrontFacing_1() const { return ___isFrontFacing_1; }
	inline bool* get_address_of_isFrontFacing_1() { return &___isFrontFacing_1; }
	inline void set_isFrontFacing_1(bool value)
	{
		___isFrontFacing_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TensorFlowLite.WebCamUtil/PreferSpec
struct PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_pinvoke
{
	int32_t ___kind_0;
	int32_t ___isFrontFacing_1;
};
// Native definition for COM marshalling of TensorFlowLite.WebCamUtil/PreferSpec
struct PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_com
{
	int32_t ___kind_0;
	int32_t ___isFrontFacing_1;
};

// System.Func`2<System.Double,System.Double>
struct Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Single,System.Single>
struct Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.WebCamDevice,System.Int32>
struct Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15
struct U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 
{
public:
	// System.Int32 TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean> TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>t__builder
	AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  ___U3CU3Et__builder_1;
	// TensorFlowLite.TextureToTensor TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>4__this
	TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * ___U3CU3E4__this_2;
	// UnityEngine.RenderTexture TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::texture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture_3;
	// System.Single[0...,0...,0...] TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::inputs
	SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs_4;
	// Unity.Collections.NativeArray`1<UnityEngine.Color32> TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<pixels>5__2
	NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  ___U3CpixelsU3E5__2_5;
	// System.Int32 TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<width>5__3
	int32_t ___U3CwidthU3E5__3_6;
	// System.Int32 TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<height>5__4
	int32_t ___U3CheightU3E5__4_7;
	// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>u__1
	Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  ___U3CU3Eu__1_8;
	// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::<>u__2
	Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  ___U3CU3Eu__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CU3E4__this_2)); }
	inline TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___texture_3)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_texture_3() const { return ___texture_3; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_3), (void*)value);
	}

	inline static int32_t get_offset_of_inputs_4() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___inputs_4)); }
	inline SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* get_inputs_4() const { return ___inputs_4; }
	inline SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087** get_address_of_inputs_4() { return &___inputs_4; }
	inline void set_inputs_4(SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* value)
	{
		___inputs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpixelsU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CpixelsU3E5__2_5)); }
	inline NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  get_U3CpixelsU3E5__2_5() const { return ___U3CpixelsU3E5__2_5; }
	inline NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D * get_address_of_U3CpixelsU3E5__2_5() { return &___U3CpixelsU3E5__2_5; }
	inline void set_U3CpixelsU3E5__2_5(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  value)
	{
		___U3CpixelsU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CwidthU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CwidthU3E5__3_6)); }
	inline int32_t get_U3CwidthU3E5__3_6() const { return ___U3CwidthU3E5__3_6; }
	inline int32_t* get_address_of_U3CwidthU3E5__3_6() { return &___U3CwidthU3E5__3_6; }
	inline void set_U3CwidthU3E5__3_6(int32_t value)
	{
		___U3CwidthU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CheightU3E5__4_7)); }
	inline int32_t get_U3CheightU3E5__4_7() const { return ___U3CheightU3E5__4_7; }
	inline int32_t* get_address_of_U3CheightU3E5__4_7() { return &___U3CheightU3E5__4_7; }
	inline void set_U3CheightU3E5__4_7(int32_t value)
	{
		___U3CheightU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CU3Eu__1_8)); }
	inline Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_8))->___cancellationToken_1))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_9() { return static_cast<int32_t>(offsetof(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836, ___U3CU3Eu__2_9)); }
	inline Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  get_U3CU3Eu__2_9() const { return ___U3CU3Eu__2_9; }
	inline Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * get_address_of_U3CU3Eu__2_9() { return &___U3CU3Eu__2_9; }
	inline void set_U3CU3Eu__2_9(Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  value)
	{
		___U3CU3Eu__2_9 = value;
	}
};


// TensorFlowLite.WebCamUtil/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C  : public RuntimeObject
{
public:
	// TensorFlowLite.WebCamUtil/PreferSpec TensorFlowLite.WebCamUtil/<>c__DisplayClass1_0::spec
	PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B  ___spec_0;

public:
	inline static int32_t get_offset_of_spec_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C, ___spec_0)); }
	inline PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B  get_spec_0() const { return ___spec_0; }
	inline PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * get_address_of_spec_0() { return &___spec_0; }
	inline void set_spec_0(PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B  value)
	{
		___spec_0 = value;
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.LightProbeProxyVolume
struct LightProbeProxyVolume_t55DEBA762A0DB23C4497DE22E5595517A7176959  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TensorFlowLite.WebCamInput
struct WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String TensorFlowLite.WebCamInput::editorCameraName
	String_t* ___editorCameraName_4;
	// UnityEngine.WebCamKind TensorFlowLite.WebCamInput::preferKind
	int32_t ___preferKind_5;
	// System.Boolean TensorFlowLite.WebCamInput::isFrontFacing
	bool ___isFrontFacing_6;
	// System.Int32 TensorFlowLite.WebCamInput::requestFps
	int32_t ___requestFps_7;
	// TensorFlowLite.WebCamInput/TextureUpdateEvent TensorFlowLite.WebCamInput::OnTextureUpdate
	TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 * ___OnTextureUpdate_8;
	// TensorFlowLite.TextureResizer TensorFlowLite.WebCamInput::resizer
	TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * ___resizer_9;
	// UnityEngine.WebCamDevice[] TensorFlowLite.WebCamInput::devices
	WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* ___devices_11;
	// UnityEngine.UI.AspectRatioFitter TensorFlowLite.WebCamInput::fitter
	AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * ___fitter_12;
	// System.Int32 TensorFlowLite.WebCamInput::deviceIndex
	int32_t ___deviceIndex_13;

public:
	inline static int32_t get_offset_of_editorCameraName_4() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___editorCameraName_4)); }
	inline String_t* get_editorCameraName_4() const { return ___editorCameraName_4; }
	inline String_t** get_address_of_editorCameraName_4() { return &___editorCameraName_4; }
	inline void set_editorCameraName_4(String_t* value)
	{
		___editorCameraName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorCameraName_4), (void*)value);
	}

	inline static int32_t get_offset_of_preferKind_5() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___preferKind_5)); }
	inline int32_t get_preferKind_5() const { return ___preferKind_5; }
	inline int32_t* get_address_of_preferKind_5() { return &___preferKind_5; }
	inline void set_preferKind_5(int32_t value)
	{
		___preferKind_5 = value;
	}

	inline static int32_t get_offset_of_isFrontFacing_6() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___isFrontFacing_6)); }
	inline bool get_isFrontFacing_6() const { return ___isFrontFacing_6; }
	inline bool* get_address_of_isFrontFacing_6() { return &___isFrontFacing_6; }
	inline void set_isFrontFacing_6(bool value)
	{
		___isFrontFacing_6 = value;
	}

	inline static int32_t get_offset_of_requestFps_7() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___requestFps_7)); }
	inline int32_t get_requestFps_7() const { return ___requestFps_7; }
	inline int32_t* get_address_of_requestFps_7() { return &___requestFps_7; }
	inline void set_requestFps_7(int32_t value)
	{
		___requestFps_7 = value;
	}

	inline static int32_t get_offset_of_OnTextureUpdate_8() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___OnTextureUpdate_8)); }
	inline TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 * get_OnTextureUpdate_8() const { return ___OnTextureUpdate_8; }
	inline TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 ** get_address_of_OnTextureUpdate_8() { return &___OnTextureUpdate_8; }
	inline void set_OnTextureUpdate_8(TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 * value)
	{
		___OnTextureUpdate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextureUpdate_8), (void*)value);
	}

	inline static int32_t get_offset_of_resizer_9() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___resizer_9)); }
	inline TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * get_resizer_9() const { return ___resizer_9; }
	inline TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 ** get_address_of_resizer_9() { return &___resizer_9; }
	inline void set_resizer_9(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * value)
	{
		___resizer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resizer_9), (void*)value);
	}

	inline static int32_t get_offset_of_devices_11() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___devices_11)); }
	inline WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* get_devices_11() const { return ___devices_11; }
	inline WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E** get_address_of_devices_11() { return &___devices_11; }
	inline void set_devices_11(WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* value)
	{
		___devices_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___devices_11), (void*)value);
	}

	inline static int32_t get_offset_of_fitter_12() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___fitter_12)); }
	inline AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * get_fitter_12() const { return ___fitter_12; }
	inline AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 ** get_address_of_fitter_12() { return &___fitter_12; }
	inline void set_fitter_12(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * value)
	{
		___fitter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fitter_12), (void*)value);
	}

	inline static int32_t get_offset_of_deviceIndex_13() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF, ___deviceIndex_13)); }
	inline int32_t get_deviceIndex_13() const { return ___deviceIndex_13; }
	inline int32_t* get_address_of_deviceIndex_13() { return &___deviceIndex_13; }
	inline void set_deviceIndex_13(int32_t value)
	{
		___deviceIndex_13 = value;
	}
};

struct WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields
{
public:
	// UnityEngine.WebCamTexture TensorFlowLite.WebCamInput::webCamTexture
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___webCamTexture_10;

public:
	inline static int32_t get_offset_of_webCamTexture_10() { return static_cast<int32_t>(offsetof(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields, ___webCamTexture_10)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_webCamTexture_10() const { return ___webCamTexture_10; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_webCamTexture_10() { return &___webCamTexture_10; }
	inline void set_webCamTexture_10(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___webCamTexture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webCamTexture_10), (void*)value);
	}
};


// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.AspectRatioFitter/AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode_4;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio_5;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_6;
	// System.Boolean UnityEngine.UI.AspectRatioFitter::m_DelayedSetDirty
	bool ___m_DelayedSetDirty_7;
	// System.Boolean UnityEngine.UI.AspectRatioFitter::m_DoesParentExist
	bool ___m_DoesParentExist_8;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_9;

public:
	inline static int32_t get_offset_of_m_AspectMode_4() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_AspectMode_4)); }
	inline int32_t get_m_AspectMode_4() const { return ___m_AspectMode_4; }
	inline int32_t* get_address_of_m_AspectMode_4() { return &___m_AspectMode_4; }
	inline void set_m_AspectMode_4(int32_t value)
	{
		___m_AspectMode_4 = value;
	}

	inline static int32_t get_offset_of_m_AspectRatio_5() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_AspectRatio_5)); }
	inline float get_m_AspectRatio_5() const { return ___m_AspectRatio_5; }
	inline float* get_address_of_m_AspectRatio_5() { return &___m_AspectRatio_5; }
	inline void set_m_AspectRatio_5(float value)
	{
		___m_AspectRatio_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_Rect_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedSetDirty_7() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_DelayedSetDirty_7)); }
	inline bool get_m_DelayedSetDirty_7() const { return ___m_DelayedSetDirty_7; }
	inline bool* get_address_of_m_DelayedSetDirty_7() { return &___m_DelayedSetDirty_7; }
	inline void set_m_DelayedSetDirty_7(bool value)
	{
		___m_DelayedSetDirty_7 = value;
	}

	inline static int32_t get_offset_of_m_DoesParentExist_8() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_DoesParentExist_8)); }
	inline bool get_m_DoesParentExist_8() const { return ___m_DoesParentExist_8; }
	inline bool* get_address_of_m_DoesParentExist_8() { return &___m_DoesParentExist_8; }
	inline void set_m_DoesParentExist_8(bool value)
	{
		___m_DoesParentExist_8 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_9() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_Tracker_9)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_9() const { return ___m_Tracker_9; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_9() { return &___m_Tracker_9; }
	inline void set_m_Tracker_9(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  m_Items[1];

public:
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[0...,0...,0...]
struct SByteU5BU2CU2CU5D_t9B3C3F9A876AC242D4BD465135089223F3DB4ACA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
	inline int8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, int8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, int8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// System.Single[0...,0...,0...]
struct SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  m_Items[1];

public:
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};


// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_gshared (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Single,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539_gshared (RuntimeObject* ___source0, Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * ___selector1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55_gshared (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Double,System.Double>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D_gshared (RuntimeObject* ___source0, Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * ___selector1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m83108B6D8808A0E83DE12FD220A87000D19AEE00_gshared (String_t* ___path0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<UnityEngine.Color32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_gshared (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<!0> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_gshared_inline (const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTask`1<!0> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m8C81925EFA00A24807B72178004B3A1CDAF97EEF_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.WebCamDevice,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE0DBB61EE2F07C43EE90FFE59DA18800291598EC_gshared (Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<UnityEngine.WebCamDevice,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderByDescending_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F20CCA32326376F782EE49B698CA5AE8B422AF3_gshared (RuntimeObject* ___source0, Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 * ___keySelector1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<UnityEngine.WebCamDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * ___awaiter0, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * ___awaiter0, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m55F67D834141C2905E9688540EB3585651E08C1F_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetStateMachine_m8F6F47B343AF0B1C5DA24AA9AA23026954A77AC4_gshared (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);

// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mD7DD9759C791823116719CAE8EE693E9C173E241_inline (float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Dispose_m2B87F7A44073E119999E0684414768E0F6B810D3 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Boolean TensorFlowLite.FileUtil::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileUtil_IsPathRooted_m567CB104152C317F689C8B096058C4DB20BF5477 (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.IO.Path::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_IsPathRooted_m7AE5EE2D8E5FA9F9D6FD0AA840C532D1F6CD4EA3 (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 TensorFlowLite.Interpreter::GetInputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetInputTensorCount_m92ABB6CAD4F368066E5ECC80C60D5DA27A69E303 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, const RuntimeMethod* method);
// System.Int32 TensorFlowLite.Interpreter::GetOutputTensorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_GetOutputTensorCount_m96463F4D302EA3D4B5C9563A968801B49BD1B7B8 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetInputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F  Interpreter_GetInputTensorInfo_m057FCA64EF9DCF993358A9B508136FDE0BFB780A (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2 (StringBuilder_t * __this, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/TensorInfo TensorFlowLite.Interpreter::GetOutputTensorInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F  Interpreter_GetOutputTensorInfo_mA1040095C912D1220F50B8BF9F1808E222C20ECF (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC008B3E5D21E9B077F851A4FB021154C8F089D9A (U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * __this, const RuntimeMethod* method);
// System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Single,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539 (RuntimeObject* ___source0, Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *, const RuntimeMethod*))Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539_gshared)(___source0, ___selector1, method);
}
// System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Sum_mDD75BD20F3C911C6B98B55E45061EE95A569E4B7 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB0F25F5230830A292796C4EFC24FB2F23B4EE5B1 (U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * __this, const RuntimeMethod* method);
// System.Double System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Enumerable_Max_m5CB606766B8C96C899E37CBD4B22EE984926F9B7 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55 (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Double,System.Double>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D (RuntimeObject* ___source0, Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *, const RuntimeMethod*))Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D_gshared)(___source0, ___selector1, method);
}
// System.Double System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Enumerable_Sum_m279F93FEBF5A84DAD2DF71CF624D249B5F2AC90F (RuntimeObject* ___source0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_magnitude_mAEC3DB52FD5DEFB39CA058BAF64A0C487B9CDD10 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.MaterialPropertyBlock::GetColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MaterialPropertyBlock_GetColor_m67F9B2721AF014398AA7AFD079CC435FA749611E (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_mF3C09C80572DB6D21B813EAEB04AA3A49A0DC496 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh TensorFlowLite.PrimitiveDraw::CreateMesh(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * PrimitiveDraw_CreateMesh_mB205E3B95AE06FFD4BA4B66F37D071EB4EFDD07E (int32_t ___type0, const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::.ctor(UnityEngine.Mesh,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer__ctor_m9818D17B5A9D2AD635B7479E797C956852151371 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, int32_t ___initialSize1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_set_color_m21BF063563BEFF2FAFF5C16C8B361861B4DB78D8 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Dispose_m05F153E7179C780FCF62B9A3641C9DFD5738C708 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Clear_m5B39C7A2E8101CB5070934FFABF2FD142DC63204 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw::Draw(TensorFlowLite.PrimitiveDraw/MeshBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Draw_mAEB750F77F045AC59CEF84B53E4379A17032DB37 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * ___mb0, bool ___drawEditor1, const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Clear_mB0824283D986C52737A7BD178326D1D9BB57225C (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, const RuntimeMethod* method);
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine2DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine2DMatrix_m25391CA35A594FA7E3EDEDE202E0ED48374DC2D4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, float ___thickness2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___mtx3, const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Add(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___mtx0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine3DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine3DMatrix_m41987B68E281D645266516B2F580C9A39EFFEDA2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, float ___thickness2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___mtx3, const RuntimeMethod* method);
// System.Void TensorFlowLite.PrimitiveDraw::Line(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Line_m86AF9DF0AF495A876C822E74809F5422B23F4DFA (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, float ___thickness2, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32,UnityEngine.Camera,UnityEngine.Rendering.LightProbeUsage,UnityEngine.LightProbeProxyVolume)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_m295AC421844D2DFE1AE015AE89C6B7E069779C2B (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, int32_t ___submeshIndex1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___matrices3, int32_t ___count4, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties5, int32_t ___castShadows6, bool ___receiveShadows7, int32_t ___layer8, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera9, int32_t ___lightProbeUsage10, LightProbeProxyVolume_t55DEBA762A0DB23C4497DE22E5595517A7176959 * ___lightProbeProxyVolume11, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD9D37C7B21C1D9A88E4CC02D7E91D544E0F69A84 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Rect_MinMaxRect_m325BFFAD552459323794D59AA9B48B0A7F79ADC6 (float ___xmin0, float ___ymin1, float ___xmax2, float ___ymax3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Material TensorFlowLite.TextureResizer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * TextureResizer_get_material_m0B18F5F1E3C7D80EA992AF843FC64763F708415D (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Material_GetVector_m0F76C999BC936C571A3C20054D266DF122A85E88 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Material::GetMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Material_GetMatrix_m7FB09833D8392AF85F65631EC19A438B66739690 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m7266FA4400474D08A30181EE08E01760CCAEBA0A (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method);
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m511F71982A2C954FA7EE96677B4EDE1CB2D5AD73 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___tex0, const RuntimeMethod* method);
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m7E4DDDABAD6479DD7CFD027B35D310FF4BF7EC56 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::GetVertTransform(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  TextureResizer_GetVertTransform_mE13D33CB6EA4D0F19499C928708D0DEC4E80DD18 (float ___rotation0, bool ___mirrorHorizontal1, bool ___mirrorVertical2, const RuntimeMethod* method);
// System.Void TensorFlowLite.TextureResizer::set_VertexTransfrom(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_VertexTransfrom_m1F627C43C7FB2EA2A7F209497C589A258BB2E874 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(UnityEngine.Texture,TensorFlowLite.TextureResizer/ResizeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TextureResizer_GetTextureST_m5E67F00FC0F600C3E0993C051B1FD87C179495F1 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___sourceTex0, ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  ___options1, const RuntimeMethod* method);
// System.Void TensorFlowLite.TextureResizer::set_UVRect(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_UVRect_m21D8D230A9359CC20757EAB97FDC05BA45FC193A (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, const RuntimeMethod* method);
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::ApplyResize(UnityEngine.Texture,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureResizer_ApplyResize_m9253638EBFF235292C03083B41568D752FDC315E (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, int32_t ___width1, int32_t ___height2, bool ___fillBackground3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, int32_t ___pass3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(System.Single,System.Single,TensorFlowLite.AspectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TextureResizer_GetTextureST_mAE670BDA6C1CEA54BD9887FCA1528CB668BB85DE (float ___srcAspect0, float ___dstAspect1, int32_t ___mode2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.ComputeShader>(System.String)
inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * Resources_Load_TisComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30_m546D5961FB95F55CAE76CC5A5FDBC99B2F52D487 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m83108B6D8808A0E83DE12FD220A87000D19AEE00_gshared)(___path0, method);
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m2AA952BFC4A3E9985F8219CCB91C92FC24A46A66 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m6DE16785227587B3C6A3BD24344BB50D9A8BC144 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___buf0, const RuntimeMethod* method);
// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::FetchToTexture2D(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureToTensor_FetchToTexture2D_mAF2ED8016CA5102E2C3A19512788852BED5E14AD (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<UnityEngine.Color32>()
inline NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  (*) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_gshared)(__this, method);
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorCPU(UnityEngine.RenderTexture,System.Single[0...,0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorCPU_m101D725961C051A2DE99A88C64EA9AF9E052CAB7 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs1, const RuntimeMethod* method);
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture,System.Single[0...,0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_m32A9B479AA73F6B3A32A6EC4910CA8DB43456E7F (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs1, const RuntimeMethod* method);
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_m178124C81BB48478CFF16E405CF1AAE934545CB9 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<!0> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_gshared_inline)(method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(!!0&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask`1<!0> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
inline UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  (*) (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.ComputeBuffer::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m93FD58E4F51DDBC9B520A4A9E28B1A04F63C4827 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_m66E68E9066197B06CF35FDDAFAFDC8C1DECC5436 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, int32_t ___count0, int32_t ___stride1, const RuntimeMethod* method);
// System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0 (ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeShader::SetTexture(System.Int32,System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetTexture_m0A0BD4678CB81A7F6839FC3AF8DFCC7C65C26C31 (ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * __this, int32_t ___kernelIndex0, int32_t ___nameID1, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture2, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeShader::SetBuffer(System.Int32,System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetBuffer_m134F25C2DAD8D04F0A6EBBDECB56E8A17E461A3D (ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * __this, int32_t ___kernelIndex0, int32_t ___nameID1, ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___buffer2, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeShader::SetInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_SetInt_m9F7AD21218D95D0A4F88CBB19CBBCA14845E163A (ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * __this, int32_t ___nameID0, int32_t ___val1, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeShader::Dispatch(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_Dispatch_mCC2F94FF5EB215C5CC4824741C2CB8D94423CBA4 (ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * __this, int32_t ___kernelIndex0, int32_t ___threadGroupsX1, int32_t ___threadGroupsY2, int32_t ___threadGroupsZ3, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::GetData(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_GetData_m5BF3A9444662844211B0385EA273BC7FA7AEAD57 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, RuntimeArray * ___data0, const RuntimeMethod* method);
// System.Boolean TensorFlowLite.TextureToTensor::IsSameSize(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureToTensor_IsSameSize_mFEF93061D21F460981F1934577A5A2FA98480BB7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___a0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void TensorFlowLite.TextureResizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer__ctor_m6721BA5062E7500D5262399E220ECEAF4CA1A054 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.String TensorFlowLite.WebCamUtil::FindName(UnityEngine.WebCamKind,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamUtil_FindName_m60A077352689F14A0D8D4BA7952447DE25913E46 (int32_t ___kind0, bool ___isFrontFacing1, const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4 (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void TensorFlowLite.WebCamInput::StartCamera(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_StartCamera_m7E0B2CB2A9D4A68CA44B4238CEBDE2020BDAAD65 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  ___device0, const RuntimeMethod* method);
// System.Void TensorFlowLite.WebCamInput::StopCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_StopCamera_m42717B91C108A06D2015D514DC45AAB6BC0EDD3C (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, const RuntimeMethod* method);
// System.Void TensorFlowLite.TextureResizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_Dispose_mA290FC8051124CE3BB5F16C5B8DCD1D12596E286 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_didUpdateThisFrame_mED5BE2074F4E127B1A37DD577F7CAF1235E581CE (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.RenderTexture TensorFlowLite.WebCamInput::NormalizeWebcam(UnityEngine.WebCamTexture,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * WebCamInput_NormalizeWebcam_m4895B5D2B58B6549F0060AE2495EF9FAC7C4FA37 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___texture0, int32_t ___width1, int32_t ___height2, bool ___isFrontFacing3, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Texture>::Invoke(!0)
inline void UnityEvent_1_Invoke_m5B2E9FDA26F8678E0532EEF7E34ED319BBB4A75A (UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7 *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, const RuntimeMethod*))UnityEvent_1_Invoke_m8C81925EFA00A24807B72178004B3A1CDAF97EEF_gshared)(__this, ___arg00, method);
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_m43547AAF7B0729DB1962456A3EFF161B5E273E15 (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m8369712442E77D9130CD2F76A3FA4846F74F16CB (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, String_t* ___deviceName0, int32_t ___requestedWidth1, int32_t ___requestedHeight2, int32_t ___requestedFPS3, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m55FF77D033EF17D83A6B717418EBA39F174B5708 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Boolean TensorFlowLite.WebCamInput::IsPortrait(UnityEngine.WebCamTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamInput_IsPortrait_m4C887381CEFBA19F31F04E86194A769FA51EBE76 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___texture0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.AspectRatioFitter::set_aspectRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectRatioFitter_set_aspectRatio_mA12F8575EB30A7B2E734F188169FA7F91192BB67 (AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m9B0EEDBECFA382495009929499D89B29F55D9714 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_videoVerticallyMirrored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_videoVerticallyMirrored_m8ADBDC6A53EE4F84C6EEEE61B1B1A1E696C2B83D (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::Resize(UnityEngine.Texture,System.Int32,System.Int32,System.Boolean,UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureResizer_Resize_mA28F7C774F4F4437234A51906E49E9AFABDA274E (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, int32_t ___width1, int32_t ___height2, bool ___fillBackground3, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform4, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uvRect5, const RuntimeMethod* method);
// System.Void TensorFlowLite.WebCamInput/TextureUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUpdateEvent__ctor_m82C498637227A548FBBEC520ABC7265742FE7085 (TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void TensorFlowLite.WebCamUtil/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9550372A3DDFD90E3D7CC0C8BD9B25B135253D08 (U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_m86CE0D4224E9F3E4DC8DFF848C5E559F4B3E622E (const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.WebCamDevice,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE0DBB61EE2F07C43EE90FFE59DA18800291598EC (Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE0DBB61EE2F07C43EE90FFE59DA18800291598EC_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<UnityEngine.WebCamDevice,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderByDescending_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F20CCA32326376F782EE49B698CA5AE8B422AF3 (RuntimeObject* ___source0, Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 *, const RuntimeMethod*))Enumerable_OrderByDescending_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F20CCA32326376F782EE49B698CA5AE8B422AF3_gshared)(___source0, ___keySelector1, method);
}
// !!0 System.Linq.Enumerable::First<UnityEngine.WebCamDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B_gshared)(___source0, method);
}
// System.Void TensorFlowLite.WebCamUtil/PreferSpec::.ctor(UnityEngine.WebCamKind,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreferSpec__ctor_mF3A62067091086890C9F1CF7FEF24CC16A87E4DA (PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * __this, int32_t ___kind0, bool ___isFrontFacing1, const RuntimeMethod* method);
// System.String TensorFlowLite.WebCamUtil::FindName(TensorFlowLite.WebCamUtil/PreferSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamUtil_FindName_mAA754FD0B2643CCD6857359BE566C0C9F0C54AED (PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B  ___spec0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable Cysharp.Threading.Tasks.UniTask::SwitchToMainThread(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D  UniTask_SwitchToMainThread_mC8680FF4361781703C77714338255C92299E3D9E (int32_t ___timing0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  SwitchToMainThreadAwaitable_GetAwaiter_mFC830FB5C808F89C8729593C722FA6F487B4DB08 (SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m138B6E5A6B3430455D4B55C05BE3532162F30FE6 (Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * ___awaiter0, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *, Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A *, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m861EC6CC0A77F9B948CC7CD2D828F1528CE00C06 (Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * __this, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable Cysharp.Threading.Tasks.UniTask::SwitchToThreadPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToThreadPoolAwaitable_t4D34FB36C1586BB62ABB20946858B444B090E88B  UniTask_SwitchToThreadPool_mC2F9617F11B19ACCCBA6C3F1C32ED8F6C5D413EF (const RuntimeMethod* method);
// Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  SwitchToThreadPoolAwaitable_GetAwaiter_mD3769DD4F4A7834209AC241A4517F166A0154BAA (SwitchToThreadPoolAwaitable_t4D34FB36C1586BB62ABB20946858B444B090E88B * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m4C89AF3FDE04C7014541CD672C937F2701CAA518 (Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter,TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * ___awaiter0, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *, Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 *, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_mD4B616BBDC48A489653562EF032240564C51E11B (Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m55F67D834141C2905E9688540EB3585651E08C1F_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *, Exception_t *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m55F67D834141C2905E9688540EB3585651E08C1F_gshared_inline)(__this, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *, bool, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_gshared_inline)(__this, ___result0, method);
}
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_MoveNext_mA4792F4798AA8CB1B3EC8B542252FCA43F39B605 (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_m8F6F47B343AF0B1C5DA24AA9AA23026954A77AC4 (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_m8F6F47B343AF0B1C5DA24AA9AA23026954A77AC4_gshared)(__this, ___stateMachine0, method);
}
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_SetStateMachine_m17D1638513F8C6F57F6B856795DEF8ECB07D911B (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Texture>::.ctor()
inline void UnityEvent_1__ctor_m05DC188D92C9F6FD42CE7905370B22DE551A1E63 (UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC2A74E53238556231212D21E2FE82F58475CA5B7 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Int32 TensorFlowLite.WebCamUtil/PreferSpec::GetScore(UnityEngine.WebCamDevice&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PreferSpec_GetScore_m40DC4E1DC64F9664D81395A25647DEC82B8C1A3A (PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * __this, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * ___device0, const RuntimeMethod* method);
// UnityEngine.WebCamKind UnityEngine.WebCamDevice::get_kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamDevice_get_kind_mE58F245325F8DA6D84489AEA85E7531E8BAC5940 (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m202EF0ACB959052325D53B60788DA8857164333D (Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m903460CE6ADA43DFCA719E696004C01151DF50EC (Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Mathematics.float4 TensorFlowLite.Color32Extension::ToARGB(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  Color32Extension_ToARGB_mCD56A619C55F0E215131690293BC209E68B54E71 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method)
{
	{
		// return new float4(
		//     unchecked((sbyte)c.a) / 255f,
		//     unchecked((sbyte)c.r) / 255f,
		//     unchecked((sbyte)c.g) / 255f,
		//     unchecked((sbyte)c.b) / 255f
		// );
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_0 = ___c0;
		uint8_t L_1 = L_0.get_a_4();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2 = ___c0;
		uint8_t L_3 = L_2.get_r_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_4 = ___c0;
		uint8_t L_5 = L_4.get_g_2();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_6 = ___c0;
		uint8_t L_7 = L_6.get_b_3();
		float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  L_8;
		memset((&L_8), 0, sizeof(L_8));
		float4__ctor_mD7DD9759C791823116719CAE8EE693E9C173E241_inline((&L_8), ((float)((float)((float)((float)((int8_t)((int8_t)L_1))))/(float)(255.0f))), ((float)((float)((float)((float)((int8_t)((int8_t)L_3))))/(float)(255.0f))), ((float)((float)((float)((float)((int8_t)((int8_t)L_5))))/(float)(255.0f))), ((float)((float)((float)((float)((int8_t)((int8_t)L_7))))/(float)(255.0f))), /*hidden argument*/NULL);
		return L_8;
	}
}
// Unity.Mathematics.float4 TensorFlowLite.Color32Extension::ToRGBA(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  Color32Extension_ToRGBA_m724A8AC0995F18E3B762ED2CD1B4DD2D3D0F215C (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method)
{
	{
		// return new float4(
		//     (float)unchecked((sbyte)c.r) / 255f,
		//     (float)unchecked((sbyte)c.g) / 255f,
		//     (float)unchecked((sbyte)c.b) / 255f,
		//     (float)unchecked((sbyte)c.a) / 255f
		// );
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_0 = ___c0;
		uint8_t L_1 = L_0.get_r_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2 = ___c0;
		uint8_t L_3 = L_2.get_g_2();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_4 = ___c0;
		uint8_t L_5 = L_4.get_b_3();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_6 = ___c0;
		uint8_t L_7 = L_6.get_a_4();
		float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  L_8;
		memset((&L_8), 0, sizeof(L_8));
		float4__ctor_mD7DD9759C791823116719CAE8EE693E9C173E241_inline((&L_8), ((float)((float)((float)((float)((int8_t)((int8_t)L_1))))/(float)(255.0f))), ((float)((float)((float)((float)((int8_t)((int8_t)L_3))))/(float)(255.0f))), ((float)((float)((float)((float)((int8_t)((int8_t)L_5))))/(float)(255.0f))), ((float)((float)((float)((float)((int8_t)((int8_t)L_7))))/(float)(255.0f))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color32 TensorFlowLite.Color32Extension::FromHex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32Extension_FromHex_m092ECA1EAFC07392AD35661A739F47DC7E5BB736 (uint32_t ___c0, const RuntimeMethod* method)
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Color32()
		// {
		//     a = unchecked((byte)(sbyte)((c & 0xFF000000) >> 24)),
		//     r = unchecked((byte)(sbyte)((c) & 0x00FF0000 >> 16)),
		//     g = unchecked((byte)(sbyte)((c & 0x0000FF00) >> 8)),
		//     b = unchecked((byte)(sbyte)((c & 0x000000FF))),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ));
		uint32_t L_0 = ___c0;
		(&V_0)->set_a_4((uint8_t)((int32_t)((uint8_t)((int8_t)((int8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-16777216)))>>((int32_t)24))))))));
		uint32_t L_1 = ___c0;
		(&V_0)->set_r_1((uint8_t)((int32_t)((uint8_t)((int8_t)((int8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255))))))));
		uint32_t L_2 = ___c0;
		(&V_0)->set_g_2((uint8_t)((int32_t)((uint8_t)((int8_t)((int8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)65280)))>>8)))))));
		uint32_t L_3 = ___c0;
		(&V_0)->set_b_3((uint8_t)((int32_t)((uint8_t)((int8_t)((int8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)255))))))));
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m511F71982A2C954FA7EE96677B4EDE1CB2D5AD73 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___tex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tex != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___tex0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// tex.Release();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___tex0;
		NullCheck(L_2);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_2, /*hidden argument*/NULL);
		// Object.Destroy(tex);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___tex0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m2AA952BFC4A3E9985F8219CCB91C92FC24A46A66 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tex != null)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Object.Destroy(tex);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___tex0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m7E4DDDABAD6479DD7CFD027B35D310FF4BF7EC56 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mat != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___mat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Object.Destroy(mat);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = ___mat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.DisposeUtil::TryDispose(UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeUtil_TryDispose_m6DE16785227587B3C6A3BD24344BB50D9A8BC144 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___buf0, const RuntimeMethod* method)
{
	{
		// if (buf != null)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_0 = ___buf0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// buf.Dispose();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_1 = ___buf0;
		NullCheck(L_1);
		ComputeBuffer_Dispose_m2B87F7A44073E119999E0684414768E0F6B810D3(L_1, /*hidden argument*/NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.FilePopupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePopupAttribute__ctor_mAAA683B6E3209F696A0BDE1388B0247EDC13C8D0 (FilePopupAttribute_t7EBC1A05BE35CACC18DAED8B9BDEE79E5FB5FFE7 * __this, String_t* ___searchPattern0, const RuntimeMethod* method)
{
	{
		// public FilePopupAttribute(string searchPattern)
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// this.regex = searchPattern;
		String_t* L_0 = ___searchPattern0;
		__this->set_regex_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] TensorFlowLite.FileUtil::LoadFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* FileUtil_LoadFile_mBFBD7514C7C08FB06B6C1479EE9536B709CDF26C (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!IsPathRooted(path))
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = FileUtil_IsPathRooted_m567CB104152C317F689C8B096058C4DB20BF5477(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// path = Path.Combine(Application.streamingAssetsPath, path);
		String_t* L_2;
		L_2 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_3 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_2, L_3, /*hidden argument*/NULL);
		___path0 = L_4;
	}

IL_0015:
	{
		// if (Application.platform != RuntimePlatform.Android)
		int32_t L_5;
		L_5 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)11))))
		{
			goto IL_002b;
		}
	}
	{
		// path = "file://" + path;
		String_t* L_6 = ___path0;
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_6, /*hidden argument*/NULL);
		___path0 = L_7;
	}

IL_002b:
	{
		// using (var request = UnityWebRequest.Get(path))
		String_t* L_8 = ___path0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9;
		L_9 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0032:
	try
	{// begin try (depth: 1)
		{
			// request.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = V_0;
			NullCheck(L_10);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_11;
			L_11 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_10, /*hidden argument*/NULL);
		}

IL_0039:
		{
			// while (!request.isDone)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = V_0;
			NullCheck(L_12);
			bool L_13;
			L_13 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0039;
			}
		}

IL_0041:
		{
			// return request.downloadHandler.data;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = V_0;
			NullCheck(L_14);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_15;
			L_15 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
			L_16 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_15, /*hidden argument*/NULL);
			V_1 = L_16;
			IL2CPP_LEAVE(0x59, FINALLY_004f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{// begin finally (depth: 1)
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = V_0;
			if (!L_17)
			{
				goto IL_0058;
			}
		}

IL_0052:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(79)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_1;
		return L_19;
	}
}
// System.Boolean TensorFlowLite.FileUtil::IsPathRooted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileUtil_IsPathRooted_m567CB104152C317F689C8B096058C4DB20BF5477 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFCDE62CA56D5436F953EEC7C371F60AEF6AFC4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (path.StartsWith("jar:file:"))
		String_t* L_0 = ___path0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteralEFCDE62CA56D5436F953EEC7C371F60AEF6AFC4A, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// return Path.IsPathRooted(path);
		String_t* L_2 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Path_IsPathRooted_m7AE5EE2D8E5FA9F9D6FD0AA840C532D1F6CD4EA3(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.InterpreterExtension::LogIOInfo(TensorFlowLite.Interpreter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExtension_LogIOInfo_m81CCEC0E78090E4DF1F27AA193F3B14C46840822 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * ___interpreter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB249F16D93A7079142DF003DE7DE26B18AFFB480);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A4E8096BFAAAF4264E3B6B27A30C2D653DDDC6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int inputCount = interpreter.GetInputTensorCount();
		Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * L_0 = ___interpreter0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Interpreter_GetInputTensorCount_m92ABB6CAD4F368066E5ECC80C60D5DA27A69E303(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int outputCount = interpreter.GetOutputTensorCount();
		Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * L_2 = ___interpreter0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Interpreter_GetOutputTensorCount_m96463F4D302EA3D4B5C9563A968801B49BD1B7B8(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var sb = new StringBuilder();
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		// for (int i = 0; i < inputCount; i++)
		V_3 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		// sb.AppendFormat("intput {0}: {1}", i, interpreter.GetInputTensorInfo(i));
		StringBuilder_t * L_5 = V_2;
		int32_t L_6 = V_3;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * L_9 = ___interpreter0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F  L_11;
		L_11 = Interpreter_GetInputTensorInfo_m057FCA64EF9DCF993358A9B508136FDE0BFB780A(L_9, L_10, /*hidden argument*/NULL);
		TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F  L_12 = L_11;
		RuntimeObject * L_13 = Box(TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_5);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_5, _stringLiteralB5A4E8096BFAAAF4264E3B6B27A30C2D653DDDC6, L_8, L_13, /*hidden argument*/NULL);
		// sb.AppendLine();
		StringBuilder_t * L_15 = V_2;
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_15, /*hidden argument*/NULL);
		// for (int i = 0; i < inputCount; i++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < inputCount; i++)
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0018;
		}
	}
	{
		// for (int i = 0; i < outputCount; i++)
		V_4 = 0;
		goto IL_0077;
	}

IL_004a:
	{
		// sb.AppendFormat("output {0}: {1}", i, interpreter.GetOutputTensorInfo(i));
		StringBuilder_t * L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * L_24 = ___interpreter0;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F  L_26;
		L_26 = Interpreter_GetOutputTensorInfo_mA1040095C912D1220F50B8BF9F1808E222C20ECF(L_24, L_25, /*hidden argument*/NULL);
		TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F  L_27 = L_26;
		RuntimeObject * L_28 = Box(TensorInfo_t30723D80EF8E5DED21F55BC39A8B267A46AC7A1F_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_20);
		StringBuilder_t * L_29;
		L_29 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_20, _stringLiteralB249F16D93A7079142DF003DE7DE26B18AFFB480, L_23, L_28, /*hidden argument*/NULL);
		// sb.AppendLine();
		StringBuilder_t * L_30 = V_2;
		NullCheck(L_30);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_30, /*hidden argument*/NULL);
		// for (int i = 0; i < outputCount; i++)
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0077:
	{
		// for (int i = 0; i < outputCount; i++)
		int32_t L_33 = V_4;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_004a;
		}
	}
	{
		// UnityEngine.Debug.Log(sb.ToString());
		StringBuilder_t * L_35 = V_2;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TensorFlowLite.MathTF::Sigmoid(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathTF_Sigmoid_m99287BBA7088631B1418EB1404765F27EF4972CB (float ___x0, const RuntimeMethod* method)
{
	{
		// return (1.0f / (1.0f + Mathf.Exp(-x)));
		float L_0 = ___x0;
		float L_1;
		L_1 = expf(((-L_0)));
		return ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_1))));
	}
}
// UnityEngine.Vector3 TensorFlowLite.MathTF::Lerp(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MathTF_Lerp_mAFF6811BD7ABFBA8FC8D27C389EF60A57BD137E7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___b1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___t2, bool ___invertY3, const RuntimeMethod* method)
{
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B1_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	float G_B3_3 = 0.0f;
	{
		// return new Vector3(
		//     Mathf.Lerp(a.x, b.x, t.x),
		//     Mathf.Lerp(a.y, b.y, invertY ? 1f - t.y : t.y),
		//     Mathf.Lerp(a.z, b.z, t.z)
		// );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___a0;
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = ___b1;
		float L_3 = L_2->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = ___t2;
		float L_5 = L_4->get_x_2();
		float L_6;
		L_6 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_1, L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = ___a0;
		float L_8 = L_7->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = ___b1;
		float L_10 = L_9->get_y_3();
		bool L_11 = ___invertY3;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = L_6;
		if (L_11)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = L_6;
			goto IL_002e;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = ___t2;
		float L_13 = L_12->get_y_3();
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003a;
	}

IL_002e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = ___t2;
		float L_15 = L_14->get_y_3();
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_15));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003a:
	{
		float L_16;
		L_16 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = ___a0;
		float L_18 = L_17->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = ___b1;
		float L_20 = L_19->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = ___t2;
		float L_22 = L_21->get_z_4();
		float L_23;
		L_23 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_18, L_20, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), G_B3_3, L_16, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Rect TensorFlowLite.MathTF::Lerp(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Rect&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MathTF_Lerp_mFB409AB2F4E6A22DFEEB7371648AD965DFFAEA3C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___b1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___t2, bool ___invertY3, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	float G_B1_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	float G_B3_3 = 0.0f;
	{
		// return new Rect(
		//     Mathf.Lerp(a.x, b.x, t.x),
		//     Mathf.Lerp(a.y, b.y, invertY ? 1f - t.y - t.height : t.y),
		//     t.width * (b.x - a.x),
		//     t.height * (b.y - a.y)
		// );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___a0;
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = ___b1;
		float L_3 = L_2->get_x_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_4 = ___t2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_4);
		V_0 = L_5;
		float L_6;
		L_6 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_7;
		L_7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_1, L_3, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ___a0;
		float L_9 = L_8->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = ___b1;
		float L_11 = L_10->get_y_3();
		bool L_12 = ___invertY3;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_7;
		if (L_12)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_7;
			goto IL_003e;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_13 = ___t2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_13);
		V_0 = L_14;
		float L_15;
		L_15 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0061;
	}

IL_003e:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_16 = ___t2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_16);
		V_0 = L_17;
		float L_18;
		L_18 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_19 = ___t2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_19);
		V_0 = L_20;
		float L_21;
		L_21 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_18)), (float)L_21));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0061:
	{
		float L_22;
		L_22 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_23 = ___t2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_23);
		V_0 = L_24;
		float L_25;
		L_25 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = ___b1;
		float L_27 = L_26->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = ___a0;
		float L_29 = L_28->get_x_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_30 = ___t2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30);
		V_0 = L_31;
		float L_32;
		L_32 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = ___b1;
		float L_34 = L_33->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = ___a0;
		float L_36 = L_35->get_y_3();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_37), G_B3_3, L_22, ((float)il2cpp_codegen_multiply((float)L_25, (float)((float)il2cpp_codegen_subtract((float)L_27, (float)L_29)))), ((float)il2cpp_codegen_multiply((float)L_32, (float)((float)il2cpp_codegen_subtract((float)L_34, (float)L_36)))), /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Vector3 TensorFlowLite.MathTF::LerpUnclamped(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MathTF_LerpUnclamped_mD7DC8040578652E860A8ADBBF4B1470FB583BD06 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___b1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___t2, const RuntimeMethod* method)
{
	{
		// return new Vector3(
		//     Mathf.LerpUnclamped(a.x, b.x, t.x),
		//     Mathf.LerpUnclamped(a.y, b.y, t.y),
		//     Mathf.LerpUnclamped(a.z, b.z, t.z)
		// );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___a0;
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = ___b1;
		float L_3 = L_2->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = ___t2;
		float L_5 = L_4->get_x_2();
		float L_6;
		L_6 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E(L_1, L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = ___a0;
		float L_8 = L_7->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = ___b1;
		float L_10 = L_9->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = ___t2;
		float L_12 = L_11->get_y_3();
		float L_13;
		L_13 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E(L_8, L_10, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = ___a0;
		float L_15 = L_14->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = ___b1;
		float L_17 = L_16->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = ___t2;
		float L_19 = L_18->get_z_4();
		float L_20;
		L_20 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E(L_15, L_17, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_6, L_13, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Single> TensorFlowLite.MathTF::Softmax(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MathTF_Softmax_m0CEEA0EA967F60D468D6797832D91F3F958B06D7 (RuntimeObject* ___arr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m48259DB36BED661EFFEF9AF1D8716C0548E9D736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_mC77BBE2D6D6D27C5CF19902F855526EE256C3754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * L_0 = (U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mC008B3E5D21E9B077F851A4FB021154C8F089D9A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// float max = arr.Max();
		U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * L_1 = V_0;
		RuntimeObject* L_2 = ___arr0;
		float L_3;
		L_3 = Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_max_0(L_3);
		// var expArr = arr.Select(n => Mathf.Exp(n - max));
		RuntimeObject* L_4 = ___arr0;
		U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * L_5 = V_0;
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_6 = (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)il2cpp_codegen_object_new(Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var);
		Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m48259DB36BED661EFFEF9AF1D8716C0548E9D736_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539(L_4, L_6, /*hidden argument*/Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539_RuntimeMethod_var);
		V_1 = L_7;
		// var sum = expArr.Sum();
		U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * L_8 = V_0;
		RuntimeObject* L_9 = V_1;
		float L_10;
		L_10 = Enumerable_Sum_mDD75BD20F3C911C6B98B55E45061EE95A569E4B7(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_sum_1(L_10);
		// return expArr.Select(n => n / sum);
		RuntimeObject* L_11 = V_1;
		U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * L_12 = V_0;
		Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 * L_13 = (Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149 *)il2cpp_codegen_object_new(Func_2_t10AC82CE8886E423467ACF3C9F68E7DA50E26149_il2cpp_TypeInfo_var);
		Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_mC77BBE2D6D6D27C5CF19902F855526EE256C3754_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4F0F14ACA9CE9640DCA30B2651BAF3A917998BCB_RuntimeMethod_var);
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539(L_11, L_13, /*hidden argument*/Enumerable_Select_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD91C9E6BD1C056E6260EFE866B699F3D8EC86539_RuntimeMethod_var);
		return L_14;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Double> TensorFlowLite.MathTF::Softmax(System.Collections.Generic.IEnumerable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MathTF_Softmax_m21AA701643AB2937F07F78DCAFBB6F11D93AF887 (RuntimeObject* ___arr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m986B2E5EF684F3F2CD817810145BF759A90030D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m06DA1EFB275CBB4C9F2A40E65BFB4D88FF505F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * L_0 = (U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mB0F25F5230830A292796C4EFC24FB2F23B4EE5B1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// double max = arr.Max();
		U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * L_1 = V_0;
		RuntimeObject* L_2 = ___arr0;
		double L_3;
		L_3 = Enumerable_Max_m5CB606766B8C96C899E37CBD4B22EE984926F9B7(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_max_0(L_3);
		// var expArr = arr.Select(n => Math.Exp(n - max));
		RuntimeObject* L_4 = ___arr0;
		U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * L_5 = V_0;
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_6 = (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)il2cpp_codegen_object_new(Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857_il2cpp_TypeInfo_var);
		Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m986B2E5EF684F3F2CD817810145BF759A90030D2_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D(L_4, L_6, /*hidden argument*/Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D_RuntimeMethod_var);
		V_1 = L_7;
		// var sum = expArr.Sum();
		U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * L_8 = V_0;
		RuntimeObject* L_9 = V_1;
		double L_10;
		L_10 = Enumerable_Sum_m279F93FEBF5A84DAD2DF71CF624D249B5F2AC90F(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_sum_1(L_10);
		// return expArr.Select(n => n / sum);
		RuntimeObject* L_11 = V_1;
		U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * L_12 = V_0;
		Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 * L_13 = (Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857 *)il2cpp_codegen_object_new(Func_2_t8BFF004CCAA52A8CF445C8BA7282B0DE38AEA857_il2cpp_TypeInfo_var);
		Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m06DA1EFB275CBB4C9F2A40E65BFB4D88FF505F36_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC01E0DF0122FF0E6A80A93D73813B3E468A39E55_RuntimeMethod_var);
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D(L_11, L_13, /*hidden argument*/Enumerable_Select_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m8D007BE1FB8684BDA91027E6897036923CAB081D_RuntimeMethod_var);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion TensorFlowLite.MatrixExtension::ExtractRotation(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MatrixExtension_ExtractRotation_m7BFCB7FCC71847C94EB2399B077CBBADC27EE3B0 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// forward.x = matrix.m02;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		float L_1 = L_0.get_m02_8();
		(&V_0)->set_x_2(L_1);
		// forward.y = matrix.m12;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___matrix0;
		float L_3 = L_2.get_m12_9();
		(&V_0)->set_y_3(L_3);
		// forward.z = matrix.m22;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___matrix0;
		float L_5 = L_4.get_m22_10();
		(&V_0)->set_z_4(L_5);
		// upwards.x = matrix.m01;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ___matrix0;
		float L_7 = L_6.get_m01_4();
		(&V_1)->set_x_2(L_7);
		// upwards.y = matrix.m11;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___matrix0;
		float L_9 = L_8.get_m11_5();
		(&V_1)->set_y_3(L_9);
		// upwards.z = matrix.m21;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = ___matrix0;
		float L_11 = L_10.get_m21_6();
		(&V_1)->set_z_4(L_11);
		// return Quaternion.LookRotation(forward, upwards);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.Vector3 TensorFlowLite.MatrixExtension::ExtractPosition(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MatrixExtension_ExtractPosition_mE95F2183B15070B13B16F3383FBC9D0A9F62877E (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// position.x = matrix.m03;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		float L_1 = L_0.get_m03_12();
		(&V_0)->set_x_2(L_1);
		// position.y = matrix.m13;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___matrix0;
		float L_3 = L_2.get_m13_13();
		(&V_0)->set_y_3(L_3);
		// position.z = matrix.m23;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___matrix0;
		float L_5 = L_4.get_m23_14();
		(&V_0)->set_z_4(L_5);
		// return position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 TensorFlowLite.MatrixExtension::ExtractScale(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MatrixExtension_ExtractScale_m272C230D0C128124B68CD82B7DFF8BD104F470C0 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// scale.x = new Vector4(matrix.m00, matrix.m10, matrix.m20, matrix.m30).magnitude;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		float L_1 = L_0.get_m00_0();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___matrix0;
		float L_3 = L_2.get_m10_1();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___matrix0;
		float L_5 = L_4.get_m20_2();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ___matrix0;
		float L_7 = L_6.get_m30_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9;
		L_9 = Vector4_get_magnitude_mAEC3DB52FD5DEFB39CA058BAF64A0C487B9CDD10((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_1), /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_9);
		// scale.y = new Vector4(matrix.m01, matrix.m11, matrix.m21, matrix.m31).magnitude;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = ___matrix0;
		float L_11 = L_10.get_m01_4();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12 = ___matrix0;
		float L_13 = L_12.get_m11_5();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14 = ___matrix0;
		float L_15 = L_14.get_m21_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = ___matrix0;
		float L_17 = L_16.get_m31_7();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_18), L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		float L_19;
		L_19 = Vector4_get_magnitude_mAEC3DB52FD5DEFB39CA058BAF64A0C487B9CDD10((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_1), /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_19);
		// scale.z = new Vector4(matrix.m02, matrix.m12, matrix.m22, matrix.m32).magnitude;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20 = ___matrix0;
		float L_21 = L_20.get_m02_8();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_22 = ___matrix0;
		float L_23 = L_22.get_m12_9();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_24 = ___matrix0;
		float L_25 = L_24.get_m22_10();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_26 = ___matrix0;
		float L_27 = L_26.get_m32_11();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_28), L_21, L_23, L_25, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		float L_29;
		L_29 = Vector4_get_magnitude_mAEC3DB52FD5DEFB39CA058BAF64A0C487B9CDD10((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_1), /*hidden argument*/NULL);
		(&V_0)->set_z_4(L_29);
		// return scale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_0;
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color TensorFlowLite.PrimitiveDraw::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  PrimitiveDraw_get_color_m558669FA56F38E039D1AB9DE955932D643143724 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => mpb.GetColor(_Color);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_0 = __this->get_mpb_1();
		IL2CPP_RUNTIME_CLASS_INIT(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		int32_t L_1 = ((PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_StaticFields*)il2cpp_codegen_static_fields_for(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var))->get__Color_6();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = MaterialPropertyBlock_GetColor_m67F9B2721AF014398AA7AFD079CC435FA749611E(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_set_color_m21BF063563BEFF2FAFF5C16C8B361861B4DB78D8 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => mpb.SetColor(_Color, value);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_0 = __this->get_mpb_1();
		IL2CPP_RUNTIME_CLASS_INIT(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		int32_t L_1 = ((PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_StaticFields*)il2cpp_codegen_static_fields_for(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var))->get__Color_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___value0;
		NullCheck(L_0);
		MaterialPropertyBlock_SetColor_mF3C09C80572DB6D21B813EAEB04AA3A49A0DC496(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::.ctor(UnityEngine.Camera,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw__ctor_mFD12DE5ECFDB558A8AC585320DE62A56189C9382 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___layer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B5024D6C2A93ECDF3DFB54A395211A21F751679);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B2_0 = NULL;
	PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * G_B2_1 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B1_0 = NULL;
	PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * G_B1_1 = NULL;
	{
		// public PrimitiveDraw(Camera camera = null, int layer = 0)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// material = new Material(Shader.Find("Hidden/PrimitiveDraw"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral7B5024D6C2A93ECDF3DFB54A395211A21F751679, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		__this->set_material_0(L_1);
		// material.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_material_0();
		NullCheck(L_2);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_2, ((int32_t)61), /*hidden argument*/NULL);
		// material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_material_0();
		NullCheck(L_3);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_3, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, /*hidden argument*/NULL);
		// material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_material_0();
		NullCheck(L_4);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_4, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), /*hidden argument*/NULL);
		// material.SetInt("_Cull", (int)UnityEngine.Rendering.CullMode.Off);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_material_0();
		NullCheck(L_5);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_5, _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22, 0, /*hidden argument*/NULL);
		// material.SetInt("_ZWrite", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_material_0();
		NullCheck(L_6);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_6, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, /*hidden argument*/NULL);
		// material.SetInt("_ZTest", 6); //always
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_material_0();
		NullCheck(L_7);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_7, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, 6, /*hidden argument*/NULL);
		// material.enableInstancing = true;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_material_0();
		NullCheck(L_8);
		Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B(L_8, (bool)1, /*hidden argument*/NULL);
		// mpb = new MaterialPropertyBlock();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_9 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_9, /*hidden argument*/NULL);
		__this->set_mpb_1(L_9);
		// cube = new MeshBuffer(CreateMesh(PrimitiveType.Cube), 512);
		IL2CPP_RUNTIME_CLASS_INIT(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_10;
		L_10 = PrimitiveDraw_CreateMesh_mB205E3B95AE06FFD4BA4B66F37D071EB4EFDD07E(3, /*hidden argument*/NULL);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_11 = (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 *)il2cpp_codegen_object_new(MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058_il2cpp_TypeInfo_var);
		MeshBuffer__ctor_m9818D17B5A9D2AD635B7479E797C956852151371(L_11, L_10, ((int32_t)512), /*hidden argument*/NULL);
		__this->set_cube_2(L_11);
		// quad = new MeshBuffer(CreateMesh(PrimitiveType.Quad), 512);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_12;
		L_12 = PrimitiveDraw_CreateMesh_mB205E3B95AE06FFD4BA4B66F37D071EB4EFDD07E(5, /*hidden argument*/NULL);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_13 = (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 *)il2cpp_codegen_object_new(MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058_il2cpp_TypeInfo_var);
		MeshBuffer__ctor_m9818D17B5A9D2AD635B7479E797C956852151371(L_13, L_12, ((int32_t)512), /*hidden argument*/NULL);
		__this->set_quad_3(L_13);
		// this.camera = camera ?? Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = ___camera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = L_14;
		G_B1_0 = L_15;
		G_B1_1 = __this;
		if (L_15)
		{
			G_B2_0 = L_15;
			G_B2_1 = __this;
			goto IL_00cc;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16;
		L_16 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		G_B2_0 = L_16;
		G_B2_1 = G_B1_1;
	}

IL_00cc:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_camera_4(G_B2_0);
		// this.layer = layer;
		int32_t L_17 = ___layer1;
		__this->set_layer_5(L_17);
		// color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		PrimitiveDraw_set_color_m21BF063563BEFF2FAFF5C16C8B361861B4DB78D8(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Dispose_m397BDB6E9696828C20191BE3AE7EAFBE50128AD5 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.Destroy(material);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_material_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// material = null;
		__this->set_material_0((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// cube.Dispose();
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_1 = __this->get_cube_2();
		NullCheck(L_1);
		MeshBuffer_Dispose_m05F153E7179C780FCF62B9A3641C9DFD5738C708(L_1, /*hidden argument*/NULL);
		// quad.Dispose();
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_2 = __this->get_quad_3();
		NullCheck(L_2);
		MeshBuffer_Dispose_m05F153E7179C780FCF62B9A3641C9DFD5738C708(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Clear_mB0824283D986C52737A7BD178326D1D9BB57225C (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, const RuntimeMethod* method)
{
	{
		// cube.Clear();
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_0 = __this->get_cube_2();
		NullCheck(L_0);
		MeshBuffer_Clear_m5B39C7A2E8101CB5070934FFABF2FD142DC63204(L_0, /*hidden argument*/NULL);
		// quad.Clear();
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_1 = __this->get_quad_3();
		NullCheck(L_1);
		MeshBuffer_Clear_m5B39C7A2E8101CB5070934FFABF2FD142DC63204(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Apply(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Apply_m466BCA335C28BC3DD593E0C50429C2096675B770 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, bool ___drawEditor0, const RuntimeMethod* method)
{
	{
		// Draw(cube, drawEditor);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_0 = __this->get_cube_2();
		bool L_1 = ___drawEditor0;
		PrimitiveDraw_Draw_mAEB750F77F045AC59CEF84B53E4379A17032DB37(__this, L_0, L_1, /*hidden argument*/NULL);
		// Draw(quad, drawEditor);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_2 = __this->get_quad_3();
		bool L_3 = ___drawEditor0;
		PrimitiveDraw_Draw_mAEB750F77F045AC59CEF84B53E4379A17032DB37(__this, L_2, L_3, /*hidden argument*/NULL);
		// Clear();
		PrimitiveDraw_Clear_mB0824283D986C52737A7BD178326D1D9BB57225C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Line(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Line_m86AF9DF0AF495A876C822E74809F5422B23F4DFA (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, float ___thickness2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TryLine2DMatrix(start, end, thickness, out Matrix4x4 mtx))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___end1;
		float L_2 = ___thickness2;
		IL2CPP_RUNTIME_CLASS_INIT(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PrimitiveDraw_TryLine2DMatrix_m25391CA35A594FA7E3EDEDE202E0ED48374DC2D4(L_0, L_1, L_2, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// quad.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_4 = __this->get_quad_3();
		NullCheck(L_4);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_4, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Rect(UnityEngine.Rect,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Rect_m6E85943512972C3FC29C4BE44F13BCF0367425B1 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect0, float ___thickness1, float ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (rect.width <= 0 || rect.height <= 0) return;
		float L_0;
		L_0 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		if ((((float)L_0) <= ((float)(0.0f))))
		{
			goto IL_001c;
		}
	}
	{
		float L_1;
		L_1 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// if (rect.width <= 0 || rect.height <= 0) return;
		return;
	}

IL_001d:
	{
		// var p0 = new Vector3(rect.xMin, rect.yMin, z);
		float L_2;
		L_2 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_3;
		L_3 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_4 = ___z2;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_2, L_3, L_4, /*hidden argument*/NULL);
		// var p1 = new Vector3(rect.xMax, rect.yMin, z);
		float L_5;
		L_5 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_6;
		L_6 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_7 = ___z2;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_5, L_6, L_7, /*hidden argument*/NULL);
		// var p2 = new Vector3(rect.xMax, rect.yMax, z);
		float L_8;
		L_8 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_9;
		L_9 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_10 = ___z2;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_8, L_9, L_10, /*hidden argument*/NULL);
		// var p3 = new Vector3(rect.xMin, rect.yMax, z);
		float L_11;
		L_11 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_12;
		L_12 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_13 = ___z2;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_11, L_12, L_13, /*hidden argument*/NULL);
		// TryLine2DMatrix(p0, p1, thickness, out mtx);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		float L_16 = ___thickness1;
		IL2CPP_RUNTIME_CLASS_INIT(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = PrimitiveDraw_TryLine2DMatrix_m25391CA35A594FA7E3EDEDE202E0ED48374DC2D4(L_14, L_15, L_16, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// quad.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_18 = __this->get_quad_3();
		NullCheck(L_18);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_18, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// TryLine2DMatrix(p1, p2, thickness, out mtx);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_2;
		float L_21 = ___thickness1;
		bool L_22;
		L_22 = PrimitiveDraw_TryLine2DMatrix_m25391CA35A594FA7E3EDEDE202E0ED48374DC2D4(L_19, L_20, L_21, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// quad.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_23 = __this->get_quad_3();
		NullCheck(L_23);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_23, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// TryLine2DMatrix(p2, p3, thickness, out mtx);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_3;
		float L_26 = ___thickness1;
		bool L_27;
		L_27 = PrimitiveDraw_TryLine2DMatrix_m25391CA35A594FA7E3EDEDE202E0ED48374DC2D4(L_24, L_25, L_26, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// quad.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_28 = __this->get_quad_3();
		NullCheck(L_28);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_28, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// TryLine2DMatrix(p3, p0, thickness, out mtx);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_0;
		float L_31 = ___thickness1;
		bool L_32;
		L_32 = PrimitiveDraw_TryLine2DMatrix_m25391CA35A594FA7E3EDEDE202E0ED48374DC2D4(L_29, L_30, L_31, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// quad.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_33 = __this->get_quad_3();
		NullCheck(L_33);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_33, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Point(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Point_m83726842ECE7037A34C130AE0F02A0F495507DE3 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, float ___thickness1, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var mtx = Matrix4x4.TRS(
		//     p,
		//     Quaternion.identity,
		//     new Vector3(thickness, thickness, thickness));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___p0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		float L_2 = ___thickness1;
		float L_3 = ___thickness1;
		float L_4 = ___thickness1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_2, L_3, L_4, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_0, L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// quad.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_7 = __this->get_quad_3();
		NullCheck(L_7);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_7, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Line3D(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Line3D_m50E95B087CE39E5B3FF659599F6AE91722CABFE4 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, float ___thickness2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TryLine3DMatrix(start, end, thickness, out Matrix4x4 mtx))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___end1;
		float L_2 = ___thickness2;
		IL2CPP_RUNTIME_CLASS_INIT(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PrimitiveDraw_TryLine3DMatrix_m41987B68E281D645266516B2F580C9A39EFFEDA2(L_0, L_1, L_2, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// cube.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_4 = __this->get_cube_2();
		NullCheck(L_4);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_4, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Cube(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Cube_mD6A2C1F4371D79E9656E360E4CDBA9EA0DBDA4A0 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___size1, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (size <= 0) return;
		float L_0 = ___size1;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0009;
		}
	}
	{
		// if (size <= 0) return;
		return;
	}

IL_0009:
	{
		// var mtx = Matrix4x4.TRS(
		//     center,
		//     Quaternion.identity,
		//     new Vector3(size, size, size));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___center0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		float L_3 = ___size1;
		float L_4 = ___size1;
		float L_5 = ___size1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7;
		L_7 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_1, L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// cube.Add(mtx);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_8 = __this->get_cube_2();
		NullCheck(L_8);
		MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7(L_8, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Quad(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Quad_m619F430E17116FD22AAEB14278B239B9C85EF02D (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___d3, float ___thickness4, const RuntimeMethod* method)
{
	{
		// Line(a, b, thickness);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___b1;
		float L_2 = ___thickness4;
		PrimitiveDraw_Line_m86AF9DF0AF495A876C822E74809F5422B23F4DFA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Line(b, c, thickness);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___c2;
		float L_5 = ___thickness4;
		PrimitiveDraw_Line_m86AF9DF0AF495A876C822E74809F5422B23F4DFA(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		// Line(c, d, thickness);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___c2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___d3;
		float L_8 = ___thickness4;
		PrimitiveDraw_Line_m86AF9DF0AF495A876C822E74809F5422B23F4DFA(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		// Line(d, a, thickness);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___d3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___a0;
		float L_11 = ___thickness4;
		PrimitiveDraw_Line_m86AF9DF0AF495A876C822E74809F5422B23F4DFA(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::Draw(TensorFlowLite.PrimitiveDraw/MeshBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw_Draw_mAEB750F77F045AC59CEF84B53E4379A17032DB37 (PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967 * __this, MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * ___mb0, bool ___drawEditor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mb.index <= 0) return;
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_0 = ___mb0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_index_2();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// if (mb.index <= 0) return;
		return;
	}

IL_000a:
	{
		// Graphics.DrawMeshInstanced(
		//     mb.mesh, 0, material, mb.buffer, mb.index,
		//     mpb, ShadowCastingMode.Off, false, layer, camera,
		//     LightProbeUsage.Off, null);
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_2 = ___mb0;
		NullCheck(L_2);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = L_2->get_mesh_0();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_material_0();
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_5 = ___mb0;
		NullCheck(L_5);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_6 = L_5->get_buffer_1();
		MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * L_7 = ___mb0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_index_2();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_9 = __this->get_mpb_1();
		int32_t L_10 = __this->get_layer_5();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = __this->get_camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_DrawMeshInstanced_m295AC421844D2DFE1AE015AE89C6B7E069779C2B(L_3, 0, L_4, L_6, L_8, L_9, 0, (bool)0, L_10, L_11, 0, (LightProbeProxyVolume_t55DEBA762A0DB23C4497DE22E5595517A7176959 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine2DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine2DMatrix_m25391CA35A594FA7E3EDEDE202E0ED48374DC2D4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, float ___thickness2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___mtx3, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var vec = end - start;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___end1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var length = Vector3.Magnitude(vec);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4;
		L_4 = Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (length < float.Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0024;
		}
	}
	{
		// mtx = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_6 = ___mtx3;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7;
		L_7 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		*(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_6 = L_7;
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// mtx = Matrix4x4.TRS(
		//     (end + start) / 2,
		//     Quaternion.Euler(0, 0, Mathf.Atan2(vec.y, vec.x) * Mathf.Rad2Deg),
		//     new Vector3(length, thickness, thickness));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_8 = ___mtx3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___end1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_11, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_x_2();
		float L_17;
		L_17 = atan2f(L_14, L_16);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_17, (float)(57.2957802f))), /*hidden argument*/NULL);
		float L_19 = V_1;
		float L_20 = ___thickness2;
		float L_21 = ___thickness2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_23;
		L_23 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_12, L_18, L_22, /*hidden argument*/NULL);
		*(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_8 = L_23;
		// return true;
		return (bool)1;
	}
}
// System.Boolean TensorFlowLite.PrimitiveDraw::TryLine3DMatrix(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveDraw_TryLine3DMatrix_m41987B68E281D645266516B2F580C9A39EFFEDA2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, float ___thickness2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___mtx3, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var vec = end - start;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___end1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var length = Vector3.Magnitude(vec);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4;
		L_4 = Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (length < float.Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0024;
		}
	}
	{
		// mtx = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_6 = ___mtx3;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7;
		L_7 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		*(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_6 = L_7;
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// mtx = Matrix4x4.TRS(
		//     (end + start) / 2,
		//     Quaternion.LookRotation(vec, Vector3.forward),
		//     new Vector3(thickness, thickness, length));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_8 = ___mtx3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___end1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_11, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_13, L_14, /*hidden argument*/NULL);
		float L_16 = ___thickness2;
		float L_17 = ___thickness2;
		float L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20;
		L_20 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_12, L_15, L_19, /*hidden argument*/NULL);
		*(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_8 = L_20;
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Mesh TensorFlowLite.PrimitiveDraw::CreateMesh(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * PrimitiveDraw_CreateMesh_mB205E3B95AE06FFD4BA4B66F37D071EB4EFDD07E (int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD9D37C7B21C1D9A88E4CC02D7E91D544E0F69A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	{
		// var go = GameObject.CreatePrimitive(type);
		int32_t L_0 = ___type0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(L_0, /*hidden argument*/NULL);
		// Mesh mesh = go.GetComponent<MeshFilter>().sharedMesh;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		NullCheck(L_2);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_3;
		L_3 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD9D37C7B21C1D9A88E4CC02D7E91D544E0F69A84(L_2, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD9D37C7B21C1D9A88E4CC02D7E91D544E0F69A84_RuntimeMethod_var);
		NullCheck(L_3);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4;
		L_4 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Object.Destroy(go);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// return mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = V_0;
		return L_5;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimitiveDraw__cctor_mB97D2717B6773A71D2020A7B211F774F77C85CEC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int _Color = Shader.PropertyToID("_Color");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, /*hidden argument*/NULL);
		((PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_StaticFields*)il2cpp_codegen_static_fields_for(PrimitiveDraw_tDB61C9DE9A5C5023FB0F169ED17A03931548B967_il2cpp_TypeInfo_var))->set__Color_6(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TensorFlowLite.RectExtension::IntersectionOverUnion(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RectExtension_IntersectionOverUnion_m3FDF7B6F6AED81900499FEA09616A9E2FEDF328B (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect00, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect11, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	{
		// float sx0 = rect0.xMin;
		float L_0;
		L_0 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect00), /*hidden argument*/NULL);
		// float sy0 = rect0.yMin;
		float L_1;
		L_1 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect00), /*hidden argument*/NULL);
		V_0 = L_1;
		// float ex0 = rect0.xMax;
		float L_2;
		L_2 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect00), /*hidden argument*/NULL);
		V_1 = L_2;
		// float ey0 = rect0.yMax;
		float L_3;
		L_3 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect00), /*hidden argument*/NULL);
		V_2 = L_3;
		// float sx1 = rect1.xMin;
		float L_4;
		L_4 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect11), /*hidden argument*/NULL);
		V_3 = L_4;
		// float sy1 = rect1.yMin;
		float L_5;
		L_5 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect11), /*hidden argument*/NULL);
		V_4 = L_5;
		// float ex1 = rect1.xMax;
		float L_6;
		L_6 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect11), /*hidden argument*/NULL);
		V_5 = L_6;
		// float ey1 = rect1.yMax;
		float L_7;
		L_7 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect11), /*hidden argument*/NULL);
		V_6 = L_7;
		// float xmin0 = Mathf.Min(sx0, ex0);
		float L_8 = L_0;
		float L_9 = V_1;
		float L_10;
		L_10 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_8, L_9, /*hidden argument*/NULL);
		V_7 = L_10;
		// float ymin0 = Mathf.Min(sy0, ey0);
		float L_11 = V_0;
		float L_12 = V_2;
		float L_13;
		L_13 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_11, L_12, /*hidden argument*/NULL);
		V_8 = L_13;
		// float xmax0 = Mathf.Max(sx0, ex0);
		float L_14 = V_1;
		float L_15;
		L_15 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_8, L_14, /*hidden argument*/NULL);
		V_9 = L_15;
		// float ymax0 = Mathf.Max(sy0, ey0);
		float L_16 = V_0;
		float L_17 = V_2;
		float L_18;
		L_18 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_16, L_17, /*hidden argument*/NULL);
		V_10 = L_18;
		// float xmin1 = Mathf.Min(sx1, ex1);
		float L_19 = V_3;
		float L_20 = V_5;
		float L_21;
		L_21 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_19, L_20, /*hidden argument*/NULL);
		V_11 = L_21;
		// float ymin1 = Mathf.Min(sy1, ey1);
		float L_22 = V_4;
		float L_23 = V_6;
		float L_24;
		L_24 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_22, L_23, /*hidden argument*/NULL);
		V_12 = L_24;
		// float xmax1 = Mathf.Max(sx1, ex1);
		float L_25 = V_3;
		float L_26 = V_5;
		float L_27;
		L_27 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_25, L_26, /*hidden argument*/NULL);
		V_13 = L_27;
		// float ymax1 = Mathf.Max(sy1, ey1);
		float L_28 = V_4;
		float L_29 = V_6;
		float L_30;
		L_30 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_28, L_29, /*hidden argument*/NULL);
		V_14 = L_30;
		// float area0 = (ymax0 - ymin0) * (xmax0 - xmin0);
		float L_31 = V_10;
		float L_32 = V_8;
		float L_33 = V_9;
		float L_34 = V_7;
		V_15 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_32)), (float)((float)il2cpp_codegen_subtract((float)L_33, (float)L_34))));
		// float area1 = (ymax1 - ymin1) * (xmax1 - xmin1);
		float L_35 = V_14;
		float L_36 = V_12;
		float L_37 = V_13;
		float L_38 = V_11;
		V_16 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), (float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_38))));
		// if (area0 <= 0 || area1 <= 0)
		float L_39 = V_15;
		if ((((float)L_39) <= ((float)(0.0f))))
		{
			goto IL_00bb;
		}
	}
	{
		float L_40 = V_16;
		if ((!(((float)L_40) <= ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}

IL_00bb:
	{
		// return 0.0f;
		return (0.0f);
	}

IL_00c1:
	{
		// float intersect_xmin = Mathf.Max(xmin0, xmin1);
		float L_41 = V_7;
		float L_42 = V_11;
		float L_43;
		L_43 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_41, L_42, /*hidden argument*/NULL);
		V_17 = L_43;
		// float intersect_ymin = Mathf.Max(ymin0, ymin1);
		float L_44 = V_8;
		float L_45 = V_12;
		float L_46;
		L_46 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_44, L_45, /*hidden argument*/NULL);
		V_18 = L_46;
		// float intersect_xmax = Mathf.Min(xmax0, xmax1);
		float L_47 = V_9;
		float L_48 = V_13;
		float L_49;
		L_49 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_47, L_48, /*hidden argument*/NULL);
		V_19 = L_49;
		// float intersect_ymax = Mathf.Min(ymax0, ymax1);
		float L_50 = V_10;
		float L_51 = V_14;
		float L_52;
		L_52 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_50, L_51, /*hidden argument*/NULL);
		// float intersect_area = Mathf.Max(intersect_ymax - intersect_ymin, 0.0f) *
		//                        Mathf.Max(intersect_xmax - intersect_xmin, 0.0f);
		float L_53 = V_18;
		float L_54;
		L_54 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_52, (float)L_53)), (0.0f), /*hidden argument*/NULL);
		float L_55 = V_19;
		float L_56 = V_17;
		float L_57;
		L_57 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_55, (float)L_56)), (0.0f), /*hidden argument*/NULL);
		V_20 = ((float)il2cpp_codegen_multiply((float)L_54, (float)L_57));
		// return intersect_area / (area0 + area1 - intersect_area);
		float L_58 = V_20;
		float L_59 = V_15;
		float L_60 = V_16;
		float L_61 = V_20;
		return ((float)((float)L_58/(float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_59, (float)L_60)), (float)L_61))));
	}
}
// UnityEngine.Rect TensorFlowLite.RectExtension::GetBoundingBox(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectExtension_GetBoundingBox_m4DA952D4FD489F71C11C8F158B0AB57FE4D64C68 (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___arr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_4 = NULL;
	int32_t V_5 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float xMin = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// float yMin = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// float xMax = float.MinValue;
		V_2 = (-(std::numeric_limits<float>::max)());
		// float yMax = float.MinValue;
		V_3 = (-(std::numeric_limits<float>::max)());
		// foreach (Vector2 v in arr)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = ___arr0;
		V_4 = L_0;
		V_5 = 0;
		goto IL_0069;
	}

IL_0020:
	{
		// foreach (Vector2 v in arr)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = V_4;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_6 = L_4;
		// xMin = Math.Min(xMin, v.x);
		float L_5 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_6;
		float L_7 = L_6.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// yMin = Math.Min(yMin, v.y);
		float L_9 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_6;
		float L_11 = L_10.get_y_1();
		float L_12;
		L_12 = Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF(L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// xMax = Math.Max(xMax, v.x);
		float L_13 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_6;
		float L_15 = L_14.get_x_0();
		float L_16;
		L_16 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_13, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// yMax = Math.Max(yMax, v.y);
		float L_17 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_6;
		float L_19 = L_18.get_y_1();
		float L_20;
		L_20 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_17, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0069:
	{
		// foreach (Vector2 v in arr)
		int32_t L_22 = V_5;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = V_4;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// return Rect.MinMaxRect(xMin, yMin, xMax, yMax);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		float L_27 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		L_28 = Rect_MinMaxRect_m325BFFAD552459323794D59AA9B48B0A7F79ADC6(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// UnityEngine.Rect TensorFlowLite.RectExtension::GetBoundingBox(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectExtension_GetBoundingBox_m43640A899A3F9C8FE2AEAE9954590272CEE37FA6 (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___arr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_4 = NULL;
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float xMin = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// float yMin = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// float xMax = float.MinValue;
		V_2 = (-(std::numeric_limits<float>::max)());
		// float yMax = float.MinValue;
		V_3 = (-(std::numeric_limits<float>::max)());
		// foreach (Vector3 v in arr)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___arr0;
		V_4 = L_0;
		V_5 = 0;
		goto IL_0069;
	}

IL_0020:
	{
		// foreach (Vector3 v in arr)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = V_4;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_6 = L_4;
		// xMin = Math.Min(xMin, v.x);
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_6;
		float L_7 = L_6.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// yMin = Math.Min(yMin, v.y);
		float L_9 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_6;
		float L_11 = L_10.get_y_3();
		float L_12;
		L_12 = Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF(L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// xMax = Math.Max(xMax, v.x);
		float L_13 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_6;
		float L_15 = L_14.get_x_2();
		float L_16;
		L_16 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_13, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// yMax = Math.Max(yMax, v.y);
		float L_17 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_6;
		float L_19 = L_18.get_y_3();
		float L_20;
		L_20 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_17, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0069:
	{
		// foreach (Vector3 v in arr)
		int32_t L_22 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = V_4;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// return Rect.MinMaxRect(xMin, yMin, xMax, yMax);
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_2;
		float L_27 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		L_28 = Rect_MinMaxRect_m325BFFAD552459323794D59AA9B48B0A7F79ADC6(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureResizer_get_texture_m33BD228545DC792C43DA3B993C19DAB2AF181FA7 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method)
{
	{
		// public RenderTexture texture => resizeTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_resizeTexture_0();
		return L_0;
	}
}
// UnityEngine.Material TensorFlowLite.TextureResizer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * TextureResizer_get_material_m0B18F5F1E3C7D80EA992AF843FC64763F708415D (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B112A45AF7EB2AA7809D91549390A31A3ECCF64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_blitMaterial == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get__blitMaterial_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// _blitMaterial = new Material(Shader.Find("Hidden/TFLite/Resize"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral0B112A45AF7EB2AA7809D91549390A31A3ECCF64, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		__this->set__blitMaterial_1(L_3);
	}

IL_0023:
	{
		// return _blitMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get__blitMaterial_1();
		return L_4;
	}
}
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::get_UVRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TextureResizer_get_UVRect_mEC4690E69415687A545B9E0DC119A6793F190645 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => material.GetVector(_UVRect);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = TextureResizer_get_material_m0B18F5F1E3C7D80EA992AF843FC64763F708415D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->get__UVRect_3();
		NullCheck(L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		L_2 = Material_GetVector_m0F76C999BC936C571A3C20054D266DF122A85E88(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void TensorFlowLite.TextureResizer::set_UVRect(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_UVRect_m21D8D230A9359CC20757EAB97FDC05BA45FC193A (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => material.SetVector(_UVRect, value);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = TextureResizer_get_material_m0B18F5F1E3C7D80EA992AF843FC64763F708415D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->get__UVRect_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___value0;
		NullCheck(L_0);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::get_VertexTransfrom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  TextureResizer_get_VertexTransfrom_m67DED524B7F307E0C1686B05A7BEC84735A21161 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => material.GetMatrix(_VertTransform);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = TextureResizer_get_material_m0B18F5F1E3C7D80EA992AF843FC64763F708415D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->get__VertTransform_2();
		NullCheck(L_0);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Material_GetMatrix_m7FB09833D8392AF85F65631EC19A438B66739690(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void TensorFlowLite.TextureResizer::set_VertexTransfrom(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_set_VertexTransfrom_m1F627C43C7FB2EA2A7F209497C589A258BB2E874 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => material.SetMatrix(_VertTransform, value);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = TextureResizer_get_material_m0B18F5F1E3C7D80EA992AF843FC64763F708415D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->get__VertTransform_2();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___value0;
		NullCheck(L_0);
		Material_SetMatrix_m7266FA4400474D08A30181EE08E01760CCAEBA0A(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TensorFlowLite.TextureResizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer__ctor_m6721BA5062E7500D5262399E220ECEAF4CA1A054 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method)
{
	{
		// public TextureResizer()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureResizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer_Dispose_mA290FC8051124CE3BB5F16C5B8DCD1D12596E286 (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, const RuntimeMethod* method)
{
	{
		// DisposeUtil.TryDispose(resizeTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_resizeTexture_0();
		DisposeUtil_TryDispose_m511F71982A2C954FA7EE96677B4EDE1CB2D5AD73(L_0, /*hidden argument*/NULL);
		// DisposeUtil.TryDispose(_blitMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get__blitMaterial_1();
		DisposeUtil_TryDispose_m7E4DDDABAD6479DD7CFD027B35D310FF4BF7EC56(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::Resize(UnityEngine.Texture,TensorFlowLite.TextureResizer/ResizeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureResizer_Resize_m72B2E92E65BEBD62FFFD6414C78316E309FFBA0C (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VertexTransfrom = GetVertTransform(options.rotationDegree, options.mirrorHorizontal, options.mirrorVertical);
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_0 = ___options1;
		float L_1 = L_0.get_rotationDegree_2();
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_2 = ___options1;
		bool L_3 = L_2.get_mirrorHorizontal_3();
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_4 = ___options1;
		bool L_5 = L_4.get_mirrorVertical_4();
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = TextureResizer_GetVertTransform_mE13D33CB6EA4D0F19499C928708D0DEC4E80DD18(L_1, L_3, L_5, /*hidden argument*/NULL);
		TextureResizer_set_VertexTransfrom_m1F627C43C7FB2EA2A7F209497C589A258BB2E874(__this, L_6, /*hidden argument*/NULL);
		// UVRect = GetTextureST(texture, options);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_7 = ___texture0;
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_8 = ___options1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9;
		L_9 = TextureResizer_GetTextureST_m5E67F00FC0F600C3E0993C051B1FD87C179495F1(L_7, L_8, /*hidden argument*/NULL);
		TextureResizer_set_UVRect_m21D8D230A9359CC20757EAB97FDC05BA45FC193A(__this, L_9, /*hidden argument*/NULL);
		// return ApplyResize(texture, options.width, options.height, false);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_10 = ___texture0;
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_11 = ___options1;
		int32_t L_12 = L_11.get_width_0();
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_13 = ___options1;
		int32_t L_14 = L_13.get_height_1();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15;
		L_15 = TextureResizer_ApplyResize_m9253638EBFF235292C03083B41568D752FDC315E(__this, L_10, L_12, L_14, (bool)0, /*hidden argument*/NULL);
		return L_15;
	}
}
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::Resize(UnityEngine.Texture,System.Int32,System.Int32,System.Boolean,UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureResizer_Resize_mA28F7C774F4F4437234A51906E49E9AFABDA274E (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, int32_t ___width1, int32_t ___height2, bool ___fillBackground3, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform4, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uvRect5, const RuntimeMethod* method)
{
	{
		// VertexTransfrom = transform;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___transform4;
		TextureResizer_set_VertexTransfrom_m1F627C43C7FB2EA2A7F209497C589A258BB2E874(__this, L_0, /*hidden argument*/NULL);
		// UVRect = uvRect;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___uvRect5;
		TextureResizer_set_UVRect_m21D8D230A9359CC20757EAB97FDC05BA45FC193A(__this, L_1, /*hidden argument*/NULL);
		// return ApplyResize(texture, width, height, fillBackground);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_2 = ___texture0;
		int32_t L_3 = ___width1;
		int32_t L_4 = ___height2;
		bool L_5 = ___fillBackground3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6;
		L_6 = TextureResizer_ApplyResize_m9253638EBFF235292C03083B41568D752FDC315E(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RenderTexture TensorFlowLite.TextureResizer::ApplyResize(UnityEngine.Texture,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TextureResizer_ApplyResize_m9253638EBFF235292C03083B41568D752FDC315E (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, int32_t ___width1, int32_t ___height2, bool ___fillBackground3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resizeTexture == null
		//     || resizeTexture.width != width
		//     || resizeTexture.height != height)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_resizeTexture_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = __this->get_resizeTexture_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		int32_t L_4 = ___width1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = __this->get_resizeTexture_0();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		int32_t L_7 = ___height2;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0044;
		}
	}

IL_002a:
	{
		// DisposeUtil.TryDispose(resizeTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = __this->get_resizeTexture_0();
		DisposeUtil_TryDispose_m511F71982A2C954FA7EE96677B4EDE1CB2D5AD73(L_8, /*hidden argument*/NULL);
		// resizeTexture = new RenderTexture(width, height, 0, RenderTextureFormat.ARGB32);
		int32_t L_9 = ___width1;
		int32_t L_10 = ___height2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533(L_11, L_9, L_10, 0, 0, /*hidden argument*/NULL);
		__this->set_resizeTexture_0(L_11);
	}

IL_0044:
	{
		// if (fillBackground)
		bool L_12 = ___fillBackground3;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// Graphics.Blit(Texture2D.blackTexture, resizeTexture);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13;
		L_13 = Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE(/*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = __this->get_resizeTexture_0();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// Graphics.Blit(texture, resizeTexture, material, 0);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_15 = ___texture0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = __this->get_resizeTexture_0();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17;
		L_17 = TextureResizer_get_material_m0B18F5F1E3C7D80EA992AF843FC64763F708415D(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_15, L_16, L_17, 0, /*hidden argument*/NULL);
		// return resizeTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = __this->get_resizeTexture_0();
		return L_18;
	}
}
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(System.Single,System.Single,TensorFlowLite.AspectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TextureResizer_GetTextureST_mAE670BDA6C1CEA54BD9887FCA1528CB668BB85DE (float ___srcAspect0, float ___dstAspect1, int32_t ___mode2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = ___mode2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_00c1;
	}

IL_0017:
	{
		// return new Vector4(1, 1, 0, 0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_1), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_1;
	}

IL_0031:
	{
		// if (srcAspect > dstAspect)
		float L_2 = ___srcAspect0;
		float L_3 = ___dstAspect1;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0057;
		}
	}
	{
		// float s = srcAspect / dstAspect;
		float L_4 = ___srcAspect0;
		float L_5 = ___dstAspect1;
		V_0 = ((float)((float)L_4/(float)L_5));
		// return new Vector4(1, s, 0, (1 - s) / 2);
		float L_6 = V_0;
		float L_7 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_8), (1.0f), L_6, (0.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_7))/(float)(2.0f))), /*hidden argument*/NULL);
		return L_8;
	}

IL_0057:
	{
		// float s = dstAspect / srcAspect;
		float L_9 = ___dstAspect1;
		float L_10 = ___srcAspect0;
		V_1 = ((float)((float)L_9/(float)L_10));
		// return new Vector4(s, 1, (1 - s) / 2, 0);
		float L_11 = V_1;
		float L_12 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_13), L_11, (1.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_12))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_0079:
	{
		// if (srcAspect > dstAspect)
		float L_14 = ___srcAspect0;
		float L_15 = ___dstAspect1;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_009f;
		}
	}
	{
		// float s = dstAspect / srcAspect;
		float L_16 = ___dstAspect1;
		float L_17 = ___srcAspect0;
		V_2 = ((float)((float)L_16/(float)L_17));
		// return new Vector4(s, 1, (1 - s) / 2, 0);
		float L_18 = V_2;
		float L_19 = V_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_20), L_18, (1.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_19))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		return L_20;
	}

IL_009f:
	{
		// float s = srcAspect / dstAspect;
		float L_21 = ___srcAspect0;
		float L_22 = ___dstAspect1;
		V_3 = ((float)((float)L_21/(float)L_22));
		// return new Vector4(1, s, 0, (1 - s) / 2);
		float L_23 = V_3;
		float L_24 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_25), (1.0f), L_23, (0.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_24))/(float)(2.0f))), /*hidden argument*/NULL);
		return L_25;
	}

IL_00c1:
	{
		// throw new System.Exception("Unknown aspect mode");
		Exception_t * L_26 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6270A9A3CF86F3B615CE7EAC735058FB6089BA94)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureResizer_GetTextureST_mAE670BDA6C1CEA54BD9887FCA1528CB668BB85DE_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector4 TensorFlowLite.TextureResizer::GetTextureST(UnityEngine.Texture,TensorFlowLite.TextureResizer/ResizeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  TextureResizer_GetTextureST_m5E67F00FC0F600C3E0993C051B1FD87C179495F1 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___sourceTex0, ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetTextureST(
		//     (float)sourceTex.width / (float)sourceTex.height, // src
		//     (float)options.width / (float)options.height, // dst
		//     options.aspectMode);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___sourceTex0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_2 = ___sourceTex0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_4 = ___options1;
		int32_t L_5 = L_4.get_width_0();
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_6 = ___options1;
		int32_t L_7 = L_6.get_height_1();
		ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239  L_8 = ___options1;
		int32_t L_9 = L_8.get_aspectMode_5();
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10;
		L_10 = TextureResizer_GetTextureST_mAE670BDA6C1CEA54BD9887FCA1528CB668BB85DE(((float)((float)((float)((float)L_1))/(float)((float)((float)L_3)))), ((float)((float)((float)((float)L_5))/(float)((float)((float)L_7)))), L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Matrix4x4 TensorFlowLite.TextureResizer::GetVertTransform(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  TextureResizer_GetVertTransform_mE13D33CB6EA4D0F19499C928708D0DEC4E80DD18 (float ___rotation0, bool ___mirrorHorizontal1, bool ___mirrorVertical2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B2_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B6_2 = NULL;
	{
		// Vector3 scale = new Vector3(
		//     mirrorHorizontal ? -1 : 1,
		//     mirrorVertical ? -1 : 1,
		//     1);
		bool L_0 = ___mirrorHorizontal1;
		G_B1_0 = (&V_0);
		if (L_0)
		{
			G_B2_0 = (&V_0);
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		bool L_1 = ___mirrorVertical2;
		G_B4_0 = ((float)((float)G_B3_0));
		G_B4_1 = G_B3_1;
		if (L_1)
		{
			G_B5_0 = ((float)((float)G_B3_0));
			G_B5_1 = G_B3_1;
			goto IL_0010;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0011;
	}

IL_0010:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0011:
	{
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)G_B6_2, G_B6_1, ((float)((float)G_B6_0)), (1.0f), /*hidden argument*/NULL);
		// Matrix4x4 trs = Matrix4x4.TRS(
		//     Vector3.zero,
		//     Quaternion.Euler(0, 0, rotation),
		//     scale
		// );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_3 = ___rotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_2, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// return PUSH_MATRIX * trs * POP_MATRIX;
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7 = ((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->get_PUSH_MATRIX_4();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = V_1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9;
		L_9 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_7, L_8, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = ((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->get_POP_MATRIX_5();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11;
		L_11 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void TensorFlowLite.TextureResizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureResizer__cctor_mA64E1A4C56B19CC8D70E4AAD7ADA1C5B389690CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral179E8064BD0D567C832BC3C24C5979B76547443C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral974EC53FABB83A35680AD82D7F8C49DDE80B63EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int _VertTransform = Shader.PropertyToID("_VertTransform");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral179E8064BD0D567C832BC3C24C5979B76547443C, /*hidden argument*/NULL);
		((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->set__VertTransform_2(L_0);
		// static readonly int _UVRect = Shader.PropertyToID("_UVRect");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral974EC53FABB83A35680AD82D7F8C49DDE80B63EC, /*hidden argument*/NULL);
		((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->set__UVRect_3(L_1);
		// private static readonly Matrix4x4 PUSH_MATRIX = Matrix4x4.Translate(new Vector3(0.5f, 0.5f, 0));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_2, /*hidden argument*/NULL);
		((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->set_PUSH_MATRIX_4(L_3);
		// private static readonly Matrix4x4 POP_MATRIX = Matrix4x4.Translate(new Vector3(-0.5f, -0.5f, 0));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (-0.5f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_4, /*hidden argument*/NULL);
		((TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_StaticFields*)il2cpp_codegen_static_fields_for(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var))->set_POP_MATRIX_5(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureToTensor_get_texture_m6E678AB028D926A464A1B030BEB77DA9E4BD69C1 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, const RuntimeMethod* method)
{
	{
		// public Texture2D texture => fetchTexture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_fetchTexture_0();
		return L_0;
	}
}
// System.Void TensorFlowLite.TextureToTensor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor__ctor_mA292852947AE1691D4D8FAFF23A51A3B6CE4EAFA (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30_m546D5961FB95F55CAE76CC5A5FDBC99B2F52D487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A0B2CF5DC485D0B8A8A807D0088CF6730FB2BDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextureToTensor()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// compute = Resources.Load<ComputeShader>("TextureToTensor");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_0;
		L_0 = Resources_Load_TisComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30_m546D5961FB95F55CAE76CC5A5FDBC99B2F52D487(_stringLiteral0A0B2CF5DC485D0B8A8A807D0088CF6730FB2BDD, /*hidden argument*/Resources_Load_TisComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30_m546D5961FB95F55CAE76CC5A5FDBC99B2F52D487_RuntimeMethod_var);
		__this->set_compute_1(L_0);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_Dispose_m6EB19EE4CCFCC6BC0F729E073FFF21F3F811F373 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, const RuntimeMethod* method)
{
	{
		// DisposeUtil.TryDispose(fetchTexture);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_fetchTexture_0();
		DisposeUtil_TryDispose_m2AA952BFC4A3E9985F8219CCB91C92FC24A46A66(L_0, /*hidden argument*/NULL);
		// DisposeUtil.TryDispose(tensorBuffer);
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_1 = __this->get_tensorBuffer_2();
		DisposeUtil_TryDispose_m6DE16785227587B3C6A3BD24344BB50D9A8BC144(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,System.SByte[0...,0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_mCEB28C4D579A0508E8A10B796530C9CD25A8AEB9 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SByteU5BU2CU2CU5D_t9B3C3F9A876AC242D4BD465135089223F3DB4ACA* ___inputs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = TextureToTensor_FetchToTexture2D_mAF2ED8016CA5102E2C3A19512788852BED5E14AD(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  L_2;
		L_2 = Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1(L_1, /*hidden argument*/Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
		V_0 = L_2;
		// int width = texture.width;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___texture0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_1 = L_4;
		// int height = texture.height - 1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___texture0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		// for (int i = 0; i < pixels.Length; i++)
		V_3 = 0;
		goto IL_007c;
	}

IL_0021:
	{
		// int y = height - i / width;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)((int32_t)L_8/(int32_t)L_9))));
		// int x = i % width;
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		V_5 = ((int32_t)((int32_t)L_10%(int32_t)L_11));
		// inputs[y, x, 0] = (sbyte)pixels[i].r;
		SByteU5BU2CU2CU5D_t9B3C3F9A876AC242D4BD465135089223F3DB4ACA* L_12 = ___inputs1;
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_15);
		uint8_t L_17 = L_16.get_r_1();
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, 0, ((int8_t)((int8_t)L_17)));
		// inputs[y, x, 1] = (sbyte)pixels[i].g;
		SByteU5BU2CU2CU5D_t9B3C3F9A876AC242D4BD465135089223F3DB4ACA* L_18 = ___inputs1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		int32_t L_21 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_22;
		L_22 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_21);
		uint8_t L_23 = L_22.get_g_2();
		NullCheck(L_18);
		(L_18)->SetAt(L_19, L_20, 1, ((int8_t)((int8_t)L_23)));
		// inputs[y, x, 2] = (sbyte)pixels[i].b;
		SByteU5BU2CU2CU5D_t9B3C3F9A876AC242D4BD465135089223F3DB4ACA* L_24 = ___inputs1;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_27);
		uint8_t L_29 = L_28.get_b_3();
		NullCheck(L_24);
		(L_24)->SetAt(L_25, L_26, 2, ((int8_t)((int8_t)L_29)));
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_007c:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_31 = V_3;
		int32_t L_32;
		L_32 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Length_1);
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,System.Single[0...,0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_m50FAD2E61E3086034AA5D414FB4E66C512AF860F (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs1, const RuntimeMethod* method)
{
	{
		// if (texture.width % 8 != 0 || texture.height % 8 != 0)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		if (((int32_t)((int32_t)L_1%(int32_t)8)))
		{
			goto IL_0014;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		if (!((int32_t)((int32_t)L_3%(int32_t)8)))
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		// ToTensorCPU(texture, inputs);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___texture0;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_5 = ___inputs1;
		TextureToTensor_ToTensorCPU_m101D725961C051A2DE99A88C64EA9AF9E052CAB7(__this, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001d:
	{
		// ToTensorGPU(texture, inputs);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = ___texture0;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_7 = ___inputs1;
		TextureToTensor_ToTensorGPU_m32A9B479AA73F6B3A32A6EC4910CA8DB43456E7F(__this, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,UnityEngine.ComputeBuffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_m787EF8D8181E11C4EEF0F90B278CB22554021299 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 ** ___buffer1, const RuntimeMethod* method)
{
	{
		// ToTensorGPU(texture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		TextureToTensor_ToTensorGPU_m178124C81BB48478CFF16E405CF1AAE934545CB9(__this, L_0, /*hidden argument*/NULL);
		// buffer = tensorBuffer;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 ** L_1 = ___buffer1;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_2 = __this->get_tensorBuffer_2();
		*((RuntimeObject **)L_1) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)L_2);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensor(UnityEngine.RenderTexture,System.Single[0...,0...,0...],System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensor_m3C6D4475FD876027E5B2FAB5AF35892D70CAE4A9 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs1, float ___offset2, float ___scale3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = TextureToTensor_FetchToTexture2D_mAF2ED8016CA5102E2C3A19512788852BED5E14AD(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  L_2;
		L_2 = Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1(L_1, /*hidden argument*/Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
		V_0 = L_2;
		// int width = texture.width;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___texture0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_1 = L_4;
		// int height = texture.height - 1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___texture0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		// for (int i = 0; i < pixels.Length; i++)
		V_3 = 0;
		goto IL_008b;
	}

IL_0021:
	{
		// int y = height - i / width;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)((int32_t)L_8/(int32_t)L_9))));
		// int x = i % width;
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		V_5 = ((int32_t)((int32_t)L_10%(int32_t)L_11));
		// inputs[y, x, 0] = (pixels[i].r - offset) * scale;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_12 = ___inputs1;
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_15);
		uint8_t L_17 = L_16.get_r_1();
		float L_18 = ___offset2;
		float L_19 = ___scale3;
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, 0, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_17)), (float)L_18)), (float)L_19)));
		// inputs[y, x, 1] = (pixels[i].g - offset) * scale;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_20 = ___inputs1;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		int32_t L_23 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_23);
		uint8_t L_25 = L_24.get_g_2();
		float L_26 = ___offset2;
		float L_27 = ___scale3;
		NullCheck(L_20);
		(L_20)->SetAt(L_21, L_22, 1, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_25)), (float)L_26)), (float)L_27)));
		// inputs[y, x, 2] = (pixels[i].b - offset) * scale;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_28 = ___inputs1;
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_32;
		L_32 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_31);
		uint8_t L_33 = L_32.get_b_3();
		float L_34 = ___offset2;
		float L_35 = ___scale3;
		NullCheck(L_28);
		(L_28)->SetAt(L_29, L_30, 2, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_33)), (float)L_34)), (float)L_35)));
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_008b:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_37 = V_3;
		int32_t L_38;
		L_38 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Length_1);
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> TensorFlowLite.TextureToTensor::ToTensorAsync(UnityEngine.RenderTexture,System.Single[0...,0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  TextureToTensor_ToTensorAsync_mCFFE61EC6484287FB05A975651B631492E22F894 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		(&V_0)->set_texture_3(L_0);
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_1 = ___inputs1;
		(&V_0)->set_inputs_4(L_1);
		AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  L_2;
		L_2 = AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_inline(/*hidden argument*/AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836  L_3 = V_0;
		AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_inline((AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *)(&V_1), (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)(&V_0), /*hidden argument*/AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_6;
		L_6 = AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_inline((AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *)L_5, /*hidden argument*/AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorCPU(UnityEngine.RenderTexture,System.Single[0...,0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorCPU_m101D725961C051A2DE99A88C64EA9AF9E052CAB7 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = TextureToTensor_FetchToTexture2D_mAF2ED8016CA5102E2C3A19512788852BED5E14AD(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  L_2;
		L_2 = Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1(L_1, /*hidden argument*/Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
		V_0 = L_2;
		// int width = texture.width;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___texture0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_1 = L_4;
		// int height = texture.height - 1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___texture0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		// for (int i = 0; i < pixels.Length; i++)
		V_3 = 0;
		goto IL_008e;
	}

IL_0021:
	{
		// int y = height - i / width;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)((int32_t)L_8/(int32_t)L_9))));
		// int x = i % width;
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		V_5 = ((int32_t)((int32_t)L_10%(int32_t)L_11));
		// inputs[y, x, 0] = (float)(pixels[i].r) / scale;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_12 = ___inputs1;
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_15);
		uint8_t L_17 = L_16.get_r_1();
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, 0, ((float)((float)((float)((float)L_17))/(float)(255.0f))));
		// inputs[y, x, 1] = (float)(pixels[i].g) / scale;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_18 = ___inputs1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		int32_t L_21 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_22;
		L_22 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_21);
		uint8_t L_23 = L_22.get_g_2();
		NullCheck(L_18);
		(L_18)->SetAt(L_19, L_20, 1, ((float)((float)((float)((float)L_23))/(float)(255.0f))));
		// inputs[y, x, 2] = (float)(pixels[i].b) / scale;
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_24 = ___inputs1;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = V_3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Buffer_0, L_27);
		uint8_t L_29 = L_28.get_b_3();
		NullCheck(L_24);
		(L_24)->SetAt(L_25, L_26, 2, ((float)((float)((float)((float)L_29))/(float)(255.0f))));
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_008e:
	{
		// for (int i = 0; i < pixels.Length; i++)
		int32_t L_31 = V_3;
		int32_t L_32;
		L_32 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)(&V_0))->___m_Length_1);
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_m178124C81BB48478CFF16E405CF1AAE934545CB9 (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8D2CD12448421DD3C31CF4A88C6CBCFD143532);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int width = texture.width;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		// int height = texture.height;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = L_3;
		// if (tensorBuffer == null || tensorBuffer.count != width * height)
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_4 = __this->get_tensorBuffer_2();
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_5 = __this->get_tensorBuffer_2();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ComputeBuffer_get_count_m93FD58E4F51DDBC9B520A4A9E28B1A04F63C4827(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8)))))
		{
			goto IL_0041;
		}
	}

IL_0026:
	{
		// DisposeUtil.TryDispose(tensorBuffer);
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_9 = __this->get_tensorBuffer_2();
		DisposeUtil_TryDispose_m6DE16785227587B3C6A3BD24344BB50D9A8BC144(L_9, /*hidden argument*/NULL);
		// tensorBuffer = new ComputeBuffer(width * height, sizeof(float) * 3);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_12 = (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 *)il2cpp_codegen_object_new(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427_il2cpp_TypeInfo_var);
		ComputeBuffer__ctor_m66E68E9066197B06CF35FDDAFAFDC8C1DECC5436(L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), ((int32_t)12), /*hidden argument*/NULL);
		__this->set_tensorBuffer_2(L_12);
	}

IL_0041:
	{
		// int kernel = compute.FindKernel("TextureToFloatTensor");
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_13 = __this->get_compute_1();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ComputeShader_FindKernel_mCA2683905A5DAB573D50389E2B24B48B18CD53D0(L_13, _stringLiteral0C8D2CD12448421DD3C31CF4A88C6CBCFD143532, /*hidden argument*/NULL);
		V_2 = L_14;
		// compute.SetTexture(kernel, InputTexture, texture);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_15 = __this->get_compute_1();
		int32_t L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var);
		int32_t L_17 = ((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->get_InputTexture_3();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = ___texture0;
		NullCheck(L_15);
		ComputeShader_SetTexture_m0A0BD4678CB81A7F6839FC3AF8DFCC7C65C26C31(L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		// compute.SetBuffer(kernel, OutputFloatTensor, tensorBuffer);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_19 = __this->get_compute_1();
		int32_t L_20 = V_2;
		int32_t L_21 = ((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->get_OutputFloatTensor_4();
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_22 = __this->get_tensorBuffer_2();
		NullCheck(L_19);
		ComputeShader_SetBuffer_m134F25C2DAD8D04F0A6EBBDECB56E8A17E461A3D(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		// compute.SetInt(TextureWidth, width);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_23 = __this->get_compute_1();
		int32_t L_24 = ((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->get_TextureWidth_5();
		int32_t L_25 = V_0;
		NullCheck(L_23);
		ComputeShader_SetInt_m9F7AD21218D95D0A4F88CBB19CBBCA14845E163A(L_23, L_24, L_25, /*hidden argument*/NULL);
		// compute.SetInt(TextureHeight, height);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_26 = __this->get_compute_1();
		int32_t L_27 = ((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->get_TextureHeight_6();
		int32_t L_28 = V_1;
		NullCheck(L_26);
		ComputeShader_SetInt_m9F7AD21218D95D0A4F88CBB19CBBCA14845E163A(L_26, L_27, L_28, /*hidden argument*/NULL);
		// compute.Dispatch(kernel, width / 8, height / 8, 1);
		ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * L_29 = __this->get_compute_1();
		int32_t L_30 = V_2;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_29);
		ComputeShader_Dispatch_mCC2F94FF5EB215C5CC4824741C2CB8D94423CBA4(L_29, L_30, ((int32_t)((int32_t)L_31/(int32_t)8)), ((int32_t)((int32_t)L_32/(int32_t)8)), 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.TextureToTensor::ToTensorGPU(UnityEngine.RenderTexture,System.Single[0...,0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor_ToTensorGPU_m32A9B479AA73F6B3A32A6EC4910CA8DB43456E7F (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* ___inputs1, const RuntimeMethod* method)
{
	{
		// ToTensorGPU(texture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___texture0;
		TextureToTensor_ToTensorGPU_m178124C81BB48478CFF16E405CF1AAE934545CB9(__this, L_0, /*hidden argument*/NULL);
		// tensorBuffer.GetData(inputs);
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_1 = __this->get_tensorBuffer_2();
		SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_2 = ___inputs1;
		NullCheck(L_1);
		ComputeBuffer_GetData_m5BF3A9444662844211B0385EA273BC7FA7AEAD57(L_1, (RuntimeArray *)(RuntimeArray *)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D TensorFlowLite.TextureToTensor::FetchToTexture2D(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TextureToTensor_FetchToTexture2D_mAF2ED8016CA5102E2C3A19512788852BED5E14AD (TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fetchTexture == null || !IsSameSize(fetchTexture, texture))
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_fetchTexture_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = __this->get_fetchTexture_0();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___texture0;
		IL2CPP_RUNTIME_CLASS_INIT(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TextureToTensor_IsSameSize_mFEF93061D21F460981F1934577A5A2FA98480BB7(L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0035;
		}
	}

IL_001c:
	{
		// fetchTexture = new Texture2D(texture.width, texture.height, TextureFormat.RGBA32, false);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___texture0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = ___texture0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_9, L_6, L_8, 4, (bool)0, /*hidden argument*/NULL);
		__this->set_fetchTexture_0(L_9);
	}

IL_0035:
	{
		// var prevRT = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10;
		L_10 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		// RenderTexture.active = texture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = ___texture0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_11, /*hidden argument*/NULL);
		// fetchTexture.ReadPixels(new Rect(0, 0, texture.width, texture.height), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = __this->get_fetchTexture_0();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = ___texture0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = ___texture0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_17), (0.0f), (0.0f), ((float)((float)L_14)), ((float)((float)L_16)), /*hidden argument*/NULL);
		NullCheck(L_12);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_12, L_17, 0, 0, /*hidden argument*/NULL);
		// fetchTexture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = __this->get_fetchTexture_0();
		NullCheck(L_18);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_18, /*hidden argument*/NULL);
		// RenderTexture.active = prevRT;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_10, /*hidden argument*/NULL);
		// return fetchTexture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = __this->get_fetchTexture_0();
		return L_19;
	}
}
// System.Boolean TensorFlowLite.TextureToTensor::IsSameSize(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureToTensor_IsSameSize_mFEF93061D21F460981F1934577A5A2FA98480BB7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___a0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___b1, const RuntimeMethod* method)
{
	{
		// return a.width == b.width && a.height == b.height;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_4 = ___a0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6 = ___b1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void TensorFlowLite.TextureToTensor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureToTensor__cctor_mF254ECF8C4808F011EE893E837F126475D3D9A1D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186C317106771B7B34F0840738B27A2CE8181156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81785C0709828B0330D6987D0BC8063ECCA4DE55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E134912E4F26F2F6E6B380FC96D32FB257D8FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB82C0D2D51BC7F727346CBAC41D5AC8BAEFEAF34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int InputTexture = Shader.PropertyToID("InputTexture");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralA3E134912E4F26F2F6E6B380FC96D32FB257D8FA, /*hidden argument*/NULL);
		((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->set_InputTexture_3(L_0);
		// static readonly int OutputFloatTensor = Shader.PropertyToID("OutputFloatTensor");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral186C317106771B7B34F0840738B27A2CE8181156, /*hidden argument*/NULL);
		((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->set_OutputFloatTensor_4(L_1);
		// static readonly int TextureWidth = Shader.PropertyToID("TextureWidth");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB82C0D2D51BC7F727346CBAC41D5AC8BAEFEAF34, /*hidden argument*/NULL);
		((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->set_TextureWidth_5(L_2);
		// static readonly int TextureHeight = Shader.PropertyToID("TextureHeight");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral81785C0709828B0330D6987D0BC8063ECCA4DE55, /*hidden argument*/NULL);
		((TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_StaticFields*)il2cpp_codegen_static_fields_for(TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8_il2cpp_TypeInfo_var))->set_TextureHeight_6(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.WebCamInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_Start_mC27AD667C6EA67A508FB1F4286663C0201635CCF (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	String_t* G_B3_0 = NULL;
	{
		// resizer = new TextureResizer();
		TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * L_0 = (TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 *)il2cpp_codegen_object_new(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		TextureResizer__ctor_m6721BA5062E7500D5262399E220ECEAF4CA1A054(L_0, /*hidden argument*/NULL);
		__this->set_resizer_9(L_0);
		// devices = WebCamTexture.devices;
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_1;
		L_1 = WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C(/*hidden argument*/NULL);
		__this->set_devices_11(L_1);
		// string cameraName = Application.isEditor
		//     ? editorCameraName
		//     : WebCamUtil.FindName(preferKind, isFrontFacing);
		bool L_2;
		L_2 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_3 = __this->get_preferKind_5();
		bool L_4 = __this->get_isFrontFacing_6();
		String_t* L_5;
		L_5 = WebCamUtil_FindName_m60A077352689F14A0D8D4BA7952447DE25913E46(L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0036;
	}

IL_0030:
	{
		String_t* L_6 = __this->get_editorCameraName_4();
		G_B3_0 = L_6;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		// WebCamDevice device = default;
		il2cpp_codegen_initobj((&V_1), sizeof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C ));
		// for (int i = 0; i < devices.Length; i++)
		V_2 = 0;
		goto IL_0076;
	}

IL_0043:
	{
		// if (devices[i].name == cameraName)
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_7 = __this->get_devices_11();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// device = devices[i];
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_12 = __this->get_devices_11();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
		// deviceIndex = i;
		int32_t L_16 = V_2;
		__this->set_deviceIndex_13(L_16);
		// break;
		goto IL_0081;
	}

IL_0072:
	{
		// for (int i = 0; i < devices.Length; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = 0; i < devices.Length; i++)
		int32_t L_18 = V_2;
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_19 = __this->get_devices_11();
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0043;
		}
	}

IL_0081:
	{
		// StartCamera(device);
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_20 = V_1;
		WebCamInput_StartCamera_m7E0B2CB2A9D4A68CA44B4238CEBDE2020BDAAD65(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.WebCamInput::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_OnDestroy_mF93CEECF004ED740B8D04DB183A9762EDD1C6678 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, const RuntimeMethod* method)
{
	TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * G_B2_0 = NULL;
	TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * G_B1_0 = NULL;
	{
		// StopCamera();
		WebCamInput_StopCamera_m42717B91C108A06D2015D514DC45AAB6BC0EDD3C(__this, /*hidden argument*/NULL);
		// resizer?.Dispose();
		TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * L_0 = __this->get_resizer_9();
		TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		TextureResizer_Dispose_mA290FC8051124CE3BB5F16C5B8DCD1D12596E286(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.WebCamInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_Update_m537AF99C5FCB462BFA38DE4C18A3EDC865A681D5 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m5B2E9FDA26F8678E0532EEF7E34ED319BBB4A75A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	{
		// if (!webCamTexture.didUpdateThisFrame) return;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = ((WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var))->get_webCamTexture_10();
		NullCheck(L_0);
		bool L_1;
		L_1 = WebCamTexture_get_didUpdateThisFrame_mED5BE2074F4E127B1A37DD577F7CAF1235E581CE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (!webCamTexture.didUpdateThisFrame) return;
		return;
	}

IL_000d:
	{
		// var tex = NormalizeWebcam(webCamTexture, Screen.width, Screen.height, isFrontFacing);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_2 = ((WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var))->get_webCamTexture_10();
		int32_t L_3;
		L_3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		bool L_5 = __this->get_isFrontFacing_6();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6;
		L_6 = WebCamInput_NormalizeWebcam_m4895B5D2B58B6549F0060AE2495EF9FAC7C4FA37(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// OnTextureUpdate.Invoke(tex);
		TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 * L_7 = __this->get_OnTextureUpdate_8();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_0;
		NullCheck(L_7);
		UnityEvent_1_Invoke_m5B2E9FDA26F8678E0532EEF7E34ED319BBB4A75A(L_7, L_8, /*hidden argument*/UnityEvent_1_Invoke_m5B2E9FDA26F8678E0532EEF7E34ED319BBB4A75A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TensorFlowLite.WebCamInput::ToggleCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_ToggleCamera_m29F960FED083A3DBA5FB22C7071527AE50919A02 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, const RuntimeMethod* method)
{
	{
		// deviceIndex = (deviceIndex + 1) % devices.Length;
		int32_t L_0 = __this->get_deviceIndex_13();
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_1 = __this->get_devices_11();
		NullCheck(L_1);
		__this->set_deviceIndex_13(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))));
		// StartCamera(devices[deviceIndex]);
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_2 = __this->get_devices_11();
		int32_t L_3 = __this->get_deviceIndex_13();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		WebCamInput_StartCamera_m7E0B2CB2A9D4A68CA44B4238CEBDE2020BDAAD65(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.WebCamInput::StartCamera(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_StartCamera_m7E0B2CB2A9D4A68CA44B4238CEBDE2020BDAAD65 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCamera();
		WebCamInput_StopCamera_m42717B91C108A06D2015D514DC45AAB6BC0EDD3C(__this, /*hidden argument*/NULL);
		// isFrontFacing = device.isFrontFacing;
		bool L_0;
		L_0 = WebCamDevice_get_isFrontFacing_m43547AAF7B0729DB1962456A3EFF161B5E273E15((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&___device0), /*hidden argument*/NULL);
		__this->set_isFrontFacing_6(L_0);
		// webCamTexture = new WebCamTexture(device.name, Screen.width, Screen.height, requestFps);
		String_t* L_1;
		L_1 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&___device0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_4 = __this->get_requestFps_7();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_5 = (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 *)il2cpp_codegen_object_new(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m8369712442E77D9130CD2F76A3FA4846F74F16CB(L_5, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		((WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var))->set_webCamTexture_10(L_5);
		// webCamTexture.Play();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_6 = ((WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var))->get_webCamTexture_10();
		NullCheck(L_6);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.WebCamInput::StopCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput_StopCamera_m42717B91C108A06D2015D514DC45AAB6BC0EDD3C (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webCamTexture == null)
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = ((WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var))->get_webCamTexture_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// webCamTexture.Stop();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_2 = ((WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var))->get_webCamTexture_10();
		NullCheck(L_2);
		WebCamTexture_Stop_m55FF77D033EF17D83A6B717418EBA39F174B5708(L_2, /*hidden argument*/NULL);
		// Destroy(webCamTexture);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_3 = ((WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF_il2cpp_TypeInfo_var))->get_webCamTexture_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.RenderTexture TensorFlowLite.WebCamInput::NormalizeWebcam(UnityEngine.WebCamTexture,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * WebCamInput_NormalizeWebcam_m4895B5D2B58B6549F0060AE2495EF9FAC7C4FA37 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___texture0, int32_t ___width1, int32_t ___height2, bool ___isFrontFacing3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	bool G_B5_0 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	{
		// int cameraWidth = texture.width;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		// int cameraHeight = texture.height;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = L_3;
		// bool isPortrait = IsPortrait(texture);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_4 = ___texture0;
		bool L_5;
		L_5 = WebCamInput_IsPortrait_m4C887381CEFBA19F31F04E86194A769FA51EBE76(L_4, /*hidden argument*/NULL);
		// if (isPortrait)
		bool L_6 = L_5;
		G_B1_0 = L_6;
		if (!L_6)
		{
			G_B2_0 = L_6;
			goto IL_001f;
		}
	}
	{
		// (cameraWidth, cameraHeight) = (cameraHeight, cameraWidth); // swap
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		V_9 = L_8;
		V_0 = L_7;
		int32_t L_9 = V_9;
		V_1 = L_9;
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		// float cameraAspect = (float)cameraWidth / (float)cameraHeight;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_2 = ((float)((float)((float)((float)L_10))/(float)((float)((float)L_11))));
		// float targetAspect = (float)width / (float)height;
		int32_t L_12 = ___width1;
		int32_t L_13 = ___height2;
		V_3 = ((float)((float)((float)((float)L_12))/(float)((float)((float)L_13))));
		// fitter.aspectRatio = cameraAspect;
		AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * L_14 = __this->get_fitter_12();
		float L_15 = V_2;
		NullCheck(L_14);
		AspectRatioFitter_set_aspectRatio_mA12F8575EB30A7B2E734F188169FA7F91192BB67(L_14, L_15, /*hidden argument*/NULL);
		// if (cameraAspect > targetAspect)
		float L_16 = V_2;
		float L_17 = V_3;
		G_B3_0 = G_B2_0;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			G_B4_0 = G_B2_0;
			goto IL_004b;
		}
	}
	{
		// w = Mathf.FloorToInt(cameraHeight * targetAspect);
		int32_t L_18 = V_1;
		float L_19 = V_3;
		int32_t L_20;
		L_20 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)((float)L_18)), (float)L_19)), /*hidden argument*/NULL);
		V_4 = L_20;
		// h = cameraHeight;
		int32_t L_21 = V_1;
		V_5 = L_21;
		// }
		G_B5_0 = G_B3_0;
		goto IL_0059;
	}

IL_004b:
	{
		// w = cameraWidth;
		int32_t L_22 = V_0;
		V_4 = L_22;
		// h = Mathf.FloorToInt(cameraWidth / targetAspect);
		int32_t L_23 = V_0;
		float L_24 = V_3;
		int32_t L_25;
		L_25 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)((float)((float)L_23))/(float)L_24)), /*hidden argument*/NULL);
		V_5 = L_25;
		G_B5_0 = G_B4_0;
	}

IL_0059:
	{
		// int rotation = texture.videoRotationAngle;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_26 = ___texture0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = WebCamTexture_get_videoRotationAngle_m9B0EEDBECFA382495009929499D89B29F55D9714(L_26, /*hidden argument*/NULL);
		V_8 = L_27;
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_28;
		L_28 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)11)))))
		{
			G_B7_0 = G_B5_0;
			goto IL_006f;
		}
	}
	{
		// rotation = -rotation;
		int32_t L_29 = V_8;
		V_8 = ((-L_29));
		G_B7_0 = G_B6_0;
	}

IL_006f:
	{
		// if (isPortrait)
		if (!G_B7_0)
		{
			goto IL_008f;
		}
	}
	{
		// mtx = TextureResizer.GetVertTransform(rotation, texture.videoVerticallyMirrored, isFrontFacing);
		int32_t L_30 = V_8;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_31 = ___texture0;
		NullCheck(L_31);
		bool L_32;
		L_32 = WebCamTexture_get_videoVerticallyMirrored_m8ADBDC6A53EE4F84C6EEEE61B1B1A1E696C2B83D(L_31, /*hidden argument*/NULL);
		bool L_33 = ___isFrontFacing3;
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_34;
		L_34 = TextureResizer_GetVertTransform_mE13D33CB6EA4D0F19499C928708D0DEC4E80DD18(((float)((float)L_30)), L_32, L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		// uvRect = TextureResizer.GetTextureST(targetAspect, cameraAspect, AspectMode.Fill);
		float L_35 = V_3;
		float L_36 = V_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_37;
		L_37 = TextureResizer_GetTextureST_mAE670BDA6C1CEA54BD9887FCA1528CB668BB85DE(L_35, L_36, 2, /*hidden argument*/NULL);
		V_7 = L_37;
		// }
		goto IL_00ab;
	}

IL_008f:
	{
		// mtx = TextureResizer.GetVertTransform(rotation, isFrontFacing, texture.videoVerticallyMirrored);
		int32_t L_38 = V_8;
		bool L_39 = ___isFrontFacing3;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_40 = ___texture0;
		NullCheck(L_40);
		bool L_41;
		L_41 = WebCamTexture_get_videoVerticallyMirrored_m8ADBDC6A53EE4F84C6EEEE61B1B1A1E696C2B83D(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_42;
		L_42 = TextureResizer_GetVertTransform_mE13D33CB6EA4D0F19499C928708D0DEC4E80DD18(((float)((float)L_38)), L_39, L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		// uvRect = TextureResizer.GetTextureST(cameraAspect, targetAspect, AspectMode.Fill);
		float L_43 = V_2;
		float L_44 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_45;
		L_45 = TextureResizer_GetTextureST_mAE670BDA6C1CEA54BD9887FCA1528CB668BB85DE(L_43, L_44, 2, /*hidden argument*/NULL);
		V_7 = L_45;
	}

IL_00ab:
	{
		// return resizer.Resize(texture, w, h, false, mtx, uvRect);
		TextureResizer_t01956A33867369691586E499EC4AA8009A7B0575 * L_46 = __this->get_resizer_9();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_47 = ___texture0;
		int32_t L_48 = V_4;
		int32_t L_49 = V_5;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_50 = V_6;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_51 = V_7;
		NullCheck(L_46);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_52;
		L_52 = TextureResizer_Resize_mA28F7C774F4F4437234A51906E49E9AFABDA274E(L_46, L_47, L_48, L_49, (bool)0, L_50, L_51, /*hidden argument*/NULL);
		return L_52;
	}
}
// System.Boolean TensorFlowLite.WebCamInput::IsPortrait(UnityEngine.WebCamTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamInput_IsPortrait_m4C887381CEFBA19F31F04E86194A769FA51EBE76 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___texture0, const RuntimeMethod* method)
{
	{
		// return texture.videoRotationAngle == 90 || texture.videoRotationAngle == 270;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebCamTexture_get_videoRotationAngle_m9B0EEDBECFA382495009929499D89B29F55D9714(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)90))))
		{
			goto IL_0018;
		}
	}
	{
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WebCamTexture_get_videoRotationAngle_m9B0EEDBECFA382495009929499D89B29F55D9714(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)((int32_t)270)))? 1 : 0);
	}

IL_0018:
	{
		return (bool)1;
	}
}
// System.Void TensorFlowLite.WebCamInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamInput__ctor_m43B8E3A89BB077CE77F7CBC2F4ACFE29B42E1E81 (WebCamInput_t878AA4BCAF08479BD23A2650EB16F89F3CC05ACF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private WebCamKind preferKind = WebCamKind.UltraWideAngle;
		__this->set_preferKind_5(4);
		// [SerializeField] private int requestFps = 60;
		__this->set_requestFps_7(((int32_t)60));
		// public TextureUpdateEvent OnTextureUpdate = new TextureUpdateEvent();
		TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 * L_0 = (TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 *)il2cpp_codegen_object_new(TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14_il2cpp_TypeInfo_var);
		TextureUpdateEvent__ctor_m82C498637227A548FBBEC520ABC7265742FE7085(L_0, /*hidden argument*/NULL);
		__this->set_OnTextureUpdate_8(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.WebCamName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamName__ctor_m57DFAF16C44F58AC78F61ACB7B959B31DCB14069 (WebCamName_t78A858FDAD229F0DAE08C91DB342CE0B8F163920 * __this, const RuntimeMethod* method)
{
	{
		// public WebCamName()
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String TensorFlowLite.WebCamUtil::FindName(TensorFlowLite.WebCamUtil/PreferSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamUtil_FindName_mAA754FD0B2643CCD6857359BE566C0C9F0C54AED (PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B  ___spec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F20CCA32326376F782EE49B698CA5AE8B422AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mE0DBB61EE2F07C43EE90FFE59DA18800291598EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CFindNameU3Eb__0_mAEBC9ABF478C8F145C2D47E8E56F0D9D06A6617F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C * V_0 = NULL;
	WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* V_1 = NULL;
	WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C * L_0 = (U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m9550372A3DDFD90E3D7CC0C8BD9B25B135253D08(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C * L_1 = V_0;
		PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B  L_2 = ___spec0;
		NullCheck(L_1);
		L_1->set_spec_0(L_2);
		// var devices = WebCamTexture.devices;
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_3;
		L_3 = WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C(/*hidden argument*/NULL);
		V_1 = L_3;
		// if (Application.isMobilePlatform)
		bool L_4;
		L_4 = Application_get_isMobilePlatform_m86CE0D4224E9F3E4DC8DFF848C5E559F4B3E622E(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// var prefers = devices.OrderByDescending(d => spec.GetScore(d));
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_5 = V_1;
		U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C * L_6 = V_0;
		Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 * L_7 = (Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7 *)il2cpp_codegen_object_new(Func_2_t645A4207AEC97B6EC0AF02C435A636546ADABAA7_il2cpp_TypeInfo_var);
		Func_2__ctor_mE0DBB61EE2F07C43EE90FFE59DA18800291598EC(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CFindNameU3Eb__0_mAEBC9ABF478C8F145C2D47E8E56F0D9D06A6617F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE0DBB61EE2F07C43EE90FFE59DA18800291598EC_RuntimeMethod_var);
		RuntimeObject* L_8;
		L_8 = Enumerable_OrderByDescending_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F20CCA32326376F782EE49B698CA5AE8B422AF3((RuntimeObject*)(RuntimeObject*)L_5, L_7, /*hidden argument*/Enumerable_OrderByDescending_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F20CCA32326376F782EE49B698CA5AE8B422AF3_RuntimeMethod_var);
		// return prefers.First().name;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_9;
		L_9 = Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B(L_8, /*hidden argument*/Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B_RuntimeMethod_var);
		V_2 = L_9;
		String_t* L_10;
		L_10 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_2), /*hidden argument*/NULL);
		return L_10;
	}

IL_003a:
	{
		// return devices.First().name;
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_11 = V_1;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_12;
		L_12 = Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B((RuntimeObject*)(RuntimeObject*)L_11, /*hidden argument*/Enumerable_First_TisWebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_m838047A7FDEF5D9EF3585B71284D388152E85D8B_RuntimeMethod_var);
		V_2 = L_12;
		String_t* L_13;
		L_13 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_2), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.String TensorFlowLite.WebCamUtil::FindName(UnityEngine.WebCamKind,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamUtil_FindName_m60A077352689F14A0D8D4BA7952447DE25913E46 (int32_t ___kind0, bool ___isFrontFacing1, const RuntimeMethod* method)
{
	{
		// return FindName(new PreferSpec(kind, isFrontFacing));
		int32_t L_0 = ___kind0;
		bool L_1 = ___isFrontFacing1;
		PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B  L_2;
		memset((&L_2), 0, sizeof(L_2));
		PreferSpec__ctor_mF3A62067091086890C9F1CF7FEF24CC16A87E4DA((&L_2), L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = WebCamUtil_FindName_mAA754FD0B2643CCD6857359BE566C0C9F0C54AED(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC008B3E5D21E9B077F851A4FB021154C8F089D9A (U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::<Softmax>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__0_m48259DB36BED661EFFEF9AF1D8716C0548E9D736 (U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * __this, float ___n0, const RuntimeMethod* method)
{
	{
		// var expArr = arr.Select(n => Mathf.Exp(n - max));
		float L_0 = ___n0;
		float L_1 = __this->get_max_0();
		float L_2;
		L_2 = expf(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		return L_2;
	}
}
// System.Single TensorFlowLite.MathTF/<>c__DisplayClass4_0::<Softmax>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass4_0_U3CSoftmaxU3Eb__1_mC77BBE2D6D6D27C5CF19902F855526EE256C3754 (U3CU3Ec__DisplayClass4_0_t77D0B5F2B920E66D76CF1D365A38CC23AB1237BE * __this, float ___n0, const RuntimeMethod* method)
{
	{
		// return expArr.Select(n => n / sum);
		float L_0 = ___n0;
		float L_1 = __this->get_sum_1();
		return ((float)((float)L_0/(float)L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.MathTF/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB0F25F5230830A292796C4EFC24FB2F23B4EE5B1 (U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::<Softmax>b__0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__0_m986B2E5EF684F3F2CD817810145BF759A90030D2 (U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * __this, double ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var expArr = arr.Select(n => Math.Exp(n - max));
		double L_0 = ___n0;
		double L_1 = __this->get_max_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = exp(((double)il2cpp_codegen_subtract((double)L_0, (double)L_1)));
		return L_2;
	}
}
// System.Double TensorFlowLite.MathTF/<>c__DisplayClass5_0::<Softmax>b__1(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec__DisplayClass5_0_U3CSoftmaxU3Eb__1_m06DA1EFB275CBB4C9F2A40E65BFB4D88FF505F36 (U3CU3Ec__DisplayClass5_0_t9C1424314979F05B113757E4B011BAB93F90A1EB * __this, double ___n0, const RuntimeMethod* method)
{
	{
		// return expArr.Select(n => n / sum);
		double L_0 = ___n0;
		double L_1 = __this->get_sum_1();
		return ((double)((double)L_0/(double)L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::.ctor(UnityEngine.Mesh,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer__ctor_m9818D17B5A9D2AD635B7479E797C956852151371 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, int32_t ___initialSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MeshBuffer(Mesh mesh, int initialSize = 256)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		__this->set_mesh_0(L_0);
		// buffer = new Matrix4x4[initialSize];
		int32_t L_1 = ___initialSize1;
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_2 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_buffer_1(L_2);
		// index = 0;
		__this->set_index_2(0);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Dispose_m05F153E7179C780FCF62B9A3641C9DFD5738C708 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, const RuntimeMethod* method)
{
	{
		// mesh = null;
		__this->set_mesh_0((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
		// buffer = null;
		__this->set_buffer_1((Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Clear_m5B39C7A2E8101CB5070934FFABF2FD142DC63204 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, const RuntimeMethod* method)
{
	{
		// index = 0;
		__this->set_index_2(0);
		// }
		return;
	}
}
// System.Void TensorFlowLite.PrimitiveDraw/MeshBuffer::Add(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuffer_Add_m323FA45FCDF2AC7B556209445E0B5387E8E621A7 (MeshBuffer_t3523474F01A20D91A8F897BF807C147459D86058 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___mtx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD356BAD4D0F4DD6D4F4A44A9BD87D2917B639F3A);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* V_0 = NULL;
	{
		// buffer[index] = mtx;
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_index_2();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_2 = ___mtx0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3 = (*(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_2);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_3);
		// index++;
		int32_t L_4 = __this->get_index_2();
		__this->set_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// if (index >= buffer.Length)
		int32_t L_5 = __this->get_index_2();
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_6 = __this->get_buffer_1();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0082;
		}
	}
	{
		// var newBuffer = new Matrix4x4[buffer.Length * 2];
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_7 = __this->get_buffer_1();
		NullCheck(L_7);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_8 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)2)));
		V_0 = L_8;
		// System.Array.Copy(buffer, newBuffer, buffer.Length);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_9 = __this->get_buffer_1();
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_10 = V_0;
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_11 = __this->get_buffer_1();
		NullCheck(L_11);
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_9, (RuntimeArray *)(RuntimeArray *)L_10, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		// buffer = newBuffer;
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_12 = V_0;
		__this->set_buffer_1(L_12);
		// Debug.Log($"Allocate new buffer: {newBuffer.Length} mesh: {mesh.name}");
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_16 = __this->get_mesh_0();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD356BAD4D0F4DD6D4F4A44A9BD87D2917B639F3A, L_15, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_18, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshal_pinvoke(const ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239& unmarshaled, ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___rotationDegree_2 = unmarshaled.get_rotationDegree_2();
	marshaled.___mirrorHorizontal_3 = static_cast<int32_t>(unmarshaled.get_mirrorHorizontal_3());
	marshaled.___mirrorVertical_4 = static_cast<int32_t>(unmarshaled.get_mirrorVertical_4());
	marshaled.___aspectMode_5 = unmarshaled.get_aspectMode_5();
}
IL2CPP_EXTERN_C void ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshal_pinvoke_back(const ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_pinvoke& marshaled, ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	float unmarshaled_rotationDegree_temp_2 = 0.0f;
	unmarshaled_rotationDegree_temp_2 = marshaled.___rotationDegree_2;
	unmarshaled.set_rotationDegree_2(unmarshaled_rotationDegree_temp_2);
	bool unmarshaled_mirrorHorizontal_temp_3 = false;
	unmarshaled_mirrorHorizontal_temp_3 = static_cast<bool>(marshaled.___mirrorHorizontal_3);
	unmarshaled.set_mirrorHorizontal_3(unmarshaled_mirrorHorizontal_temp_3);
	bool unmarshaled_mirrorVertical_temp_4 = false;
	unmarshaled_mirrorVertical_temp_4 = static_cast<bool>(marshaled.___mirrorVertical_4);
	unmarshaled.set_mirrorVertical_4(unmarshaled_mirrorVertical_temp_4);
	int32_t unmarshaled_aspectMode_temp_5 = 0;
	unmarshaled_aspectMode_temp_5 = marshaled.___aspectMode_5;
	unmarshaled.set_aspectMode_5(unmarshaled_aspectMode_temp_5);
}
// Conversion method for clean up from marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshal_pinvoke_cleanup(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshal_com(const ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239& unmarshaled, ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___rotationDegree_2 = unmarshaled.get_rotationDegree_2();
	marshaled.___mirrorHorizontal_3 = static_cast<int32_t>(unmarshaled.get_mirrorHorizontal_3());
	marshaled.___mirrorVertical_4 = static_cast<int32_t>(unmarshaled.get_mirrorVertical_4());
	marshaled.___aspectMode_5 = unmarshaled.get_aspectMode_5();
}
IL2CPP_EXTERN_C void ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshal_com_back(const ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_com& marshaled, ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	float unmarshaled_rotationDegree_temp_2 = 0.0f;
	unmarshaled_rotationDegree_temp_2 = marshaled.___rotationDegree_2;
	unmarshaled.set_rotationDegree_2(unmarshaled_rotationDegree_temp_2);
	bool unmarshaled_mirrorHorizontal_temp_3 = false;
	unmarshaled_mirrorHorizontal_temp_3 = static_cast<bool>(marshaled.___mirrorHorizontal_3);
	unmarshaled.set_mirrorHorizontal_3(unmarshaled_mirrorHorizontal_temp_3);
	bool unmarshaled_mirrorVertical_temp_4 = false;
	unmarshaled_mirrorVertical_temp_4 = static_cast<bool>(marshaled.___mirrorVertical_4);
	unmarshaled.set_mirrorVertical_4(unmarshaled_mirrorVertical_temp_4);
	int32_t unmarshaled_aspectMode_temp_5 = 0;
	unmarshaled_aspectMode_temp_5 = marshaled.___aspectMode_5;
	unmarshaled.set_aspectMode_5(unmarshaled_aspectMode_temp_5);
}
// Conversion method for clean up from marshalling of: TensorFlowLite.TextureResizer/ResizeOptions
IL2CPP_EXTERN_C void ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshal_com_cleanup(ResizeOptions_tCCEA1F99E917B279F58E7C0CBB3A75AA2032A239_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_MoveNext_mA4792F4798AA8CB1B3EC8B542252FCA43F39B605 (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * V_1 = NULL;
	bool V_2 = false;
	Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_4;
	memset((&V_4), 0, sizeof(V_4));
	SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  V_6;
	memset((&V_6), 0, sizeof(V_6));
	SwitchToThreadPoolAwaitable_t4D34FB36C1586BB62ABB20946858B444B090E88B  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Exception_t * V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005e;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00f9;
			}
		}

IL_0018:
		{
			// await UniTask.SwitchToMainThread(PlayerLoopTiming.FixedUpdate);
			il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
			SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D  L_5;
			L_5 = UniTask_SwitchToMainThread_mC8680FF4361781703C77714338255C92299E3D9E(4, L_4, /*hidden argument*/NULL);
			V_5 = L_5;
			Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  L_6;
			L_6 = SwitchToMainThreadAwaitable_GetAwaiter_mFC830FB5C808F89C8729593C722FA6F487B4DB08((SwitchToMainThreadAwaitable_t3E92CCA5E7ECE583666D3A48B86EA02A2B173C6D *)(&V_5), /*hidden argument*/NULL);
			V_3 = L_6;
			bool L_7;
			L_7 = Awaiter_get_IsCompleted_m138B6E5A6B3430455D4B55C05BE3532162F30FE6((Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A *)(&V_3), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_007a;
			}
		}

IL_003b:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  L_9 = V_3;
			__this->set_U3CU3Eu__1_8(L_9);
			AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_inline((AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *)L_10, (Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A *)(&V_3), (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_RuntimeMethod_var);
			goto IL_0206;
		}

IL_005e:
		{
			Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A  L_11 = __this->get_U3CU3Eu__1_8();
			V_3 = L_11;
			Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * L_12 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_12, sizeof(Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_007a:
		{
			Awaiter_GetResult_m861EC6CC0A77F9B948CC7CD2D828F1528CE00C06((Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A *)(&V_3), /*hidden argument*/NULL);
			// var pixels = FetchToTexture2D(texture).GetRawTextureData<Color32>();
			TextureToTensor_t6274ADB5DC123C9C388B4A3D7D6E149EFDBBC5E8 * L_14 = V_1;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = __this->get_texture_3();
			NullCheck(L_14);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16;
			L_16 = TextureToTensor_FetchToTexture2D_mAF2ED8016CA5102E2C3A19512788852BED5E14AD(L_14, L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  L_17;
			L_17 = Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1(L_16, /*hidden argument*/Texture2D_GetRawTextureData_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m792AC6F83A12A4E1D848CDE63212F58BE53698F1_RuntimeMethod_var);
			__this->set_U3CpixelsU3E5__2_5(L_17);
			// int width = texture.width;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = __this->get_texture_3();
			NullCheck(L_18);
			int32_t L_19;
			L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
			__this->set_U3CwidthU3E5__3_6(L_19);
			// int height = texture.height - 1;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = __this->get_texture_3();
			NullCheck(L_20);
			int32_t L_21;
			L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
			__this->set_U3CheightU3E5__4_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
			// await UniTask.SwitchToThreadPool();
			IL2CPP_RUNTIME_CLASS_INIT(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
			SwitchToThreadPoolAwaitable_t4D34FB36C1586BB62ABB20946858B444B090E88B  L_22;
			L_22 = UniTask_SwitchToThreadPool_mC2F9617F11B19ACCCBA6C3F1C32ED8F6C5D413EF(/*hidden argument*/NULL);
			V_7 = L_22;
			Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  L_23;
			L_23 = SwitchToThreadPoolAwaitable_GetAwaiter_mD3769DD4F4A7834209AC241A4517F166A0154BAA((SwitchToThreadPoolAwaitable_t4D34FB36C1586BB62ABB20946858B444B090E88B *)(&V_7), /*hidden argument*/NULL);
			V_6 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m4C89AF3FDE04C7014541CD672C937F2701CAA518((Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 *)(&V_6), /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_0116;
			}
		}

IL_00d5:
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  L_26 = V_6;
			__this->set_U3CU3Eu__2_9(L_26);
			AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_inline((AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *)L_27, (Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 *)(&V_6), (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_RuntimeMethod_var);
			goto IL_0206;
		}

IL_00f9:
		{
			Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057  L_28 = __this->get_U3CU3Eu__2_9();
			V_6 = L_28;
			Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * L_29 = __this->get_address_of_U3CU3Eu__2_9();
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_0116:
		{
			Awaiter_GetResult_mD4B616BBDC48A489653562EF032240564C51E11B((Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 *)(&V_6), /*hidden argument*/NULL);
			// for (int i = 0; i < pixels.Length; i++)
			V_8 = 0;
			goto IL_01c3;
		}

IL_0125:
		{
			// int y = height - i / width;
			int32_t L_31 = __this->get_U3CheightU3E5__4_7();
			int32_t L_32 = V_8;
			int32_t L_33 = __this->get_U3CwidthU3E5__3_6();
			V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)((int32_t)L_32/(int32_t)L_33))));
			// int x = i % width;
			int32_t L_34 = V_8;
			int32_t L_35 = __this->get_U3CwidthU3E5__3_6();
			V_10 = ((int32_t)((int32_t)L_34%(int32_t)L_35));
			// inputs[y, x, 0] = (float)(pixels[i].r) / scale;
			SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_36 = __this->get_inputs_4();
			int32_t L_37 = V_9;
			int32_t L_38 = V_10;
			NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D * L_39 = __this->get_address_of_U3CpixelsU3E5__2_5();
			int32_t L_40 = V_8;
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_41;
			L_41 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)L_39)->___m_Buffer_0, L_40);
			uint8_t L_42 = L_41.get_r_1();
			NullCheck(L_36);
			(L_36)->SetAt(L_37, L_38, 0, ((float)((float)((float)((float)L_42))/(float)(255.0f))));
			// inputs[y, x, 1] = (float)(pixels[i].g) / scale;
			SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_43 = __this->get_inputs_4();
			int32_t L_44 = V_9;
			int32_t L_45 = V_10;
			NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D * L_46 = __this->get_address_of_U3CpixelsU3E5__2_5();
			int32_t L_47 = V_8;
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_48;
			L_48 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)L_46)->___m_Buffer_0, L_47);
			uint8_t L_49 = L_48.get_g_2();
			NullCheck(L_43);
			(L_43)->SetAt(L_44, L_45, 1, ((float)((float)((float)((float)L_49))/(float)(255.0f))));
			// inputs[y, x, 2] = (float)(pixels[i].b) / scale;
			SingleU5BU2CU2CU5D_t9FB63FBDE2078D789023A5352FF90CAE8934E087* L_50 = __this->get_inputs_4();
			int32_t L_51 = V_9;
			int32_t L_52 = V_10;
			NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D * L_53 = __this->get_address_of_U3CpixelsU3E5__2_5();
			int32_t L_54 = V_8;
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_55;
			L_55 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , ((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)L_53)->___m_Buffer_0, L_54);
			uint8_t L_56 = L_55.get_b_3();
			NullCheck(L_50);
			(L_50)->SetAt(L_51, L_52, 2, ((float)((float)((float)((float)L_56))/(float)(255.0f))));
			// for (int i = 0; i < pixels.Length; i++)
			int32_t L_57 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		}

IL_01c3:
		{
			// for (int i = 0; i < pixels.Length; i++)
			int32_t L_58 = V_8;
			NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D * L_59 = __this->get_address_of_U3CpixelsU3E5__2_5();
			int32_t L_60;
			L_60 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D *)L_59)->___m_Length_1);
			if ((((int32_t)L_58) < ((int32_t)L_60)))
			{
				goto IL_0125;
			}
		}

IL_01d5:
		{
			// return true;
			V_2 = (bool)1;
			goto IL_01f2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d9;
		}
		throw e;
	}

CATCH_01d9:
	{// begin catch(System.Exception)
		V_11 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_62 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m55F67D834141C2905E9688540EB3585651E08C1F_inline((AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *)L_61, L_62, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m55F67D834141C2905E9688540EB3585651E08C1F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0206;
	}// end catch (depth: 1)

IL_01f2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_64 = V_2;
		AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_inline((AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *)L_63, L_64, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_RuntimeMethod_var);
	}

IL_0206:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CToTensorAsyncU3Ed__15_MoveNext_mA4792F4798AA8CB1B3EC8B542252FCA43F39B605_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *>(__this + _offset);
	U3CToTensorAsyncU3Ed__15_MoveNext_mA4792F4798AA8CB1B3EC8B542252FCA43F39B605(_thisAdjusted, method);
}
// System.Void TensorFlowLite.TextureToTensor/<ToTensorAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToTensorAsyncU3Ed__15_SetStateMachine_m17D1638513F8C6F57F6B856795DEF8ECB07D911B (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_m8F6F47B343AF0B1C5DA24AA9AA23026954A77AC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_m8F6F47B343AF0B1C5DA24AA9AA23026954A77AC4((AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 *)L_0, L_1, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetStateMachine_m8F6F47B343AF0B1C5DA24AA9AA23026954A77AC4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CToTensorAsyncU3Ed__15_SetStateMachine_m17D1638513F8C6F57F6B856795DEF8ECB07D911B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *>(__this + _offset);
	U3CToTensorAsyncU3Ed__15_SetStateMachine_m17D1638513F8C6F57F6B856795DEF8ECB07D911B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.WebCamInput/TextureUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUpdateEvent__ctor_m82C498637227A548FBBEC520ABC7265742FE7085 (TextureUpdateEvent_tF4404C2D5E2EB51512C62ED8A756DBBA50AC2D14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m05DC188D92C9F6FD42CE7905370B22DE551A1E63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m05DC188D92C9F6FD42CE7905370B22DE551A1E63(__this, /*hidden argument*/UnityEvent_1__ctor_m05DC188D92C9F6FD42CE7905370B22DE551A1E63_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.WebCamUtil/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9550372A3DDFD90E3D7CC0C8BD9B25B135253D08 (U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TensorFlowLite.WebCamUtil/<>c__DisplayClass1_0::<FindName>b__0(UnityEngine.WebCamDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass1_0_U3CFindNameU3Eb__0_mAEBC9ABF478C8F145C2D47E8E56F0D9D06A6617F (U3CU3Ec__DisplayClass1_0_t1BE3F21F9A1B8A22319E2B6B43060E5D11EB751C * __this, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  ___d0, const RuntimeMethod* method)
{
	{
		// var prefers = devices.OrderByDescending(d => spec.GetScore(d));
		PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * L_0 = __this->get_address_of_spec_0();
		int32_t L_1;
		L_1 = PreferSpec_GetScore_m40DC4E1DC64F9664D81395A25647DEC82B8C1A3A((PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B *)L_0, (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&___d0), /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshal_pinvoke(const PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B& unmarshaled, PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_pinvoke& marshaled)
{
	marshaled.___kind_0 = unmarshaled.get_kind_0();
	marshaled.___isFrontFacing_1 = static_cast<int32_t>(unmarshaled.get_isFrontFacing_1());
}
IL2CPP_EXTERN_C void PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshal_pinvoke_back(const PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_pinvoke& marshaled, PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B& unmarshaled)
{
	int32_t unmarshaled_kind_temp_0 = 0;
	unmarshaled_kind_temp_0 = marshaled.___kind_0;
	unmarshaled.set_kind_0(unmarshaled_kind_temp_0);
	bool unmarshaled_isFrontFacing_temp_1 = false;
	unmarshaled_isFrontFacing_temp_1 = static_cast<bool>(marshaled.___isFrontFacing_1);
	unmarshaled.set_isFrontFacing_1(unmarshaled_isFrontFacing_temp_1);
}
// Conversion method for clean up from marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshal_pinvoke_cleanup(PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshal_com(const PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B& unmarshaled, PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_com& marshaled)
{
	marshaled.___kind_0 = unmarshaled.get_kind_0();
	marshaled.___isFrontFacing_1 = static_cast<int32_t>(unmarshaled.get_isFrontFacing_1());
}
IL2CPP_EXTERN_C void PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshal_com_back(const PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_com& marshaled, PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B& unmarshaled)
{
	int32_t unmarshaled_kind_temp_0 = 0;
	unmarshaled_kind_temp_0 = marshaled.___kind_0;
	unmarshaled.set_kind_0(unmarshaled_kind_temp_0);
	bool unmarshaled_isFrontFacing_temp_1 = false;
	unmarshaled_isFrontFacing_temp_1 = static_cast<bool>(marshaled.___isFrontFacing_1);
	unmarshaled.set_isFrontFacing_1(unmarshaled_isFrontFacing_temp_1);
}
// Conversion method for clean up from marshalling of: TensorFlowLite.WebCamUtil/PreferSpec
IL2CPP_EXTERN_C void PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshal_com_cleanup(PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B_marshaled_com& marshaled)
{
}
// System.Void TensorFlowLite.WebCamUtil/PreferSpec::.ctor(UnityEngine.WebCamKind,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreferSpec__ctor_mF3A62067091086890C9F1CF7FEF24CC16A87E4DA (PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * __this, int32_t ___kind0, bool ___isFrontFacing1, const RuntimeMethod* method)
{
	{
		// this.kind = kind;
		int32_t L_0 = ___kind0;
		__this->set_kind_0(L_0);
		// this.isFrontFacing = isFrontFacing;
		bool L_1 = ___isFrontFacing1;
		__this->set_isFrontFacing_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PreferSpec__ctor_mF3A62067091086890C9F1CF7FEF24CC16A87E4DA_AdjustorThunk (RuntimeObject * __this, int32_t ___kind0, bool ___isFrontFacing1, const RuntimeMethod* method)
{
	PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B *>(__this + _offset);
	PreferSpec__ctor_mF3A62067091086890C9F1CF7FEF24CC16A87E4DA(_thisAdjusted, ___kind0, ___isFrontFacing1, method);
}
// System.Int32 TensorFlowLite.WebCamUtil/PreferSpec::GetScore(UnityEngine.WebCamDevice&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PreferSpec_GetScore_m40DC4E1DC64F9664D81395A25647DEC82B8C1A3A (PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * __this, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * ___device0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int score = 0;
		V_0 = 0;
		// if (device.isFrontFacing == isFrontFacing) score++;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * L_0 = ___device0;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_1 = (*(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)L_0);
		V_1 = L_1;
		bool L_2;
		L_2 = WebCamDevice_get_isFrontFacing_m43547AAF7B0729DB1962456A3EFF161B5E273E15((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_1), /*hidden argument*/NULL);
		bool L_3 = __this->get_isFrontFacing_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		// if (device.isFrontFacing == isFrontFacing) score++;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001c:
	{
		// if (device.kind == kind) score++;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * L_5 = ___device0;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_6 = (*(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)L_5);
		V_1 = L_6;
		int32_t L_7;
		L_7 = WebCamDevice_get_kind_mE58F245325F8DA6D84489AEA85E7531E8BAC5940((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_1), /*hidden argument*/NULL);
		int32_t L_8 = __this->get_kind_0();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0036;
		}
	}
	{
		// if (device.kind == kind) score++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		// return score;
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t PreferSpec_GetScore_m40DC4E1DC64F9664D81395A25647DEC82B8C1A3A_AdjustorThunk (RuntimeObject * __this, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * ___device0, const RuntimeMethod* method)
{
	PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PreferSpec_t8FD2366857652F3605A96F48B6D9EE729DF48A0B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PreferSpec_GetScore_m40DC4E1DC64F9664D81395A25647DEC82B8C1A3A(_thisAdjusted, ___device0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mD7DD9759C791823116719CAE8EE693E9C173E241_inline (float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		float L_3 = ___w3;
		__this->set_w_3(L_3);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))))));
		V_0 = ((float)((float)L_12));
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  AsyncUniTaskMethodBuilder_1_Create_m2AE0B9A9713FE03F9E48B784E255C28CB355A9B7_gshared_inline (const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 ));
		AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0  L_0 = V_0;
		return (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_mBA5F4E3F9ECD3FDD8F491648BC9882FA1EDDB1AD_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine0, const RuntimeMethod* method)
{
	{
		U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * L_0 = ___stateMachine0;
		U3CToTensorAsyncU3Ed__15_MoveNext_mA4792F4798AA8CB1B3EC8B542252FCA43F39B605((U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  AsyncUniTaskMethodBuilder_1_get_Task_m5D727B659277CF583CD55C547BD361510BD9FC85_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_1);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_Task() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_1);
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_2;
	}

IL_0014:
	{
		Exception_t * L_3 = (Exception_t *)__this->get_ex_1();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)__this->get_ex_1();
		IL2CPP_RUNTIME_CLASS_INIT(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_5;
		L_5 = ((  UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  (*) (Exception_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((Exception_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_5;
	}

IL_0028:
	{
		bool L_6 = (bool)__this->get_result_2();
		IL2CPP_RUNTIME_CLASS_INIT(UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F_il2cpp_TypeInfo_var);
		UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_7;
		L_7 = ((  UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  (*) (bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((bool)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 )L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m60FDE282595801C97D9D4F241C09BDB1D4984337_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * ___awaiter0, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)L_1, (RuntimeObject**)(RuntimeObject**)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0014:
	{
		Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A * L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_4);
		Awaiter_UnsafeOnCompleted_m202EF0ACB959052325D53B60788DA8857164333D((Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A *)(Awaiter_tEB25347398054134DEC52A44B017A1E9A1E5BC9A *)L_3, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_5, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057_TisU3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836_m35E1EAEDCD5BC2C069F4A51C74128A6008AD025A_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * ___awaiter0, U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * ___stateMachine1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 * L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)__this->get_address_of_runnerPromise_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)(U3CToTensorAsyncU3Ed__15_t558660CED1EB24F5380C85E60E8BDF732D09B836 *)L_1, (RuntimeObject**)(RuntimeObject**)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0014:
	{
		Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 * L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_runnerPromise_0();
		NullCheck((RuntimeObject*)L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5;
		L_5 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_MoveNext() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_4);
		Awaiter_UnsafeOnCompleted_m903460CE6ADA43DFCA719E696004C01151DF50EC((Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 *)(Awaiter_tB1A941345BAFB9A3457C254CC0DC61364E5BF057 *)L_3, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_5, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m55F67D834141C2905E9688540EB3585651E08C1F_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Exception_t * L_1 = ___exception0;
		__this->set_ex_1(L_1);
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_runnerPromise_0();
		Exception_t * L_3 = ___exception0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< Exception_t * >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::SetException(System.Exception) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_2, (Exception_t *)L_3);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m2EBC453D8F6A26ED1B3C8F4D6E6E091A7E22257A_gshared_inline (AsyncUniTaskMethodBuilder_1_t00996738181E21ECD89381B4B74C269E6626A7D0 * __this, bool ___result0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runnerPromise_0();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = ___result0;
		__this->set_result_2(L_1);
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_runnerPromise_0();
		bool L_3 = ___result0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::SetResult(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), (RuntimeObject*)L_2, (bool)L_3);
		return;
	}
}
