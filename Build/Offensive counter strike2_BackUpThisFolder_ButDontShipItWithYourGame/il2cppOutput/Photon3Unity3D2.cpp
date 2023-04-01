#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t4C406F82823FF96EEFA77E78C84DE151AFA91A85;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_tEA07CF62E08B228D86FDE332FC55FE1F456D5A14;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t02482683AE1D9D63176EAA56728B12F9ADCA10BE;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// ExitGames.Client.Photon.StreamBuffer[]
struct StreamBufferU5BU5D_tB9E722BD985AEFD3912D4E4DCD160066AEA4AF6B;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_t4691150EBA1025744B1806FBE5F8565835DEFDD6;
// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047;
// System.Security.Cryptography.AesManaged
struct AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517;
// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479;
// ExitGames.Client.Photon.Encryption.EncryptorNative
struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0;
// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214;
// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681;
// System.Exception
struct Exception_t;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t95FBCF58BC80DA852181F0B70F8FC08DE824D9D1;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tACE5277867F34445F8CAB737A6C60770A74FE635;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t47ACF759A20E471E2A0FCE81D3FA13937C981DA1;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB;
// System.String
struct String_t;
// ExitGames.Client.Photon.TPeer
struct TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208;
// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC1DFCCC6B3BD6C0BBC992058CF983E38121F77C7;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475;

IL2CPP_EXTERN_C RuntimeClass* AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionStateValue_tE2E514D341A8EC31202D5F056037C4BED4B54921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeliveryMode_tBD00E8E8A6BB25D15E75BBBDD17DCEB12B803593_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoProvider_t95FBCF58BC80DA852181F0B70F8FC08DE824D9D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____4989E5469B40416DC5AFB739C747E32B40CC5C77_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____49ECABA9727A1AF0636082C467485A1A9A04B669_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B;
IL2CPP_EXTERN_C String_t* _stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693;
IL2CPP_EXTERN_C String_t* _stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA;
IL2CPP_EXTERN_C String_t* _stringLiteral0C674C434602F2C350E8DEC293E708D4CC2CE339;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E;
IL2CPP_EXTERN_C String_t* _stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD;
IL2CPP_EXTERN_C String_t* _stringLiteral420C015E6084500174F1912E91954C1A742F270F;
IL2CPP_EXTERN_C String_t* _stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75;
IL2CPP_EXTERN_C String_t* _stringLiteral4FD880CA5D311C1C431BD0CB104456E35EF84148;
IL2CPP_EXTERN_C String_t* _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968;
IL2CPP_EXTERN_C String_t* _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43;
IL2CPP_EXTERN_C String_t* _stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D;
IL2CPP_EXTERN_C String_t* _stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8;
IL2CPP_EXTERN_C String_t* _stringLiteral8F35A290E0C52584695F3B0342580DAB07F7B8D3;
IL2CPP_EXTERN_C String_t* _stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB;
IL2CPP_EXTERN_C String_t* _stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B;
IL2CPP_EXTERN_C String_t* _stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6;
IL2CPP_EXTERN_C String_t* _stringLiteralA37EF8AD7DEABEF988E748C47A435D6BB3F6FC3B;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E96470B64DD3DB50F2E9C79034F94898F64537;
IL2CPP_EXTERN_C String_t* _stringLiteralA9AFEBAB5E371E8B24466D4A2FBB943F2E675545;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6;
IL2CPP_EXTERN_C String_t* _stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DA96E4398E04C75ACA0CBE183972952BDB1A28;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26;
IL2CPP_EXTERN_C String_t* _stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFE867641BA2826180B2167D7038C421CA025C7A2;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9F216224BAE030A1FEAB8C6A1711F957D547A32A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m45585BCFD39EAD44BEF06D191F24EC5BE2713DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0D1370567631D1C2616BA4D9F8032E06E0141569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8E5C4F48D28BFC5C2191D8181EC011B16506AA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA47D802088BBF5103B14BFC73F946857289C2E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mBEA3CADDBD3A7C6FBC833459EFA971ECA267F45C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mD91D022E179F6F16A037697D5DC23E2C292903A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m2F3669C0CF3F9893BF7C19696C2CE3A23ABC8685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TPeer_EnqueueMessageAsPayload_mAE465ABE74AA7F29FBFF3A21542BD7F8D4BD2064_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StreamBufferU5BU5D_tB9E722BD985AEFD3912D4E4DCD160066AEA4AF6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StreamBufferU5BU5D_tB9E722BD985AEFD3912D4E4DCD160066AEA4AF6B* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	MyActionU5BU5D_t4691150EBA1025744B1806FBE5F8565835DEFDD6* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94  : public RuntimeObject
{
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data_1;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_2;
};

struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields
{
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primesBelow2000_0;
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517  : public RuntimeObject
{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKey_5;
};

struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields
{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___primeRoot_0;
};

// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214  : public RuntimeObject
{
	// System.Security.Cryptography.Aes ExitGames.Client.Photon.Encryption.EncryptorNet::encryptorIn
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* ___encryptorIn_0;
	// System.Security.Cryptography.Aes ExitGames.Client.Photon.Encryption.EncryptorNet::encryptorOut
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* ___encryptorOut_1;
	// System.Security.Cryptography.HMACSHA256 ExitGames.Client.Photon.Encryption.EncryptorNet::hmacsha256In
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* ___hmacsha256In_2;
	// System.Security.Cryptography.HMACSHA256 ExitGames.Client.Photon.Encryption.EncryptorNet::hmacsha256Out
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* ___hmacsha256Out_3;
	// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::reusedIvBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___reusedIvBuffer_4;
	// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::reusedReadBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___reusedReadBuffer_5;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// ExitGames.Client.Photon.IProtocol
struct IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49  : public RuntimeObject
{
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled_0;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag_1;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter_2;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage_3;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag_4;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter_5;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage_6;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_7;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___netSimThread_8;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___NetSimManualResetEvent_9;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField_11;
};

// Photon.SocketServer.Security.OakleyGroups
struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8  : public RuntimeObject
{
};

struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields
{
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1536_3;
};

// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED  : public RuntimeObject
{
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___Parameters_3;
};

// ExitGames.Client.Photon.PhotonCodes
struct PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730  : public RuntimeObject
{
};

struct PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_StaticFields
{
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ClientKey
	uint8_t ___ClientKey_0;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ModeKey
	uint8_t ___ModeKey_1;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ServerKey
	uint8_t ___ServerKey_2;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::InitEncryption
	uint8_t ___InitEncryption_3;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::Ping
	uint8_t ___Ping_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;
};

// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestMessageCallback>k__BackingField
	int32_t ___U3CLongestMessageCallbackU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestRawMessageCallback>k__BackingField
	int32_t ___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ExitGames.Client.Photon.Version
struct Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A  : public RuntimeObject
{
};

struct Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A_StaticFields
{
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___clientVersion_0;
};

// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208  : public RuntimeObject
{
};

struct U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_StaticFields
{
	// ExitGames.Client.Photon.SupportClass/<>c ExitGames.Client.Photon.SupportClass/<>c::<>9
	U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208* ___U3CU3E9_0;
};

// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC1DFCCC6B3BD6C0BBC992058CF983E38121F77C7  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::myThread
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___myThread_1;
};

// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F  : public RuntimeObject
{
};

struct ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_StaticFields
{
	// System.Random ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::_r
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____r_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
struct __StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C__padding[1212];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299__padding[192];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20__padding[9];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tE60051DFE6339331A9F7F3F131E4810F50468E25 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tE60051DFE6339331A9F7F3F131E4810F50468E25__padding[96];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::4989E5469B40416DC5AFB739C747E32B40CC5C77
	__StaticArrayInitTypeSizeU3D96_tE60051DFE6339331A9F7F3F131E4810F50468E25 ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::49ECABA9727A1AF0636082C467485A1A9A04B669
	__StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 ___49ECABA9727A1AF0636082C467485A1A9A04B669_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6668D4903321030E42A6CE59AB96ADD9D0214FAC
	__StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2;
	// System.Int32 <PrivateImplementationDetails>::9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269
	int32_t ___9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>::AEAF34DCCF141E917F02F7768DAEA80AA2B13B95
	__StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::C033BD4351FBA3732545EA2E016D52B0FC3E69EC
	__StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5;
	// System.Int64 <PrivateImplementationDetails>::C5E8AB60ED9C473EBFB92E52109524A608BCFBE2
	int64_t ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Security.Cryptography.CipherMode
struct CipherMode_t932070F221590D5F955DE31430C6EAA91B97F027 
{
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;
};

// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_t5F53E5A9D1B47CD4A9FAE10E5F648DE2596D46F2 
{
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;
};

// ExitGames.Client.Photon.ConnectionStateValue
struct ConnectionStateValue_tE2E514D341A8EC31202D5F056037C4BED4B54921 
{
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;
};

// System.Security.Cryptography.CryptoStreamMode
struct CryptoStreamMode_tAA7DB9F0207503C36099611FC91D688AF0FA26A6 
{
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___2;
};

// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_t02AE6C5FD0E09AFE78382E0B5C15DC2223D35D98 
{
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// ExitGames.Client.Photon.DeliveryMode
struct DeliveryMode_tBD00E8E8A6BB25D15E75BBBDD17DCEB12B803593 
{
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479  : public RuntimeObject
{
	// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::cryptor
	intptr_t ___cryptor_0;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::sharedKeyHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash_1;
};

// ExitGames.Client.Photon.EgMessageType
struct EgMessageType_t9A262362B59EA91F810BDB5FA60011226950E00A 
{
	// System.Byte ExitGames.Client.Photon.EgMessageType::value__
	uint8_t ___value___2;
};

// ExitGames.Client.Photon.Encryption.EncryptorNative
struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0  : public RuntimeObject
{
	// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::encryptor
	intptr_t ___encryptor_3;
	// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNative::hmacHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacHash_4;
};

struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields
{
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::BLOCK_SIZE
	int32_t ___BLOCK_SIZE_0;
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::IV_SIZE
	int32_t ___IV_SIZE_1;
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::HMAC_SIZE
	int32_t ___HMAC_SIZE_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.Security.Cryptography.PaddingMode
struct PaddingMode_t938E0AB76C80739DB1BB44D7D6B9B94C03B72E1D 
{
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;
};

// ExitGames.Client.Photon.PhotonSocketError
struct PhotonSocketError_t77AD558AD05BFD28C829E9708518346AAD472FD9 
{
	// System.Int32 ExitGames.Client.Photon.PhotonSocketError::value__
	int32_t ___value___2;
};

// ExitGames.Client.Photon.PhotonSocketState
struct PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB 
{
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C  : public SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9
{
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____W_7;
};

struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____K_8;
};

// ExitGames.Client.Photon.SerializationProtocol
struct SerializationProtocol_t2A6589A0938C7CF1EAFEEC0FC61F0D34F7176910 
{
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;
};

// ExitGames.Client.Photon.StatusCode
struct StatusCode_tD49F9E026EFABFD71BA675213E28355707A67D74 
{
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;
};

// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_1;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_2;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_3;
	// System.Guid ExitGames.Client.Photon.StreamBuffer::guid
	Guid_t ___guid_4;
};

// ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel
struct egDebugLevel_t61D9611D78DF29A65EBA2376DF684DB934E666D8 
{
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel::value__
	int32_t ___value___2;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_5;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_16;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_17;
};

// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
{
};

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34  : public RuntimeObject
{
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_7;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_8;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_10;
};

struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34_StaticFields
{
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_6;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F  : public RuntimeObject
{
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223* ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t47ACF759A20E471E2A0FCE81D3FA13937C981DA1* ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject* ___CustomInitData_25;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_26;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* ___reusableEventData_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_33;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_35;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_36;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_38;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___lagRandomizer_39;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F* ___NetSimListOutgoing_40;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F* ___NetSimListIncoming_41;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* ___networkSimulationSettings_42;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_43;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandLogSize
	int32_t ___commandLogSize_44;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_tEA07CF62E08B228D86FDE332FC55FE1F456D5A14* ___CommandLog_45;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_tEA07CF62E08B228D86FDE332FC55FE1F456D5A14* ___InReliableLog_46;
};

struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_StaticFields
{
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t02482683AE1D9D63176EAA56728B12F9ADCA10BE* ___MessageBufferPool_37;
};

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ___SocketImplementationConfig_13;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t* ___U3CSocketImplementationU3Ek__BackingField_14;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_15;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_16;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_17;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_19;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_22;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_29;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_30;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_35;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RandomizedSequenceNumbers_36;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsIncomingU3Ek__BackingField_37;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsOutgoingU3Ek__BackingField_38;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* ___U3CTrafficStatsGameLevelU3Ek__BackingField_39;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___trafficStatsStopwatch_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_41;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_42;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject* ___SendOutgoingLockObject_43;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject* ___DispatchLockObject_44;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject* ___EnqueueLock_45;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PayloadEncryptionSecret_46;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t* ___encryptorType_47;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_48;
};

struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_StaticFields
{
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_10;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_11;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_34;
};

// ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 
{
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;
};

struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_StaticFields
{
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___SendUnreliable_1;
};
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA  : public IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34
{
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___sock_11;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	RuntimeObject* ___syncer_12;
};

// ExitGames.Client.Photon.TPeer
struct TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694  : public PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F
{
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* ___incomingList_47;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* ___outgoingStream_48;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_49;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pingRequest_50;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___messageHeader_53;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_54;
};

struct TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_StaticFields
{
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tcpFramedMessageHead_51;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tcpMsgHead_52;
};

// System.Threading.ThreadAbortException
struct ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913  : public MulticastDelegate_t
{
};

// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8  : public MulticastDelegate_t
{
};

// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475  : public MulticastDelegate_t
{
};

// System.Security.Cryptography.AesManaged
struct AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819  : public Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047
{
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* ___m_rijndael_11;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB_gshared (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___key0, const RuntimeMethod* method) ;

// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA2E90935A8B9763C943407FE22A8DE10DE5104A (U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor(System.Int32)
inline void Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, int32_t, const RuntimeMethod*))Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared)(__this, ___capacity0, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase__ctor_mED3188A7AD080FE4E679009D5D28F9496D40FD94 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_InitPeerBase_mC77C622705A827057DCDADF12B03F42A1B4611D7 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7 (const RuntimeMethod* method) ;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::get_debugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_m229B3EFFF8A4FA76DD0C9E13DF27324E7CC6885D_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::set_ProxyServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ProxyServerAddress_mC1756E869CAEBD9D94F12B73786DB400307C1988_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::.ctor()
inline void List_1__ctor_m0D1370567631D1C2616BA4D9F8032E06E0141569 (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String ExitGames.Client.Photon.PeerBase::PepareWebSocketUrl(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PeerBase_PepareWebSocketUrl_m8C06C3754C78E6A758EAF7C1E12EB6F877D073AD (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, String_t* ___serverAddress0, String_t* ___appId1, RuntimeObject* ___customData2, const RuntimeMethod* method) ;
// System.Type ExitGames.Client.Photon.PeerBase::get_SocketImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PeerBase_get_SocketImplementation_m8BDC8DDB1692B3615078CCCED0C8C5D3F2178E7A (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp__ctor_mB9F20C1D9A790D47FF04FF95AA957711A5720DBD (SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA* __this, PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___npeer0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Byte[] ExitGames.Client.Photon.PeerBase::PrepareConnectData(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PeerBase_PrepareConnectData_m893AF19192BA7352FC342DCEE9579E2FBB53DC00 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject* ___custom2, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_m31136CD9D656460AE02F048838AB2DCD994C75AC (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Clear()
inline void Queue_1_Clear_mBEA3CADDBD3A7C6FBC833459EFA971ECA267F45C (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueStatusCallback_mC9A83CF587306DB6FAF719D13EAD3B56EBBC3DC5 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, int32_t ___statusValue0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_mBC4688FAB356ECAA508554434C2B52331E95719D (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m0804398BEA2EE8863DD68CD99CEFE0D8E2BFB78B (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Serialize_m08D9FB7E24762844DC6FD8B26286F05FB456C6B8 (int32_t ___value0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___target1, int32_t* ___targetOffset2, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PeerBase_get_TrafficStatsEnabled_mCC1511B967600ABB65663EE7B8AC96942DC75879 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m1F2462971D60D696A9F0ACC128B36EC38B2298DF_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m81EFD3CD6FF16B0BD0BF40A96D234C13FFA0AB5B_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_mF1BAE11EB423190F3D02166FF5A99DF3463EE535_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_m70A881827E55E476DAF814DFE9E6ACF8CCE939D7 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_mAE465ABE74AA7F29FBFF3A21542BD7F8D4BD2064 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, int32_t ___deliveryMode0, StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_DisconnectTimeout_mBD496C0035F2053C5D855BC786094B77049DAF69 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_mF46665DA6BCE2FC72B0667F5337B60F1120F99EE (MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueActionForDispatch_mE363E6607AA64E7C66F901EB5E19CF6A93CFB54F (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* ___action0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
inline int32_t Queue_1_get_Count_m2F3669C0CF3F9893BF7C19696C2CE3A23ABC8685_inline (Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
inline MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* Queue_1_Dequeue_mD91D022E179F6F16A037697D5DC23E2C292903A9 (Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* __this, const RuntimeMethod* method)
{
	return ((  MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* (*) (Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MyAction_Invoke_m4B08D293E676A68D50BF9DAE9EAE4C413EBCB5C0_inline (MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
inline int32_t Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_inline (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0 (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_mEC7E08D2E4D12E4BC30CD704D4D9E208040BF771 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_get_Connected_mB8837449AB5C1DC2A811F1B4DC9D2E7EA9C1C71A (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timeInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timeInt_m58B98F2C895A84331EE6E9CC340117F1DF7DBF6F (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timePingInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timePingInterval_mAD3BCDADA9AEFD1EF576A4EE193F1801312EBE3D (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Item(System.Int32)
inline StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* List_1_get_Item_mA47D802088BBF5103B14BFC73F946857289C2E09 (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* (*) (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_m2107BEE2C210B8D280E5590EA2B26780D14635BC (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::MessageBufferPoolPut(ExitGames.Client.Photon.StreamBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_MessageBufferPoolPut_mB64BFA91E75B9CEEE99BBAD502DA8DC0EE9437C1 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___buff0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Count()
inline int32_t List_1_get_Count_m8E5C4F48D28BFC5C2191D8181EC011B16506AA40_inline (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Clear()
inline void List_1_Clear_m45585BCFD39EAD44BEF06D191F24EC5BE2713DF4_inline (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.PeerBase::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_ChannelCount_m88796785ACF30A087011F60EEA56BE8F6698590B (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::MessageBufferPoolGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* PeerBase_MessageBufferPoolGet_m085F7C4A609BFFC86D45F79D2979B14B7BE5FD97 (const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_m510F1166CEBF151CE71AEEA1FBBC24AF40248BBB (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Add(T)
inline void List_1_Add_m9F216224BAE030A1FEAB8C6A1711F957D547A32A_inline (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* __this, StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC*, StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m145B50835A379E19BA4FC7365A8ED0BB1CFCDE7C (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_mD9D723FD5DFFC806355B121EDAF34F05A1D10E7F (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___size0, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::get_TrafficStatsGameLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* PeerBase_get_TrafficStatsGameLevel_m780E6D69F636F8BFDF27F55BCB3B09F172C57869 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_m10354051129E7212570E179A097F2EF4EB375BED (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___operationBytes0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, const RuntimeMethod*))Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20 (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_gshared)(__this, ___key0, ___value1, method);
}
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* PeerBase_get_NetworkSimulationSettings_mC086D6F425E4C02DF87A6295FB4E91517CB6F106 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::get_IsSimulationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSimulationSet_get_IsSimulationEnabled_m238491EF54EFF3BDDCC0BEE13B24B291AF7A55CA (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_SendNetworkSimulated_m73CD388268809462C6B1A9A54C42FF9C7E5E9E6C (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataToSend0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_m279B2ABBEA764BC94DECEE37E2430DC0549360E4 (Exception_t* ___throwable0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueDebugReturn_m8A6D9158E69A1F8236110E81489001905D199231 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, uint8_t ___level0, String_t* ___debugReturn1, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PeerBase_get_TrafficStatsIncoming_m0C70F8727D31B14AEE92DDB1B65A1CF20E838855 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(T)
inline void Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m2049B8988942CC0A224B6C69851B3E564C821958 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inbuff0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Deserialize_m377AD5DAEC9CD22D7B4E3C1B4CCF81DB6A4F551B (int32_t* ___value0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source1, int32_t* ___offset2, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_UpdateRoundTripTimeAndVariance_m1789BB31F433A36D8E982C8869D978026C1BF8B1 (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, int32_t ___lastRoundtripTime0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB_gshared)(__this, ___key0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m9011FDA32ACC474A968BC614990DC4F678D075F7_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m3251092EFCF512B788A97E9A2672304BB0B05365_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m0D6EDC66F02A91E11B680F4371CE2EB0AE1B3F36_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m36966BEC5C0357BB15E11A7C0E3EBA30018F2BF6_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m6A234BFC89E5C345689769D1CE308EC654D953AC_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_mFF55253AD445448F06B09AD3CDB85C0006FF1D87_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_mD035D1FBCC51632CC1EF061EEADA88F5444FD8F0_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m56FF68B66B79EC0D5D9B9D6DF2EC1B0F9C67541B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m70B9D61ED0D7C9FA0DCCE0D38034E5E2E3465C64_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_mB33BC27A65F0E9E7197053E820A541FB35EA9091_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m7D726975F7A5515CF057F971519159D4E826E879_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m602D515806131E91A8C41FEDF74F03582ACD9AF0_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m91A293B663A0D701AEE63D5980044D7B019AE608_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m518D556FDE4C196B53FBAE15B45366A18B374175_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m20582EAC7872FFEC12A12487C5D3DC33153457AD_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mACB0030449D979B4C53A3D155BD46D1AA5452CDB_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m98643D9BFE90601666983FFA7A1F2197C185D873_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_mD0414C415EA88426BF82BC36E4F320F1E9CB7BB3_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_mDD13AB8092AD3DFB1E5B5743AD9EDAA4ADB61C4F_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_mE584FD02E95EB34E6B10D722270934294E6FAAAD_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mA5C84B2662E53BF6C44D33EE6D6A8C9B9DF21413_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m1E4A6523E743DEBC2841B4612D529354B960D5B0_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mF3E37B9F1FA014C5ABB993507143B26727FA3F01_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m32C99CFABAFFA29623BD2310665B36FB16E51F84_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m38616D08B09C389D16DBF1319B32ADF4ED2472FD_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mBC36DB6CA681DD7E2C780338702AB870FAF8FFC5_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m4427DE958736C30E3615CA60C3D27812A769AFFB_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m39E80DE37134AFF7D9356BAC2FE31EA08A688BC3_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m3E51EBF1D42BE899B0A313220051923C3F629B40_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m70141B4CF94ABCEE704D2E63B6F6AA47697BEAF8_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m00CCDA4D90E8A037AE124924480FF497E44BB4FB_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m40882FEAE0B0429C86F9A369C01F27670E56DCC4 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m1B780168BEA2904CA9978CD7108F2C69CE442A88_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m85F1FE00A921B9DFFD8E9D2FEBDB98A5E0414A1E_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_mE12DD82883CDA3BC4BAE93D495900177AEBDB05C_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m33E299D38D79A8089E3E123106197E31CBA4D562_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mF0367373B55C3FA98B734FD34F06C4C99EAA9E39_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mBDE6C723F05226630846F681B86EE9759F736B28_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_mF418B8D22CBF720CB8694E9243A64D9A9ABCE0E9_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m13291467E23326F4EF6B532FADAB8E3E6D391EC6_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m8E70EC1A089573B380D3BAEBBBF7A70607CE0497_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m8C1A65BFDB2AB38DABDA39993982D22A31CA03AD_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mE52846B1D3B36C9CCC2CE469E290BA2222B8B572_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_m9A94BD626A5808F230C105C8BACE8BDD9868C3CA_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m371F9C59E4C208F9294647C8098006B52A2FA955_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_m9767E9AE8DC60839550CFF81E547770F242F81A1 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AesManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241 (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA256::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5 (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::OnNativeLog(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD (intptr_t ___userData0, int32_t ___debugLevel1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, bool ___dispose0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingCallback(System.IntPtr,ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egsetEncryptorLoggingCallback_m04DFAA5ECFD90AC1E3A76A221DB992AAA247701C (intptr_t ___userData0, LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* ___callback1, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_egsetEncryptorLoggingLevel_m592E2590A0153F956DF1D1DA0FBE32E7032B46BE (int32_t ___level0, const RuntimeMethod* method) ;
// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::egconstructEncryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncryptorNative_egconstructEncryptor_m93150515D73CC820A52579FA1C8524D5D809972B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pEncryptSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHmacSecret1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdestructEncryptor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdestructEncryptor_m389CF331E1B86FEB342A6C7D0EDD5A05E59F677C (intptr_t ___pEncryptor0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egencrypt(System.IntPtr,System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egencrypt_mC66B0562EC63361F32446AD0F159BF3A97566224 (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut3, int32_t* ___outSize4, int32_t* ___outOffset5, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egHMAC(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egHMAC_m10C152F575726162FE547C020917DE6E7715A97A (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdecrypt_m3EE4A4CEAD1379F9AC3BE75E3DF646D98F3BD672 (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSizem2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_GenerateRandomSecret_m5FD5517D674F53A97E8BF2DFD9AE346D1EFEF5FF (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___secretLength0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculatePublicKey_mB89E0C4885E84F68D45A0E16A5A991791D342533 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculateSharedKey_m84FA649EC2D24689E1EE479701FC435C90F73C94 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___otherPartyPublicKey0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___exp0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_GenerateRandom_mE298EF34ECB20269436BDF2765DBE9F8E593C4F9 (int32_t ___bits0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA (int32_t ___value0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_m17D0BFA5DFD181AA82501C0AF1436AC09E12F1A9 (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m68EA65FF458F521635FF4EC5AE66387EC5EB08F8 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m5586AD606260F5141F3AC439098519F44EFB529F (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mDC8512C19FD13974ABEB6A23C969CB08A0049F64 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m473EBE94702065CBA6C6405E7B72D4B9D48E0085 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_mC79AB5F12B3EE23BDF28D93907113190D210B85B (intptr_t ___cryptor0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0 (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inData0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3 (int64_t ___value0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m191C98C28276C28DCFE1D31E0066FD7FA3D7837D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) ;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___radix0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___x0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant2, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL egconstructEncryptor(uint8_t*, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egdestructEncryptor(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egencrypt(intptr_t, uint8_t*, int32_t, uint8_t*, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egdecrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egHMAC(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egsetEncryptorLoggingCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egsetEncryptorLoggingLevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL egCryptorCreate();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorPublicKey(intptr_t, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDeriveSharedKey(intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorEncrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDecrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egCryptorDispose(intptr_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_Multicast(IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef int32_t (*FunctionPointerType) (IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method);
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* currentDelegate = reinterpret_cast<IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_Open(IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
int32_t IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_Closed(IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, method);
}
int32_t IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_OpenStaticInvoker(IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< int32_t >::Invoke(__this->___method_ptr_0, method, NULL);
}
int32_t IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_ClosedStaticInvoker(IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475 (IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_mEC4D19D02B53A63795DEABB942B4148804D4402B (IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6_Multicast;
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m508C39563FEF87550378EA22AF97F8488EC35BF6 (IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (IntegerMillisecondsDelegate_t96BC80AFAEADCEEB857ED62CD9E9825A01D9B475* __this, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeRandom_Next_mF8199B62558F5555B00C3A21CC3459E732AA19DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var))->____r_0;
		V_0 = L_0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var);
			Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = ((ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var))->____r_0;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_3);
			V_1 = L_4;
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__cctor_mE0FE490C94A53604EDEDB3509383519E16ECF711 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var))->____r_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t7C46688A9BB2DD1250ADDB48303FFDABA47C627F_il2cpp_TypeInfo_var))->____r_0), (void*)L_0);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m4E1F493073CAC676027A6EDDCE579179540AC753 (U3CU3Ec__DisplayClass6_0_tC1DFCCC6B3BD6C0BBC992058CF983E38121F77C7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::<StartBackgroundCalls>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_mAA025446D5D9B3AF59C3E38662D0FDBB4DB35FDF (U3CU3Ec__DisplayClass6_0_tC1DFCCC6B3BD6C0BBC992058CF983E38121F77C7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			goto IL_0012_1;
		}

IL_0004_1:
		{
			int32_t L_0 = __this->___millisecondsInterval_0;
			Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(L_0, NULL);
		}

IL_0012_1:
		{
			Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = __this->___myThread_1;
			NullCheck(L_1);
			bool L_2;
			L_2 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_1, NULL);
			V_0 = L_2;
			bool L_3 = V_0;
			if (L_3)
			{
				goto IL_0004_1;
			}
		}
		{
			goto IL_0029;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Threading.ThreadAbortException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m844BF573DF82BEE23922F3C5B9BF0492EFF6D8EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208* L_0 = (U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208*)il2cpp_codegen_object_new(U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFA2E90935A8B9763C943407FE22A8DE10DE5104A(L_0, NULL);
		((U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA2E90935A8B9763C943407FE22A8DE10DE5104A (U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass/<>c::<.cctor>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__20_0_m9BB16577443CF81DF3F19F02963A2E1316C274DA (U3CU3Ec_t73AAA5C9233EAD883FA9F95B02455EC59A124208* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276(NULL);
		return L_0;
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
// System.Void ExitGames.Client.Photon.TPeer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__ctor_m9136E1467838B691AFF69734FCB9E78CFDB3AD0F (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_0 = (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*)il2cpp_codegen_object_new(Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D(L_0, ((int32_t)32), Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D_RuntimeMethod_var);
		__this->___incomingList_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___incomingList_47), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		__this->___pingRequest_50 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pingRequest_50), (void*)L_2);
		__this->___DoFraming_54 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
		PeerBase__ctor_mED3188A7AD080FE4E679009D5D28F9496D40FD94(__this, NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___TrafficPackageHeaderSize_43 = 0;
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_InitPeerBase_m6C4855FA3499F730B1751A325FC8E8739BB4CDC9 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_InitPeerBase_mC77C622705A827057DCDADF12B03F42A1B4611D7(__this, NULL);
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_0 = (Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E*)il2cpp_codegen_object_new(Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D(L_0, ((int32_t)32), Queue_1__ctor_m34E5FA9AE65413C9C059AB830169B9E41C913E5D_RuntimeMethod_var);
		__this->___incomingList_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___incomingList_47), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___timestampOfLastReceive_21 = L_1;
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_Connect_m7D8D4684EC91B9125C22BA5B9E4B9B99CA5BAE4D (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, String_t* ___serverAddress0, String_t* ___proxyServerAddress1, String_t* ___appID2, RuntimeObject* ___customData3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0D1370567631D1C2616BA4D9F8032E06E0141569_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* G_B16_0 = NULL;
	TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* G_B15_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B17_0 = NULL;
	TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* G_B17_1 = NULL;
	{
		uint8_t L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_2, 2, _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968);
		V_1 = (bool)0;
		goto IL_0149;
	}

IL_0028:
	{
		uint8_t L_3;
		L_3 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_5, 5, _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26);
	}

IL_004c:
	{
		String_t* L_6 = ___serverAddress0;
		PeerBase_set_ServerAddress_m229B3EFFF8A4FA76DD0C9E13DF27324E7CC6885D_inline(__this, L_6, NULL);
		String_t* L_7 = ___proxyServerAddress1;
		PeerBase_set_ProxyServerAddress_mC1756E869CAEBD9D94F12B73786DB400307C1988_inline(__this, L_7, NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase() */, __this);
		List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_8 = (List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC*)il2cpp_codegen_object_new(List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m0D1370567631D1C2616BA4D9F8032E06E0141569(L_8, List_1__ctor_m0D1370567631D1C2616BA4D9F8032E06E0141569_RuntimeMethod_var);
		__this->___outgoingStream_48 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outgoingStream_48), (void*)L_8);
		uint8_t L_9 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___usedTransportProtocol_2;
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_0082;
		}
	}
	{
		uint8_t L_10 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___usedTransportProtocol_2;
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)5))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B7_0 = 1;
	}

IL_0083:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_12 = ___serverAddress0;
		String_t* L_13 = ___appID2;
		RuntimeObject* L_14 = ___customData3;
		String_t* L_15;
		L_15 = PeerBase_PepareWebSocketUrl_m8C06C3754C78E6A758EAF7C1E12EB6F877D073AD(__this, L_12, L_13, L_14, NULL);
		___serverAddress0 = L_15;
	}

IL_0095:
	{
		Type_t* L_16;
		L_16 = PeerBase_get_SocketImplementation_m8BDC8DDB1692B3615078CCCED0C8C5D3F2178E7A(__this, NULL);
		V_4 = (bool)((!(((RuntimeObject*)(Type_t*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00c8;
		}
	}
	{
		Type_t* L_18;
		L_18 = PeerBase_get_SocketImplementation_m8BDC8DDB1692B3615078CCCED0C8C5D3F2178E7A(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, __this);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		RuntimeObject* L_21;
		L_21 = Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858(L_18, L_20, NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3 = ((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)CastclassClass((RuntimeObject*)L_21, IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3), (void*)((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)CastclassClass((RuntimeObject*)L_21, IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34_il2cpp_TypeInfo_var)));
		goto IL_00d6;
	}

IL_00c8:
	{
		SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA* L_22 = (SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA*)il2cpp_codegen_object_new(SocketTcp_tD2AB8154BD2CE7A55BB1622972E0DF65E06B83FA_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		SocketTcp__ctor_mB9F20C1D9A790D47FF04FF95AA957711A5720DBD(L_22, __this, NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3), (void*)L_22);
	}

IL_00d6:
	{
		IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_23 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
		V_5 = (bool)((((RuntimeObject*)(IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)L_23) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0107;
		}
	}
	{
		RuntimeObject* L_25;
		L_25 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		Type_t* L_26;
		L_26 = PeerBase_get_SocketImplementation_m8BDC8DDB1692B3615078CCCED0C8C5D3F2178E7A(__this, NULL);
		String_t* L_27;
		L_27 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8, L_26, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_25, 1, L_27);
		V_1 = (bool)0;
		goto IL_0149;
	}

IL_0107:
	{
		bool L_28 = __this->___DoFraming_54;
		G_B15_0 = __this;
		if (L_28)
		{
			G_B16_0 = __this;
			goto IL_0117;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var))->___tcpMsgHead_52;
		G_B17_0 = L_29;
		G_B17_1 = G_B15_0;
		goto IL_011c;
	}

IL_0117:
	{
		il2cpp_codegen_runtime_class_init_inline(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var))->___tcpFramedMessageHead_51;
		G_B17_0 = L_30;
		G_B17_1 = G_B16_0;
	}

IL_011c:
	{
		NullCheck(G_B17_1);
		G_B17_1->___messageHeader_53 = G_B17_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B17_1->___messageHeader_53), (void*)G_B17_0);
		IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_31 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
		NullCheck(L_31);
		bool L_32;
		L_32 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect() */, L_31);
		V_6 = L_32;
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_013e;
		}
	}
	{
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6 = 1;
		V_1 = (bool)1;
		goto IL_0149;
	}

IL_013e:
	{
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6 = 0;
		V_1 = (bool)0;
		goto IL_0149;
	}

IL_0149:
	{
		bool L_34 = V_1;
		return L_34;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::OnConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_OnConnect_m5ACC87E72D383180F93588035B6798B1916DAB1C (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		__this->___lastPingResult_49 = L_0;
		String_t* L_1;
		L_1 = PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline(__this, NULL);
		String_t* L_2 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___AppId_26;
		RuntimeObject* L_3 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___CustomInitData_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = PeerBase_PrepareConnectData_m893AF19192BA7352FC342DCEE9579E2FBB53DC00(__this, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		TPeer_EnqueueInit_m31136CD9D656460AE02F048838AB2DCD994C75AC(__this, L_5, NULL);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PeerBase::SendOutgoingCommands() */, __this);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_Disconnect_mC18BE0ED7F7BE1F37B66B39064147E2C0DCA007E (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0047;
	}

IL_001c:
	{
		uint8_t L_3;
		L_3 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_5, 5, _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B);
	}

IL_0040:
	{
		VirtualActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PeerBase::StopConnection() */, __this);
	}

IL_0047:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_StopConnection_m1DAA7F651F855402B528873A02DF01A38AA9AD61 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mBEA3CADDBD3A7C6FBC833459EFA971ECA267F45C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* V_1 = NULL;
	{
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6 = 4;
		IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
		V_0 = (bool)((!(((RuntimeObject*)(IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_2 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_2);
	}

IL_0023:
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_4 = __this->___incomingList_47;
		V_1 = L_4;
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_5 = V_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_6 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_7 = __this->___incomingList_47;
			NullCheck(L_7);
			Queue_1_Clear_mBEA3CADDBD3A7C6FBC833459EFA971ECA267F45C(L_7, Queue_1_Clear_mBEA3CADDBD3A7C6FBC833459EFA971ECA267F45C_RuntimeMethod_var);
			goto IL_0049;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6 = 0;
		PeerBase_EnqueueStatusCallback_mC9A83CF587306DB6FAF719D13EAD3B56EBBC3DC5(__this, ((int32_t)1025), NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_FetchServerTimestamp_mE49FFD0333A8985461DD8E86CF65DA73FD01F3D0 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionStateValue_tE2E514D341A8EC31202D5F056037C4BED4B54921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint8_t L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		uint8_t L_5 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ConnectionStateValue_tE2E514D341A8EC31202D5F056037C4BED4B54921_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA, L_7, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_4, 3, L_8);
	}

IL_0046:
	{
		RuntimeObject* L_9;
		L_9 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_9, ((int32_t)1030));
		goto IL_0067;
	}

IL_0059:
	{
		TPeer_SendPing_mBC4688FAB356ECAA508554434C2B52331E95719D(__this, NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffsetIsAvailable_15 = (bool)0;
	}

IL_0067:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_m31136CD9D656460AE02F048838AB2DCD994C75AC (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		bool L_0 = __this->___DoFraming_54;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00b7;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(L_2);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_3 = (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*)il2cpp_codegen_object_new(StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StreamBuffer__ctor_m0804398BEA2EE8863DD68CD99CEFE0D8E2BFB78B(L_3, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), ((int32_t)32))), NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)251));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		V_1 = L_6;
		V_2 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___data0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		Protocol_Serialize_m08D9FB7E24762844DC6FD8B26286F05FB456C6B8(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_7)->max_length)), ((int32_t)(((RuntimeArray*)L_8)->max_length)))), L_9, (&V_2), NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		NullCheck(L_12);
		NullCheck(L_10);
		StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE(L_10, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___data0;
		NullCheck(L_15);
		NullCheck(L_13);
		StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE(L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		bool L_16;
		L_16 = PeerBase_get_TrafficStatsEnabled_mCC1511B967600ABB65663EE7B8AC96942DC75879(__this, NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_18;
		L_18 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56_inline(L_19, NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		NullCheck(L_19);
		TrafficStats_set_TotalPacketCount_m1F2462971D60D696A9F0ACC128B36EC38B2298DF_inline(L_19, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_22;
		L_22 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = TrafficStats_get_TotalCommandsInPackets_m81EFD3CD6FF16B0BD0BF40A96D234C13FFA0AB5B_inline(L_23, NULL);
		V_5 = L_24;
		int32_t L_25 = V_5;
		NullCheck(L_23);
		TrafficStats_set_TotalCommandsInPackets_mF1BAE11EB423190F3D02166FF5A99DF3463EE535_inline(L_23, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_26;
		L_26 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7(L_27, NULL);
		NullCheck(L_26);
		TrafficStats_CountControlCommand_m70A881827E55E476DAF814DFE9E6ACF8CCE939D7(L_26, L_28, NULL);
	}

IL_00ad:
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_29 = V_0;
		bool L_30;
		L_30 = TPeer_EnqueueMessageAsPayload_mAE465ABE74AA7F29FBFF3A21542BD7F8D4BD2064(__this, 1, L_29, (uint8_t)0, NULL);
	}

IL_00b7:
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_DispatchIncomingCommands_m52EE37579196D4CF2BA709F5804650EA859F0473 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD91D022E179F6F16A037697D5DC23E2C292903A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m2F3669C0CF3F9893BF7C19696C2CE3A23ABC8685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		int32_t L_2 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___timestampOfLastReceive_21;
		int32_t L_3;
		L_3 = PeerBase_get_DisconnectTimeout_mBD496C0035F2053C5D855BC786094B77049DAF69(__this, NULL);
		G_B3_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) > ((int32_t)L_3))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		PeerBase_EnqueueStatusCallback_mC9A83CF587306DB6FAF719D13EAD3B56EBBC3DC5(__this, ((int32_t)1040), NULL);
		MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* L_5 = (MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8*)il2cpp_codegen_object_new(MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MyAction__ctor_mF46665DA6BCE2FC72B0667F5337B60F1120F99EE(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		PeerBase_EnqueueActionForDispatch_mE363E6607AA64E7C66F901EB5E19CF6A93CFB54F(__this, L_5, NULL);
	}

IL_0047:
	{
		goto IL_0092;
	}

IL_0049:
	{
		Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* L_6 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___ActionQueue_12;
		V_3 = L_6;
		Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* L_7 = V_3;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_7, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* L_8 = V_3;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_8, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* L_9 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___ActionQueue_12;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = Queue_1_get_Count_m2F3669C0CF3F9893BF7C19696C2CE3A23ABC8685_inline(L_9, Queue_1_get_Count_m2F3669C0CF3F9893BF7C19696C2CE3A23ABC8685_RuntimeMethod_var);
				V_4 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_0073_1;
				}
			}
			{
				goto IL_0097;
			}

IL_0073_1:
			{
				Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* L_12 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___ActionQueue_12;
				NullCheck(L_12);
				MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* L_13;
				L_13 = Queue_1_Dequeue_mD91D022E179F6F16A037697D5DC23E2C292903A9(L_12, Queue_1_Dequeue_mD91D022E179F6F16A037697D5DC23E2C292903A9_RuntimeMethod_var);
				V_0 = L_13;
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* L_14 = V_0;
		NullCheck(L_14);
		MyAction_Invoke_m4B08D293E676A68D50BF9DAE9EAE4C413EBCB5C0_inline(L_14, NULL);
	}

IL_0092:
	{
		V_5 = (bool)1;
		goto IL_0049;
	}

IL_0097:
	{
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_15 = __this->___incomingList_47;
		V_6 = L_15;
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_16 = V_6;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_16, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d4:
			{// begin finally (depth: 1)
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_17 = V_6;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_17, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_18 = __this->___incomingList_47;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_inline(L_18, Queue_1_get_Count_m94871024990842E02593DE571C007F1B1E4C3433_RuntimeMethod_var);
				V_7 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_20 = V_7;
				if (!L_20)
				{
					goto IL_00c5_1;
				}
			}
			{
				V_8 = (bool)0;
				goto IL_00f8;
			}

IL_00c5_1:
			{
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_21 = __this->___incomingList_47;
				NullCheck(L_21);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
				L_22 = Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0(L_21, Queue_1_Dequeue_m47D170EEFB898969C742B3DC91B93BC3A81074E0_RuntimeMethod_var);
				V_1 = L_22;
				goto IL_00dd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		NullCheck(L_23);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___ByteCountCurrentDispatch_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_23)->max_length)), 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_25 = (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*)il2cpp_codegen_object_new(StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		StreamBuffer__ctor_mEC7E08D2E4D12E4BC30CD704D4D9E208040BF771(L_25, L_24, NULL);
		bool L_26;
		L_26 = VirtualFuncInvoker1< bool, StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* >::Invoke(17 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_25);
		V_8 = L_26;
		goto IL_00f8;
	}

IL_00f8:
	{
		bool L_27 = V_8;
		return L_27;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendOutgoingCommands_mC359283A2FFFE96113C0C182C383637BA752BDD3 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m45585BCFD39EAD44BEF06D191F24EC5BE2713DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8E5C4F48D28BFC5C2191D8181EC011B16506AA40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA47D802088BBF5103B14BFC73F946857289C2E09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* V_4 = NULL;
	int32_t V_5 = 0;
	StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* V_6 = NULL;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0016:
	{
		IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_2 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = IPhotonSocket_get_Connected_mB8837449AB5C1DC2A811F1B4DC9D2E7EA9C1C71A(L_2, NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0030:
	{
		int32_t L_5;
		L_5 = PeerBase_get_timeInt_m58B98F2C895A84331EE6E9CC340117F1DF7DBF6F(__this, NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___timeLastSendOutgoing_33 = L_5;
		uint8_t L_6 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		int32_t L_8 = __this->___lastPingResult_49;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract(L_7, L_8)));
		int32_t L_10;
		L_10 = PeerBase_get_timePingInterval_mAD3BCDADA9AEFD1EF576A4EE193F1801312EBE3D(__this, NULL);
		G_B7_0 = ((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 0;
	}

IL_0061:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		TPeer_SendPing_mBC4688FAB356ECAA508554434C2B52331E95719D(__this, NULL);
	}

IL_006e:
	{
		List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_12 = __this->___outgoingStream_48;
		V_4 = L_12;
		List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_13 = V_4;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_13, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e3:
			{// begin finally (depth: 1)
				List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_14 = V_4;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_14, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_5 = 0;
				goto IL_00b8_1;
			}

IL_0084_1:
			{
				List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_15 = __this->___outgoingStream_48;
				int32_t L_16 = V_5;
				NullCheck(L_15);
				StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_17;
				L_17 = List_1_get_Item_mA47D802088BBF5103B14BFC73F946857289C2E09(L_15, L_16, List_1_get_Item_mA47D802088BBF5103B14BFC73F946857289C2E09_RuntimeMethod_var);
				V_6 = L_17;
				StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_18 = V_6;
				NullCheck(L_18);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479(L_18, NULL);
				StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_20 = V_6;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7(L_20, NULL);
				TPeer_SendData_m2107BEE2C210B8D280E5590EA2B26780D14635BC(__this, L_19, L_21, NULL);
				StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_22 = V_6;
				il2cpp_codegen_runtime_class_init_inline(PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
				PeerBase_MessageBufferPoolPut_mB64BFA91E75B9CEEE99BBAD502DA8DC0EE9437C1(L_22, NULL);
				int32_t L_23 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_00b8_1:
			{
				int32_t L_24 = V_5;
				List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_25 = __this->___outgoingStream_48;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = List_1_get_Count_m8E5C4F48D28BFC5C2191D8181EC011B16506AA40_inline(L_25, List_1_get_Count_m8E5C4F48D28BFC5C2191D8181EC011B16506AA40_RuntimeMethod_var);
				V_7 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
				bool L_27 = V_7;
				if (L_27)
				{
					goto IL_0084_1;
				}
			}
			{
				List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_28 = __this->___outgoingStream_48;
				NullCheck(L_28);
				List_1_Clear_m45585BCFD39EAD44BEF06D191F24EC5BE2713DF4_inline(L_28, List_1_Clear_m45585BCFD39EAD44BEF06D191F24EC5BE2713DF4_RuntimeMethod_var);
				((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___outgoingCommandsInStream_36 = 0;
				goto IL_00ec;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ec:
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_00f0:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendAcksOnly_m823051C1C228F7541A6E7AC0D8791C471D901479 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_1 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = IPhotonSocket_get_Connected_mB8837449AB5C1DC2A811F1B4DC9D2E7EA9C1C71A(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0023:
	{
		uint8_t L_4 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		int32_t L_6 = __this->___lastPingResult_49;
		int32_t L_7;
		L_7 = PeerBase_get_timePingInterval_mAD3BCDADA9AEFD1EF576A4EE193F1801312EBE3D(__this, NULL);
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) > ((int32_t)L_7))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = (bool)G_B8_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		TPeer_SendPing_mBC4688FAB356ECAA508554434C2B52331E95719D(__this, NULL);
	}

IL_0050:
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,ExitGames.Client.Photon.SendOptions,ExitGames.Client.Photon.EgMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueOperation_m97EA4C02EDC2B0AB72C80479C5A1FBED96F345CB (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___parameters0, uint8_t ___opCode1, SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___sendParams2, uint8_t ___messageType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionStateValue_tE2E514D341A8EC31202D5F056037C4BED4B54921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		uint8_t L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		uint8_t L_8 = ___opCode1;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		uint8_t L_13 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___peerConnectionState_6;
		uint8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(ConnectionStateValue_tE2E514D341A8EC31202D5F056037C4BED4B54921_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		String_t* L_16;
		L_16 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_12, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_4, 1, L_16);
	}

IL_0063:
	{
		RuntimeObject* L_17;
		L_17 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_17, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_007b:
	{
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_18 = ___sendParams2;
		uint8_t L_19 = L_18.___Channel_4;
		uint8_t L_20;
		L_20 = PeerBase_get_ChannelCount_m88796785ACF30A087011F60EEA56BE8F6698590B(__this, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		uint8_t L_22;
		L_22 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00f3;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_28 = ___sendParams2;
		uint8_t L_29 = L_28.___Channel_4;
		uint8_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_27;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		uint8_t L_34;
		L_34 = PeerBase_get_ChannelCount_m88796785ACF30A087011F60EEA56BE8F6698590B(__this, NULL);
		uint8_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_33;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_38;
		L_38 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_37, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_24, 1, L_38);
	}

IL_00f3:
	{
		RuntimeObject* L_39;
		L_39 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_39, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_0108:
	{
		uint8_t L_40 = ___opCode1;
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_41 = ___parameters0;
		uint8_t L_42 = ___messageType3;
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_43 = ___sendParams2;
		bool L_44 = L_43.___Encrypt_3;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_45;
		L_45 = VirtualFuncInvoker4< StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*, uint8_t, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, bool >::Invoke(12 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_40, L_41, L_42, L_44);
		V_0 = L_45;
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_46 = ___sendParams2;
		int32_t L_47 = L_46.___DeliveryMode_2;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_48 = V_0;
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_49 = ___sendParams2;
		uint8_t L_50 = L_49.___Channel_4;
		bool L_51;
		L_51 = TPeer_EnqueueMessageAsPayload_mAE465ABE74AA7F29FBFF3A21542BD7F8D4BD2064(__this, L_47, L_48, L_50, NULL);
		V_3 = L_51;
		goto IL_012f;
	}

IL_012f:
	{
		bool L_52 = V_3;
		return L_52;
	}
}
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* TPeer_SerializeOperationToMessage_mAC9435791B479F3BEB016522516260EF0D031DF2 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, uint8_t ___opCode0, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoProvider_t95FBCF58BC80DA852181F0B70F8FC08DE824D9D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* V_10 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	{
		bool L_0 = ___encrypt3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___usedTransportProtocol_2;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_2;
		L_2 = PeerBase_MessageBufferPoolGet_m085F7C4A609BFFC86D45F79D2979B14B7BE5FD97(NULL);
		V_1 = L_2;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_3 = V_1;
		NullCheck(L_3);
		StreamBuffer_SetLength_m510F1166CEBF151CE71AEEA1FBBC24AF40248BBB(L_3, ((int64_t)0), NULL);
		bool L_4 = V_0;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___messageHeader_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___messageHeader_53;
		NullCheck(L_8);
		NullCheck(L_6);
		StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE(L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
	}

IL_0044:
	{
		IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223* L_9 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___SerializationProtocol_1;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_10 = V_1;
		uint8_t L_11 = ___opCode0;
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_12 = ___parameters1;
		NullCheck(L_9);
		VirtualActionInvoker4< StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*, uint8_t, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, bool >::Invoke(10 /* System.Void ExitGames.Client.Photon.IProtocol::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_9, L_10, L_11, L_12, (bool)0);
		bool L_13 = V_0;
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_15 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___CryptoProvider_38;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_16 = V_1;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479(L_16, NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7(L_18, NULL);
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(2 /* System.Byte[] Photon.SocketServer.Security.ICryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32) */, ICryptoProvider_t95FBCF58BC80DA852181F0B70F8FC08DE824D9D1_il2cpp_TypeInfo_var, L_15, L_17, 0, L_19);
		V_5 = L_20;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_21 = V_1;
		NullCheck(L_21);
		StreamBuffer_SetLength_m510F1166CEBF151CE71AEEA1FBBC24AF40248BBB(L_21, ((int64_t)0), NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___messageHeader_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___messageHeader_53;
		NullCheck(L_24);
		NullCheck(L_22);
		StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE(L_22, L_23, 0, ((int32_t)(((RuntimeArray*)L_24)->max_length)), NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_25 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_5;
		NullCheck(L_27);
		NullCheck(L_25);
		StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE(L_25, L_26, 0, ((int32_t)(((RuntimeArray*)L_27)->max_length)), NULL);
	}

IL_00a4:
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_28 = V_1;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479(L_28, NULL);
		V_2 = L_29;
		uint8_t L_30 = ___messageType2;
		V_6 = (bool)((((int32_t)((((int32_t)L_30) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___messageHeader_53;
		NullCheck(L_33);
		uint8_t L_34 = ___messageType2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), 1))), (uint8_t)L_34);
	}

IL_00c7:
	{
		bool L_35 = V_0;
		if (L_35)
		{
			goto IL_00de;
		}
	}
	{
		bool L_36 = ___encrypt3;
		if (!L_36)
		{
			goto IL_00db;
		}
	}
	{
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_37 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___photonPeer_0;
		NullCheck(L_37);
		bool L_38 = L_37->___EnableEncryptedFlag_24;
		G_B13_0 = ((int32_t)(L_38));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B13_0 = 0;
	}

IL_00dc:
	{
		G_B15_0 = G_B13_0;
		goto IL_00df;
	}

IL_00de:
	{
		G_B15_0 = 1;
	}

IL_00df:
	{
		V_7 = (bool)G_B15_0;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0106;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___messageHeader_53;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___messageHeader_53;
		NullCheck(L_43);
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), 1));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_41)->max_length)), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_45|((int32_t)128)))));
	}

IL_0106:
	{
		bool L_46 = __this->___DoFraming_54;
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0126;
		}
	}
	{
		V_9 = 1;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7(L_48, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		Protocol_Serialize_m08D9FB7E24762844DC6FD8B26286F05FB456C6B8(L_49, L_50, (&V_9), NULL);
	}

IL_0126:
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_51 = V_1;
		V_10 = L_51;
		goto IL_012b;
	}

IL_012b:
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_52 = V_10;
		return L_52;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_mAE465ABE74AA7F29FBFF3A21542BD7F8D4BD2064 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, int32_t ___deliveryMode0, StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F216224BAE030A1FEAB8C6A1711F957D547A32A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_0 = ___opMessage1;
		V_1 = (bool)((((RuntimeObject*)(StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0119;
	}

IL_0011:
	{
		bool L_2 = __this->___DoFraming_54;
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_4 = ___opMessage1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479(L_4, NULL);
		V_4 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_4;
		uint8_t L_7 = ___channelId2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_7);
		int32_t L_8 = ___deliveryMode0;
		V_5 = L_8;
		int32_t L_9 = V_5;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0053;
			}
			case 3:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_4;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)0);
		goto IL_0073;
	}

IL_004c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		goto IL_0073;
	}

IL_0053:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)2);
		goto IL_0073;
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)3);
		goto IL_0073;
	}

IL_0061:
	{
		int32_t L_14 = ___deliveryMode0;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeliveryMode_tBD00E8E8A6BB25D15E75BBBDD17DCEB12B803593_il2cpp_TypeInfo_var)), &L_15);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A)), L_16, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TPeer_EnqueueMessageAsPayload_mAE465ABE74AA7F29FBFF3A21542BD7F8D4BD2064_RuntimeMethod_var)));
	}

IL_0073:
	{
	}

IL_0074:
	{
		List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_18 = __this->___outgoingStream_48;
		V_6 = L_18;
		List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_19 = V_6;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_19, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a3:
			{// begin finally (depth: 1)
				List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_20 = V_6;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_20, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_t55D506B5B78A337C83FCCFAF53EEC4641364B9AC* L_21 = __this->___outgoingStream_48;
			StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_22 = ___opMessage1;
			NullCheck(L_21);
			List_1_Add_m9F216224BAE030A1FEAB8C6A1711F957D547A32A_inline(L_21, L_22, List_1_Add_m9F216224BAE030A1FEAB8C6A1711F957D547A32A_RuntimeMethod_var);
			int32_t L_23 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___outgoingCommandsInStream_36;
			((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___outgoingCommandsInStream_36 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			goto IL_00ac;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_24 = ___opMessage1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7(L_24, NULL);
		V_0 = L_25;
		int32_t L_26 = V_0;
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___ByteCountLastOperation_7 = L_26;
		bool L_27;
		L_27 = PeerBase_get_TrafficStatsEnabled_mCC1511B967600ABB65663EE7B8AC96942DC75879(__this, NULL);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_29 = ___deliveryMode0;
		V_8 = L_29;
		int32_t L_30 = V_8;
		if (!L_30)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		int32_t L_31 = V_8;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00f5;
	}

IL_00d7:
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_32;
		L_32 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
		int32_t L_33 = V_0;
		NullCheck(L_32);
		TrafficStats_CountUnreliableOpCommand_m145B50835A379E19BA4FC7365A8ED0BB1CFCDE7C(L_32, L_33, NULL);
		goto IL_0107;
	}

IL_00e6:
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_34;
		L_34 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
		int32_t L_35 = V_0;
		NullCheck(L_34);
		TrafficStats_CountReliableOpCommand_mD9D723FD5DFFC806355B121EDAF34F05A1D10E7F(L_34, L_35, NULL);
		goto IL_0107;
	}

IL_00f5:
	{
		int32_t L_36 = ___deliveryMode0;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeliveryMode_tBD00E8E8A6BB25D15E75BBBDD17DCEB12B803593_il2cpp_TypeInfo_var)), &L_37);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_39 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24)), L_38, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TPeer_EnqueueMessageAsPayload_mAE465ABE74AA7F29FBFF3A21542BD7F8D4BD2064_RuntimeMethod_var)));
	}

IL_0107:
	{
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_40;
		L_40 = PeerBase_get_TrafficStatsGameLevel_m780E6D69F636F8BFDF27F55BCB3B09F172C57869(__this, NULL);
		int32_t L_41 = V_0;
		NullCheck(L_40);
		TrafficStatsGameLevel_CountOperation_m10354051129E7212570E179A097F2EF4EB375BED(L_40, L_41, NULL);
	}

IL_0115:
	{
		V_2 = (bool)1;
		goto IL_0119;
	}

IL_0119:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_mBC4688FAB356ECAA508554434C2B52331E95719D (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* V_3 = NULL;
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___lastPingResult_49 = L_1;
		bool L_2 = __this->___DoFraming_54;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8));
		(&V_4)->___DeliveryMode_2 = 1;
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_4 = V_4;
		V_2 = L_4;
		il2cpp_codegen_runtime_class_init_inline(PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_il2cpp_TypeInfo_var))->___Ping_4;
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_6 = (Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*)il2cpp_codegen_object_new(Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048(L_6, Dictionary_2__ctor_m88EEEFF844FE740CF9A14946245A4BA58C7FC048_RuntimeMethod_var);
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_7 = L_6;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20(L_7, (uint8_t)1, L_10, Dictionary_2_Add_m172B6DC23E861887432196C468285C1492E0CC20_RuntimeMethod_var);
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_11 = V_2;
		bool L_12 = L_11.___Encrypt_3;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_13;
		L_13 = VirtualFuncInvoker4< StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*, uint8_t, Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1*, uint8_t, bool >::Invoke(12 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_5, L_7, 6, L_12);
		V_3 = L_13;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_14 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479(L_14, NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7(L_16, NULL);
		TPeer_SendData_m2107BEE2C210B8D280E5590EA2B26780D14635BC(__this, L_15, L_17, NULL);
		bool L_18;
		L_18 = PeerBase_get_TrafficStatsEnabled_mCC1511B967600ABB65663EE7B8AC96942DC75879(__this, NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_20;
		L_20 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = StreamBuffer_get_Length_m8BF20D43953229862DFDBEC8D74C8F76442833A7(L_21, NULL);
		NullCheck(L_20);
		TrafficStats_CountControlCommand_m70A881827E55E476DAF814DFE9E6ACF8CCE939D7(L_20, L_22, NULL);
	}

IL_0088:
	{
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_il2cpp_TypeInfo_var);
		PeerBase_MessageBufferPoolPut_mB64BFA91E75B9CEEE99BBAD502DA8DC0EE9437C1(L_23, NULL);
		goto IL_00dd;
	}

IL_0092:
	{
		V_6 = 1;
		int32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___pingRequest_50;
		il2cpp_codegen_runtime_class_init_inline(Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		Protocol_Serialize_m08D9FB7E24762844DC6FD8B26286F05FB456C6B8(L_24, L_25, (&V_6), NULL);
		bool L_26;
		L_26 = PeerBase_get_TrafficStatsEnabled_mCC1511B967600ABB65663EE7B8AC96942DC75879(__this, NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_28;
		L_28 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___pingRequest_50;
		NullCheck(L_29);
		NullCheck(L_28);
		TrafficStats_CountControlCommand_m70A881827E55E476DAF814DFE9E6ACF8CCE939D7(L_28, ((int32_t)(((RuntimeArray*)L_29)->max_length)), NULL);
	}

IL_00c7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___pingRequest_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___pingRequest_50;
		NullCheck(L_31);
		TPeer_SendData_m2107BEE2C210B8D280E5590EA2B26780D14635BC(__this, L_30, ((int32_t)(((RuntimeArray*)L_31)->max_length)), NULL);
	}

IL_00dd:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_m2107BEE2C210B8D280E5590EA2B26780D14635BC (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			int64_t L_0 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___bytesOut_23;
			int32_t L_1 = ___length1;
			((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___bytesOut_23 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_1)));
			bool L_2;
			L_2 = PeerBase_get_TrafficStatsEnabled_mCC1511B967600ABB65663EE7B8AC96942DC75879(__this, NULL);
			V_0 = L_2;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_004c_1;
			}
		}
		{
			TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_4;
			L_4 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
			TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_5 = L_4;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56_inline(L_5, NULL);
			V_1 = L_6;
			int32_t L_7 = V_1;
			NullCheck(L_5);
			TrafficStats_set_TotalPacketCount_m1F2462971D60D696A9F0ACC128B36EC38B2298DF_inline(L_5, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
			TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_8;
			L_8 = PeerBase_get_TrafficStatsOutgoing_m20D7D5D750CA213D715AB7CDE26ABA707B15DB7E(__this, NULL);
			TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_9 = L_8;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = TrafficStats_get_TotalCommandsInPackets_m81EFD3CD6FF16B0BD0BF40A96D234C13FFA0AB5B_inline(L_9, NULL);
			int32_t L_11 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___outgoingCommandsInStream_36;
			NullCheck(L_9);
			TrafficStats_set_TotalCommandsInPackets_mF1BAE11EB423190F3D02166FF5A99DF3463EE535_inline(L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), NULL);
		}

IL_004c_1:
		{
			NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_12;
			L_12 = PeerBase_get_NetworkSimulationSettings_mC086D6F425E4C02DF87A6295FB4E91517CB6F106(__this, NULL);
			NullCheck(L_12);
			bool L_13;
			L_13 = NetworkSimulationSet_get_IsSimulationEnabled_m238491EF54EFF3BDDCC0BEE13B24B291AF7A55CA(L_12, NULL);
			V_2 = L_13;
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0079_1;
			}
		}
		{
			int32_t L_15 = ___length1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
			V_3 = L_16;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___data0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
			int32_t L_19 = ___length1;
			Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, L_19, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
			PeerBase_SendNetworkSimulated_m73CD388268809462C6B1A9A54C42FF9C7E5E9E6C(__this, L_20, NULL);
			goto IL_0089_1;
		}

IL_0079_1:
		{
			IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* L_21 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___PhotonSocket_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___data0;
			int32_t L_23 = ___length1;
			NullCheck(L_21);
			int32_t L_24;
			L_24 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(6 /* ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Send(System.Byte[],System.Int32) */, L_21, L_22, L_23);
		}

IL_0089_1:
		{
			goto IL_00c2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		throw e;
	}

CATCH_008c:
	{// begin catch(System.Exception)
		{
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			uint8_t L_25;
			L_25 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_25) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_26 = V_5;
			if (!L_26)
			{
				goto IL_00b7;
			}
		}
		{
			RuntimeObject* L_27;
			L_27 = PeerBase_get_Listener_m3E13539621D55C1171BE6FBEA59BE827F43BDB59(__this, NULL);
			Exception_t* L_28 = V_4;
			NullCheck(L_28);
			String_t* L_29;
			L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
			NullCheck(L_27);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var)), L_27, 1, L_29);
		}

IL_00b7:
		{
			Exception_t* L_30 = V_4;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var)));
			SupportClass_WriteStackTrace_m279B2ABBEA764BC94DECEE37E2430DC0549360E4(L_30, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c2;
		}
	}// end catch (depth: 1)

IL_00c2:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReceiveIncomingCommands_mECC8C4C479A477B3E8C0D4CA446F1D9DE46AA1F7 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inbuff0, int32_t ___dataLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	bool V_8 = false;
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B10_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inbuff0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		PeerBase_EnqueueDebugReturn_m8A6D9158E69A1F8236110E81489001905D199231(__this, 1, _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6, NULL);
	}

IL_0029:
	{
		goto IL_0166;
	}

IL_002e:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___timestampOfLastReceive_21 = L_4;
		int64_t L_5 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___bytesIn_24;
		int32_t L_6 = ___dataLength1;
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___bytesIn_24 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)((int32_t)il2cpp_codegen_add(L_6, 7)))));
		bool L_7;
		L_7 = PeerBase_get_TrafficStatsEnabled_mCC1511B967600ABB65663EE7B8AC96942DC75879(__this, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_9;
		L_9 = PeerBase_get_TrafficStatsIncoming_m0C70F8727D31B14AEE92DDB1B65A1CF20E838855(__this, NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56_inline(L_10, NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		TrafficStats_set_TotalPacketCount_m1F2462971D60D696A9F0ACC128B36EC38B2298DF_inline(L_10, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_13;
		L_13 = PeerBase_get_TrafficStatsIncoming_m0C70F8727D31B14AEE92DDB1B65A1CF20E838855(__this, NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = TrafficStats_get_TotalCommandsInPackets_m81EFD3CD6FF16B0BD0BF40A96D234C13FFA0AB5B_inline(L_14, NULL);
		V_3 = L_15;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		TrafficStats_set_TotalCommandsInPackets_mF1BAE11EB423190F3D02166FF5A99DF3463EE535_inline(L_14, ((int32_t)il2cpp_codegen_add(L_16, 1)), NULL);
	}

IL_0082:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___inbuff0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)((int32_t)243)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___inbuff0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___inbuff0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		uint8_t L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_00b1;
		}
	}
	{
		uint8_t L_28 = V_6;
		il2cpp_codegen_runtime_class_init_inline(PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_il2cpp_TypeInfo_var);
		uint8_t L_29 = ((PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_tD87BC2AFC97AFC5FD8016CEA4498183CDF98C730_il2cpp_TypeInfo_var))->___Ping_4;
		G_B10_0 = ((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0);
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B10_0 = 0;
	}

IL_00b2:
	{
		V_8 = (bool)G_B10_0;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___inbuff0;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_32 = (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB*)il2cpp_codegen_object_new(StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StreamBuffer__ctor_mEC7E08D2E4D12E4BC30CD704D4D9E208040BF771(L_32, L_31, NULL);
		bool L_33;
		L_33 = VirtualFuncInvoker1< bool, StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* >::Invoke(17 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_32);
		goto IL_0166;
	}

IL_00cb:
	{
		int32_t L_34 = ___dataLength1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_7 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___inbuff0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_7;
		int32_t L_38 = ___dataLength1;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_36, 0, (RuntimeArray*)L_37, 0, L_38, NULL);
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_39 = __this->___incomingList_47;
		V_9 = L_39;
		Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_40 = V_9;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_40, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0101:
			{// begin finally (depth: 1)
				Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_41 = V_9;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_41, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* L_42 = __this->___incomingList_47;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_7;
			NullCheck(L_42);
			Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E(L_42, L_43, Queue_1_Enqueue_mE75F2AD70308D4A0230279F09C63155FBF2D0B8E_RuntimeMethod_var);
			goto IL_010a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		goto IL_0166;
	}

IL_010d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___inbuff0;
		NullCheck(L_44);
		int32_t L_45 = 0;
		uint8_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_10 = (bool)((((int32_t)L_46) == ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_47 = V_10;
		if (!L_47)
		{
			goto IL_0138;
		}
	}
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_48;
		L_48 = PeerBase_get_TrafficStatsIncoming_m0C70F8727D31B14AEE92DDB1B65A1CF20E838855(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___inbuff0;
		NullCheck(L_49);
		NullCheck(L_48);
		TrafficStats_CountControlCommand_m70A881827E55E476DAF814DFE9E6ACF8CCE939D7(L_48, ((int32_t)(((RuntimeArray*)L_49)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___inbuff0;
		TPeer_ReadPingResult_m2049B8988942CC0A224B6C69851B3E564C821958(__this, L_50, NULL);
		goto IL_0166;
	}

IL_0138:
	{
		uint8_t L_51;
		L_51 = PeerBase_get_debugOut_mA29D5E38097C6B8374B8C69C89D2AEE5ACBCDF76(__this, NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_51) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_11;
		if (!L_52)
		{
			goto IL_0166;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___inbuff0;
		NullCheck(L_53);
		int32_t L_54 = 0;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		uint8_t L_56 = L_55;
		RuntimeObject* L_57 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58;
		L_58 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97, L_57, NULL);
		PeerBase_EnqueueDebugReturn_m8A6D9158E69A1F8236110E81489001905D199231(__this, 1, L_58, NULL);
	}

IL_0166:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m2049B8988942CC0A224B6C69851B3E564C821958 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inbuff0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inbuff0;
		il2cpp_codegen_runtime_class_init_inline(Protocol_tC0411AB3F04A07C110E728510CDCBAC8EADFC86B_il2cpp_TypeInfo_var);
		Protocol_Deserialize_m377AD5DAEC9CD22D7B4E3C1B4CCF81DB6A4F551B((&V_0), L_0, (&V_2), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inbuff0;
		Protocol_Deserialize_m377AD5DAEC9CD22D7B4E3C1B4CCF81DB6A4F551B((&V_1), L_1, (&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		int32_t L_3 = V_1;
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		bool L_4 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffsetIsAvailable_15;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_6 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18;
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___roundTripTime_16 = L_6;
	}

IL_0045:
	{
		int32_t L_7 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18;
		PeerBase_UpdateRoundTripTimeAndVariance_m1789BB31F433A36D8E982C8869D978026C1BF8B1(__this, L_7, NULL);
		bool L_8 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffsetIsAvailable_15;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18;
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffset_14 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(L_11>>1)))), L_12));
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffsetIsAvailable_15 = (bool)1;
	}

IL_0080:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_mB88FBC263EDD471F9EA11D4F7B67127B6FAACA88 (TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694* __this, OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___operationResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_0 = ___operationResponse0;
		NullCheck(L_0);
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_1 = L_0->___Parameters_3;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB(L_1, (uint8_t)2, Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB_RuntimeMethod_var);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_3 = ___operationResponse0;
		NullCheck(L_3);
		Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* L_4 = L_3->___Parameters_3;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB(L_4, (uint8_t)1, Dictionary_2_get_Item_m8F3D010A0875A7B6F33873C8BD16D7F4A483CEFB_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		int32_t L_7 = V_1;
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		bool L_8 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffsetIsAvailable_15;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18;
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___roundTripTime_16 = L_10;
	}

IL_004d:
	{
		int32_t L_11 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18;
		PeerBase_UpdateRoundTripTimeAndVariance_m1789BB31F433A36D8E982C8869D978026C1BF8B1(__this, L_11, NULL);
		bool L_12 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffsetIsAvailable_15;
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___lastRoundTripTime_18;
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffset_14 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_14, ((int32_t)(L_15>>1)))), L_16));
		((PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F*)__this)->___serverTimeOffsetIsAvailable_15 = (bool)1;
	}

IL_0086:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__cctor_mA7578EA4BBB28DA84479AFD759AC1A16574EC810 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var))->___tcpFramedMessageHead_51 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var))->___tcpFramedMessageHead_51), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)243));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var))->___tcpMsgHead_52 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t760747CAFC06B43A930E033172A1FEF042FCF694_il2cpp_TypeInfo_var))->___tcpMsgHead_52), (void*)L_5);
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
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m36966BEC5C0357BB15E11A7C0E3EBA30018F2BF6 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COperationByteCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m6A234BFC89E5C345689769D1CE308EC654D953AC (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COperationByteCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m9011FDA32ACC474A968BC614990DC4F678D075F7 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COperationCountU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_mFF55253AD445448F06B09AD3CDB85C0006FF1D87 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COperationCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_mD035D1FBCC51632CC1EF061EEADA88F5444FD8F0 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CResultByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m56FF68B66B79EC0D5D9B9D6DF2EC1B0F9C67541B (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CResultByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m3251092EFCF512B788A97E9A2672304BB0B05365 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CResultCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m70B9D61ED0D7C9FA0DCCE0D38034E5E2E3465C64 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CResultCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_mB33BC27A65F0E9E7197053E820A541FB35EA9091 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEventByteCountU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m7D726975F7A5515CF057F971519159D4E826E879 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CEventByteCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m0D6EDC66F02A91E11B680F4371CE2EB0AE1B3F36 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEventCountU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m602D515806131E91A8C41FEDF74F03582ACD9AF0 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CEventCountU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m91A293B663A0D701AEE63D5980044D7B019AE608 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestOpResponseCallbackU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m518D556FDE4C196B53FBAE15B45366A18B374175 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestEventCallbackU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m20582EAC7872FFEC12A12487C5D3DC33153457AD (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestEventCallbackU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m98643D9BFE90601666983FFA7A1F2197C185D873 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestMessageCallbackU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_mD0414C415EA88426BF82BC36E4F320F1E9CB7BB3 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestMessageCallbackU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_mDD13AB8092AD3DFB1E5B5743AD9EDAA4ADB61C4F (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_mE584FD02E95EB34E6B10D722270934294E6FAAAD (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestRawMessageCallbackU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mACB0030449D979B4C53A3D155BD46D1AA5452CDB (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CLongestEventCallbackCodeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mA5C84B2662E53BF6C44D33EE6D6A8C9B9DF21413 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m32C99CFABAFFA29623BD2310665B36FB16E51F84 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m1E4A6523E743DEBC2841B4612D529354B960D5B0 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mF3E37B9F1FA014C5ABB993507143B26727FA3F01 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m38616D08B09C389D16DBF1319B32ADF4ED2472FD (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mBC36DB6CA681DD7E2C780338702AB870FAF8FFC5 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalMessageCount_mA6B693C4265A9680FBD12F6259A3BB050B985CF2 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationCount_m9011FDA32ACC474A968BC614990DC4F678D075F7_inline(__this, NULL);
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_ResultCount_m3251092EFCF512B788A97E9A2672304BB0B05365_inline(__this, NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_EventCount_m0D6EDC66F02A91E11B680F4371CE2EB0AE1B3F36_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), L_2));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalIncomingMessageCount_m13EB9EE2F58AE4A8884589ECB6C06D176B74A326 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_ResultCount_m3251092EFCF512B788A97E9A2672304BB0B05365_inline(__this, NULL);
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_EventCount_m0D6EDC66F02A91E11B680F4371CE2EB0AE1B3F36_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mBD769AE99A34702FEA80F6BC9D79542F0992DC4C (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationCount_m9011FDA32ACC474A968BC614990DC4F678D075F7_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_m10354051129E7212570E179A097F2EF4EB375BED (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___operationBytes0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationByteCount_m36966BEC5C0357BB15E11A7C0E3EBA30018F2BF6_inline(__this, NULL);
		int32_t L_1 = ___operationBytes0;
		TrafficStatsGameLevel_set_OperationByteCount_m6A234BFC89E5C345689769D1CE308EC654D953AC_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_OperationCount_m9011FDA32ACC474A968BC614990DC4F678D075F7_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_OperationCount_mFF55253AD445448F06B09AD3CDB85C0006FF1D87_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountResult_m495374830FABD3BA33FAEA905E4D035908AEF66B (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___resultBytes0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_ResultByteCount_mD035D1FBCC51632CC1EF061EEADA88F5444FD8F0_inline(__this, NULL);
		int32_t L_1 = ___resultBytes0;
		TrafficStatsGameLevel_set_ResultByteCount_m56FF68B66B79EC0D5D9B9D6DF2EC1B0F9C67541B_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_ResultCount_m3251092EFCF512B788A97E9A2672304BB0B05365_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_ResultCount_m70B9D61ED0D7C9FA0DCCE0D38034E5E2E3465C64_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountEvent_mD4DD193C70402BEB0F7FD0895AAB384FAEBCDEE7 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___eventBytes0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_EventByteCount_mB33BC27A65F0E9E7197053E820A541FB35EA9091_inline(__this, NULL);
		int32_t L_1 = ___eventBytes0;
		TrafficStatsGameLevel_set_EventByteCount_m7D726975F7A5515CF057F971519159D4E826E879_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_EventCount_m0D6EDC66F02A91E11B680F4371CE2EB0AE1B3F36_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_EventCount_m602D515806131E91A8C41FEDF74F03582ACD9AF0_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForResponseCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForResponseCallback_m9F577DDC3DC99EF97A4CD589A1796D9F8A4D3C95 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestOpResponseCallback_m91A293B663A0D701AEE63D5980044D7B019AE608_inline(__this, L_3, NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m518D556FDE4C196B53FBAE15B45366A18B374175_inline(__this, L_4, NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForEventCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForEventCallback_mA2FA6821945F80A24F0DB149A32C326DE2BE9F0B (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestEventCallback_m20582EAC7872FFEC12A12487C5D3DC33153457AD_inline(__this, L_3, NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestEventCallbackCode_mACB0030449D979B4C53A3D155BD46D1AA5452CDB_inline(__this, L_4, NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForMessageCallback_mEE098E553A5C31BC3D77B9D07504A23C45B7A508 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___time0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestMessageCallback_m98643D9BFE90601666983FFA7A1F2197C185D873_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestMessageCallback_mD0414C415EA88426BF82BC36E4F320F1E9CB7BB3_inline(__this, L_3, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForRawMessageCallback_m1FDD8BB7010A5309E97E5529EA360684D472058F (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___time0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestRawMessageCallback_mDD13AB8092AD3DFB1E5B5743AD9EDAA4ADB61C4F_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestRawMessageCallback_mE584FD02E95EB34E6B10D722270934294E6FAAAD_inline(__this, L_3, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::DispatchIncomingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_DispatchIncomingCommandsCalled_mFED4C5F902553A760C29257F63742DECE35FF7C1 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___timeOfLastDispatchCall_0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		int32_t L_3 = __this->___timeOfLastDispatchCall_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline(__this, NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mA5C84B2662E53BF6C44D33EE6D6A8C9B9DF21413_inline(__this, L_7, NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8;
		L_8 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m1E4A6523E743DEBC2841B4612D529354B960D5B0_inline(__this, NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mF3E37B9F1FA014C5ABB993507143B26727FA3F01_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		__this->___timeOfLastDispatchCall_0 = L_10;
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::SendOutgoingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_SendOutgoingCommandsCalled_mB6CB9F4363411108FD752B2F418CAE82BDCE15EC (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___timeOfLastSendCall_1;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		int32_t L_3 = __this->___timeOfLastSendCall_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline(__this, NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m32C99CFABAFFA29623BD2310665B36FB16E51F84_inline(__this, L_7, NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8;
		L_8 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m38616D08B09C389D16DBF1319B32ADF4ED2472FD_inline(__this, NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mBC36DB6CA681DD7E2C780338702AB870FAF8FFC5_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = SupportClass_GetTickCount_mD3CB809D76A17DD119BF2F64F8C3FE7E7A1C9FC7(NULL);
		__this->___timeOfLastSendCall_1 = L_10;
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToString_mB672C93A48342F95C9AA841D46210EF7BF13EBF8 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationByteCount_m36966BEC5C0357BB15E11A7C0E3EBA30018F2BF6_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = TrafficStatsGameLevel_get_ResultByteCount_mD035D1FBCC51632CC1EF061EEADA88F5444FD8F0_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = TrafficStatsGameLevel_get_EventByteCount_mB33BC27A65F0E9E7197053E820A541FB35EA9091_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB, L_2, L_5, L_8, NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToStringVitalStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToStringVitalStats_mF60CD8494A973175C04931D3841226922591C366 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6;
		L_6 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14;
		L_14 = TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline(__this, NULL);
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18;
		L_18 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline(__this, NULL);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		uint8_t L_22;
		L_22 = TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline(__this, NULL);
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26;
		L_26 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m38616D08B09C389D16DBF1319B32ADF4ED2472FD_inline(__this, NULL);
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		int32_t L_30;
		L_30 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m1E4A6523E743DEBC2841B4612D529354B960D5B0_inline(__this, NULL);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D, L_29, NULL);
		V_0 = L_33;
		goto IL_0084;
	}

IL_0084:
	{
		String_t* L_34 = V_0;
		return L_34;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel__ctor_mCC01578BF1F5B0BA33C69C53D13BB0992C234571 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m1B780168BEA2904CA9978CD7108F2C69CE442A88 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPackageHeaderSizeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m4427DE958736C30E3615CA60C3D27812A769AFFB (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPackageHeaderSizeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mBDE6C723F05226630846F681B86EE9759F736B28 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReliableCommandCountU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_mF418B8D22CBF720CB8694E9243A64D9A9ABCE0E9 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReliableCommandCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m8E70EC1A089573B380D3BAEBBBF7A70607CE0497 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CUnreliableCommandCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m8C1A65BFDB2AB38DABDA39993982D22A31CA03AD (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUnreliableCommandCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_m9A94BD626A5808F230C105C8BACE8BDD9868C3CA (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFragmentCommandCountU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m371F9C59E4C208F9294647C8098006B52A2FA955 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFragmentCommandCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_mE12DD82883CDA3BC4BAE93D495900177AEBDB05C (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CControlCommandCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m33E299D38D79A8089E3E123106197E31CBA4D562 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CControlCommandCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTotalPacketCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m1F2462971D60D696A9F0ACC128B36EC38B2298DF (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTotalPacketCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m81EFD3CD6FF16B0BD0BF40A96D234C13FFA0AB5B (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_mF1BAE11EB423190F3D02166FF5A99DF3463EE535 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTotalCommandsInPacketsU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m39E80DE37134AFF7D9356BAC2FE31EA08A688BC3 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReliableCommandBytesU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mF0367373B55C3FA98B734FD34F06C4C99EAA9E39 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReliableCommandBytesU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m3E51EBF1D42BE899B0A313220051923C3F629B40 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CUnreliableCommandBytesU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m13291467E23326F4EF6B532FADAB8E3E6D391EC6 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUnreliableCommandBytesU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m70141B4CF94ABCEE704D2E63B6F6AA47697BEAF8 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFragmentCommandBytesU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mE52846B1D3B36C9CCC2CE469E290BA2222B8B572 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFragmentCommandBytesU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m00CCDA4D90E8A037AE124924480FF497E44BB4FB (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CControlCommandBytesU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m85F1FE00A921B9DFFD8E9D2FEBDB98A5E0414A1E (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CControlCommandBytesU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats__ctor_m5A22A339466F49270AA9099AC64198C00E453B4B (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___packageHeaderSize0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___packageHeaderSize0;
		TrafficStats_set_PackageHeaderSize_m4427DE958736C30E3615CA60C3D27812A769AFFB_inline(__this, L_0, NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m40882FEAE0B0429C86F9A369C01F27670E56DCC4 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ReliableCommandBytes_m39E80DE37134AFF7D9356BAC2FE31EA08A688BC3_inline(__this, NULL);
		int32_t L_1;
		L_1 = TrafficStats_get_UnreliableCommandBytes_m3E51EBF1D42BE899B0A313220051923C3F629B40_inline(__this, NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_FragmentCommandBytes_m70141B4CF94ABCEE704D2E63B6F6AA47697BEAF8_inline(__this, NULL);
		int32_t L_3;
		L_3 = TrafficStats_get_ControlCommandBytes_m00CCDA4D90E8A037AE124924480FF497E44BB4FB_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), L_2)), L_3));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_m9767E9AE8DC60839550CFF81E547770F242F81A1 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_TotalCommandBytes_m40882FEAE0B0429C86F9A369C01F27670E56DCC4(__this, NULL);
		int32_t L_1;
		L_1 = TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56_inline(__this, NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_PackageHeaderSize_m1B780168BEA2904CA9978CD7108F2C69CE442A88_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastAck_mFDC9ED64C57BC5E3651135F9B21805371230CB1E (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTimestampOfLastAckU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastReliableCommand_m3AB3B935DE215E86B85F74628D15FCD68498350E (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_m70A881827E55E476DAF814DFE9E6ACF8CCE939D7 (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ControlCommandBytes_m00CCDA4D90E8A037AE124924480FF497E44BB4FB_inline(__this, NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ControlCommandBytes_m85F1FE00A921B9DFFD8E9D2FEBDB98A5E0414A1E_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_ControlCommandCount_mE12DD82883CDA3BC4BAE93D495900177AEBDB05C_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ControlCommandCount_m33E299D38D79A8089E3E123106197E31CBA4D562_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_mD9D723FD5DFFC806355B121EDAF34F05A1D10E7F (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ReliableCommandBytes_m39E80DE37134AFF7D9356BAC2FE31EA08A688BC3_inline(__this, NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ReliableCommandBytes_mF0367373B55C3FA98B734FD34F06C4C99EAA9E39_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_ReliableCommandCount_mBDE6C723F05226630846F681B86EE9759F736B28_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ReliableCommandCount_mF418B8D22CBF720CB8694E9243A64D9A9ABCE0E9_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m145B50835A379E19BA4FC7365A8ED0BB1CFCDE7C (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_UnreliableCommandBytes_m3E51EBF1D42BE899B0A313220051923C3F629B40_inline(__this, NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_UnreliableCommandBytes_m13291467E23326F4EF6B532FADAB8E3E6D391EC6_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_UnreliableCommandCount_m8E70EC1A089573B380D3BAEBBBF7A70607CE0497_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_UnreliableCommandCount_m8C1A65BFDB2AB38DABDA39993982D22A31CA03AD_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountFragmentOpCommand_m05EAD51BD62B76FEF3BD45EB4D314B335D4C336E (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_FragmentCommandBytes_m70141B4CF94ABCEE704D2E63B6F6AA47697BEAF8_inline(__this, NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_FragmentCommandBytes_mE52846B1D3B36C9CCC2CE469E290BA2222B8B572_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_FragmentCommandCount_m9A94BD626A5808F230C105C8BACE8BDD9868C3CA_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_FragmentCommandCount_m371F9C59E4C208F9294647C8098006B52A2FA955_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStats_ToString_mAF8F0F69004660B2928A3FC2E80AFCAE7BCA760C (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2;
		L_2 = TrafficStats_get_TotalPacketBytes_m9767E9AE8DC60839550CFF81E547770F242F81A1(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6;
		L_6 = TrafficStats_get_TotalCommandBytes_m40882FEAE0B0429C86F9A369C01F27670E56DCC4(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56_inline(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14;
		L_14 = TrafficStats_get_TotalCommandsInPackets_m81EFD3CD6FF16B0BD0BF40A96D234C13FFA0AB5B_inline(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D, L_13, NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.Void ExitGames.Client.Photon.Version::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__cctor_m6DBB6F4CFF406BED563994006F0483277EDDBD12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A_StaticFields*)il2cpp_codegen_static_fields_for(Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A_il2cpp_TypeInfo_var))->___clientVersion_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A_StaticFields*)il2cpp_codegen_static_fields_for(Version_tA21A2DF89C3D03C9A075029FD09B1B73C7BF407A_il2cpp_TypeInfo_var))->___clientVersion_0), (void*)L_1);
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
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Init(System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Init_m9266A04A195F70744F3DB04BF2BDF4FCB542DF24 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptionSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacSecret1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes2, bool ___chainingModeGCM3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_0 = (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819*)il2cpp_codegen_object_new(AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241(L_0, NULL);
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___encryptionSecret0;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		__this->___encryptorIn_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encryptorIn_0), (void*)L_1);
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_3 = (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819*)il2cpp_codegen_object_new(AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241(L_3, NULL);
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_4 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___encryptionSecret0;
		NullCheck(L_4);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_4, L_5);
		__this->___encryptorOut_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encryptorOut_1), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___hmacSecret1;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_7 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_7, L_6, NULL);
		__this->___hmacsha256In_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmacsha256In_2), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___hmacSecret1;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_9 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_9, L_8, NULL);
		__this->___hmacsha256Out_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmacsha256Out_3), (void*)L_9);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Encrypt(System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Encrypt_mCCDE4B1AEC145C1456D85EBD32F3EB7268F56949 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t* ___offset3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_5 = NULL;
	{
		bool L_0 = ___ivPrefix4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_2 = __this->___encryptorOut_1;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(27 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV() */, L_2);
	}

IL_0015:
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_3 = __this->___encryptorOut_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_00ae;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00ae:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output2;
				int32_t* L_8 = ___offset3;
				int32_t L_9 = *((int32_t*)L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output2;
				NullCheck(L_10);
				int32_t* L_11 = ___offset3;
				int32_t L_12 = *((int32_t*)L_11);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC(L_13, L_7, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), L_12)), NULL);
				V_2 = L_13;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0096_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_2;
							if (!L_14)
							{
								goto IL_00a0_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_2;
							NullCheck(L_15);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
						}

IL_00a0_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						bool L_16 = ___ivPrefix4;
						V_3 = L_16;
						bool L_17 = V_3;
						if (!L_17)
						{
							goto IL_0057_2;
						}
					}
					{
						Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_18 = __this->___encryptorOut_1;
						NullCheck(L_18);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
						L_19 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_18);
						V_4 = L_19;
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = V_2;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
						NullCheck(L_22);
						NullCheck(L_20);
						VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)));
					}

IL_0057_2:
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_2;
						RuntimeObject* L_24 = V_1;
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_25 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_25);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_25, L_23, L_24, 1, NULL);
						V_5 = L_25;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0086_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_26 = V_5;
									if (!L_26)
									{
										goto IL_0092_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_27 = V_5;
									NullCheck(L_27);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
								}

IL_0092_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_28 = V_5;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___data0;
							int32_t L_30 = ___len1;
							NullCheck(L_28);
							VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, L_30);
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_31 = V_5;
							NullCheck(L_31);
							CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05(L_31, NULL);
							int32_t* L_32 = ___offset3;
							int32_t* L_33 = ___offset3;
							int32_t L_34 = *((int32_t*)L_33);
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = V_2;
							NullCheck(L_35);
							int64_t L_36;
							L_36 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_35);
							*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_34, ((int32_t)L_36)));
							goto IL_0093_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0093_2:
					{
						goto IL_00a1_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a1_1:
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::Decrypt(System.Byte[],System.Int32,System.Int32,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNet_Decrypt_mF0C02888DFB10D65C188F9F86E678B5BC5316727 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___len2, int32_t* ___outLen3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_3 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	{
		bool L_0 = ___ivPrefix4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___reusedIvBuffer_4;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, ((int32_t)16), NULL);
		int32_t L_5 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)16)));
		int32_t L_6 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)16)));
	}

IL_0026:
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_7 = __this->___encryptorIn_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___reusedIvBuffer_4;
		NullCheck(L_7);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_7, L_8);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_9 = __this->___encryptorIn_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_9);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_1;
					if (!L_11)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_12 = V_1;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_00e1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___data0;
				int32_t L_14 = ___offset1;
				int32_t L_15 = ___len2;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC(L_16, L_13, L_14, L_15, NULL);
				V_2 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00cc_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_2;
							if (!L_17)
							{
								goto IL_00d6_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = V_2;
							NullCheck(L_18);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
						}

IL_00d6_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = V_2;
						RuntimeObject* L_20 = V_1;
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_21 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_21);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_21, L_19, L_20, 0, NULL);
						V_3 = L_21;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00c1_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_22 = V_3;
									if (!L_22)
									{
										goto IL_00cb_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_23 = V_3;
									NullCheck(L_23);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
								}

IL_00cb_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								int32_t L_24 = ___len2;
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
								NullCheck(L_25);
								MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_25, L_24, NULL);
								V_4 = L_25;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_00b4_3:
									{// begin finally (depth: 4)
										{
											MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_4;
											if (!L_26)
											{
												goto IL_00c0_3;
											}
										}
										{
											MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_4;
											NullCheck(L_27);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
										}

IL_00c0_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
									}

IL_0062_4:
									{
										CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_28 = V_3;
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___reusedReadBuffer_5;
										NullCheck(L_28);
										int32_t L_30;
										L_30 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, ((int32_t)16));
										V_5 = L_30;
										int32_t L_31 = V_5;
										V_6 = (bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0);
										bool L_32 = V_6;
										if (!L_32)
										{
											goto IL_0092_4;
										}
									}
									{
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_33 = V_4;
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___reusedReadBuffer_5;
										int32_t L_35 = V_5;
										NullCheck(L_33);
										VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, L_35);
									}

IL_0092_4:
									{
										int32_t L_36 = V_5;
										V_7 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
										bool L_37 = V_7;
										if (L_37)
										{
											goto IL_0062_4;
										}
									}
									{
										int32_t* L_38 = ___outLen3;
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_39 = V_4;
										NullCheck(L_39);
										int64_t L_40;
										L_40 = VirtualFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Length() */, L_39);
										*((int32_t*)L_38) = (int32_t)((int32_t)L_40);
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_41 = V_4;
										NullCheck(L_41);
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
										L_42 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_41);
										V_8 = L_42;
										goto IL_00e2;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_8;
		return L_43;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::CreateHMAC(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNet_CreateHMAC_m071584A28037EBD4DB63ADDA88C4E34C917DC567 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_0 = __this->___hmacsha256Out_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_0, L_1, L_2, L_3, NULL);
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_5 = __this->___hmacsha256Out_3;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_5);
		V_0 = L_6;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_7 = __this->___hmacsha256Out_3;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		V_1 = L_8;
		goto IL_002c;
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNet::CheckHMAC(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNet_CheckHMAC_mFECEB4B2E793A5C3A10CFE8EFD4DDA23443506C8 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B10_0 = 0;
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_0 = __this->___hmacsha256In_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___len1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710(L_0, L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)32))), NULL);
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_4 = __this->___hmacsha256In_2;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_4);
		V_0 = L_5;
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_00a1;
	}

IL_0025:
	{
		int32_t L_6 = ___len1;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)32))), ((int32_t)il2cpp_codegen_multiply(L_7, 8))));
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_8, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_12) == ((uint32_t)L_16))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___data0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((!(((uint32_t)L_20) == ((uint32_t)L_24))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___data0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 2));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 2));
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((uint32_t)L_28) == ((uint32_t)L_32))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___data0;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 3));
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_40))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___data0;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 4));
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 4));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((uint32_t)L_44) == ((uint32_t)L_48))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___data0;
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 5));
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_0;
		int32_t L_54 = V_4;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 5));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)L_52) == ((uint32_t)L_56))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___data0;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 6));
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		int32_t L_62 = V_4;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 6));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_60) == ((uint32_t)L_64))))
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ___data0;
		int32_t L_66 = V_3;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 7));
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_0;
		int32_t L_70 = V_4;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 7));
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		G_B10_0 = ((((int32_t)L_68) == ((int32_t)L_72))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B10_0 = 0;
	}

IL_009b:
	{
		V_1 = (bool)G_B10_0;
		int32_t L_73 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00a1:
	{
		int32_t L_74 = V_2;
		bool L_75 = V_1;
		V_5 = (bool)((int32_t)(((((int32_t)L_74) < ((int32_t)4))? 1 : 0)&(int32_t)L_75));
		bool L_76 = V_5;
		if (L_76)
		{
			goto IL_0025;
		}
	}
	{
		bool L_77 = V_1;
		V_6 = L_77;
		goto IL_00b5;
	}

IL_00b5:
	{
		bool L_78 = V_6;
		return L_78;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet__ctor_m2957F804DA7D56350E57F5D63DD2E79AA7F57963 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___reusedIvBuffer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reusedIvBuffer_4), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___reusedReadBuffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reusedReadBuffer_5), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD(intptr_t ___userData0, int32_t ___debugLevel1, char* ___message2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message2' to managed representation
	String_t* ____message2_unmarshaled = NULL;
	____message2_unmarshaled = il2cpp_codegen_marshal_string_result(___message2);

	// Managed method invocation
	EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD(___userData0, ___debugLevel1, ____message2_unmarshaled, NULL);

}
// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::egconstructEncryptor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncryptorNative_egconstructEncryptor_m93150515D73CC820A52579FA1C8524D5D809972B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pEncryptSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHmacSecret1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egconstructEncryptor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pEncryptSecret0' to native representation
	uint8_t* ____pEncryptSecret0_marshaled = NULL;
	if (___pEncryptSecret0 != NULL)
	{
		____pEncryptSecret0_marshaled = reinterpret_cast<uint8_t*>((___pEncryptSecret0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pHmacSecret1' to native representation
	uint8_t* ____pHmacSecret1_marshaled = NULL;
	if (___pHmacSecret1 != NULL)
	{
		____pHmacSecret1_marshaled = reinterpret_cast<uint8_t*>((___pHmacSecret1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(egconstructEncryptor)(____pEncryptSecret0_marshaled, ____pHmacSecret1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____pEncryptSecret0_marshaled, ____pHmacSecret1_marshaled);
	#endif

	return returnValue;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdestructEncryptor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdestructEncryptor_m389CF331E1B86FEB342A6C7D0EDD5A05E59F677C (intptr_t ___pEncryptor0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egdestructEncryptor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egdestructEncryptor)(___pEncryptor0);
	#else
	il2cppPInvokeFunc(___pEncryptor0);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egencrypt(System.IntPtr,System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egencrypt_mC66B0562EC63361F32446AD0F159BF3A97566224 (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut3, int32_t* ___outSize4, int32_t* ___outOffset5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, uint8_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egencrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut3' to native representation
	uint8_t* ____pOut3_marshaled = NULL;
	if (___pOut3 != NULL)
	{
		____pOut3_marshaled = reinterpret_cast<uint8_t*>((___pOut3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egencrypt)(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ____pOut3_marshaled, ___outSize4, ___outOffset5);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ____pOut3_marshaled, ___outSize4, ___outOffset5);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdecrypt_m3EE4A4CEAD1379F9AC3BE75E3DF646D98F3BD672 (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSizem2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egdecrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut4' to native representation
	uint8_t* ____pOut4_marshaled = NULL;
	if (___pOut4 != NULL)
	{
		____pOut4_marshaled = reinterpret_cast<uint8_t*>((___pOut4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egdecrypt)(___pEncryptor0, ____pIn1_marshaled, ___inSizem2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSizem2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egHMAC(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egHMAC_m10C152F575726162FE547C020917DE6E7715A97A (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t* ___outSize5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egHMAC", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut4' to native representation
	uint8_t* ____pOut4_marshaled = NULL;
	if (___pOut4 != NULL)
	{
		____pOut4_marshaled = reinterpret_cast<uint8_t*>((___pOut4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egHMAC)(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ___inOffset3, ____pOut4_marshaled, ___outSize5);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingCallback(System.IntPtr,ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egsetEncryptorLoggingCallback_m04DFAA5ECFD90AC1E3A76A221DB992AAA247701C (intptr_t ___userData0, LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egsetEncryptorLoggingCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egsetEncryptorLoggingCallback)(___userData0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___userData0, ____callback1_marshaled);
	#endif

}
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_egsetEncryptorLoggingLevel_m592E2590A0153F956DF1D1DA0FBE32E7032B46BE (int32_t ___level0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egsetEncryptorLoggingLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egsetEncryptorLoggingLevel)(___level0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___level0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Finalize_m2FC8EBF92FFBE5D6E01DB86F0CBB56631EA1238F (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::OnNativeLog(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD (intptr_t ___userData0, int32_t ___debugLevel1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___debugLevel1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_001f:
	{
		String_t* L_2 = ___message2;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
		goto IL_0058;
	}

IL_0032:
	{
		String_t* L_4 = ___message2;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_5, NULL);
		goto IL_0058;
	}

IL_0045:
	{
		String_t* L_6 = ___message2;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		goto IL_0058;
	}

IL_0058:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Init(System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Init_mFA0B1EF9B57DE411AA72B1E42D4E78BF5CD832BA (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptionSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacSecret1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes2, bool ___chainingModeGCM3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* L_0 = (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913*)il2cpp_codegen_object_new(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9(L_0, NULL, (intptr_t)((void*)EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		EncryptorNative_egsetEncryptorLoggingCallback_m04DFAA5ECFD90AC1E3A76A221DB992AAA247701C((0), L_0, NULL);
		bool L_1;
		L_1 = EncryptorNative_egsetEncryptorLoggingLevel_m592E2590A0153F956DF1D1DA0FBE32E7032B46BE(1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___encryptionSecret0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___hmacSecret1;
		intptr_t L_4;
		L_4 = EncryptorNative_egconstructEncryptor_m93150515D73CC820A52579FA1C8524D5D809972B(L_2, L_3, NULL);
		__this->___encryptor_3 = L_4;
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, bool ___dispose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___encryptor_3;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->___encryptor_3;
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		EncryptorNative_egdestructEncryptor_m389CF331E1B86FEB342A6C7D0EDD5A05E59F677C(L_3, NULL);
		__this->___encryptor_3 = (0);
	}

IL_002e:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Encrypt(System.Byte[],System.Int32,System.Byte[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Encrypt_mA7D142E8748D80FC67C0BDBEAE7DCBD46B2B88FF (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t* ___offset3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output2;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		intptr_t L_1 = __this->___encryptor_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		int32_t L_3 = ___len1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t* L_5 = ___offset3;
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		EncryptorNative_egencrypt_mC66B0562EC63361F32446AD0F159BF3A97566224(L_1, L_2, L_3, L_4, (&V_0), L_5, NULL);
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNative::CreateHMAC(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNative_CreateHMAC_mECA64DE3C87B57B1A553142A5DB67FEEBF5006C7 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hmacHash_4;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529((RuntimeObject*)L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___hmacHash_4;
			NullCheck(L_3);
			V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
			intptr_t L_4 = __this->___encryptor_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___count2;
			int32_t L_7 = ___offset1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___hmacHash_4;
			il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
			EncryptorNative_egHMAC_m10C152F575726162FE547C020917DE6E7715A97A(L_4, L_5, L_6, L_7, L_8, (&V_1), NULL);
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___hmacHash_4;
		V_2 = L_9;
		goto IL_0044;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		return L_10;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNative::Decrypt(System.Byte[],System.Int32,System.Int32,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNative_Decrypt_m1A3107015C18AA153A1A1FD623AAE6BEECED303D (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___len2, int32_t* ___outLen3, bool ___ivPrefix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		int32_t* L_0 = ___outLen3;
		int32_t L_1 = ___len2;
		int32_t L_2 = ___offset1;
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___BLOCK_SIZE_0;
		int32_t L_4 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___BLOCK_SIZE_0;
		int32_t L_5 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___BLOCK_SIZE_0;
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/L_3)), L_4)), L_5));
		int32_t* L_6 = ___outLen3;
		int32_t L_7 = *((int32_t*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		intptr_t L_9 = __this->___encryptor_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___data0;
		int32_t L_11 = ___len2;
		int32_t L_12 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t* L_14 = ___outLen3;
		EncryptorNative_egdecrypt_m3EE4A4CEAD1379F9AC3BE75E3DF646D98F3BD672(L_9, L_10, L_11, L_12, L_13, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		V_1 = L_15;
		goto IL_0038;
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		return L_16;
	}
}
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::CheckHMAC(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_CheckHMAC_mF2895D3C820FECF5AA1A80BCE5042D03E20D6554 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B11_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hmacHash_4;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529((RuntimeObject*)L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___hmacHash_4;
				NullCheck(L_3);
				V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
				intptr_t L_4 = __this->___encryptor_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
				int32_t L_6 = ___len1;
				il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
				int32_t L_7 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___hmacHash_4;
				EncryptorNative_egHMAC_m10C152F575726162FE547C020917DE6E7715A97A(L_4, L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), 0, L_8, (&V_1), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___hmacHash_4;
				V_2 = L_9;
				V_3 = (bool)1;
				V_4 = 0;
				goto IL_00d3_1;
			}

IL_0047_1:
			{
				int32_t L_10 = ___len1;
				il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
				int32_t L_11 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2;
				int32_t L_12 = V_4;
				V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, 8))));
				int32_t L_13 = V_4;
				V_6 = ((int32_t)il2cpp_codegen_multiply(L_13, 8));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___data0;
				int32_t L_15 = V_5;
				NullCheck(L_14);
				int32_t L_16 = L_15;
				uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
				int32_t L_19 = V_6;
				NullCheck(L_18);
				int32_t L_20 = L_19;
				uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
				if ((!(((uint32_t)L_17) == ((uint32_t)L_21))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___data0;
				int32_t L_23 = V_5;
				NullCheck(L_22);
				int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
				int32_t L_27 = V_6;
				NullCheck(L_26);
				int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
				uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				if ((!(((uint32_t)L_25) == ((uint32_t)L_29))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___data0;
				int32_t L_31 = V_5;
				NullCheck(L_30);
				int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 2));
				uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
				int32_t L_35 = V_6;
				NullCheck(L_34);
				int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
				uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
				if ((!(((uint32_t)L_33) == ((uint32_t)L_37))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___data0;
				int32_t L_39 = V_5;
				NullCheck(L_38);
				int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 3));
				uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_2;
				int32_t L_43 = V_6;
				NullCheck(L_42);
				int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 3));
				uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				if ((!(((uint32_t)L_41) == ((uint32_t)L_45))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___data0;
				int32_t L_47 = V_5;
				NullCheck(L_46);
				int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 4));
				uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_2;
				int32_t L_51 = V_6;
				NullCheck(L_50);
				int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 4));
				uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
				if ((!(((uint32_t)L_49) == ((uint32_t)L_53))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___data0;
				int32_t L_55 = V_5;
				NullCheck(L_54);
				int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 5));
				uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_2;
				int32_t L_59 = V_6;
				NullCheck(L_58);
				int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 5));
				uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
				if ((!(((uint32_t)L_57) == ((uint32_t)L_61))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___data0;
				int32_t L_63 = V_5;
				NullCheck(L_62);
				int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 6));
				uint8_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_2;
				int32_t L_67 = V_6;
				NullCheck(L_66);
				int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 6));
				uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
				if ((!(((uint32_t)L_65) == ((uint32_t)L_69))))
				{
					goto IL_00ca_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___data0;
				int32_t L_71 = V_5;
				NullCheck(L_70);
				int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 7));
				uint8_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_2;
				int32_t L_75 = V_6;
				NullCheck(L_74);
				int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 7));
				uint8_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
				G_B11_0 = ((((int32_t)L_73) == ((int32_t)L_77))? 1 : 0);
				goto IL_00cb_1;
			}

IL_00ca_1:
			{
				G_B11_0 = 0;
			}

IL_00cb_1:
			{
				V_3 = (bool)G_B11_0;
				int32_t L_78 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
			}

IL_00d3_1:
			{
				int32_t L_79 = V_4;
				bool L_80 = V_3;
				V_7 = (bool)((int32_t)(((((int32_t)L_79) < ((int32_t)4))? 1 : 0)&(int32_t)L_80));
				bool L_81 = V_7;
				if (L_81)
				{
					goto IL_0047_1;
				}
			}
			{
				bool L_82 = V_3;
				V_8 = L_82;
				goto IL_00f0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f0:
	{
		bool L_83 = V_8;
		return L_83;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative__ctor_m021D66E62997DA345BB611363FE26B3980B7D031 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___hmacHash_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmacHash_4), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative__cctor_m882B114DEDE06AD122A10FE3F78B45932DB2FCFD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___BLOCK_SIZE_0 = ((int32_t)16);
		int32_t L_0 = ((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___BLOCK_SIZE_0;
		((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___IV_SIZE_1 = L_0;
		((EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_StaticFields*)il2cpp_codegen_static_fields_for(EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0_il2cpp_TypeInfo_var))->___HMAC_SIZE_2 = ((int32_t)32);
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
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Multicast(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* currentDelegate = reinterpret_cast<LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___userData0, ___level1, ___msg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Open(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___userData0, ___level1, ___msg2, method);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Closed(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___userData0, ___level1, ___msg2, method);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStaticInvoker(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___userData0, ___level1, ___msg2);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_ClosedStaticInvoker(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___userData0, ___level1, ___msg2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Multicast;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___userData0, ___level1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
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
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_mB0961B8367CE25888BF77E12A5515AA595EDA392 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9(L_1, L_0, NULL);
		__this->___prime_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prime_1), (void*)L_1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2;
		L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_m5FD5517D674F53A97E8BF2DFD9AE346D1EFEF5FF(__this, ((int32_t)160), NULL);
		__this->___secret_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secret_2), (void*)L_2);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_mB89E0C4885E84F68D45A0E16A5A991791D342533(__this, NULL);
		__this->___publicKey_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___publicKey_3), (void*)L_3);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m2183C5CD4BEB69F1E9024E5D2F6355DF37497A91 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cryptoKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_0 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_0, NULL);
		__this->___crypto_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_0);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_1 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___cryptoKey0;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_3 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_3, L_4);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_5 = __this->___crypto_4;
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_5, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_get_PublicKey_m6835C493E240517B934D3ECD1B0B0AE5B693F6F0 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = __this->___publicKey_3;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_DeriveSharedKey_m8FB84859C4CB3A1F2CED2562DF55FBD014568646 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___otherPartyPublicKey0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9(L_1, L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = DiffieHellmanCryptoProvider_CalculateSharedKey_m84FA649EC2D24689E1EE479701FC435C90F73C94(__this, L_2, NULL);
		V_1 = L_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8(L_4, NULL);
		__this->___sharedKey_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedKey_5), (void*)L_5);
		SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* L_6 = (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C*)il2cpp_codegen_object_new(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F(L_6, NULL);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_7 = V_3;
					if (!L_7)
					{
						goto IL_003d;
					}
				}
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_9 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___sharedKey_5;
			NullCheck(L_9);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_9, L_10, NULL);
			V_2 = L_11;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_12 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_12, NULL);
		__this->___crypto_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_12);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_13 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		NullCheck(L_13);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_13, L_14);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_15 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_15);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_15, L_16);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_17 = __this->___crypto_4;
		NullCheck(L_17);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_17, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Encrypt_m2FE785BD6C29653FA2E50ADE2D63DC3CCCC2A563 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___offset1;
			int32_t L_7 = ___count2;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Decrypt_mE867D145E9EC7B883E6A512D7E51DE1F429925A3 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___offset1;
			int32_t L_7 = ___count2;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_mF87C3E8E916083DDAE4F1696E0CE8A1662F1B71F (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculatePublicKey_mB89E0C4885E84F68D45A0E16A5A991791D342533 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = __this->___secret_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = __this->___prime_1;
		NullCheck(L_0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_CalculateSharedKey_m84FA649EC2D24689E1EE479701FC435C90F73C94 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___otherPartyPublicKey0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = __this->___secret_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = __this->___prime_1;
		NullCheck(L_0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3;
		L_3 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* DiffieHellmanCryptoProvider_GenerateRandomSecret_m5FD5517D674F53A97E8BF2DFD9AE346D1EFEF5FF (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___secretLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	{
		int32_t L_0 = ___secretLength0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1;
		L_1 = BigInteger_GenerateRandom_mE298EF34ECB20269436BDF2765DBE9F8E593C4F9(L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = __this->___prime_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5;
		L_5 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_3, L_4, NULL);
		bool L_6;
		L_6 = BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448(L_2, L_5, NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8;
		L_8 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		bool L_9;
		L_9 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_7, L_8, NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 1;
	}

IL_0032:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0001;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = V_0;
		V_2 = L_11;
		goto IL_003a;
	}

IL_003a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_2;
		return L_12;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__cctor_m04380EEC1668A3C9CABEE52AEB8C7BB85A9F9646 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, ((int64_t)L_0), NULL);
		((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0), (void*)L_1);
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
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_m17D0BFA5DFD181AA82501C0AF1436AC09E12F1A9 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorCreate)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m68EA65FF458F521635FF4EC5AE66387EC5EB08F8 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorPublicKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorPublicKey)(___cryptor0, ___key1, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ___key1, ___keySize2);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m5586AD606260F5141F3AC439098519F44EFB529F (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDeriveSharedKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___serverPublicKey1' to native representation
	uint8_t* ____serverPublicKey1_marshaled = NULL;
	if (___serverPublicKey1 != NULL)
	{
		____serverPublicKey1_marshaled = reinterpret_cast<uint8_t*>((___serverPublicKey1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDeriveSharedKey)(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mDC8512C19FD13974ABEB6A23C969CB08A0049F64 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorEncrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___plainData1' to native representation
	uint8_t* ____plainData1_marshaled = NULL;
	if (___plainData1 != NULL)
	{
		____plainData1_marshaled = reinterpret_cast<uint8_t*>((___plainData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorEncrypt)(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m473EBE94702065CBA6C6405E7B72D4B9D48E0085 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDecrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___encodedData1' to native representation
	uint8_t* ____encodedData1_marshaled = NULL;
	if (___encodedData1 != NULL)
	{
		____encodedData1_marshaled = reinterpret_cast<uint8_t*>((___encodedData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDecrypt)(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#endif

	return returnValue;
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_mC79AB5F12B3EE23BDF28D93907113190D210B85B (intptr_t ___cryptor0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDispose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egCryptorDispose)(___cryptor0);
	#else
	il2cppPInvokeFunc(___cryptor0);
	#endif

}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_mBD08D87430C43103482A94798B7BC11BF8B15BD3 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = DiffieHellmanCryptoProviderNative_egCryptorCreate_m17D0BFA5DFD181AA82501C0AF1436AC09E12F1A9(NULL);
		__this->___cryptor_0 = L_0;
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sharedKeyHash0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5E96470B64DD3DB50F2E9C79034F94898F64537)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___sharedKeyHash0;
		__this->___sharedKeyHash_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedKeyHash_1), (void*)L_3);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sharedKeyHash_1;
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9AFEBAB5E371E8B24466D4A2FBB943F2E675545)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66_RuntimeMethod_var)));
	}

IL_001a:
	{
		intptr_t L_3 = __this->___cryptor_0;
		int32_t L_4;
		L_4 = DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m68EA65FF458F521635FF4EC5AE66387EC5EB08F8(L_3, (&V_0), (&V_1), NULL);
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		intptr_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_7, L_8, 0, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		V_4 = L_10;
		goto IL_0040;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_4;
		return L_11;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sharedKeyHash_1;
		V_0 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C674C434602F2C350E8DEC293E708D4CC2CE339)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915_RuntimeMethod_var)));
	}

IL_001a:
	{
		intptr_t L_3 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___otherPartyPublicKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___otherPartyPublicKey0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m5586AD606260F5141F3AC439098519F44EFB529F(L_3, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Encrypt_m5B3F30527EF804357E7A914DBD9C2589AF222BA6 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		intptr_t L_0 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sharedKeyHash_1;
		int32_t L_5;
		L_5 = DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mDC8512C19FD13974ABEB6A23C969CB08A0049F64(L_0, L_1, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_9, L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		return L_13;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Decrypt_m5361BC3B147ECE265B2E13C2F433F7E0318BCA88 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		intptr_t L_0 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sharedKeyHash_1;
		int32_t L_5;
		L_5 = DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m473EBE94702065CBA6C6405E7B72D4B9D48E0085(L_0, L_1, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_9, L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		return L_13;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m21967A478B1791DB161FEEA6826EC3795D0D4F8E (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->___cryptor_0;
		V_1 = (bool)1;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_4 = __this->___cryptor_0;
		DiffieHellmanCryptoProviderNative_egCryptorDispose_mC79AB5F12B3EE23BDF28D93907113190D210B85B(L_4, NULL);
	}

IL_0021:
	{
	}

IL_0022:
	{
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
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OakleyGroups__cctor_mC076CFEC327B41095A69D70A3F03A7272D5B2CB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____4989E5469B40416DC5AFB739C747E32B40CC5C77_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____49ECABA9727A1AF0636082C467485A1A9A04B669_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0 = ((int32_t)22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____4989E5469B40416DC5AFB739C747E32B40CC5C77_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____49ECABA9727A1AF0636082C467485A1A9A04B669_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3), (void*)L_7);
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
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_0);
		__this->___dataLength_2 = 1;
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_0);
		int64_t L_1 = ___value0;
		V_0 = L_1;
		__this->___dataLength_2 = 0;
		goto IL_004f;
	}

IL_0027:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		int32_t L_3 = __this->___dataLength_2;
		int64_t L_4 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_4&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_5 = ___value0;
		___value0 = ((int64_t)(L_5>>((int32_t)32)));
		int32_t L_6 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_004f:
	{
		int64_t L_7 = ___value0;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = __this->___dataLength_2;
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B5_0 = 0;
	}

IL_005f:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_10 = V_0;
		V_2 = (bool)((((int64_t)L_10) > ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		int64_t L_12 = ___value0;
		if (L_12)
		{
			goto IL_0084;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___data_1;
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)69);
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B10_0 = ((!(((uint32_t)((int32_t)((int32_t)L_15&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 1;
	}

IL_0085:
	{
		V_3 = (bool)G_B10_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_17 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var)));
	}

IL_0094:
	{
		goto IL_00d5;
	}

IL_0097:
	{
		int64_t L_18 = V_0;
		V_4 = (bool)((((int64_t)L_18) < ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00d5;
		}
	}
	{
		int64_t L_20 = ___value0;
		if ((!(((uint64_t)L_20) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_00c2;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___data_1;
		int32_t L_22 = __this->___dataLength_2;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B17_0 = ((((int32_t)((int32_t)((int32_t)L_24&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B17_0 = 1;
	}

IL_00c3:
	{
		V_5 = (bool)G_B17_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_26 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FD880CA5D311C1C431BD0CB104456E35EF84148)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var)));
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		int32_t L_27 = __this->___dataLength_2;
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00eb;
		}
	}
	{
		__this->___dataLength_2 = 1;
	}

IL_00eb:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_2;
		__this->___dataLength_2 = L_2;
		V_0 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___data_1;
		int32_t L_4 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi0;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___dataLength_2;
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B18_0 = 0;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inData0;
		NullCheck(L_0);
		__this->___dataLength_2 = ((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))>>2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inData0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))&3));
		int32_t L_2 = V_0;
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0036:
	{
		int32_t L_5 = __this->___dataLength_2;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_7 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9_RuntimeMethod_var)));
	}

IL_004f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inData0;
		NullCheck(L_9);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1));
		V_4 = 0;
		goto IL_0099;
	}

IL_0067:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_1;
		int32_t L_11 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___inData0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___inData0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 2));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___inData0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___inData0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_15<<((int32_t)24))), ((int32_t)((int32_t)L_19<<((int32_t)16))))), ((int32_t)((int32_t)L_23<<8)))), (int32_t)L_27)));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_28, 4));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0099:
	{
		int32_t L_30 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_32 = V_0;
		V_6 = (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00c4;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___data_1;
		int32_t L_35 = __this->___dataLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___inData0;
		NullCheck(L_36);
		int32_t L_37 = 0;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_35, 1))), (uint32_t)L_38);
		goto IL_0111;
	}

IL_00c4:
	{
		int32_t L_39 = V_0;
		V_7 = (bool)((((int32_t)L_39) == ((int32_t)2))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___data_1;
		int32_t L_42 = __this->___dataLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___inData0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___inData0;
		NullCheck(L_46);
		int32_t L_47 = 1;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_45<<8)), (int32_t)L_48)));
		goto IL_0111;
	}

IL_00e8:
	{
		int32_t L_49 = V_0;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)3))? 1 : 0);
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0111;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = __this->___data_1;
		int32_t L_52 = __this->___dataLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___inData0;
		NullCheck(L_53);
		int32_t L_54 = 0;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___inData0;
		NullCheck(L_56);
		int32_t L_57 = 1;
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___inData0;
		NullCheck(L_59);
		int32_t L_60 = 2;
		uint8_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_52, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_55<<((int32_t)16))), ((int32_t)((int32_t)L_58<<8)))), (int32_t)L_61)));
	}

IL_0111:
	{
		goto IL_0121;
	}

IL_0113:
	{
		int32_t L_62 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
	}

IL_0121:
	{
		int32_t L_63 = __this->___dataLength_2;
		if ((((int32_t)L_63) <= ((int32_t)1)))
		{
			goto IL_013e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = __this->___data_1;
		int32_t L_65 = __this->___dataLength_2;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B18_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B18_0;
		bool L_68 = V_9;
		if (L_68)
		{
			goto IL_0113;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		__this->___data_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___inData0;
		NullCheck(L_0);
		__this->___dataLength_2 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = __this->___dataLength_2;
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_3 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343_RuntimeMethod_var)));
	}

IL_0031:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_4);
		int32_t L_5 = __this->___dataLength_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_2 = 0;
		goto IL_005e;
	}

IL_004b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___data_1;
		int32_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___inData0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		int32_t L_14 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0079;
	}

IL_006b:
	{
		int32_t L_16 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0079:
	{
		int32_t L_17 = __this->___dataLength_2;
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			goto IL_0096;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___data_1;
		int32_t L_19 = __this->___dataLength_2;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B10_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B10_0 = 0;
	}

IL_0097:
	{
		V_4 = (bool)G_B10_0;
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3 (int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		int32_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, ((int64_t)L_0), NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_9 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B2_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B3_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___dataLength_2;
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dataLength_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->___dataLength_2;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->___dataLength_2 = G_B3_0;
		V_1 = ((int64_t)0);
		V_3 = 0;
		goto IL_0061;
	}

IL_0030:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_14), ((int64_t)(uint64_t)L_19))), L_20));
		int64_t L_21 = V_4;
		V_1 = ((int64_t)(L_21>>((int32_t)32)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		NullCheck(L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___data_1;
		int32_t L_24 = V_3;
		int64_t L_25 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_25&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0061:
	{
		int32_t L_27 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_2;
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_31 = V_1;
		if (!L_31)
		{
			goto IL_007f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___dataLength_2;
		G_B9_0 = ((((int32_t)L_33) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B9_0 = 0;
	}

IL_0080:
	{
		V_6 = (bool)G_B9_0;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00a5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = V_0;
		NullCheck(L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = L_35->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->___dataLength_2;
		int64_t L_39 = V_1;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)((int32_t)(uint32_t)L_39));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_2;
		NullCheck(L_41);
		L_41->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00a5:
	{
		goto IL_00b5;
	}

IL_00a7:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_2;
		NullCheck(L_44);
		L_44->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00b5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_2;
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_2;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B16_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B16_0 = 0;
	}

IL_00d3:
	{
		V_7 = (bool)G_B16_0;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_00a7;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_1;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = L_60->___data_1;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)((int32_t)((int32_t)L_59&((int32_t)-2147483648LL)))) == ((uint32_t)((int32_t)((int32_t)L_64&((int32_t)-2147483648LL)))))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_1;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = L_70->___data_1;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B20_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B20_0 = 0;
	}

IL_011e:
	{
		V_8 = (bool)G_B20_0;
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_012b;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_76 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0(L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237_RuntimeMethod_var)));
	}

IL_012b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_0;
		V_9 = L_77;
		goto IL_0130;
	}

IL_0130:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_9;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_12 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B2_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B3_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___dataLength_2;
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dataLength_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->___dataLength_2;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->___dataLength_2 = G_B3_0;
		V_1 = ((int64_t)0);
		V_3 = 0;
		goto IL_006f;
	}

IL_0030:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_14), ((int64_t)(uint64_t)L_19))), L_20));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_1;
		int32_t L_23 = V_3;
		int64_t L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_24&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_25 = V_4;
		V_5 = (bool)((((int64_t)L_25) < ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_006a;
	}

IL_0067:
	{
		V_1 = ((int64_t)0);
	}

IL_006a:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006f:
	{
		int32_t L_28 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___dataLength_2;
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_32 = V_1;
		V_7 = (bool)((!(((uint64_t)L_32) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->___dataLength_2;
		V_8 = L_35;
		goto IL_00a4;
	}

IL_0094:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_0;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		int32_t L_38 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)(-1));
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00a4:
	{
		int32_t L_40 = V_8;
		V_9 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_0094;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_42 = V_0;
		NullCheck(L_42);
		L_42->___dataLength_2 = ((int32_t)70);
	}

IL_00b9:
	{
		goto IL_00c9;
	}

IL_00bb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_2;
		NullCheck(L_44);
		L_44->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00c9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_2;
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_2;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B19_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B19_0 = 0;
	}

IL_00e7:
	{
		V_10 = (bool)G_B19_0;
		bool L_54 = V_10;
		if (L_54)
		{
			goto IL_00bb;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_1;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = L_60->___data_1;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((((int32_t)((int32_t)((int32_t)L_59&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_64&((int32_t)-2147483648LL))))))
		{
			goto IL_0131;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_1;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = L_70->___data_1;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B23_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0132;
	}

IL_0131:
	{
		G_B23_0 = 0;
	}

IL_0132:
	{
		V_11 = (bool)G_B23_0;
		bool L_75 = V_11;
		if (!L_75)
		{
			goto IL_013f;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_76 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0(L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7_RuntimeMethod_var)));
	}

IL_013f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_0;
		V_12 = L_77;
		goto IL_0144;
	}

IL_0144:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_12;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_20 = NULL;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = ((int32_t)69);
		V_1 = (bool)0;
		V_2 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
			NullCheck(L_0);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
			int32_t L_2 = V_0;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_5 = V_4;
			if (!L_5)
			{
				goto IL_002c_1;
			}
		}
		{
			V_1 = (bool)1;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi10;
			il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7;
			L_7 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_6, NULL);
			___bi10 = L_7;
		}

IL_002c_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi21;
			NullCheck(L_8);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_1;
			int32_t L_10 = V_0;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_12&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_004f_1;
			}
		}
		{
			V_2 = (bool)1;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___bi21;
			il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
			L_15 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_14, NULL);
			___bi21 = L_15;
		}

IL_004f_1:
		{
			goto IL_0057;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0057;
	}// end catch (depth: 1)

IL_0057:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_16, NULL);
		V_3 = L_16;
	}
	try
	{// begin try (depth: 1)
		{
			V_6 = 0;
			goto IL_010a_1;
		}

IL_0066_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___bi10;
			NullCheck(L_17);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_1;
			int32_t L_19 = V_6;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			V_8 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
			bool L_22 = V_8;
			if (!L_22)
			{
				goto IL_007e_1;
			}
		}
		{
			goto IL_0104_1;
		}

IL_007e_1:
		{
			V_7 = ((int64_t)0);
			V_9 = 0;
			int32_t L_23 = V_6;
			V_10 = L_23;
			goto IL_00d4_1;
		}

IL_008b_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi10;
			NullCheck(L_24);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___data_1;
			int32_t L_26 = V_6;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = ___bi21;
			NullCheck(L_29);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_1;
			int32_t L_31 = V_9;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_3;
			NullCheck(L_34);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___data_1;
			int32_t L_36 = V_10;
			NullCheck(L_35);
			int32_t L_37 = L_36;
			uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			uint64_t L_39 = V_7;
			V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_28), ((int64_t)(uint64_t)L_33))), ((int64_t)(uint64_t)L_38))), (int64_t)L_39));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_3;
			NullCheck(L_40);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_1;
			int32_t L_42 = V_10;
			uint64_t L_43 = V_11;
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_43&((int64_t)(uint64_t)((uint32_t)(-1)))))));
			uint64_t L_44 = V_11;
			V_7 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
			int32_t L_45 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			int32_t L_46 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		}

IL_00d4_1:
		{
			int32_t L_47 = V_9;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = ___bi21;
			NullCheck(L_48);
			int32_t L_49 = L_48->___dataLength_2;
			V_12 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
			bool L_50 = V_12;
			if (L_50)
			{
				goto IL_008b_1;
			}
		}
		{
			uint64_t L_51 = V_7;
			V_13 = (bool)((!(((uint64_t)L_51) <= ((uint64_t)((int64_t)0))))? 1 : 0);
			bool L_52 = V_13;
			if (!L_52)
			{
				goto IL_0103_1;
			}
		}
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_3;
			NullCheck(L_53);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_1;
			int32_t L_55 = V_6;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = ___bi21;
			NullCheck(L_56);
			int32_t L_57 = L_56->___dataLength_2;
			uint64_t L_58 = V_7;
			NullCheck(L_54);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_55, L_57))), (uint32_t)((int32_t)(uint32_t)L_58));
		}

IL_0103_1:
		{
		}

IL_0104_1:
		{
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		}

IL_010a_1:
		{
			int32_t L_60 = V_6;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_61 = ___bi10;
			NullCheck(L_61);
			int32_t L_62 = L_61->___dataLength_2;
			V_14 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
			bool L_63 = V_14;
			if (L_63)
			{
				goto IL_0066_1;
			}
		}
		{
			goto IL_012d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0120;
		}
		throw e;
	}

CATCH_0120:
	{// begin catch(System.Exception)
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_64 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_64);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_64, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_012d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_66 = ___bi10;
		NullCheck(L_66);
		int32_t L_67 = L_66->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_68 = ___bi21;
		NullCheck(L_68);
		int32_t L_69 = L_68->___dataLength_2;
		NullCheck(L_65);
		L_65->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_67, L_69));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = V_3;
		NullCheck(L_70);
		int32_t L_71 = L_70->___dataLength_2;
		V_15 = (bool)((((int32_t)L_71) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_0158;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = V_3;
		NullCheck(L_73);
		L_73->___dataLength_2 = ((int32_t)70);
	}

IL_0158:
	{
		goto IL_0168;
	}

IL_015a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75 = L_74;
		NullCheck(L_75);
		int32_t L_76 = L_75->___dataLength_2;
		NullCheck(L_75);
		L_75->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
	}

IL_0168:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_3;
		NullCheck(L_77);
		int32_t L_78 = L_77->___dataLength_2;
		if ((((int32_t)L_78) <= ((int32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79 = V_3;
		NullCheck(L_79);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = L_79->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = V_3;
		NullCheck(L_81);
		int32_t L_82 = L_81->___dataLength_2;
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)il2cpp_codegen_subtract(L_82, 1));
		uint32_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		G_B28_0 = ((((int32_t)L_84) == ((int32_t)0))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B28_0 = 0;
	}

IL_0186:
	{
		V_16 = (bool)G_B28_0;
		bool L_85 = V_16;
		if (L_85)
		{
			goto IL_015a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_86 = V_3;
		NullCheck(L_86);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = L_86->___data_1;
		int32_t L_88 = V_0;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_17 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_90&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_91 = V_17;
		if (!L_91)
		{
			goto IL_022d;
		}
	}
	{
		bool L_92 = V_1;
		bool L_93 = V_2;
		if ((((int32_t)L_92) == ((int32_t)L_93)))
		{
			goto IL_01bc;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = V_3;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_1;
		int32_t L_96 = V_0;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B33_0 = ((((int32_t)L_98) == ((int32_t)((int32_t)-2147483648LL)))? 1 : 0);
		goto IL_01bd;
	}

IL_01bc:
	{
		G_B33_0 = 0;
	}

IL_01bd:
	{
		V_18 = (bool)G_B33_0;
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_0222;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_3;
		NullCheck(L_100);
		int32_t L_101 = L_100->___dataLength_2;
		V_19 = (bool)((((int32_t)L_101) == ((int32_t)1))? 1 : 0);
		bool L_102 = V_19;
		if (!L_102)
		{
			goto IL_01d8;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103 = V_3;
		V_20 = L_103;
		goto IL_0249;
	}

IL_01d8:
	{
		V_21 = (bool)1;
		V_22 = 0;
		goto IL_01fe;
	}

IL_01e1:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_3;
		NullCheck(L_104);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = L_104->___data_1;
		int32_t L_106 = V_22;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_23 = (bool)((!(((uint32_t)L_108) <= ((uint32_t)0)))? 1 : 0);
		bool L_109 = V_23;
		if (!L_109)
		{
			goto IL_01f7;
		}
	}
	{
		V_21 = (bool)0;
	}

IL_01f7:
	{
		int32_t L_110 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_01fe:
	{
		int32_t L_111 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_112 = V_3;
		NullCheck(L_112);
		int32_t L_113 = L_112->___dataLength_2;
		bool L_114 = V_21;
		V_24 = (bool)((int32_t)(((((int32_t)L_111) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, 1))))? 1 : 0)&(int32_t)L_114));
		bool L_115 = V_24;
		if (L_115)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_116 = V_21;
		V_25 = L_116;
		bool L_117 = V_25;
		if (!L_117)
		{
			goto IL_0220;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_118 = V_3;
		V_20 = L_118;
		goto IL_0249;
	}

IL_0220:
	{
	}

IL_0222:
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_119 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_119);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_119, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_119, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251_RuntimeMethod_var)));
	}

IL_022d:
	{
		bool L_120 = V_1;
		bool L_121 = V_2;
		V_26 = (bool)((((int32_t)((((int32_t)L_120) == ((int32_t)L_121))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_122 = V_26;
		if (!L_122)
		{
			goto IL_0244;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_123 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_124;
		L_124 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_123, NULL);
		V_20 = L_124;
		goto IL_0249;
	}

IL_0244:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_125 = V_3;
		V_20 = L_125;
		goto IL_0249;
	}

IL_0249:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_126 = V_20;
		return L_126;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_1, L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		int32_t L_5 = ___shiftVal1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742(L_4, L_5, NULL);
		NullCheck(L_2);
		L_2->___dataLength_2 = L_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_1;
		return L_8;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = ((int32_t)32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___buffer0;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000e;
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___buffer0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B5_0 = 0;
	}

IL_001d:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_3 = L_8;
		goto IL_00a2;
	}

IL_0025:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_12 = V_3;
		V_0 = L_12;
	}

IL_0032:
	{
		V_4 = ((int64_t)0);
		V_6 = 0;
		goto IL_0067;
	}

IL_003b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___buffer0;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_0;
		V_7 = ((int64_t)(((int64_t)(uint64_t)L_16)<<((int32_t)(L_17&((int32_t)63)))));
		uint64_t L_18 = V_7;
		uint64_t L_19 = V_4;
		V_7 = ((int64_t)((int64_t)L_18|(int64_t)L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___buffer0;
		int32_t L_21 = V_6;
		uint64_t L_22 = V_7;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_22&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		uint64_t L_23 = V_7;
		V_4 = ((int64_t)((uint64_t)L_23>>((int32_t)32)));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0067:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_28 = V_4;
		V_9 = (bool)((!(((uint64_t)L_28) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_30 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___buffer0;
		NullCheck(L_31);
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_30, 1))) > ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_009c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___buffer0;
		int32_t L_34 = V_1;
		uint64_t L_35 = V_4;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)((int32_t)(uint32_t)L_35));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_009c:
	{
	}

IL_009d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_37, L_38));
	}

IL_00a2:
	{
		int32_t L_39 = V_3;
		V_11 = (bool)((((int32_t)L_39) > ((int32_t)0))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_41 = V_1;
		V_12 = L_41;
		goto IL_00b4;
	}

IL_00b4:
	{
		int32_t L_42 = V_12;
		return L_42;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m191C98C28276C28DCFE1D31E0066FD7FA3D7837D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B19_0 = 0;
	{
		V_0 = ((int32_t)32);
		V_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___buffer0;
		NullCheck(L_0);
		V_2 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_0010;
	}

IL_000c:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}

IL_0010:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___buffer0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_4 = L_8;
		goto IL_008c;
	}

IL_0028:
	{
		int32_t L_9 = V_4;
		int32_t L_10 = V_0;
		V_6 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_4;
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_13));
	}

IL_003e:
	{
		V_5 = ((int64_t)0);
		int32_t L_14 = V_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0077;
	}

IL_0049:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___buffer0;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_0;
		V_8 = ((int64_t)((uint64_t)((int64_t)(uint64_t)L_18)>>((int32_t)(L_19&((int32_t)63)))));
		uint64_t L_20 = V_8;
		uint64_t L_21 = V_5;
		V_8 = ((int64_t)((int64_t)L_20|(int64_t)L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___buffer0;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_1;
		V_5 = ((int64_t)(((int64_t)(uint64_t)L_25)<<((int32_t)(L_26&((int32_t)63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___buffer0;
		int32_t L_28 = V_7;
		uint64_t L_29 = V_8;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)((int32_t)(uint32_t)L_29));
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_0077:
	{
		int32_t L_31 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_9;
		if (L_32)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, L_34));
	}

IL_008c:
	{
		int32_t L_35 = V_4;
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_009d;
	}

IL_0099:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_009d:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___buffer0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B19_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B19_0 = 0;
	}

IL_00ac:
	{
		V_11 = (bool)G_B19_0;
		bool L_43 = V_11;
		if (L_43)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_44 = V_2;
		V_12 = L_44;
		goto IL_00b7;
	}

IL_00b7:
	{
		int32_t L_45 = V_12;
		return L_45;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		int32_t L_1 = L_0->___dataLength_2;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_7, NULL);
		V_5 = L_7;
		goto IL_010c;
	}

IL_002a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_9, L_8, NULL);
		V_0 = L_9;
		V_6 = 0;
		goto IL_004f;
	}

IL_0036:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = V_0;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = ___bi10;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___data_1;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((~L_17)));
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004f:
	{
		int32_t L_19 = V_6;
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = ((int64_t)1);
		V_3 = 0;
		goto IL_0089;
	}

IL_0062:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = ((int64_t)(uint64_t)L_25);
		int64_t L_26 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		int32_t L_29 = V_3;
		int64_t L_30 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_30&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_31 = V_1;
		V_2 = ((int64_t)(L_31>>((int32_t)32)));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0089:
	{
		int64_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_34 = V_3;
		G_B13_0 = ((((int32_t)L_34) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
	}

IL_0094:
	{
		V_8 = (bool)G_B13_0;
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0062;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___bi10;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)69);
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_1;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)69);
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = (bool)((((int32_t)((int32_t)((int32_t)L_39&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_43&((int32_t)-2147483648LL)))))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_00cb;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_45 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_45);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F35A290E0C52584695F3B0342580DAB07F7B8D3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09_RuntimeMethod_var)));
	}

IL_00cb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		L_46->___dataLength_2 = ((int32_t)70);
		goto IL_00e3;
	}

IL_00d5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_2;
		NullCheck(L_48);
		L_48->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_00e3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_2;
		if ((((int32_t)L_51) <= ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52 = V_0;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___dataLength_2;
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		uint32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		G_B21_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B21_0 = 0;
	}

IL_0101:
	{
		V_10 = (bool)G_B21_0;
		bool L_58 = V_10;
		if (L_58)
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = V_0;
		V_5 = L_59;
		goto IL_010c;
	}

IL_010c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = V_5;
		return L_60;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m8F9DCA3E1288A4EB9FC05739BB9BAF15031FFD40 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)CastclassClass((RuntimeObject*)L_0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var));
		int32_t L_1 = __this->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_2;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_004a;
	}

IL_0025:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_1;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = V_0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0045:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = __this->___dataLength_2;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0025;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_mE19E5E597434F45BA186E6843010DB4AE3F8FEBB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_2;
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_2;
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___data_1;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_1;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = L_51->___data_1;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) <= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_2;
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_2;
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___data_1;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_1;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = L_51->___data_1;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) >= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	bool V_20 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_21 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_22 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	int32_t V_33 = 0;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B42_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		V_3 = ((int32_t)-2147483648LL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___bi21;
		NullCheck(L_7);
		int32_t L_8 = L_7->___dataLength_2;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		V_5 = 0;
		V_6 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint32_t L_12 = V_3;
		V_3 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0044:
	{
		uint32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_14 = V_4;
		uint32_t L_15 = V_3;
		G_B5_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_14 = (bool)G_B5_0;
		bool L_16 = V_14;
		if (L_16)
		{
			goto IL_0038;
		}
	}
	{
		V_15 = 0;
		goto IL_006f;
	}

IL_005c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
		int32_t L_18 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi10;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_1;
		int32_t L_21 = V_15;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_23);
		int32_t L_24 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006f:
	{
		int32_t L_25 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi10;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_2;
		V_16 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_16;
		if (L_28)
		{
			goto IL_005c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		int32_t L_30 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742(L_29, L_30, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___bi21;
		int32_t L_33 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34;
		L_34 = BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E(L_32, L_33, NULL);
		___bi21 = L_34;
		int32_t L_35 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___bi21;
		NullCheck(L_36);
		int32_t L_37 = L_36->___dataLength_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_35, L_37));
		int32_t L_38 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = ___bi21;
		NullCheck(L_39);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = ___bi21;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_2;
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		uint32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = ((int64_t)(uint64_t)L_44);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = ___bi21;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = ___bi21;
		NullCheck(L_47);
		int32_t L_48 = L_47->___dataLength_2;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_48, 2));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_10 = ((int64_t)(uint64_t)L_50);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		int32_t L_52 = L_51->___dataLength_2;
		V_11 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_53);
		V_12 = L_54;
		goto IL_0215;
	}

IL_00dd:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_2;
		int32_t L_56 = V_8;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_2;
		int32_t L_60 = V_8;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_58)<<((int32_t)32))), ((int64_t)(uint64_t)L_62)));
		uint64_t L_63 = V_17;
		uint64_t L_64 = V_9;
		V_18 = ((int64_t)((uint64_t)(int64_t)L_63/(uint64_t)(int64_t)L_64));
		uint64_t L_65 = V_17;
		uint64_t L_66 = V_9;
		V_19 = ((int64_t)((uint64_t)(int64_t)L_65%(uint64_t)(int64_t)L_66));
		V_20 = (bool)0;
		goto IL_0158;
	}

IL_0103:
	{
		V_20 = (bool)1;
		uint64_t L_67 = V_18;
		if ((((int64_t)L_67) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_012a;
		}
	}
	{
		uint64_t L_68 = V_18;
		uint64_t L_69 = V_10;
		uint64_t L_70 = V_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_2;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 2));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B14_0 = ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_68, (int64_t)L_69))) <= ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_70<<((int32_t)32))), ((int64_t)(uint64_t)L_74))))))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B14_0 = 1;
	}

IL_012b:
	{
		V_24 = (bool)G_B14_0;
		bool L_75 = V_24;
		if (!L_75)
		{
			goto IL_0157;
		}
	}
	{
		uint64_t L_76 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_76, ((int64_t)1)));
		uint64_t L_77 = V_19;
		uint64_t L_78 = V_9;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, (int64_t)L_78));
		uint64_t L_79 = V_19;
		V_25 = (bool)((!(((uint64_t)L_79) >= ((uint64_t)((int64_t)4294967296LL))))? 1 : 0);
		bool L_80 = V_25;
		if (!L_80)
		{
			goto IL_0156;
		}
	}
	{
		V_20 = (bool)0;
	}

IL_0156:
	{
	}

IL_0157:
	{
	}

IL_0158:
	{
		bool L_81 = V_20;
		V_26 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_26;
		if (L_82)
		{
			goto IL_0103;
		}
	}
	{
		V_27 = 0;
		goto IL_017a;
	}

IL_0168:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_12;
		int32_t L_84 = V_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = V_2;
		int32_t L_86 = V_8;
		int32_t L_87 = V_27;
		NullCheck(L_85);
		int32_t L_88 = ((int32_t)il2cpp_codegen_subtract(L_86, L_87));
		uint32_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (uint32_t)L_89);
		int32_t L_90 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_017a:
	{
		int32_t L_91 = V_27;
		int32_t L_92 = V_11;
		V_28 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_28;
		if (L_93)
		{
			goto IL_0168;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_12;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343(L_95, L_94, NULL);
		V_21 = L_95;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_96 = ___bi21;
		uint64_t L_97 = V_18;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_98;
		L_98 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(L_97, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_99;
		L_99 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_96, L_98, NULL);
		V_22 = L_99;
		goto IL_01b3;
	}

IL_01a0:
	{
		uint64_t L_100 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_100, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_102 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103;
		L_103 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_101, L_102, NULL);
		V_22 = L_103;
	}

IL_01b3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_105 = V_21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_106;
		L_106 = BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E(L_104, L_105, NULL);
		V_29 = L_106;
		bool L_107 = V_29;
		if (L_107)
		{
			goto IL_01a0;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = V_21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_109 = V_22;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_110;
		L_110 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_108, L_109, NULL);
		V_23 = L_110;
		V_30 = 0;
		goto IL_01f0;
	}

IL_01d2:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = V_2;
		int32_t L_112 = V_8;
		int32_t L_113 = V_30;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_114 = V_23;
		NullCheck(L_114);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = L_114->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = ___bi21;
		NullCheck(L_116);
		int32_t L_117 = L_116->___dataLength_2;
		int32_t L_118 = V_30;
		NullCheck(L_115);
		int32_t L_119 = ((int32_t)il2cpp_codegen_subtract(L_117, L_118));
		uint32_t L_120 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_112, L_113))), (uint32_t)L_120);
		int32_t L_121 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_01f0:
	{
		int32_t L_122 = V_30;
		int32_t L_123 = V_11;
		V_31 = (bool)((((int32_t)L_122) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_31;
		if (L_124)
		{
			goto IL_01d2;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = V_0;
		int32_t L_126 = V_6;
		int32_t L_127 = L_126;
		V_6 = ((int32_t)il2cpp_codegen_add(L_127, 1));
		uint64_t L_128 = V_18;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_127), (uint32_t)((int32_t)(uint32_t)L_128));
		int32_t L_129 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_129, 1));
		int32_t L_130 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_130, 1));
	}

IL_0215:
	{
		int32_t L_131 = V_7;
		V_32 = (bool)((((int32_t)L_131) > ((int32_t)0))? 1 : 0);
		bool L_132 = V_32;
		if (L_132)
		{
			goto IL_00dd;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_133 = ___outQuotient2;
		int32_t L_134 = V_6;
		NullCheck(L_133);
		L_133->___dataLength_2 = L_134;
		V_13 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_135 = ___outQuotient2;
		NullCheck(L_135);
		int32_t L_136 = L_135->___dataLength_2;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_136, 1));
		goto IL_0253;
	}

IL_023a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_137 = ___outQuotient2;
		NullCheck(L_137);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = L_137->___data_1;
		int32_t L_139 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_0;
		int32_t L_141 = V_33;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(L_139), (uint32_t)L_143);
		int32_t L_144 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_144, 1));
		int32_t L_145 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_0253:
	{
		int32_t L_146 = V_33;
		V_34 = (bool)((((int32_t)((((int32_t)L_146) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_147 = V_34;
		if (L_147)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_0273;
	}

IL_0263:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_148 = ___outQuotient2;
		NullCheck(L_148);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = L_148->___data_1;
		int32_t L_150 = V_13;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)0);
		int32_t L_151 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_0273:
	{
		int32_t L_152 = V_13;
		V_35 = (bool)((((int32_t)L_152) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_153 = V_35;
		if (L_153)
		{
			goto IL_0263;
		}
	}
	{
		goto IL_028f;
	}

IL_0281:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_154 = ___outQuotient2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155 = L_154;
		NullCheck(L_155);
		int32_t L_156 = L_155->___dataLength_2;
		NullCheck(L_155);
		L_155->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_156, 1));
	}

IL_028f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_157 = ___outQuotient2;
		NullCheck(L_157);
		int32_t L_158 = L_157->___dataLength_2;
		if ((((int32_t)L_158) <= ((int32_t)1)))
		{
			goto IL_02ac;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_159 = ___outQuotient2;
		NullCheck(L_159);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_160 = L_159->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_161 = ___outQuotient2;
		NullCheck(L_161);
		int32_t L_162 = L_161->___dataLength_2;
		NullCheck(L_160);
		int32_t L_163 = ((int32_t)il2cpp_codegen_subtract(L_162, 1));
		uint32_t L_164 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		G_B42_0 = ((((int32_t)L_164) == ((int32_t)0))? 1 : 0);
		goto IL_02ad;
	}

IL_02ac:
	{
		G_B42_0 = 0;
	}

IL_02ad:
	{
		V_36 = (bool)G_B42_0;
		bool L_165 = V_36;
		if (L_165)
		{
			goto IL_0281;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_166 = ___outQuotient2;
		NullCheck(L_166);
		int32_t L_167 = L_166->___dataLength_2;
		V_37 = (bool)((((int32_t)L_167) == ((int32_t)0))? 1 : 0);
		bool L_168 = V_37;
		if (!L_168)
		{
			goto IL_02c9;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_169 = ___outQuotient2;
		NullCheck(L_169);
		L_169->___dataLength_2 = 1;
	}

IL_02c9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_170 = ___outRemainder3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = V_2;
		int32_t L_172 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_173;
		L_173 = BigInteger_shiftRight_m191C98C28276C28DCFE1D31E0066FD7FA3D7837D(L_171, L_172, NULL);
		NullCheck(L_170);
		L_170->___dataLength_2 = L_173;
		V_13 = 0;
		goto IL_02ef;
	}

IL_02dc:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_174 = ___outRemainder3;
		NullCheck(L_174);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = L_174->___data_1;
		int32_t L_176 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = V_2;
		int32_t L_178 = V_13;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		uint32_t L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(L_176), (uint32_t)L_180);
		int32_t L_181 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_181, 1));
	}

IL_02ef:
	{
		int32_t L_182 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_183 = ___outRemainder3;
		NullCheck(L_183);
		int32_t L_184 = L_183->___dataLength_2;
		V_38 = (bool)((((int32_t)L_182) < ((int32_t)L_184))? 1 : 0);
		bool L_185 = V_38;
		if (L_185)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_0311;
	}

IL_0301:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_186 = ___outRemainder3;
		NullCheck(L_186);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = L_186->___data_1;
		int32_t L_188 = V_13;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_188), (uint32_t)0);
		int32_t L_189 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_189, 1));
	}

IL_0311:
	{
		int32_t L_190 = V_13;
		V_39 = (bool)((((int32_t)L_190) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_191 = V_39;
		if (L_191)
		{
			goto IL_0301;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		V_1 = 0;
		V_6 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___outRemainder3;
		NullCheck(L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1->___data_1;
		int32_t L_3 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi10;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		int32_t L_9 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		int32_t L_10 = V_6;
		V_7 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_11 = V_7;
		if (L_11)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = ___bi10;
		NullCheck(L_13);
		int32_t L_14 = L_13->___dataLength_2;
		NullCheck(L_12);
		L_12->___dataLength_2 = L_14;
		goto IL_0050;
	}

IL_0042:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->___dataLength_2;
		NullCheck(L_16);
		L_16->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0050:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = ___outRemainder3;
		NullCheck(L_18);
		int32_t L_19 = L_18->___dataLength_2;
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___outRemainder3;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___outRemainder3;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_2;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint32_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		G_B8_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 0;
	}

IL_006e:
	{
		V_8 = (bool)G_B8_0;
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_0042;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi21;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_1;
		NullCheck(L_28);
		int32_t L_29 = 0;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = ((int64_t)(uint64_t)L_30);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___outRemainder3;
		NullCheck(L_31);
		int32_t L_32 = L_31->___dataLength_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___outRemainder3;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_4 = ((int64_t)(uint64_t)L_37);
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_2;
		V_9 = (bool)((((int32_t)((!(((uint64_t)L_38) >= ((uint64_t)L_39)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00bf;
		}
	}
	{
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_2;
		V_10 = ((int64_t)((uint64_t)(int64_t)L_41/(uint64_t)(int64_t)L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_0;
		int32_t L_44 = V_1;
		int32_t L_45 = L_44;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		uint64_t L_46 = V_10;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint32_t)((int32_t)(uint32_t)L_46));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = ___outRemainder3;
		NullCheck(L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = L_47->___data_1;
		int32_t L_49 = V_3;
		uint64_t L_50 = V_4;
		uint64_t L_51 = V_2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_50%(uint64_t)(int64_t)L_51))));
	}

IL_00bf:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		goto IL_010d;
	}

IL_00c5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___outRemainder3;
		NullCheck(L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_1;
		int32_t L_55 = V_3;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = ___outRemainder3;
		NullCheck(L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58->___data_1;
		int32_t L_60 = V_3;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_57)<<((int32_t)32))), ((int64_t)(uint64_t)L_62)));
		uint64_t L_63 = V_4;
		uint64_t L_64 = V_2;
		V_11 = ((int64_t)((uint64_t)(int64_t)L_63/(uint64_t)(int64_t)L_64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		V_1 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		uint64_t L_68 = V_11;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint32_t)((int32_t)(uint32_t)L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = ___outRemainder3;
		NullCheck(L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = L_69->___data_1;
		int32_t L_71 = V_3;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 1))), (uint32_t)0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = ___outRemainder3;
		NullCheck(L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = L_72->___data_1;
		int32_t L_74 = V_3;
		int32_t L_75 = L_74;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		uint64_t L_76 = V_4;
		uint64_t L_77 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_76%(uint64_t)(int64_t)L_77))));
	}

IL_010d:
	{
		int32_t L_78 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_78) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_12;
		if (L_79)
		{
			goto IL_00c5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = ___outQuotient2;
		int32_t L_81 = V_1;
		NullCheck(L_80);
		L_80->___dataLength_2 = L_81;
		V_5 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = ___outQuotient2;
		NullCheck(L_82);
		int32_t L_83 = L_82->___dataLength_2;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_83, 1));
		goto IL_0149;
	}

IL_0130:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = ___outQuotient2;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_1;
		int32_t L_86 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_0;
		int32_t L_88 = V_13;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (uint32_t)L_90);
		int32_t L_91 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_91, 1));
		int32_t L_92 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0149:
	{
		int32_t L_93 = V_13;
		V_14 = (bool)((((int32_t)((((int32_t)L_93) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_14;
		if (L_94)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_0169;
	}

IL_0159:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = ___outQuotient2;
		NullCheck(L_95);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = L_95->___data_1;
		int32_t L_97 = V_5;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (uint32_t)0);
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0169:
	{
		int32_t L_99 = V_5;
		V_15 = (bool)((((int32_t)L_99) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_100 = V_15;
		if (L_100)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_0185;
	}

IL_0177:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = ___outQuotient2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_102 = L_101;
		NullCheck(L_102);
		int32_t L_103 = L_102->___dataLength_2;
		NullCheck(L_102);
		L_102->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
	}

IL_0185:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = ___outQuotient2;
		NullCheck(L_104);
		int32_t L_105 = L_104->___dataLength_2;
		if ((((int32_t)L_105) <= ((int32_t)1)))
		{
			goto IL_01a2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_106 = ___outQuotient2;
		NullCheck(L_106);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = L_106->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = ___outQuotient2;
		NullCheck(L_108);
		int32_t L_109 = L_108->___dataLength_2;
		NullCheck(L_107);
		int32_t L_110 = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
		uint32_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		G_B25_0 = ((((int32_t)L_111) == ((int32_t)0))? 1 : 0);
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B25_0 = 0;
	}

IL_01a3:
	{
		V_16 = (bool)G_B25_0;
		bool L_112 = V_16;
		if (L_112)
		{
			goto IL_0177;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_113 = ___outQuotient2;
		NullCheck(L_113);
		int32_t L_114 = L_113->___dataLength_2;
		V_17 = (bool)((((int32_t)L_114) == ((int32_t)0))? 1 : 0);
		bool L_115 = V_17;
		if (!L_115)
		{
			goto IL_01bf;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = ___outQuotient2;
		NullCheck(L_116);
		L_116->___dataLength_2 = 1;
	}

IL_01bf:
	{
		goto IL_01cf;
	}

IL_01c1:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_117 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_118 = L_117;
		NullCheck(L_118);
		int32_t L_119 = L_118->___dataLength_2;
		NullCheck(L_118);
		L_118->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_119, 1));
	}

IL_01cf:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_120 = ___outRemainder3;
		NullCheck(L_120);
		int32_t L_121 = L_120->___dataLength_2;
		if ((((int32_t)L_121) <= ((int32_t)1)))
		{
			goto IL_01ec;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = ___outRemainder3;
		NullCheck(L_122);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = L_122->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_124 = ___outRemainder3;
		NullCheck(L_124);
		int32_t L_125 = L_124->___dataLength_2;
		NullCheck(L_123);
		int32_t L_126 = ((int32_t)il2cpp_codegen_subtract(L_125, 1));
		uint32_t L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		G_B33_0 = ((((int32_t)L_127) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B33_0 = 0;
	}

IL_01ed:
	{
		V_18 = (bool)G_B33_0;
		bool L_128 = V_18;
		if (L_128)
		{
			goto IL_01c1;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_1, NULL);
		V_1 = L_1;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		V_4 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9;
		L_9 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_8, NULL);
		___bi10 = L_9;
		V_4 = (bool)1;
	}

IL_0039:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi21;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_14&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17;
		L_17 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_16, NULL);
		___bi21 = L_17;
		V_3 = (bool)1;
	}

IL_005c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(L_18, L_19, NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		V_8 = L_22;
		goto IL_00b2;
	}

IL_006f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = ___bi21;
		NullCheck(L_23);
		int32_t L_24 = L_23->___dataLength_2;
		V_9 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A(L_26, L_27, L_28, L_29, NULL);
		goto IL_0095;
	}

IL_008b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0(L_30, L_31, L_32, L_33, NULL);
	}

IL_0095:
	{
		bool L_34 = V_4;
		bool L_35 = V_3;
		V_10 = (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00ad;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38;
		L_38 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_37, NULL);
		V_8 = L_38;
		goto IL_00b2;
	}

IL_00ad:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_0;
		V_8 = L_39;
		goto IL_00b2;
	}

IL_00b2:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_8;
		return L_40;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_2, L_1, NULL);
		V_1 = L_2;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi10;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_9, NULL);
		___bi10 = L_10;
		V_3 = (bool)1;
	}

IL_0036:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi21;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18;
		L_18 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_17, NULL);
		___bi21 = L_18;
	}

IL_0055:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(L_19, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_1;
		V_7 = L_23;
		goto IL_00a4;
	}

IL_0068:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0084;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A(L_27, L_28, L_29, L_30, NULL);
		goto IL_008e;
	}

IL_0084:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0(L_31, L_32, L_33, L_34, NULL);
	}

IL_008e:
	{
		bool L_35 = V_3;
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_009f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38;
		L_38 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_37, NULL);
		V_7 = L_38;
		goto IL_00a4;
	}

IL_009f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_1;
		V_7 = L_39;
		goto IL_00a4;
	}

IL_00a4:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_7;
		return L_40;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m4A6DFFE0BB8633647E773E5C70FFA8900E461D63 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(__this, ((int32_t)10), NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___radix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420C015E6084500174F1912E91954C1A742F270F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	bool V_3 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Il2CppChar V_11 = 0x0;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = ___radix0;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___radix0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)36)))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		V_7 = (bool)G_B3_0;
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA37EF8AD7DEABEF988E748C47A435D6BB3F6FC3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25_RuntimeMethod_var)));
	}

IL_001e:
	{
		V_0 = _stringLiteral420C015E6084500174F1912E91954C1A742F270F;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = __this;
		V_3 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_2;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_1;
		NullCheck(L_5);
		int32_t L_6 = ((int32_t)69);
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		V_3 = (bool)1;
	}
	try
	{// begin try (depth: 1)
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_9, NULL);
		V_2 = L_10;
		goto IL_0059;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	}// end catch (depth: 1)

IL_0059:
	{
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_11, NULL);
		V_4 = L_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_12, NULL);
		V_5 = L_12;
		int32_t L_13 = ___radix0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_14, ((int64_t)L_13), NULL);
		V_6 = L_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___dataLength_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_2;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B13_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_9 = (bool)G_B13_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		V_1 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		goto IL_013a;
	}

IL_0099:
	{
		goto IL_00fa;
	}

IL_009c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A(L_22, L_23, L_24, L_25, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_5;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_1;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_10 = (bool)((!(((uint32_t)L_29) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00d4;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_5;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___data_1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		uint32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = V_1;
		String_t* L_38;
		L_38 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(L_36, L_37, NULL);
		V_1 = L_38;
		goto IL_00f6;
	}

IL_00d4:
	{
		String_t* L_39 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_5;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_1;
		NullCheck(L_41);
		int32_t L_42 = 0;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		Il2CppChar L_44;
		L_44 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_39, ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, ((int32_t)10))), NULL);
		V_11 = L_44;
		String_t* L_45;
		L_45 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_11), NULL);
		String_t* L_46 = V_1;
		String_t* L_47;
		L_47 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_45, L_46, NULL);
		V_1 = L_47;
	}

IL_00f6:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_4;
		V_2 = L_48;
	}

IL_00fa:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_49 = V_2;
		NullCheck(L_49);
		int32_t L_50 = L_49->___dataLength_2;
		if ((((int32_t)L_50) > ((int32_t)1)))
		{
			goto IL_011c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52 = L_51->___dataLength_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_0119;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_2;
		NullCheck(L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_1;
		NullCheck(L_54);
		int32_t L_55 = 0;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		G_B24_0 = ((!(((uint32_t)L_56) <= ((uint32_t)0)))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B24_0 = 0;
	}

IL_011a:
	{
		G_B26_0 = G_B24_0;
		goto IL_011d;
	}

IL_011c:
	{
		G_B26_0 = 1;
	}

IL_011d:
	{
		V_12 = (bool)G_B26_0;
		bool L_57 = V_12;
		if (L_57)
		{
			goto IL_009c;
		}
	}
	{
		bool L_58 = V_3;
		V_13 = L_58;
		bool L_59 = V_13;
		if (!L_59)
		{
			goto IL_0139;
		}
	}
	{
		String_t* L_60 = V_1;
		String_t* L_61;
		L_61 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_60, NULL);
		V_1 = L_61;
	}

IL_0139:
	{
	}

IL_013a:
	{
		String_t* L_62 = V_1;
		V_14 = L_62;
		goto IL_013f;
	}

IL_013f:
	{
		String_t* L_63 = V_14;
		return L_63;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___exp0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	bool V_2 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B30_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___exp0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_1;
		NullCheck(L_1);
		int32_t L_2 = ((int32_t)69);
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_5 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9DA96E4398E04C75ACA0CBE183972952BDB1A28)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F_RuntimeMethod_var)));
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6;
		L_6 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		V_0 = L_6;
		V_2 = (bool)0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_1;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)69);
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11;
		L_11 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13;
		L_13 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_11, L_12, NULL);
		V_1 = L_13;
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0058:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
		L_15 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(__this, L_14, NULL);
		V_1 = L_15;
	}

IL_0060:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___n1;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_1;
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)69);
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22;
		L_22 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_21, NULL);
		___n1 = L_22;
	}

IL_0080:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_23, NULL);
		V_3 = L_23;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___n1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		V_4 = ((int32_t)(L_25<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_3;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_1;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_3;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		L_29->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33;
		L_33 = BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68(L_31, L_32, NULL);
		V_3 = L_33;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = ___exp0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_34, NULL);
		V_5 = L_35;
		V_6 = 0;
		V_10 = 0;
		goto IL_017e;
	}

IL_00bf:
	{
		V_11 = 1;
		V_12 = 0;
		goto IL_0168;
	}

IL_00cb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___exp0;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		int32_t L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		uint32_t L_41 = V_11;
		V_13 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_40&(int32_t)L_41))) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45;
		L_45 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_43, L_44, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48;
		L_48 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(__this, L_45, L_46, L_47, NULL);
		V_0 = L_48;
	}

IL_00f1:
	{
		uint32_t L_49 = V_11;
		V_11 = ((int32_t)((int32_t)L_49<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52;
		L_52 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_50, L_51, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55;
		L_55 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(__this, L_52, L_53, L_54, NULL);
		V_1 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = L_56->___dataLength_2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = V_1;
		NullCheck(L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58->___data_1;
		NullCheck(L_59);
		int32_t L_60 = 0;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B14_0 = ((((int32_t)L_61) == ((int32_t)1))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B14_0 = 0;
	}

IL_011e:
	{
		V_14 = (bool)G_B14_0;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_014d;
		}
	}
	{
		bool L_63 = V_2;
		if (!L_63)
		{
			goto IL_0137;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = ___exp0;
		NullCheck(L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___data_1;
		NullCheck(L_65);
		int32_t L_66 = 0;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((!(((uint32_t)((int32_t)((int32_t)L_67&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0138;
	}

IL_0137:
	{
		G_B18_0 = 0;
	}

IL_0138:
	{
		V_15 = (bool)G_B18_0;
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_0148;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70;
		L_70 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_69, NULL);
		V_16 = L_70;
		goto IL_01b9;
	}

IL_0148:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = V_0;
		V_16 = L_71;
		goto IL_01b9;
	}

IL_014d:
	{
		int32_t L_72 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_6;
		int32_t L_74 = V_5;
		V_17 = (bool)((((int32_t)L_73) == ((int32_t)L_74))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0177;
	}

IL_0161:
	{
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0168:
	{
		int32_t L_77 = V_12;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_78 = V_18;
		if (L_78)
		{
			goto IL_00cb;
		}
	}

IL_0177:
	{
		int32_t L_79 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_017e:
	{
		int32_t L_80 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = ___exp0;
		NullCheck(L_81);
		int32_t L_82 = L_81->___dataLength_2;
		V_19 = (bool)((((int32_t)L_80) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_19;
		if (L_83)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_84 = V_2;
		if (!L_84)
		{
			goto IL_01a3;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_85 = ___exp0;
		NullCheck(L_85);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = L_85->___data_1;
		NullCheck(L_86);
		int32_t L_87 = 0;
		uint32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		G_B30_0 = ((!(((uint32_t)((int32_t)((int32_t)L_88&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B30_0 = 0;
	}

IL_01a4:
	{
		V_20 = (bool)G_B30_0;
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_01b4;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_91;
		L_91 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_90, NULL);
		V_16 = L_91;
		goto IL_01b9;
	}

IL_01b4:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_92 = V_0;
		V_16 = L_92;
		goto IL_01b9;
	}

IL_01b9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_93 = V_16;
		return L_93;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___x0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	uint64_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_30 = NULL;
	bool V_31 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_32 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B35_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___n1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___dataLength_2;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_4, NULL);
		V_3 = L_4;
		int32_t L_5 = V_2;
		V_9 = L_5;
		V_10 = 0;
		goto IL_003c;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = V_3;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___data_1;
		int32_t L_8 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___x0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_1;
		int32_t L_11 = V_9;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_13);
		int32_t L_14 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		int32_t L_16 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___x0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___dataLength_2;
		V_11 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_11;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = ___x0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___dataLength_2;
		int32_t L_23 = V_2;
		NullCheck(L_20);
		L_20->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_2;
		V_12 = (bool)((((int32_t)((((int32_t)L_25) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_0073;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_3;
		NullCheck(L_27);
		L_27->___dataLength_2 = 1;
	}

IL_0073:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = ___constant2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30;
		L_30 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_28, L_29, NULL);
		V_4 = L_30;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_31, NULL);
		V_5 = L_31;
		int32_t L_32 = V_1;
		V_13 = L_32;
		V_14 = 0;
		goto IL_00ab;
	}

IL_008b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_5;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_1;
		int32_t L_35 = V_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_4;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_1;
		int32_t L_38 = V_13;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint32_t)L_40);
		int32_t L_41 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ab:
	{
		int32_t L_43 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_2;
		V_15 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_15;
		if (L_46)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_2;
		int32_t L_50 = V_1;
		NullCheck(L_47);
		L_47->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_49, L_50));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = L_51->___dataLength_2;
		V_16 = (bool)((((int32_t)((((int32_t)L_52) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_16;
		if (!L_53)
		{
			goto IL_00e7;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_5;
		NullCheck(L_54);
		L_54->___dataLength_2 = 1;
	}

IL_00e7:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_55, NULL);
		V_6 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = ___x0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___dataLength_2;
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) > ((int32_t)L_58)))
		{
			goto IL_00ff;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = ___x0;
		NullCheck(L_59);
		int32_t L_60 = L_59->___dataLength_2;
		G_B13_0 = L_60;
		goto IL_0100;
	}

IL_00ff:
	{
		int32_t L_61 = V_1;
		G_B13_0 = L_61;
	}

IL_0100:
	{
		V_7 = G_B13_0;
		V_17 = 0;
		goto IL_0120;
	}

IL_0107:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_62 = V_6;
		NullCheck(L_62);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = L_62->___data_1;
		int32_t L_64 = V_17;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = ___x0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_1;
		int32_t L_67 = V_17;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_69);
		int32_t L_70 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0120:
	{
		int32_t L_71 = V_17;
		int32_t L_72 = V_7;
		V_18 = (bool)((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_18;
		if (L_73)
		{
			goto IL_0107;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_6;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		L_74->___dataLength_2 = L_75;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_76, NULL);
		V_8 = L_76;
		V_19 = 0;
		goto IL_01ed;
	}

IL_0144:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_5;
		NullCheck(L_77);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = L_77->___data_1;
		int32_t L_79 = V_19;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_22 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_22;
		if (!L_82)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01e7;
	}

IL_015d:
	{
		V_20 = ((int64_t)0);
		int32_t L_83 = V_19;
		V_21 = L_83;
		V_23 = 0;
		goto IL_01b6;
	}

IL_016a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = V_5;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_1;
		int32_t L_86 = V_19;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_89 = ___n1;
		NullCheck(L_89);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = L_89->___data_1;
		int32_t L_91 = V_23;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = V_8;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_1;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint64_t L_99 = V_20;
		V_24 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_88), ((int64_t)(uint64_t)L_93))), ((int64_t)(uint64_t)L_98))), (int64_t)L_99));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_8;
		NullCheck(L_100);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = L_100->___data_1;
		int32_t L_102 = V_21;
		uint64_t L_103 = V_24;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_103&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		uint64_t L_104 = V_24;
		V_20 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		int32_t L_105 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_01b6:
	{
		int32_t L_107 = V_23;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = ___n1;
		NullCheck(L_108);
		int32_t L_109 = L_108->___dataLength_2;
		if ((((int32_t)L_107) >= ((int32_t)L_109)))
		{
			goto IL_01c7;
		}
	}
	{
		int32_t L_110 = V_21;
		int32_t L_111 = V_1;
		G_B24_0 = ((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		goto IL_01c8;
	}

IL_01c7:
	{
		G_B24_0 = 0;
	}

IL_01c8:
	{
		V_25 = (bool)G_B24_0;
		bool L_112 = V_25;
		if (L_112)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_113 = V_21;
		int32_t L_114 = V_1;
		V_26 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_26;
		if (!L_115)
		{
			goto IL_01e6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = V_8;
		NullCheck(L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = L_116->___data_1;
		int32_t L_118 = V_21;
		uint64_t L_119 = V_20;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint32_t)((int32_t)(uint32_t)L_119));
	}

IL_01e6:
	{
	}

IL_01e7:
	{
		int32_t L_120 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_01ed:
	{
		int32_t L_121 = V_19;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = V_5;
		NullCheck(L_122);
		int32_t L_123 = L_122->___dataLength_2;
		V_27 = (bool)((((int32_t)L_121) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_27;
		if (L_124)
		{
			goto IL_0144;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_125 = V_8;
		int32_t L_126 = V_1;
		NullCheck(L_125);
		L_125->___dataLength_2 = L_126;
		goto IL_021a;
	}

IL_020b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_127 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_128 = L_127;
		NullCheck(L_128);
		int32_t L_129 = L_128->___dataLength_2;
		NullCheck(L_128);
		L_128->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_129, 1));
	}

IL_021a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_130 = V_8;
		NullCheck(L_130);
		int32_t L_131 = L_130->___dataLength_2;
		if ((((int32_t)L_131) <= ((int32_t)1)))
		{
			goto IL_023a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_132 = V_8;
		NullCheck(L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = L_132->___data_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_134 = V_8;
		NullCheck(L_134);
		int32_t L_135 = L_134->___dataLength_2;
		NullCheck(L_133);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract(L_135, 1));
		uint32_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		G_B35_0 = ((((int32_t)L_137) == ((int32_t)0))? 1 : 0);
		goto IL_023b;
	}

IL_023a:
	{
		G_B35_0 = 0;
	}

IL_023b:
	{
		V_28 = (bool)G_B35_0;
		bool L_138 = V_28;
		if (L_138)
		{
			goto IL_020b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_139 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_140 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_141;
		L_141 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_139, L_140, NULL);
		V_6 = L_141;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = L_142->___data_1;
		NullCheck(L_143);
		int32_t L_144 = ((int32_t)69);
		uint32_t L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_29 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_145&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_29;
		if (!L_146)
		{
			goto IL_028d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_147 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_147, NULL);
		V_30 = L_147;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_148 = V_30;
		NullCheck(L_148);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = L_148->___data_1;
		int32_t L_150 = V_1;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_151 = V_30;
		int32_t L_152 = V_1;
		NullCheck(L_151);
		L_151->___dataLength_2 = ((int32_t)il2cpp_codegen_add(L_152, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_153 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_154 = V_30;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155;
		L_155 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_153, L_154, NULL);
		V_6 = L_155;
	}

IL_028d:
	{
		goto IL_0299;
	}

IL_028f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_156 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_157 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_158;
		L_158 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_156, L_157, NULL);
		V_6 = L_158;
	}

IL_0299:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_159 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_160 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_161;
		L_161 = BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448(L_159, L_160, NULL);
		V_31 = L_161;
		bool L_162 = V_31;
		if (L_162)
		{
			goto IL_028f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_163 = V_6;
		V_32 = L_163;
		goto IL_02ad;
	}

IL_02ad:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_164 = V_32;
		return L_164;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_GenerateRandom_mE298EF34ECB20269436BDF2765DBE9F8E593C4F9 (int32_t ___bits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		int32_t L_2 = ___bits0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_3, NULL);
		NullCheck(L_1);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_1, L_2, L_3, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	uint32_t V_9 = 0;
	bool V_10 = false;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)(L_0>>5));
		int32_t L_1 = ___bits0;
		V_1 = ((int32_t)(L_1&((int32_t)31)));
		int32_t L_2 = V_1;
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_7 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE867641BA2826180B2167D7038C421CA025C7A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_4 = 0;
		goto IL_004f;
	}

IL_002f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___data_1;
		int32_t L_9 = V_4;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = ___rand1;
		NullCheck(L_10);
		double L_11;
		L_11 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_11, (4294967296.0)))));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_6 = L_16;
		goto IL_006f;
	}

IL_005f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->___data_1;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)0);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006f:
	{
		int32_t L_20 = V_6;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_22 = V_1;
		V_8 = (bool)((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_24 = V_1;
		V_9 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_24, 1))&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___data_1;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		uint32_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_26, 1)))));
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t L_29 = V_9;
		*((int32_t*)L_27) = (int32_t)((int32_t)(L_28|(int32_t)L_29));
		int32_t L_30 = V_1;
		V_9 = ((int32_t)((uint32_t)(-1)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_30))&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___data_1;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		uint32_t* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 1)))));
		int32_t L_34 = *((uint32_t*)L_33);
		uint32_t L_35 = V_9;
		*((int32_t*)L_33) = (int32_t)((int32_t)(L_34&(int32_t)L_35));
		goto IL_00dd;
	}

IL_00c6:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___data_1;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		uint32_t* L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 1)))));
		int32_t L_39 = *((uint32_t*)L_38);
		*((int32_t*)L_38) = (int32_t)((int32_t)(L_39|((int32_t)-2147483648LL)));
	}

IL_00dd:
	{
		int32_t L_40 = V_0;
		__this->___dataLength_2 = L_40;
		int32_t L_41 = __this->___dataLength_2;
		V_10 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_00fa;
		}
	}
	{
		__this->___dataLength_2 = 1;
	}

IL_00fa:
	{
		return;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		goto IL_0011;
	}

IL_0003:
	{
		int32_t L_0 = __this->___dataLength_2;
		__this->___dataLength_2 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}

IL_0011:
	{
		int32_t L_1 = __this->___dataLength_2;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_1;
		int32_t L_3 = __this->___dataLength_2;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		V_3 = (bool)G_B5_0;
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0003;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_1;
		int32_t L_8 = __this->___dataLength_2;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0058;
	}

IL_004e:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B11_0 = 0;
	}

IL_0065:
	{
		V_4 = (bool)G_B11_0;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_17 = V_2;
		int32_t L_18 = __this->___dataLength_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, 1))<<5))));
		int32_t L_19 = V_2;
		V_5 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		int32_t L_20 = V_5;
		return L_20;
	}
}
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0;
		L_0 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		bool L_1;
		L_1 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(__this, L_0, NULL);
		V_5 = L_1;
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_3;
		goto IL_00c7;
	}

IL_0021:
	{
		int32_t L_4;
		L_4 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(__this, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(L_5>>3));
		int32_t L_6 = V_0;
		V_7 = (bool)((!(((uint32_t)((int32_t)(L_6&7))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003e:
	{
		int32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		int32_t L_11 = V_1;
		V_3 = ((int32_t)(L_11&3));
		int32_t L_12 = V_3;
		V_8 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		V_3 = 4;
	}

IL_0057:
	{
		V_4 = 0;
		int32_t L_14 = __this->___dataLength_2;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_00b4;
	}

IL_0066:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___data_1;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_10 = L_18;
		int32_t L_19 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		goto IL_0097;
	}

IL_0079:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = V_11;
		uint32_t L_23 = V_10;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, L_22))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23&((int32_t)255)))));
		uint32_t L_24 = V_10;
		V_10 = ((int32_t)((uint32_t)L_24>>8));
		int32_t L_25 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0097:
	{
		int32_t L_26 = V_11;
		V_12 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_12;
		if (L_27)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		V_3 = 4;
		int32_t L_30 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_00b4:
	{
		int32_t L_31 = V_9;
		V_13 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_13;
		if (L_32)
		{
			goto IL_0066;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		V_6 = L_33;
		goto IL_00c7;
	}

IL_00c7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_6;
		return L_34;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_m9EDE0B4368125A9B4CA619ADA8FC02A6D3BCC39A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)303));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_0), (void*)L_1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_m229B3EFFF8A4FA76DD0C9E13DF27324E7CC6885D_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CServerAddressU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerAddressU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ProxyServerAddress_mC1756E869CAEBD9D94F12B73786DB400307C1988_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CProxyServerAddressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProxyServerAddressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CServerAddressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m53FF50B024EC68701EB6CD83DC691D521067CF56_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTotalPacketCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m1F2462971D60D696A9F0ACC128B36EC38B2298DF_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTotalPacketCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_m81EFD3CD6FF16B0BD0BF40A96D234C13FFA0AB5B_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_mF1BAE11EB423190F3D02166FF5A99DF3463EE535_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTotalCommandsInPacketsU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MyAction_Invoke_m4B08D293E676A68D50BF9DAE9EAE4C413EBCB5C0_inline (MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (MyAction_t762575F3F98FA6F330E3C7B97DCD6765322EE1C8* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m9011FDA32ACC474A968BC614990DC4F678D075F7_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COperationCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m3251092EFCF512B788A97E9A2672304BB0B05365_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CResultCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m0D6EDC66F02A91E11B680F4371CE2EB0AE1B3F36_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEventCountU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m36966BEC5C0357BB15E11A7C0E3EBA30018F2BF6_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COperationByteCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m6A234BFC89E5C345689769D1CE308EC654D953AC_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COperationByteCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_mFF55253AD445448F06B09AD3CDB85C0006FF1D87_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COperationCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_mD035D1FBCC51632CC1EF061EEADA88F5444FD8F0_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CResultByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m56FF68B66B79EC0D5D9B9D6DF2EC1B0F9C67541B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CResultByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m70B9D61ED0D7C9FA0DCCE0D38034E5E2E3465C64_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CResultCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_mB33BC27A65F0E9E7197053E820A541FB35EA9091_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEventByteCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m7D726975F7A5515CF057F971519159D4E826E879_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CEventByteCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m602D515806131E91A8C41FEDF74F03582ACD9AF0_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CEventCountU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m91A293B663A0D701AEE63D5980044D7B019AE608_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestOpResponseCallbackU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m518D556FDE4C196B53FBAE15B45366A18B374175_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestEventCallbackU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m20582EAC7872FFEC12A12487C5D3DC33153457AD_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestEventCallbackU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mACB0030449D979B4C53A3D155BD46D1AA5452CDB_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CLongestEventCallbackCodeU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m98643D9BFE90601666983FFA7A1F2197C185D873_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestMessageCallbackU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_mD0414C415EA88426BF82BC36E4F320F1E9CB7BB3_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestMessageCallbackU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_mDD13AB8092AD3DFB1E5B5743AD9EDAA4ADB61C4F_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_mE584FD02E95EB34E6B10D722270934294E6FAAAD_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestRawMessageCallbackU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mA5C84B2662E53BF6C44D33EE6D6A8C9B9DF21413_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m1E4A6523E743DEBC2841B4612D529354B960D5B0_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mF3E37B9F1FA014C5ABB993507143B26727FA3F01_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m32C99CFABAFFA29623BD2310665B36FB16E51F84_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m38616D08B09C389D16DBF1319B32ADF4ED2472FD_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mBC36DB6CA681DD7E2C780338702AB870FAF8FFC5_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m4427DE958736C30E3615CA60C3D27812A769AFFB_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPackageHeaderSizeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m39E80DE37134AFF7D9356BAC2FE31EA08A688BC3_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReliableCommandBytesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m3E51EBF1D42BE899B0A313220051923C3F629B40_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CUnreliableCommandBytesU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m70141B4CF94ABCEE704D2E63B6F6AA47697BEAF8_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFragmentCommandBytesU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m00CCDA4D90E8A037AE124924480FF497E44BB4FB_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CControlCommandBytesU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m1B780168BEA2904CA9978CD7108F2C69CE442A88_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPackageHeaderSizeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m85F1FE00A921B9DFFD8E9D2FEBDB98A5E0414A1E_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CControlCommandBytesU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_mE12DD82883CDA3BC4BAE93D495900177AEBDB05C_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CControlCommandCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m33E299D38D79A8089E3E123106197E31CBA4D562_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CControlCommandCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mF0367373B55C3FA98B734FD34F06C4C99EAA9E39_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReliableCommandBytesU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mBDE6C723F05226630846F681B86EE9759F736B28_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReliableCommandCountU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_mF418B8D22CBF720CB8694E9243A64D9A9ABCE0E9_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReliableCommandCountU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m13291467E23326F4EF6B532FADAB8E3E6D391EC6_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUnreliableCommandBytesU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m8E70EC1A089573B380D3BAEBBBF7A70607CE0497_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CUnreliableCommandCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m8C1A65BFDB2AB38DABDA39993982D22A31CA03AD_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CUnreliableCommandCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mE52846B1D3B36C9CCC2CE469E290BA2222B8B572_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFragmentCommandBytesU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_m9A94BD626A5808F230C105C8BACE8BDD9868C3CA_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFragmentCommandCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m371F9C59E4C208F9294647C8098006B52A2FA955_inline (TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFragmentCommandCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
