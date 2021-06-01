#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// IActivationFactory
struct Il2CppIActivationFactory;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tB19EF7AC58B84E1C3FB6AE40CDDFECEDDB380F6A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_2_t5CB86A8C18A6D5E27E045C4E24D9F3F08BE0591C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_2_tD7DBB4EA57F3B234C8562DB37B560EF344BD0338;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.UInt32>
struct TaskFactory_1_t6C71C728F3977A4C49A20DE79211B2924380A9FA;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IBuffer>
struct TaskFactory_1_t9106D1BDCB45B24683874D2196272D6A1DFD05EE;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t4657CAC4312043C0D7F80DB11C11289050310679;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tF980B79DBC4BD4F9F262E473628FD971545C5109;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_tE57EE0F47D00BA0902C3E8908CF3197207075270;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tC8E6D25AF262A1D3187C74CD8107F97E1FCC44FF;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tFB6EC2AD6676686963A305CC5FB2C2F273BBB5F8;
// Windows.Networking.HostName
struct HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494;
// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t9A06904D0534FEFA9174E580FCA59EDA460E6C6E;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_tDDEC725E2EE24D9CB5CF43B540772BFAB27E5AB4;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B;
// uPLibrary.Networking.M2Mqtt.Fx/<>c
struct U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA;
// uPLibrary.Networking.M2Mqtt.Fx/ThreadStart
struct ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4;
// uPLibrary.Networking.M2Mqtt.Hashtable
struct Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C;
// uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel
struct IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3;
// uPLibrary.Networking.M2Mqtt.Internal.InternalEvent
struct InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03;
// uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent
struct MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408;
// uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent
struct MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack
struct MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect
struct MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq
struct MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp
struct MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback
struct MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp
struct MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish
struct MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec
struct MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA;
// uPLibrary.Networking.M2Mqtt.MqttClient
struct MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48;
// uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler
struct ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder
struct MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler
struct MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler
struct MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler
struct MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler
struct MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E;
// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040;
// uPLibrary.Networking.M2Mqtt.MqttSettings
struct MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D;
// uPLibrary.Networking.M2Mqtt.Queue
struct Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07;
// uPLibrary.Networking.M2Mqtt.Session.MqttClientSession
struct MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1;
// uPLibrary.Networking.M2Mqtt.Session.MqttSession
struct MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8;
// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate
struct QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A;
// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputStream_t9A06904D0534FEFA9174E580FCA59EDA460E6C6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOutputStream_tDDEC725E2EE24D9CB5CF43B540772BFAB27E5AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgFlow_tA5E2D61AB10628A9FEA9E7342F3842416D6E7E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03E88C2BE6E6E448EC82A4DAD45BDD33BAA67091;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0631B97232CF68BB79EBFF6343BEBCE0C78E669D;
IL2CPP_EXTERN_C String_t* _stringLiteral072D0A73918B5C85047FB77EDED8FD83981DEF75;
IL2CPP_EXTERN_C String_t* _stringLiteral1311C74702E59E282FB030A5052010C99AE3DFB4;
IL2CPP_EXTERN_C String_t* _stringLiteral1CC5431BC7A515F5C4B0859605342DDB3BE21DED;
IL2CPP_EXTERN_C String_t* _stringLiteral1F44AB11C2A03ACD40BB22B156105B36CEC7605A;
IL2CPP_EXTERN_C String_t* _stringLiteral249BA36000029BBE97499C03DB5A9001F6B734EC;
IL2CPP_EXTERN_C String_t* _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40;
IL2CPP_EXTERN_C String_t* _stringLiteral33ADBAE3DC18FA902CDFB8BCCB1636C929549AF4;
IL2CPP_EXTERN_C String_t* _stringLiteral362CD9D464598B7708AE7E7A18DB2FA1CB64E313;
IL2CPP_EXTERN_C String_t* _stringLiteral4299338335293EC177AC3E026CAE40D68E9DE349;
IL2CPP_EXTERN_C String_t* _stringLiteral43A6E12318ADBBEE03F06872C109322B0F558E29;
IL2CPP_EXTERN_C String_t* _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787;
IL2CPP_EXTERN_C String_t* _stringLiteral5BAA61E4C9B93F3F0682250B6CF8331B7EE68FD8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral5F57DEFD51B4090CA6A76A47CCBEDD11D7001F71;
IL2CPP_EXTERN_C String_t* _stringLiteral638EB8A87DFBB71E6D8EB3FF2B42734DB2C93AE1;
IL2CPP_EXTERN_C String_t* _stringLiteral66386326760C3B6616D93CF3DE7C3E77DB0EC028;
IL2CPP_EXTERN_C String_t* _stringLiteral6899A446F073BEC454D3F2D08458D7B1371E0021;
IL2CPP_EXTERN_C String_t* _stringLiteral6A9D664A89CCA4881622D289AC3001060DB09178;
IL2CPP_EXTERN_C String_t* _stringLiteral6E288959D3443BCEC62386F7D9014542F6872829;
IL2CPP_EXTERN_C String_t* _stringLiteral6F9B9AF3CD6E8B8A73C2CDCED37FE9F59226E27D;
IL2CPP_EXTERN_C String_t* _stringLiteral74D3F4220E7636C164132B5992171318C76316CA;
IL2CPP_EXTERN_C String_t* _stringLiteral7D09EDE359E11D65BDF41E913BBADF4F9DCA2C49;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4AD343854F38A0C380554974052111791363E9;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB3C2E2A5993D559931D6E8AAF634C6425CDFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral9EC0433117B6EAC0B53D9565E2AC1EF7A6A46864;
IL2CPP_EXTERN_C String_t* _stringLiteralA47405273FF48709BE2DF105F39E24827ADAD5ED;
IL2CPP_EXTERN_C String_t* _stringLiteralA4EC7594B293C61BC2C3D81ADA9030F2352FABC7;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2A0EFB14E859CDA36B10F0DFB1A520824F4047;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8E3DC39C2E97D65670843FA291441C11CDD385;
IL2CPP_EXTERN_C String_t* _stringLiteralAC8EECED87E87D92BFC96AD5730C844E67D58335;
IL2CPP_EXTERN_C String_t* _stringLiteralB12C2B1025448596E1FCD706936A9DE4D257D9D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB415E16FBE4CA40F22707A97322B49CB9BC5E487;
IL2CPP_EXTERN_C String_t* _stringLiteralB729FFE0261CC358C3942DF5B6A06CAB8F1B9DC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB7758CE4D25BA29415A5317E6A64AC6D04DAE586;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A681DE7727459F9649657ECAA596768A9D544C;
IL2CPP_EXTERN_C String_t* _stringLiteralC0DD2F70AB2500805DC3941C04BD93AF1669BB8D;
IL2CPP_EXTERN_C String_t* _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39;
IL2CPP_EXTERN_C String_t* _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8;
IL2CPP_EXTERN_C String_t* _stringLiteralC6FFABA00CF89618C24791827361E167AF00512C;
IL2CPP_EXTERN_C String_t* _stringLiteralCA79D522F019CE176E26BFF7941CC29B9EDC5535;
IL2CPP_EXTERN_C String_t* _stringLiteralCE27CB141098FEB00714E758646BE3E99C185B71;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF07B4B6D031BB80AFBF85E719B96A0AB15F8B29B;
IL2CPP_EXTERN_C String_t* _stringLiteralFAF415CBA05A59C3E8F099DD4C2A128AA47DA882;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7114EE7648F02F9F01337987D1CBAEC5A3C792;
IL2CPP_EXTERN_C String_t* _stringLiteralFF0FC30C743813F924DFF4B751315AF42D5AB08B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mE02BFDCC216784E4CB370443AA386A7DF9BFD465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m132E7FA21C23D2EA073E3D2517294064BCE63113_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m67773E2CDA02DDA7E2E11CE6D9D8D0E99264D74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB68F444669F259E330FBE79E3B57652D764E22AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_Connect_m31340A03358C5B85BC101BA45A68E62B04C283F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_KeepAliveThread_m7B9B78C39C4C5C3E845EA870F39CA27DE34576BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_ProcessInflightThread_m9B4FF468ACAAFD685DD63A62606DB4EDDE28BA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_Publish_mCE2D404652BD0602F1DC6F01B0B5822E870B084D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttClient_Send_mC3536A77343FDF3E785DE739B34F9BE280DACFBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgConnack_Parse_mB21DF8FF63BA2DC8620F38F19238A5DA4C3EB3C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPingResp_Parse_m69E7B437D379FE0B2EF7C56DA492F0465FF189A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPuback_Parse_m1643B20F92F5D971FC3322B554458509C845AEE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubcomp_Parse_mC310191A472E583F8384CD795E0234B068BCEE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPublish_Parse_mBEC58FF1999C7B085C0CAD80FCCD73D28AF06F71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubrec_Parse_m98F6B7E1C5F070BDA2F918AB733EFE650FC84009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubrel_Parse_mA3FD71738536B0EC2A4CEA62E91313973314ADFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSuback_Parse_mE8895B2B8E44CB9E6BC5BC43BD022E96F2AB99DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsuback_Parse_m94CF7BEE7B6B579F5CE7263401E7B1881FA154AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttNetworkChannel__ctor_m24D1A7F40282B4E8CA7EE85E2BF21A99BAD12B68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttSslUtility_ToSslPlatformEnum_m49D1D11E011BD2F69B8794B36CDC872DDA0B84FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_mCFFC4079D7CA48A9669867C3CC1A484D85B3B609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mFA6355FC0178C913F2940603749F7BD0C9307830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m091D5538C08715B3F562F7D158F609AD0F84AC8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_mBFFAF1B85C42E7C3665B62C4BC37D3E06F3686C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartThreadU3Eb__1_0_m773A48B61F1DDBF70740EA0210F930C019D63BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mFFEA2D4C8F27E2B53983646F6D1ADD9BC6878015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m303C42B69861E8F874A1086F0E9BACC368281BE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hashtable__ctor_m83867C848534182C5FA003266CEB5D7EF7073F42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Close_m3A1C17CE61EE793A7FEB59B5C658BDD9943E5648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Connect_m31340A03358C5B85BC101BA45A68E62B04C283F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_EnqueueInflight_mF5246BBBA18BB5A4EF5CF6155F9CB5A6B0D36D57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Init_mA2158A56975AB9E152A2D1397D0B4F06117F97F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_KeepAliveThread_m7B9B78C39C4C5C3E845EA870F39CA27DE34576BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_OnConnectionClosed_m523A79424FA7F1E8DF7EF30409EEE7B7CC8C3802_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_OnMqttMsgPublishReceived_m9910F9B8551A1E370DD1EA4C43A2951A1AC32355_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_OnMqttMsgPublished_m1D88B3B2682E4A0FED5D464EA0A2D228596A6024_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_OnMqttMsgSubscribed_m9936EA0B02793E8D8006102DBE5C299BCBD3C96C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_OnMqttMsgUnsubscribed_m799441C1B56F97208B7EE9794E3C2ED8B741E24A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Ping_mCF88172406AC1622608F98F4DCF0150A0D0CEA8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_ProcessInflightThread_m9B4FF468ACAAFD685DD63A62606DB4EDDE28BA18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Publish_mCE2D404652BD0602F1DC6F01B0B5822E870B084D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_RestoreSession_m8E5C1200B09C7E9045EDA240824FED53C37E182B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_SendReceive_m1A53FEF4445EEDB709C738BB605C7D94969E1365_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Send_mC3536A77343FDF3E785DE739B34F9BE280DACFBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_Subscribe_m244A05BC20FBF9DEE01DD1133BAD6DCE5CD2E5AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_add_MqttMsgPublishReceived_m1653B283D7C4C60E37FD6C9ADDF34D55ED880C47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttClient_remove_MqttMsgPublishReceived_mDC9E97A55AD7AA60FB574CF0899CCEB5A7F55C55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttCommunicationException__ctor_m301F6DECD5E6B93DAFF1E02D81DB2EBC890CC0B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttCommunicationException__ctor_m9D5650349CFD38E37C1FAB5833EB550602B2D293_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttConnectionException__ctor_m53BBF4394FF5030C9D9457740448D0BD8173C82E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgBase_GetStringObject_m26DBF456C5F39D23910E6D1F406FA68C9F40ADF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgConnack_GetBytes_m863499ABC664551E5BC50DD4D9502C6E42CE53FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgConnack_Parse_mB21DF8FF63BA2DC8620F38F19238A5DA4C3EB3C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgConnack_ToString_m1227EBCFA8D10FBF5CE27015F1860C412DA0B8F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgConnect_ToString_mF350A0F9547EA3CE1FE3E2CDC58FAF3A2FFA5D3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgConnect__ctor_m2B22AB31C50BEC7A72937A81F3EBF1D4CD85E1BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPingReq_GetBytes_m21A51C1F9C6A4AA08CB7B1FC1C294D4DE9A5AE34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPingReq_ToString_m5BDBEC56B8FCA7C5A5535986B2E02650BD01D36E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPingResp_GetBytes_m8267E31A0305394AA290485CA647C2FF9B7241C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPingResp_Parse_m69E7B437D379FE0B2EF7C56DA492F0465FF189A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPingResp_ToString_m6A3F618FFEFF6532EC6421290BBECEABA7AAF268_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPuback_GetBytes_mF724A96625034391D4915AD4B3875AF5AF1C7576_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPuback_Parse_m1643B20F92F5D971FC3322B554458509C845AEE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPuback_ToString_m28234C530A61BEF76B098581F8D8A7591E11AC94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubcomp_GetBytes_m6DB33DAF0540F7523DD567F37D4EA8F3058ED61C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubcomp_Parse_mC310191A472E583F8384CD795E0234B068BCEE05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubcomp_ToString_mC4A5E10F6B07FA615D66C89BA4FCA13A3D3B37A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPublishEventArgs__ctor_m21BB1A4A457F27AFCC5A7155384DC8969723E8DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPublish_Parse_mBEC58FF1999C7B085C0CAD80FCCD73D28AF06F71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPublish_ToString_m0A5CED9F0D7199BC4D13CEB7889CDDA41933CC4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPublishedEventArgs__ctor_mF781767C02B4359B6F8E3855A12354018BEB3608_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubrec_GetBytes_mE4442D5FBC7DC0A19FB98F0811FF28A43FA7AB4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubrec_Parse_m98F6B7E1C5F070BDA2F918AB733EFE650FC84009_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubrec_ToString_m0B7AB4A7DB03DB69B579A00F427C7AF2E877697E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubrel_GetBytes_m3294314B68EFE8286FABBC1972AFACC9F5EC9473_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubrel_Parse_mA3FD71738536B0EC2A4CEA62E91313973314ADFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgPubrel_ToString_mB9C55D82E0B91BFE077592C8405E69DE7E564DC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgSuback_GetBytes_mDEAC0BF684C9C8FCFAF79C20D06F20DF179FEA10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgSuback_Parse_mE8895B2B8E44CB9E6BC5BC43BD022E96F2AB99DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgSuback_ToString_mF4DE73D3A66C5EFB14E0427C6D55DD4E3D33CE5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgSubscribe_ToString_m08F82776D45FC0B308F028B58F5230B0743D75EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgSubscribedEventArgs__ctor_m1E94F55B43E436D192EF04C85C1CA1B474AA7078_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgUnsuback_GetBytes_m442719040DB7E2B29219A9FDF3FDF1E06D8E4B3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgUnsuback_Parse_m94CF7BEE7B6B579F5CE7263401E7B1881FA154AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgUnsuback_ToString_mEBC1FD6BB53F98D2BBFA79AB9348C61DBFEAB2CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttMsgUnsubscribedEventArgs__ctor_mFFF8340A62888ED5CB93F69BFA1B53117A55F96E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttNetworkChannel_Connect_m82D279820FC9F12F75C6E0D7C44638A5E72510ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttNetworkChannel_Receive_mB4A99FA0224D71B236AD993A7CB4DE5D04257988_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttNetworkChannel_Send_m496C24B2B6E607D23D89042FE5D63315AC57BAED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttNetworkChannel__ctor_m24D1A7F40282B4E8CA7EE85E2BF21A99BAD12B68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSession_Clear_mD052AAED74E43111244BA02AB87E81F0EDD52860_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSession__ctor_m2E4965489DEB1EE612F5A9E0BBEF47FAAF2C5223_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSettings_get_Instance_m75C912F1E61B2468D88322A81A22F1C3DBB26177_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSslUtility_ToSslPlatformEnum_m49D1D11E011BD2F69B8794B36CDC872DDA0B84FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Queue__ctor_m81695AF2DBEDBC014C13129CF91328AE3368EA50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_get_Factory_m31F1298E08390A4AD46B85AB060F1FAD4CE12112M2Mqtt_WinRT_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CStartThreadU3Eb__1_0_m773A48B61F1DDBF70740EA0210F930C019D63BA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mF829D5D1F052075A242530350795A21AF8C31D43_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t609AD05A4860888E107296DA98829F161DA0A6A7_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t20B71601903ECA7563B45CDFD96BFC2FEE5B9C34_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t59B024515C6DBD5934C514163689545A8EBEF367_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t473DE904A64BD515E444DAB94F723EE974E34A1C_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tDE796307737FFEE4DA2A5E6C8BE70FC783E7E273_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_tC8E6D25AF262A1D3187C74CD8107F97E1FCC44FF;
struct IAsyncOperationWithProgress_2_tFB6EC2AD6676686963A305CC5FB2C2F273BBB5F8;
struct IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377;
struct IHostName_t7CC103357C0004DB2503909F01EAF58DEE073A91;
struct IStreamSocket_t54E613F47EB9A57A06BD3CA55485E33B54B70014;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5A9CC4EB881C17AB5D5C4A0F1E6E537F2D1E77C4 
{
public:

public:
};


// System.Object

// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tF980B79DBC4BD4F9F262E473628FD971545C5109 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m0632776C609159F4E6D0D5F6DECCE64CC355B779(IAsyncActionCompletedHandler_t609AD05A4860888E107296DA98829F161DA0A6A7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEF447B408CEF9BD7882E596CF87C4355CC17E71B(IAsyncActionCompletedHandler_t609AD05A4860888E107296DA98829F161DA0A6A7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m192BCF4CC6EE9E2E66722E3D2BFBBAEE124D7AD7() = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tC8E6D25AF262A1D3187C74CD8107F97E1FCC44FF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m350E9B9254A685DFB8C3FC2D3131246B8E51D04A(IAsyncOperationProgressHandler_2_t59B024515C6DBD5934C514163689545A8EBEF367_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m52E5FA65A83D323DD051DE07DCD1197F3BAB915A(IAsyncOperationProgressHandler_2_t59B024515C6DBD5934C514163689545A8EBEF367_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_mFB0F42569BF3A6EA84B17C7FC562E077E24E1C1E(IAsyncOperationWithProgressCompletedHandler_2_t473DE904A64BD515E444DAB94F723EE974E34A1C_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mA97E7AD6FFA70605BC3D85B2BA81D9E73477C83C(IAsyncOperationWithProgressCompletedHandler_2_t473DE904A64BD515E444DAB94F723EE974E34A1C_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m192AC6B35298E03A2B3C136B3077DF2053FDB6A2(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tFB6EC2AD6676686963A305CC5FB2C2F273BBB5F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m4396095E1C5BCD96B24225CF9C1254E3DD333042(IAsyncOperationProgressHandler_2_t20B71601903ECA7563B45CDFD96BFC2FEE5B9C34_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m7401500904BDC6987BEDECF55015F11DB0E12C5A(IAsyncOperationProgressHandler_2_t20B71601903ECA7563B45CDFD96BFC2FEE5B9C34_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_mBB898DA16D7D3F58DA764C4F94750283402D7702(IAsyncOperationWithProgressCompletedHandler_2_tDE796307737FFEE4DA2A5E6C8BE70FC783E7E273_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m3F5676269F75BB2FF11038E05EB40B910B0EB1DC(IAsyncOperationWithProgressCompletedHandler_2_tDE796307737FFEE4DA2A5E6C8BE70FC783E7E273_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m75136DAE8D255FA6C4CDD40E31333B0554298B3D(IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377** comReturnValue) = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m06FB172FA394E31717172D172B890E84AA85A68D(Il2CppHString ___hostName0, IHostName_t7CC103357C0004DB2503909F01EAF58DEE073A91** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m6EA9E7E56A1F73DCABEC54F41FDD86DD6D4C40DD() = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m57CE034841456CA8971D999A585A49DA3277F912() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m06D3D58E0430084B25AFF2996604DDA8C9E822E2() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m5745CFEF40ED7190B05A09CE37B07650634038C9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mDADF6292B118D0FD40831F9C33D7EFE7AEDB889B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m60458A1E0C478452AFD6A20A5B7090AEA469A8B0(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_tDDEC725E2EE24D9CB5CF43B540772BFAB27E5AB4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_mBE75066C704E76E8AC90135CE779B83A3DD71921(IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377* ___buffer0, IAsyncOperationWithProgress_2_tC8E6D25AF262A1D3187C74CD8107F97E1FCC44FF** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_U24__Stripped0_FlushAsync_m9653E93CDB9F0D79EEE8B6854F56146208F5E7DC() = 0;
};
struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct  ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB19EF7AC58B84E1C3FB6AE40CDDFECEDDB380F6A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tB19EF7AC58B84E1C3FB6AE40CDDFECEDDB380F6A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB19EF7AC58B84E1C3FB6AE40CDDFECEDDB380F6A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB19EF7AC58B84E1C3FB6AE40CDDFECEDDB380F6A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.__Il2CppComObject


// uPLibrary.Networking.M2Mqtt.Fx
struct  Fx_tEEE2390E03E1A6D7EE4A270F79BF37E34A26460A  : public RuntimeObject
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Fx/<>c
struct  U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_StaticFields
{
public:
	// uPLibrary.Networking.M2Mqtt.Fx/<>c uPLibrary.Networking.M2Mqtt.Fx/<>c::<>9
	U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * ___U3CU3E9_0;
	// System.Action`1<System.Object> uPLibrary.Networking.M2Mqtt.Fx/<>c::<>9__1_0
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Internal.InternalEvent
struct  InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03  : public RuntimeObject
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct  MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09  : public RuntimeObject
{
public:
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::type
	uint8_t ___type_50;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::dupFlag
	bool ___dupFlag_51;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::qosLevel
	uint8_t ___qosLevel_52;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::retain
	bool ___retain_53;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::messageId
	uint16_t ___messageId_54;

public:
	inline static int32_t get_offset_of_type_50() { return static_cast<int32_t>(offsetof(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09, ___type_50)); }
	inline uint8_t get_type_50() const { return ___type_50; }
	inline uint8_t* get_address_of_type_50() { return &___type_50; }
	inline void set_type_50(uint8_t value)
	{
		___type_50 = value;
	}

	inline static int32_t get_offset_of_dupFlag_51() { return static_cast<int32_t>(offsetof(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09, ___dupFlag_51)); }
	inline bool get_dupFlag_51() const { return ___dupFlag_51; }
	inline bool* get_address_of_dupFlag_51() { return &___dupFlag_51; }
	inline void set_dupFlag_51(bool value)
	{
		___dupFlag_51 = value;
	}

	inline static int32_t get_offset_of_qosLevel_52() { return static_cast<int32_t>(offsetof(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09, ___qosLevel_52)); }
	inline uint8_t get_qosLevel_52() const { return ___qosLevel_52; }
	inline uint8_t* get_address_of_qosLevel_52() { return &___qosLevel_52; }
	inline void set_qosLevel_52(uint8_t value)
	{
		___qosLevel_52 = value;
	}

	inline static int32_t get_offset_of_retain_53() { return static_cast<int32_t>(offsetof(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09, ___retain_53)); }
	inline bool get_retain_53() const { return ___retain_53; }
	inline bool* get_address_of_retain_53() { return &___retain_53; }
	inline void set_retain_53(bool value)
	{
		___retain_53 = value;
	}

	inline static int32_t get_offset_of_messageId_54() { return static_cast<int32_t>(offsetof(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09, ___messageId_54)); }
	inline uint16_t get_messageId_54() const { return ___messageId_54; }
	inline uint16_t* get_address_of_messageId_54() { return &___messageId_54; }
	inline void set_messageId_54(uint16_t value)
	{
		___messageId_54 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttSettings
struct  MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D  : public RuntimeObject
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_7;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<SslPort>k__BackingField
	int32_t ___U3CSslPortU3Ek__BackingField_8;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<TimeoutOnConnection>k__BackingField
	int32_t ___U3CTimeoutOnConnectionU3Ek__BackingField_9;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<TimeoutOnReceiving>k__BackingField
	int32_t ___U3CTimeoutOnReceivingU3Ek__BackingField_10;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<AttemptsOnRetry>k__BackingField
	int32_t ___U3CAttemptsOnRetryU3Ek__BackingField_11;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<DelayOnRetry>k__BackingField
	int32_t ___U3CDelayOnRetryU3Ek__BackingField_12;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<InflightQueueSize>k__BackingField
	int32_t ___U3CInflightQueueSizeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D, ___U3CPortU3Ek__BackingField_7)); }
	inline int32_t get_U3CPortU3Ek__BackingField_7() const { return ___U3CPortU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_7() { return &___U3CPortU3Ek__BackingField_7; }
	inline void set_U3CPortU3Ek__BackingField_7(int32_t value)
	{
		___U3CPortU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CSslPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D, ___U3CSslPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CSslPortU3Ek__BackingField_8() const { return ___U3CSslPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CSslPortU3Ek__BackingField_8() { return &___U3CSslPortU3Ek__BackingField_8; }
	inline void set_U3CSslPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CSslPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutOnConnectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D, ___U3CTimeoutOnConnectionU3Ek__BackingField_9)); }
	inline int32_t get_U3CTimeoutOnConnectionU3Ek__BackingField_9() const { return ___U3CTimeoutOnConnectionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CTimeoutOnConnectionU3Ek__BackingField_9() { return &___U3CTimeoutOnConnectionU3Ek__BackingField_9; }
	inline void set_U3CTimeoutOnConnectionU3Ek__BackingField_9(int32_t value)
	{
		___U3CTimeoutOnConnectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutOnReceivingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D, ___U3CTimeoutOnReceivingU3Ek__BackingField_10)); }
	inline int32_t get_U3CTimeoutOnReceivingU3Ek__BackingField_10() const { return ___U3CTimeoutOnReceivingU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CTimeoutOnReceivingU3Ek__BackingField_10() { return &___U3CTimeoutOnReceivingU3Ek__BackingField_10; }
	inline void set_U3CTimeoutOnReceivingU3Ek__BackingField_10(int32_t value)
	{
		___U3CTimeoutOnReceivingU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CAttemptsOnRetryU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D, ___U3CAttemptsOnRetryU3Ek__BackingField_11)); }
	inline int32_t get_U3CAttemptsOnRetryU3Ek__BackingField_11() const { return ___U3CAttemptsOnRetryU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CAttemptsOnRetryU3Ek__BackingField_11() { return &___U3CAttemptsOnRetryU3Ek__BackingField_11; }
	inline void set_U3CAttemptsOnRetryU3Ek__BackingField_11(int32_t value)
	{
		___U3CAttemptsOnRetryU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDelayOnRetryU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D, ___U3CDelayOnRetryU3Ek__BackingField_12)); }
	inline int32_t get_U3CDelayOnRetryU3Ek__BackingField_12() const { return ___U3CDelayOnRetryU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CDelayOnRetryU3Ek__BackingField_12() { return &___U3CDelayOnRetryU3Ek__BackingField_12; }
	inline void set_U3CDelayOnRetryU3Ek__BackingField_12(int32_t value)
	{
		___U3CDelayOnRetryU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CInflightQueueSizeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D, ___U3CInflightQueueSizeU3Ek__BackingField_13)); }
	inline int32_t get_U3CInflightQueueSizeU3Ek__BackingField_13() const { return ___U3CInflightQueueSizeU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CInflightQueueSizeU3Ek__BackingField_13() { return &___U3CInflightQueueSizeU3Ek__BackingField_13; }
	inline void set_U3CInflightQueueSizeU3Ek__BackingField_13(int32_t value)
	{
		___U3CInflightQueueSizeU3Ek__BackingField_13 = value;
	}
};

struct MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_StaticFields
{
public:
	// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::instance
	MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * ___instance_14;

public:
	inline static int32_t get_offset_of_instance_14() { return static_cast<int32_t>(offsetof(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_StaticFields, ___instance_14)); }
	inline MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * get_instance_14() const { return ___instance_14; }
	inline MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D ** get_address_of_instance_14() { return &___instance_14; }
	inline void set_instance_14(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * value)
	{
		___instance_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_14), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.MqttSslUtility
struct  MqttSslUtility_tDB9B603D200EA91548C32C6853F3F71503C617C3  : public RuntimeObject
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Session.MqttSession
struct  MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8  : public RuntimeObject
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Session.MqttSession::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::<InflightMessages>k__BackingField
	Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * ___U3CInflightMessagesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8, ___U3CClientIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CClientIdU3Ek__BackingField_0() const { return ___U3CClientIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CClientIdU3Ek__BackingField_0() { return &___U3CClientIdU3Ek__BackingField_0; }
	inline void set_U3CClientIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CClientIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInflightMessagesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8, ___U3CInflightMessagesU3Ek__BackingField_1)); }
	inline Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * get_U3CInflightMessagesU3Ek__BackingField_1() const { return ___U3CInflightMessagesU3Ek__BackingField_1; }
	inline Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C ** get_address_of_U3CInflightMessagesU3Ek__BackingField_1() { return &___U3CInflightMessagesU3Ek__BackingField_1; }
	inline void set_U3CInflightMessagesU3Ek__BackingField_1(Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * value)
	{
		___U3CInflightMessagesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInflightMessagesU3Ek__BackingField_1), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension
struct  QueueExtension_t459D8092E4C48191C03242813842DA794428AD46  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct  Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948, ____q_0)); }
	inline Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * get__q_0() const { return ____q_0; }
	inline Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948, ____currentElement_3)); }
	inline RuntimeObject * get__currentElement_3() const { return ____currentElement_3; }
	inline RuntimeObject ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(RuntimeObject * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Windows.Networking.HostName
struct  HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F  : public Il2CppComObject
{
public:

public:
};

struct HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1* ____ihostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC* ____ihostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1* get_____ihostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1()
	{
		IHostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1* returnValue = ____ihostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1>((&____ihostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_tFAC92E74B9B1ECB8C74BA8E62CF32D72A317A9B1;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC* get_____ihostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC()
	{
		IHostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC* returnValue = ____ihostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC>((&____ihostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_t037D7823E06A83B2840951D9582F972EE0A1C3DC;
			}
		}
		return returnValue;
	}
};


// Windows.Networking.Sockets.StreamSocket
struct  StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA  : public Il2CppComObject
{
public:

public:
};

struct StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494* ____istreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494* get_____istreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494()
	{
		IStreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494* returnValue = ____istreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494>((&____istreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_tFF90F809AD9AB3905AC8276D0078A6BCB8872494;
			}
		}
		return returnValue;
	}
};


// uPLibrary.Networking.M2Mqtt.Hashtable
struct  Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C  : public Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent
struct  MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408  : public InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03
{
public:
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::msg
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408, ___msg_0)); }
	inline MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * get_msg_0() const { return ___msg_0; }
	inline MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack
struct  MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::sessionPresent
	bool ___sessionPresent_55;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::returnCode
	uint8_t ___returnCode_56;

public:
	inline static int32_t get_offset_of_sessionPresent_55() { return static_cast<int32_t>(offsetof(MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76, ___sessionPresent_55)); }
	inline bool get_sessionPresent_55() const { return ___sessionPresent_55; }
	inline bool* get_address_of_sessionPresent_55() { return &___sessionPresent_55; }
	inline void set_sessionPresent_55(bool value)
	{
		___sessionPresent_55 = value;
	}

	inline static int32_t get_offset_of_returnCode_56() { return static_cast<int32_t>(offsetof(MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76, ___returnCode_56)); }
	inline uint8_t get_returnCode_56() const { return ___returnCode_56; }
	inline uint8_t* get_address_of_returnCode_56() { return &___returnCode_56; }
	inline void set_returnCode_56(uint8_t value)
	{
		___returnCode_56 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect
struct  MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::protocolName
	String_t* ___protocolName_55;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::protocolVersion
	uint8_t ___protocolVersion_56;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::clientId
	String_t* ___clientId_57;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willRetain
	bool ___willRetain_58;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willQosLevel
	uint8_t ___willQosLevel_59;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willFlag
	bool ___willFlag_60;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willTopic
	String_t* ___willTopic_61;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willMessage
	String_t* ___willMessage_62;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::username
	String_t* ___username_63;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::password
	String_t* ___password_64;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::cleanSession
	bool ___cleanSession_65;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::keepAlivePeriod
	uint16_t ___keepAlivePeriod_66;

public:
	inline static int32_t get_offset_of_protocolName_55() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___protocolName_55)); }
	inline String_t* get_protocolName_55() const { return ___protocolName_55; }
	inline String_t** get_address_of_protocolName_55() { return &___protocolName_55; }
	inline void set_protocolName_55(String_t* value)
	{
		___protocolName_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocolName_55), (void*)value);
	}

	inline static int32_t get_offset_of_protocolVersion_56() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___protocolVersion_56)); }
	inline uint8_t get_protocolVersion_56() const { return ___protocolVersion_56; }
	inline uint8_t* get_address_of_protocolVersion_56() { return &___protocolVersion_56; }
	inline void set_protocolVersion_56(uint8_t value)
	{
		___protocolVersion_56 = value;
	}

	inline static int32_t get_offset_of_clientId_57() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___clientId_57)); }
	inline String_t* get_clientId_57() const { return ___clientId_57; }
	inline String_t** get_address_of_clientId_57() { return &___clientId_57; }
	inline void set_clientId_57(String_t* value)
	{
		___clientId_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientId_57), (void*)value);
	}

	inline static int32_t get_offset_of_willRetain_58() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___willRetain_58)); }
	inline bool get_willRetain_58() const { return ___willRetain_58; }
	inline bool* get_address_of_willRetain_58() { return &___willRetain_58; }
	inline void set_willRetain_58(bool value)
	{
		___willRetain_58 = value;
	}

	inline static int32_t get_offset_of_willQosLevel_59() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___willQosLevel_59)); }
	inline uint8_t get_willQosLevel_59() const { return ___willQosLevel_59; }
	inline uint8_t* get_address_of_willQosLevel_59() { return &___willQosLevel_59; }
	inline void set_willQosLevel_59(uint8_t value)
	{
		___willQosLevel_59 = value;
	}

	inline static int32_t get_offset_of_willFlag_60() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___willFlag_60)); }
	inline bool get_willFlag_60() const { return ___willFlag_60; }
	inline bool* get_address_of_willFlag_60() { return &___willFlag_60; }
	inline void set_willFlag_60(bool value)
	{
		___willFlag_60 = value;
	}

	inline static int32_t get_offset_of_willTopic_61() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___willTopic_61)); }
	inline String_t* get_willTopic_61() const { return ___willTopic_61; }
	inline String_t** get_address_of_willTopic_61() { return &___willTopic_61; }
	inline void set_willTopic_61(String_t* value)
	{
		___willTopic_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willTopic_61), (void*)value);
	}

	inline static int32_t get_offset_of_willMessage_62() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___willMessage_62)); }
	inline String_t* get_willMessage_62() const { return ___willMessage_62; }
	inline String_t** get_address_of_willMessage_62() { return &___willMessage_62; }
	inline void set_willMessage_62(String_t* value)
	{
		___willMessage_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willMessage_62), (void*)value);
	}

	inline static int32_t get_offset_of_username_63() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___username_63)); }
	inline String_t* get_username_63() const { return ___username_63; }
	inline String_t** get_address_of_username_63() { return &___username_63; }
	inline void set_username_63(String_t* value)
	{
		___username_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_63), (void*)value);
	}

	inline static int32_t get_offset_of_password_64() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___password_64)); }
	inline String_t* get_password_64() const { return ___password_64; }
	inline String_t** get_address_of_password_64() { return &___password_64; }
	inline void set_password_64(String_t* value)
	{
		___password_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_64), (void*)value);
	}

	inline static int32_t get_offset_of_cleanSession_65() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___cleanSession_65)); }
	inline bool get_cleanSession_65() const { return ___cleanSession_65; }
	inline bool* get_address_of_cleanSession_65() { return &___cleanSession_65; }
	inline void set_cleanSession_65(bool value)
	{
		___cleanSession_65 = value;
	}

	inline static int32_t get_offset_of_keepAlivePeriod_66() { return static_cast<int32_t>(offsetof(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4, ___keepAlivePeriod_66)); }
	inline uint16_t get_keepAlivePeriod_66() const { return ___keepAlivePeriod_66; }
	inline uint16_t* get_address_of_keepAlivePeriod_66() { return &___keepAlivePeriod_66; }
	inline void set_keepAlivePeriod_66(uint16_t value)
	{
		___keepAlivePeriod_66 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq
struct  MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp
struct  MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback
struct  MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp
struct  MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish
struct  MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::topic
	String_t* ___topic_55;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::message
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message_56;

public:
	inline static int32_t get_offset_of_topic_55() { return static_cast<int32_t>(offsetof(MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC, ___topic_55)); }
	inline String_t* get_topic_55() const { return ___topic_55; }
	inline String_t** get_address_of_topic_55() { return &___topic_55; }
	inline void set_topic_55(String_t* value)
	{
		___topic_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topic_55), (void*)value);
	}

	inline static int32_t get_offset_of_message_56() { return static_cast<int32_t>(offsetof(MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC, ___message_56)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_message_56() const { return ___message_56; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_message_56() { return &___message_56; }
	inline void set_message_56(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___message_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_56), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct  MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::topic
	String_t* ___topic_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::message
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message_2;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::dupFlag
	bool ___dupFlag_3;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::qosLevel
	uint8_t ___qosLevel_4;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::retain
	bool ___retain_5;

public:
	inline static int32_t get_offset_of_topic_1() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614, ___topic_1)); }
	inline String_t* get_topic_1() const { return ___topic_1; }
	inline String_t** get_address_of_topic_1() { return &___topic_1; }
	inline void set_topic_1(String_t* value)
	{
		___topic_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topic_1), (void*)value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614, ___message_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_message_2() const { return ___message_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}

	inline static int32_t get_offset_of_dupFlag_3() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614, ___dupFlag_3)); }
	inline bool get_dupFlag_3() const { return ___dupFlag_3; }
	inline bool* get_address_of_dupFlag_3() { return &___dupFlag_3; }
	inline void set_dupFlag_3(bool value)
	{
		___dupFlag_3 = value;
	}

	inline static int32_t get_offset_of_qosLevel_4() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614, ___qosLevel_4)); }
	inline uint8_t get_qosLevel_4() const { return ___qosLevel_4; }
	inline uint8_t* get_address_of_qosLevel_4() { return &___qosLevel_4; }
	inline void set_qosLevel_4(uint8_t value)
	{
		___qosLevel_4 = value;
	}

	inline static int32_t get_offset_of_retain_5() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614, ___retain_5)); }
	inline bool get_retain_5() const { return ___retain_5; }
	inline bool* get_address_of_retain_5() { return &___retain_5; }
	inline void set_retain_5(bool value)
	{
		___retain_5 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct  MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::isPublished
	bool ___isPublished_2;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}

	inline static int32_t get_offset_of_isPublished_2() { return static_cast<int32_t>(offsetof(MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990, ___isPublished_2)); }
	inline bool get_isPublished_2() const { return ___isPublished_2; }
	inline bool* get_address_of_isPublished_2() { return &___isPublished_2; }
	inline void set_isPublished_2(bool value)
	{
		___isPublished_2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec
struct  MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct  MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct  MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::grantedQosLevels
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___grantedQosLevels_55;

public:
	inline static int32_t get_offset_of_grantedQosLevels_55() { return static_cast<int32_t>(offsetof(MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580, ___grantedQosLevels_55)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_grantedQosLevels_55() const { return ___grantedQosLevels_55; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_grantedQosLevels_55() { return &___grantedQosLevels_55; }
	inline void set_grantedQosLevels_55(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___grantedQosLevels_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grantedQosLevels_55), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct  MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::topics
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___topics_55;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::qosLevels
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___qosLevels_56;

public:
	inline static int32_t get_offset_of_topics_55() { return static_cast<int32_t>(offsetof(MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E, ___topics_55)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_topics_55() const { return ___topics_55; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_topics_55() { return &___topics_55; }
	inline void set_topics_55(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___topics_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topics_55), (void*)value);
	}

	inline static int32_t get_offset_of_qosLevels_56() { return static_cast<int32_t>(offsetof(MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E, ___qosLevels_56)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_qosLevels_56() const { return ___qosLevels_56; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_qosLevels_56() { return &___qosLevels_56; }
	inline void set_qosLevels_56(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___qosLevels_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qosLevels_56), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct  MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::grantedQosLevels
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___grantedQosLevels_2;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}

	inline static int32_t get_offset_of_grantedQosLevels_2() { return static_cast<int32_t>(offsetof(MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6, ___grantedQosLevels_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_grantedQosLevels_2() const { return ___grantedQosLevels_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_grantedQosLevels_2() { return &___grantedQosLevels_2; }
	inline void set_grantedQosLevels_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___grantedQosLevels_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grantedQosLevels_2), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct  MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849  : public MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct  MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::messageId
	uint16_t ___messageId_1;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Queue
struct  Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07  : public Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Session.MqttClientSession
struct  MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1  : public MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8
{
public:

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t73D75E64925AACDF2A90DDB3D508192A8E74D375 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t73D75E64925AACDF2A90DDB3D508192A8E74D375, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Windows.Networking.Sockets.SocketProtectionLevel
struct  SocketProtectionLevel_t9E7ECB79C972C9D263D102A5EA8BC49AA7067393 
{
public:
	// System.Int32 Windows.Networking.Sockets.SocketProtectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketProtectionLevel_t9E7ECB79C972C9D263D102A5EA8BC49AA7067393, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t30069DC0816A557D0697485558A4114A7C8634E3 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t30069DC0816A557D0697485558A4114A7C8634E3, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode
struct  MqttClientErrorCode_tCA2C7860E5BDC631231E2C840B12FE16FD13BF32 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttClientErrorCode_tCA2C7860E5BDC631231E2C840B12FE16FD13BF32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent
struct  MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1  : public MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408
{
public:
	// System.Boolean uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::isPublished
	bool ___isPublished_1;

public:
	inline static int32_t get_offset_of_isPublished_1() { return static_cast<int32_t>(offsetof(MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1, ___isPublished_1)); }
	inline bool get_isPublished_1() const { return ___isPublished_1; }
	inline bool* get_address_of_isPublished_1() { return &___isPublished_1; }
	inline void set_isPublished_1(bool value)
	{
		___isPublished_1 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow
struct  MqttMsgFlow_tA5E2D61AB10628A9FEA9E7342F3842416D6E7E88 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttMsgFlow_tA5E2D61AB10628A9FEA9E7342F3842416D6E7E88, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState
struct  MqttMsgState_t8CA1815DE353EB535911307A75BDCAFC002209AF 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttMsgState_t8CA1815DE353EB535911307A75BDCAFC002209AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttProtocolVersion
struct  MqttProtocolVersion_t9DABFD3AD70E4005D4F5175B5C40613501D8A0A4 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttProtocolVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttProtocolVersion_t9DABFD3AD70E4005D4F5175B5C40613501D8A0A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttSslProtocols
struct  MqttSslProtocols_t2D48ADA8BC57995479A9B7CE538449A2A08230EC 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSslProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttSslProtocols_t2D48ADA8BC57995479A9B7CE538449A2A08230EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Utility.TraceLevel
struct  TraceLevel_t5D649D1825F4340DBDEF1D3CE21015D51B5B244F 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Utility.TraceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TraceLevel_t5D649D1825F4340DBDEF1D3CE21015D51B5B244F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
{
public:

public:
};


// System.Threading.Tasks.TaskFactory
struct  TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.Task`1<System.UInt32>
struct  Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B, ___m_result_22)); }
	inline uint32_t get_m_result_22() const { return ___m_result_22; }
	inline uint32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(uint32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t6C71C728F3977A4C49A20DE79211B2924380A9FA * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5CB86A8C18A6D5E27E045C4E24D9F3F08BE0591C * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t6C71C728F3977A4C49A20DE79211B2924380A9FA * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t6C71C728F3977A4C49A20DE79211B2924380A9FA ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t6C71C728F3977A4C49A20DE79211B2924380A9FA * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t5CB86A8C18A6D5E27E045C4E24D9F3F08BE0591C * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t5CB86A8C18A6D5E27E045C4E24D9F3F08BE0591C ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t5CB86A8C18A6D5E27E045C4E24D9F3F08BE0591C * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct  Task_1_t4657CAC4312043C0D7F80DB11C11289050310679  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t4657CAC4312043C0D7F80DB11C11289050310679, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t4657CAC4312043C0D7F80DB11C11289050310679_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9106D1BDCB45B24683874D2196272D6A1DFD05EE * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD7DBB4EA57F3B234C8562DB37B560EF344BD0338 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t4657CAC4312043C0D7F80DB11C11289050310679_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9106D1BDCB45B24683874D2196272D6A1DFD05EE * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9106D1BDCB45B24683874D2196272D6A1DFD05EE ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9106D1BDCB45B24683874D2196272D6A1DFD05EE * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t4657CAC4312043C0D7F80DB11C11289050310679_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tD7DBB4EA57F3B234C8562DB37B560EF344BD0338 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tD7DBB4EA57F3B234C8562DB37B560EF344BD0338 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tD7DBB4EA57F3B234C8562DB37B560EF344BD0338 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t9A06904D0534FEFA9174E580FCA59EDA460E6C6E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCCC52942D8DECE2C743C51DD683483531F495C88(IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tFB6EC2AD6676686963A305CC5FB2C2F273BBB5F8** comReturnValue) = 0;
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct  MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C  : public Exception_t
{
public:
	// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::errorCode
	int32_t ___errorCode_17;

public:
	inline static int32_t get_offset_of_errorCode_17() { return static_cast<int32_t>(offsetof(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C, ___errorCode_17)); }
	inline int32_t get_errorCode_17() const { return ___errorCode_17; }
	inline int32_t* get_address_of_errorCode_17() { return &___errorCode_17; }
	inline void set_errorCode_17(int32_t value)
	{
		___errorCode_17 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct  MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059  : public Exception_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct  MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B  : public Exception_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct  MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8  : public RuntimeObject
{
public:
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Message>k__BackingField
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___U3CMessageU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Flow>k__BackingField
	int32_t ___U3CFlowU3Ek__BackingField_2;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Timestamp>k__BackingField
	int32_t ___U3CTimestampU3Ek__BackingField_3;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Attempt>k__BackingField
	int32_t ___U3CAttemptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8, ___U3CMessageU3Ek__BackingField_0)); }
	inline MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * get_U3CMessageU3Ek__BackingField_0() const { return ___U3CMessageU3Ek__BackingField_0; }
	inline MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 ** get_address_of_U3CMessageU3Ek__BackingField_0() { return &___U3CMessageU3Ek__BackingField_0; }
	inline void set_U3CMessageU3Ek__BackingField_0(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * value)
	{
		___U3CMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8, ___U3CStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CStateU3Ek__BackingField_1() const { return ___U3CStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_1() { return &___U3CStateU3Ek__BackingField_1; }
	inline void set_U3CStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFlowU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8, ___U3CFlowU3Ek__BackingField_2)); }
	inline int32_t get_U3CFlowU3Ek__BackingField_2() const { return ___U3CFlowU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFlowU3Ek__BackingField_2() { return &___U3CFlowU3Ek__BackingField_2; }
	inline void set_U3CFlowU3Ek__BackingField_2(int32_t value)
	{
		___U3CFlowU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8, ___U3CTimestampU3Ek__BackingField_3)); }
	inline int32_t get_U3CTimestampU3Ek__BackingField_3() const { return ___U3CTimestampU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTimestampU3Ek__BackingField_3() { return &___U3CTimestampU3Ek__BackingField_3; }
	inline void set_U3CTimestampU3Ek__BackingField_3(int32_t value)
	{
		___U3CTimestampU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttemptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8, ___U3CAttemptU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttemptU3Ek__BackingField_4() const { return ___U3CAttemptU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttemptU3Ek__BackingField_4() { return &___U3CAttemptU3Ek__BackingField_4; }
	inline void set_U3CAttemptU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttemptU3Ek__BackingField_4 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttClient
struct  MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48  : public RuntimeObject
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::brokerHostName
	String_t* ___brokerHostName_0;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttClient::brokerPort
	int32_t ___brokerPort_1;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::isRunning
	bool ___isRunning_2;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::receiveEventWaitHandle
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___receiveEventWaitHandle_3;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::inflightWaitHandle
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___inflightWaitHandle_4;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::syncEndReceiving
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___syncEndReceiving_5;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::msgReceived
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msgReceived_6;
	// System.Exception uPLibrary.Networking.M2Mqtt.MqttClient::exReceiving
	Exception_t * ___exReceiving_7;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttClient::keepAlivePeriod
	int32_t ___keepAlivePeriod_8;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::keepAliveEvent
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___keepAliveEvent_9;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::keepAliveEventEnd
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___keepAliveEventEnd_10;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttClient::lastCommTime
	int32_t ___lastCommTime_11;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgPublishReceived
	MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * ___MqttMsgPublishReceived_12;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgPublished
	MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * ___MqttMsgPublished_13;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgSubscribed
	MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * ___MqttMsgSubscribed_14;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgUnsubscribed
	MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * ___MqttMsgUnsubscribed_15;
	// uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::ConnectionClosed
	ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * ___ConnectionClosed_16;
	// uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel uPLibrary.Networking.M2Mqtt.MqttClient::channel
	RuntimeObject* ___channel_17;
	// uPLibrary.Networking.M2Mqtt.Queue uPLibrary.Networking.M2Mqtt.MqttClient::inflightQueue
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * ___inflightQueue_18;
	// uPLibrary.Networking.M2Mqtt.Queue uPLibrary.Networking.M2Mqtt.MqttClient::internalQueue
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * ___internalQueue_19;
	// uPLibrary.Networking.M2Mqtt.Queue uPLibrary.Networking.M2Mqtt.MqttClient::eventQueue
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * ___eventQueue_20;
	// uPLibrary.Networking.M2Mqtt.Session.MqttClientSession uPLibrary.Networking.M2Mqtt.MqttClient::session
	MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * ___session_21;
	// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttClient::settings
	MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * ___settings_22;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::messageIdCounter
	uint16_t ___messageIdCounter_23;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::isConnectionClosing
	bool ___isConnectionClosing_24;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_25;
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_26;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::<CleanSession>k__BackingField
	bool ___U3CCleanSessionU3Ek__BackingField_27;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::<WillFlag>k__BackingField
	bool ___U3CWillFlagU3Ek__BackingField_28;
	// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::<WillQosLevel>k__BackingField
	uint8_t ___U3CWillQosLevelU3Ek__BackingField_29;
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::<WillTopic>k__BackingField
	String_t* ___U3CWillTopicU3Ek__BackingField_30;
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::<WillMessage>k__BackingField
	String_t* ___U3CWillMessageU3Ek__BackingField_31;
	// uPLibrary.Networking.M2Mqtt.MqttProtocolVersion uPLibrary.Networking.M2Mqtt.MqttClient::<ProtocolVersion>k__BackingField
	int32_t ___U3CProtocolVersionU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of_brokerHostName_0() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___brokerHostName_0)); }
	inline String_t* get_brokerHostName_0() const { return ___brokerHostName_0; }
	inline String_t** get_address_of_brokerHostName_0() { return &___brokerHostName_0; }
	inline void set_brokerHostName_0(String_t* value)
	{
		___brokerHostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brokerHostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_brokerPort_1() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___brokerPort_1)); }
	inline int32_t get_brokerPort_1() const { return ___brokerPort_1; }
	inline int32_t* get_address_of_brokerPort_1() { return &___brokerPort_1; }
	inline void set_brokerPort_1(int32_t value)
	{
		___brokerPort_1 = value;
	}

	inline static int32_t get_offset_of_isRunning_2() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___isRunning_2)); }
	inline bool get_isRunning_2() const { return ___isRunning_2; }
	inline bool* get_address_of_isRunning_2() { return &___isRunning_2; }
	inline void set_isRunning_2(bool value)
	{
		___isRunning_2 = value;
	}

	inline static int32_t get_offset_of_receiveEventWaitHandle_3() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___receiveEventWaitHandle_3)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_receiveEventWaitHandle_3() const { return ___receiveEventWaitHandle_3; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_receiveEventWaitHandle_3() { return &___receiveEventWaitHandle_3; }
	inline void set_receiveEventWaitHandle_3(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___receiveEventWaitHandle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveEventWaitHandle_3), (void*)value);
	}

	inline static int32_t get_offset_of_inflightWaitHandle_4() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___inflightWaitHandle_4)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_inflightWaitHandle_4() const { return ___inflightWaitHandle_4; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_inflightWaitHandle_4() { return &___inflightWaitHandle_4; }
	inline void set_inflightWaitHandle_4(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___inflightWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inflightWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_syncEndReceiving_5() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___syncEndReceiving_5)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_syncEndReceiving_5() const { return ___syncEndReceiving_5; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_syncEndReceiving_5() { return &___syncEndReceiving_5; }
	inline void set_syncEndReceiving_5(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___syncEndReceiving_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncEndReceiving_5), (void*)value);
	}

	inline static int32_t get_offset_of_msgReceived_6() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___msgReceived_6)); }
	inline MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * get_msgReceived_6() const { return ___msgReceived_6; }
	inline MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 ** get_address_of_msgReceived_6() { return &___msgReceived_6; }
	inline void set_msgReceived_6(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * value)
	{
		___msgReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgReceived_6), (void*)value);
	}

	inline static int32_t get_offset_of_exReceiving_7() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___exReceiving_7)); }
	inline Exception_t * get_exReceiving_7() const { return ___exReceiving_7; }
	inline Exception_t ** get_address_of_exReceiving_7() { return &___exReceiving_7; }
	inline void set_exReceiving_7(Exception_t * value)
	{
		___exReceiving_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exReceiving_7), (void*)value);
	}

	inline static int32_t get_offset_of_keepAlivePeriod_8() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___keepAlivePeriod_8)); }
	inline int32_t get_keepAlivePeriod_8() const { return ___keepAlivePeriod_8; }
	inline int32_t* get_address_of_keepAlivePeriod_8() { return &___keepAlivePeriod_8; }
	inline void set_keepAlivePeriod_8(int32_t value)
	{
		___keepAlivePeriod_8 = value;
	}

	inline static int32_t get_offset_of_keepAliveEvent_9() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___keepAliveEvent_9)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_keepAliveEvent_9() const { return ___keepAliveEvent_9; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_keepAliveEvent_9() { return &___keepAliveEvent_9; }
	inline void set_keepAliveEvent_9(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___keepAliveEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keepAliveEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_keepAliveEventEnd_10() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___keepAliveEventEnd_10)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_keepAliveEventEnd_10() const { return ___keepAliveEventEnd_10; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_keepAliveEventEnd_10() { return &___keepAliveEventEnd_10; }
	inline void set_keepAliveEventEnd_10(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___keepAliveEventEnd_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keepAliveEventEnd_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastCommTime_11() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___lastCommTime_11)); }
	inline int32_t get_lastCommTime_11() const { return ___lastCommTime_11; }
	inline int32_t* get_address_of_lastCommTime_11() { return &___lastCommTime_11; }
	inline void set_lastCommTime_11(int32_t value)
	{
		___lastCommTime_11 = value;
	}

	inline static int32_t get_offset_of_MqttMsgPublishReceived_12() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___MqttMsgPublishReceived_12)); }
	inline MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * get_MqttMsgPublishReceived_12() const { return ___MqttMsgPublishReceived_12; }
	inline MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A ** get_address_of_MqttMsgPublishReceived_12() { return &___MqttMsgPublishReceived_12; }
	inline void set_MqttMsgPublishReceived_12(MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * value)
	{
		___MqttMsgPublishReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MqttMsgPublishReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_MqttMsgPublished_13() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___MqttMsgPublished_13)); }
	inline MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * get_MqttMsgPublished_13() const { return ___MqttMsgPublished_13; }
	inline MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 ** get_address_of_MqttMsgPublished_13() { return &___MqttMsgPublished_13; }
	inline void set_MqttMsgPublished_13(MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * value)
	{
		___MqttMsgPublished_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MqttMsgPublished_13), (void*)value);
	}

	inline static int32_t get_offset_of_MqttMsgSubscribed_14() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___MqttMsgSubscribed_14)); }
	inline MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * get_MqttMsgSubscribed_14() const { return ___MqttMsgSubscribed_14; }
	inline MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD ** get_address_of_MqttMsgSubscribed_14() { return &___MqttMsgSubscribed_14; }
	inline void set_MqttMsgSubscribed_14(MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * value)
	{
		___MqttMsgSubscribed_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MqttMsgSubscribed_14), (void*)value);
	}

	inline static int32_t get_offset_of_MqttMsgUnsubscribed_15() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___MqttMsgUnsubscribed_15)); }
	inline MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * get_MqttMsgUnsubscribed_15() const { return ___MqttMsgUnsubscribed_15; }
	inline MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E ** get_address_of_MqttMsgUnsubscribed_15() { return &___MqttMsgUnsubscribed_15; }
	inline void set_MqttMsgUnsubscribed_15(MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * value)
	{
		___MqttMsgUnsubscribed_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MqttMsgUnsubscribed_15), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionClosed_16() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___ConnectionClosed_16)); }
	inline ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * get_ConnectionClosed_16() const { return ___ConnectionClosed_16; }
	inline ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD ** get_address_of_ConnectionClosed_16() { return &___ConnectionClosed_16; }
	inline void set_ConnectionClosed_16(ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * value)
	{
		___ConnectionClosed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionClosed_16), (void*)value);
	}

	inline static int32_t get_offset_of_channel_17() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___channel_17)); }
	inline RuntimeObject* get_channel_17() const { return ___channel_17; }
	inline RuntimeObject** get_address_of_channel_17() { return &___channel_17; }
	inline void set_channel_17(RuntimeObject* value)
	{
		___channel_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channel_17), (void*)value);
	}

	inline static int32_t get_offset_of_inflightQueue_18() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___inflightQueue_18)); }
	inline Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * get_inflightQueue_18() const { return ___inflightQueue_18; }
	inline Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 ** get_address_of_inflightQueue_18() { return &___inflightQueue_18; }
	inline void set_inflightQueue_18(Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * value)
	{
		___inflightQueue_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inflightQueue_18), (void*)value);
	}

	inline static int32_t get_offset_of_internalQueue_19() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___internalQueue_19)); }
	inline Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * get_internalQueue_19() const { return ___internalQueue_19; }
	inline Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 ** get_address_of_internalQueue_19() { return &___internalQueue_19; }
	inline void set_internalQueue_19(Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * value)
	{
		___internalQueue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQueue_19), (void*)value);
	}

	inline static int32_t get_offset_of_eventQueue_20() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___eventQueue_20)); }
	inline Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * get_eventQueue_20() const { return ___eventQueue_20; }
	inline Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 ** get_address_of_eventQueue_20() { return &___eventQueue_20; }
	inline void set_eventQueue_20(Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * value)
	{
		___eventQueue_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventQueue_20), (void*)value);
	}

	inline static int32_t get_offset_of_session_21() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___session_21)); }
	inline MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * get_session_21() const { return ___session_21; }
	inline MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 ** get_address_of_session_21() { return &___session_21; }
	inline void set_session_21(MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * value)
	{
		___session_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___session_21), (void*)value);
	}

	inline static int32_t get_offset_of_settings_22() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___settings_22)); }
	inline MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * get_settings_22() const { return ___settings_22; }
	inline MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D ** get_address_of_settings_22() { return &___settings_22; }
	inline void set_settings_22(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * value)
	{
		___settings_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_22), (void*)value);
	}

	inline static int32_t get_offset_of_messageIdCounter_23() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___messageIdCounter_23)); }
	inline uint16_t get_messageIdCounter_23() const { return ___messageIdCounter_23; }
	inline uint16_t* get_address_of_messageIdCounter_23() { return &___messageIdCounter_23; }
	inline void set_messageIdCounter_23(uint16_t value)
	{
		___messageIdCounter_23 = value;
	}

	inline static int32_t get_offset_of_isConnectionClosing_24() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___isConnectionClosing_24)); }
	inline bool get_isConnectionClosing_24() const { return ___isConnectionClosing_24; }
	inline bool* get_address_of_isConnectionClosing_24() { return &___isConnectionClosing_24; }
	inline void set_isConnectionClosing_24(bool value)
	{
		___isConnectionClosing_24 = value;
	}

	inline static int32_t get_offset_of_U3CIsConnectedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CIsConnectedU3Ek__BackingField_25)); }
	inline bool get_U3CIsConnectedU3Ek__BackingField_25() const { return ___U3CIsConnectedU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CIsConnectedU3Ek__BackingField_25() { return &___U3CIsConnectedU3Ek__BackingField_25; }
	inline void set_U3CIsConnectedU3Ek__BackingField_25(bool value)
	{
		___U3CIsConnectedU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CClientIdU3Ek__BackingField_26)); }
	inline String_t* get_U3CClientIdU3Ek__BackingField_26() const { return ___U3CClientIdU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CClientIdU3Ek__BackingField_26() { return &___U3CClientIdU3Ek__BackingField_26; }
	inline void set_U3CClientIdU3Ek__BackingField_26(String_t* value)
	{
		___U3CClientIdU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientIdU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCleanSessionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CCleanSessionU3Ek__BackingField_27)); }
	inline bool get_U3CCleanSessionU3Ek__BackingField_27() const { return ___U3CCleanSessionU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CCleanSessionU3Ek__BackingField_27() { return &___U3CCleanSessionU3Ek__BackingField_27; }
	inline void set_U3CCleanSessionU3Ek__BackingField_27(bool value)
	{
		___U3CCleanSessionU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CWillFlagU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CWillFlagU3Ek__BackingField_28)); }
	inline bool get_U3CWillFlagU3Ek__BackingField_28() const { return ___U3CWillFlagU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CWillFlagU3Ek__BackingField_28() { return &___U3CWillFlagU3Ek__BackingField_28; }
	inline void set_U3CWillFlagU3Ek__BackingField_28(bool value)
	{
		___U3CWillFlagU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CWillQosLevelU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CWillQosLevelU3Ek__BackingField_29)); }
	inline uint8_t get_U3CWillQosLevelU3Ek__BackingField_29() const { return ___U3CWillQosLevelU3Ek__BackingField_29; }
	inline uint8_t* get_address_of_U3CWillQosLevelU3Ek__BackingField_29() { return &___U3CWillQosLevelU3Ek__BackingField_29; }
	inline void set_U3CWillQosLevelU3Ek__BackingField_29(uint8_t value)
	{
		___U3CWillQosLevelU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CWillTopicU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CWillTopicU3Ek__BackingField_30)); }
	inline String_t* get_U3CWillTopicU3Ek__BackingField_30() const { return ___U3CWillTopicU3Ek__BackingField_30; }
	inline String_t** get_address_of_U3CWillTopicU3Ek__BackingField_30() { return &___U3CWillTopicU3Ek__BackingField_30; }
	inline void set_U3CWillTopicU3Ek__BackingField_30(String_t* value)
	{
		___U3CWillTopicU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWillTopicU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWillMessageU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CWillMessageU3Ek__BackingField_31)); }
	inline String_t* get_U3CWillMessageU3Ek__BackingField_31() const { return ___U3CWillMessageU3Ek__BackingField_31; }
	inline String_t** get_address_of_U3CWillMessageU3Ek__BackingField_31() { return &___U3CWillMessageU3Ek__BackingField_31; }
	inline void set_U3CWillMessageU3Ek__BackingField_31(String_t* value)
	{
		___U3CWillMessageU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWillMessageU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProtocolVersionU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48, ___U3CProtocolVersionU3Ek__BackingField_32)); }
	inline int32_t get_U3CProtocolVersionU3Ek__BackingField_32() const { return ___U3CProtocolVersionU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CProtocolVersionU3Ek__BackingField_32() { return &___U3CProtocolVersionU3Ek__BackingField_32; }
	inline void set_U3CProtocolVersionU3Ek__BackingField_32(int32_t value)
	{
		___U3CProtocolVersionU3Ek__BackingField_32 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder
struct  MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E  : public RuntimeObject
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::<MessageId>k__BackingField
	uint16_t ___U3CMessageIdU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::<Flow>k__BackingField
	int32_t ___U3CFlowU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E, ___U3CMessageIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CMessageIdU3Ek__BackingField_0() const { return ___U3CMessageIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CMessageIdU3Ek__BackingField_0() { return &___U3CMessageIdU3Ek__BackingField_0; }
	inline void set_U3CMessageIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CMessageIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFlowU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E, ___U3CFlowU3Ek__BackingField_1)); }
	inline int32_t get_U3CFlowU3Ek__BackingField_1() const { return ___U3CFlowU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFlowU3Ek__BackingField_1() { return &___U3CFlowU3Ek__BackingField_1; }
	inline void set_U3CFlowU3Ek__BackingField_1(int32_t value)
	{
		___U3CFlowU3Ek__BackingField_1 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct  MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040  : public RuntimeObject
{
public:
	// Windows.Networking.Sockets.StreamSocket uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::socket
	StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * ___socket_0;
	// Windows.Networking.HostName uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remoteHostName
	HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F * ___remoteHostName_1;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remotePort
	int32_t ___remotePort_2;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::secure
	bool ___secure_3;
	// uPLibrary.Networking.M2Mqtt.MqttSslProtocols uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::sslProtocol
	int32_t ___sslProtocol_4;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040, ___socket_0)); }
	inline StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * get_socket_0() const { return ___socket_0; }
	inline StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteHostName_1() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040, ___remoteHostName_1)); }
	inline HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F * get_remoteHostName_1() const { return ___remoteHostName_1; }
	inline HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F ** get_address_of_remoteHostName_1() { return &___remoteHostName_1; }
	inline void set_remoteHostName_1(HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F * value)
	{
		___remoteHostName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteHostName_1), (void*)value);
	}

	inline static int32_t get_offset_of_remotePort_2() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040, ___remotePort_2)); }
	inline int32_t get_remotePort_2() const { return ___remotePort_2; }
	inline int32_t* get_address_of_remotePort_2() { return &___remotePort_2; }
	inline void set_remotePort_2(int32_t value)
	{
		___remotePort_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040, ___secure_3)); }
	inline bool get_secure_3() const { return ___secure_3; }
	inline bool* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(bool value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_sslProtocol_4() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040, ___sslProtocol_4)); }
	inline int32_t get_sslProtocol_4() const { return ___sslProtocol_4; }
	inline int32_t* get_address_of_sslProtocol_4() { return &___sslProtocol_4; }
	inline void set_sslProtocol_4(int32_t value)
	{
		___sslProtocol_4 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Utility.Trace
struct  Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D  : public RuntimeObject
{
public:

public:
};

struct Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_StaticFields
{
public:
	// uPLibrary.Networking.M2Mqtt.Utility.TraceLevel uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceLevel
	int32_t ___TraceLevel_0;
	// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceListener
	WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * ___TraceListener_1;

public:
	inline static int32_t get_offset_of_TraceLevel_0() { return static_cast<int32_t>(offsetof(Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_StaticFields, ___TraceLevel_0)); }
	inline int32_t get_TraceLevel_0() const { return ___TraceLevel_0; }
	inline int32_t* get_address_of_TraceLevel_0() { return &___TraceLevel_0; }
	inline void set_TraceLevel_0(int32_t value)
	{
		___TraceLevel_0 = value;
	}

	inline static int32_t get_offset_of_TraceListener_1() { return static_cast<int32_t>(offsetof(Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_StaticFields, ___TraceListener_1)); }
	inline WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * get_TraceListener_1() const { return ___TraceListener_1; }
	inline WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 ** get_address_of_TraceListener_1() { return &___TraceListener_1; }
	inline void set_TraceListener_1(WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * value)
	{
		___TraceListener_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TraceListener_1), (void*)value);
	}
};


// System.Action`1<System.Object>
struct  Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.AutoResetEvent
struct  AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7  : public EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Fx/ThreadStart
struct  ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler
struct  ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler
struct  MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler
struct  MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler
struct  MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler
struct  MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate
struct  QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct  WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* m_Items[1];

public:
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46_gshared (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_gshared (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_gshared_inline (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_gshared (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7_gshared (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6  ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0_gshared (ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_gshared_inline (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93_gshared (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0_gshared (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.WindowsRuntimeSystemExtensions::AsTask<System.Object,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mFCAD370AF7E295155F8DC75E5B546BFD86627A55_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_mCC0AC3A8AC616ADEC95866B84E5ED10F6A0251DF_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B * WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m303C42B69861E8F874A1086F0E9BACC368281BE4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Task_1_get_Result_m091D5538C08715B3F562F7D158F609AD0F84AC8F_gshared (Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mFA6355FC0178C913F2940603749F7BD0C9307830_gshared (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE02BFDCC216784E4CB370443AA386A7DF9BFD465_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948  Queue_1_GetEnumerator_mCFFC4079D7CA48A9669867C3CC1A484D85B3B609_gshared (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mB68F444669F259E330FBE79E3B57652D764E22AC_gshared (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m67773E2CDA02DDA7E2E11CE6D9D8D0E99264D74D_gshared (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m132E7FA21C23D2EA073E3D2517294064BCE63113_gshared (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 * __this, const RuntimeMethod* method);

// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * Task_get_Factory_m31F1298E08390A4AD46B85AB060F1FAD4CE12112_inline (const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510 (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::StartNew(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * TaskFactory_StartNew_m597DEE4AAE57633547AF6BAAE649F0E62C3F2953 (TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * __this, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___action0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Fx/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC2EAB107B00AE0657D9B7A3412B0ECDDAAB5A6D4 (U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Fx/ThreadStart::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart_Invoke_m979EC05A13E3382D13AD4231F54B85DDFA919463 (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.InternalEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mD7AA129EC5EB58E288F38E91B1E112758BA8BAD6 (InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_m444553956AAF9A89EDE7448CA3705AC87121ED83 (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Object uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetStringObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MqttMsgBase_GetStringObject_m26DBF456C5F39D23910E6D1F406FA68C9F40ADF2 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnack__ctor_m2E4FDCC7EEF07598B52AF6B239306387605B037E (MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976 (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::decodeRemainingLength(uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349 (RuntimeObject* ___channel0, const RuntimeMethod* method);
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::encodeRemainingLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, int32_t ___remainingLength0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___index2, const RuntimeMethod* method);
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetTraceString(System.String,System.Object[],System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, String_t* ___name0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___fieldNames1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___fieldValues2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Flow()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method);
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingResp__ctor_mBE73EB882489BFD9A0ACD9D3F48FE786AC8B3B86 (MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPuback__ctor_m0FEFC98C3DB2741D8D4DC0C2B639EA64A7F67226 (MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubcomp__ctor_m7BD83A0D86E5D7238FF9AA0918CA632567D67D88 (MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_mAD88F723221633DFCA491A820FC20AD1FEB5F7E6 (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrec__ctor_mB1E9FE13CD0067ECA57605D2100774463D8744F9 (MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m10C03C0D698E0979A6D7A0E066265CC81F90FB73 (MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m96A955B0C6570EAF7C2F14849A979DA3474333AE (MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mC84D34AE765D8C87B41FD688896236E1FE1D3294 (MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.String,System.Int32,System.Boolean,uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient__ctor_mF455ECC4CCE09B656E24A3B81BCC5578E993342F (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___brokerHostName0, int32_t ___brokerPort1, bool ___secure2, int32_t ___sslProtocol3, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Init(System.String,System.Int32,System.Boolean,uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Init_mA2158A56975AB9E152A2D1397D0B4F06117F97F3 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___brokerHostName0, int32_t ___brokerPort1, bool ___secure2, int32_t ___sslProtocol3, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_ProtocolVersion(uPLibrary.Networking.M2Mqtt.MqttProtocolVersion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_ProtocolVersion_m080FFA550CA921E8B3A892E0D52F30A8E7D4DE9D_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, int32_t ___value0, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * MqttSettings_get_Instance_m75C912F1E61B2468D88322A81A22F1C3DBB26177 (const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_Port(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_Port_mF755AF7B90B1C33AAFC396DC2CB79CF511679E88_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_SslPort(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_SslPort_m82BF23296FFE370CCFC034ECC24D54F61F3E08A0_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_m81695AF2DBEDBC014C13129CF91328AE3368EA50 (Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32,System.Boolean,uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m24D1A7F40282B4E8CA7EE85E2BF21A99BAD12B68 (MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 * __this, String_t* ___remoteHostName0, int32_t ___remotePort1, bool ___secure2, int32_t ___sslProtocol3, const RuntimeMethod* method);
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttClient_Connect_m31340A03358C5B85BC101BA45A68E62B04C283F6 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.MqttProtocolVersion uPLibrary.Networking.M2Mqtt.MqttClient::get_ProtocolVersion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect__ctor_m2B22AB31C50BEC7A72937A81F3EBF1D4CD85E1BC (MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, uint8_t ___protocolVersion10, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttConnectionException__ctor_m53BBF4394FF5030C9D9457740448D0BD8173C82E (MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Fx/ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_mBEA75EEB578190423A4CA694A5BEF7729D8628BD (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Fx::StartThread(uPLibrary.Networking.M2Mqtt.Fx/ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * ___threadStart0, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttClient_SendReceive_mE29BE285AEF0AA4699222C643DF66FBF44709C2D (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method);
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgConnack_get_ReturnCode_m3C8C50A8D533AF30C8B15F7E281E1F7DA7D63088 (MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_ClientId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_ClientId_m856056B538AE64E54B84F85C790582D386CCD48E_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_CleanSession(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_CleanSession_m69E5A7723A0033DFECF986E053108C6018715047_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillFlag(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillFlag_m9F5EC224C78D5DDF0A6AD4077C4B4234755C668F_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillTopic(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillTopic_m9F63D1704C6D13B987AB4DFC5C2C81B43B645ADB_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillMessage(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillMessage_m0317519AEAE905A27DB0C96268ABCC87BE9BC701_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillQosLevel(System.Byte)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillQosLevel_m7BD45F9D9FB55749BF79DAB5C49012FAB5CAF918_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::RestoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_RestoreSession_m8E5C1200B09C7E9045EDA240824FED53C37E182B (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_IsConnected(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_IsConnected_m43BDCC1E91750D9DF5AF2C3F4F9131F719F65EFC_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
inline void Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46 (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 *, const RuntimeMethod*))Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingReq__ctor_m016D7FBB17F03B0C10BFBB10FDAF5E52731F3681 (MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttClient_SendReceive_m1A53FEF4445EEDB709C738BB605C7D94969E1365 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, int32_t ___timeout1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37 (int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnConnectionClosing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnConnectionClosing_mC7312CEF8A452C5BE59D6ACF089DC38C28CF6FC8 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor(System.String[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_mCD49AA4864D45A62EB79A3139FF0B1887F96F79B (MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___topics0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___qosLevels1, const RuntimeMethod* method);
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::GetMessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttClient_GetMessageId_mD7F9CF145B639E7C30DE676D48EE2EF4352D0962 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInflight(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttClient_EnqueueInflight_mF5246BBBA18BB5A4EF5CF6155F9CB5A6B0D36D57 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, int32_t ___flow1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m36775B27C3B5BD71CCC730EABB1C94923C66A72F (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, String_t* ___topic0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
inline void Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854 (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 *, RuntimeObject *, const RuntimeMethod*))Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Topic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublish_get_Topic_m2EC029568F205AD6B8D287F97E8F1B5FCAD1007A (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, const RuntimeMethod* method);
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPublish_get_Message_mD5FA74F4BF988F876AC52447CD49E84F7DE90D3F (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, const RuntimeMethod* method);
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_DupFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgBase_get_DupFlag_mADC973EBF5810B977D73A6662BC68B1082C4CCB9 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method);
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_QosLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method);
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Retain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgBase_get_Retain_m1B8D09BB9982003ABB5DA079AFF9552829B344EE (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs__ctor_m21BB1A4A457F27AFCC5A7155384DC8969723E8DF (MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * __this, String_t* ___topic0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventHandler_Invoke_m388FC922AB3D4B5AE5B38F6183E9643FC2C763C9 (MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * ___e1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::.ctor(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_mF781767C02B4359B6F8E3855A12354018BEB3608 (MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * __this, uint16_t ___messageId0, bool ___isPublished1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventHandler_Invoke_mB93376E00DC68FE03ED697A923FEF96359C0A7E8 (MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * ___e1, const RuntimeMethod* method);
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_GrantedQoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgSuback_get_GrantedQoSLevels_mBDFC77A6B7F09BC0997C1E134AEFACA22769DA11 (MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::.ctor(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs__ctor_m1E94F55B43E436D192EF04C85C1CA1B474AA7078 (MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * __this, uint16_t ___messageId0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___grantedQosLevels1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventHandler_Invoke_m1DC5242B1AA9604623532514379DD8CF391128D1 (MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * ___e1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs__ctor_mFFF8340A62888ED5CB93F69BFA1B53117A55F96E (MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * __this, uint16_t ___messageId0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventHandler_Invoke_mC16FAC7804CABE42CF8DB89DEFFC5FE12260B080 (MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * ___e1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionClosedEventHandler_Invoke_m348A7A22C77D47E87A02A82838E6E900E1CEBAB9 (ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C (const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_m301F6DECD5E6B93DAFF1E02D81DB2EBC890CC0B4 (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Send_mC3536A77343FDF3E785DE739B34F9BE280DACFBB (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgBytes0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m59EBCEA32BC9C67B4E432BEA5FF0A42ED0CC8A6F (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_m9D5650349CFD38E37C1FAB5833EB550602B2D293 (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgBytes0, int32_t ___timeout1, const RuntimeMethod* method);
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::.ctor(System.UInt16,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContextFinder__ctor_mE579211DCABC287B83369A2E6C1F77BE3C8AC73B (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, uint16_t ___messageId0, int32_t ___flow1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuePredicate__ctor_m97BA408280C913C9C050A31247F9B4A1E054489F (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Object uPLibrary.Networking.M2Mqtt.Utility.QueueExtension::Get(uPLibrary.Networking.M2Mqtt.Queue,uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117 (Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * ___queue0, QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * ___predicate1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_State(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Flow_mC1CF39851B758CB60B8BFA0127FFE587F29EAB93_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext__ctor_m3B62F6196E34855A25AA2BE52BBDBFE84E0B5133 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Message_m1F2C1AA3EF595E7CFCD756A41798C64B080336A0_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Attempt(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
inline int32_t Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 *, const RuntimeMethod*))Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_gshared_inline)(__this, method);
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_InflightQueueSize()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttSettings_get_InflightQueueSize_m30D0D72A080B36EA22B38D37455299111FCE943B_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_InflightMessages()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, const RuntimeMethod* method);
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * MqttMsgConnack_Parse_mB21DF8FF63BA2DC8620F38F19238A5DA4C3EB3C4 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * MqttMsgPingResp_Parse_m69E7B437D379FE0B2EF7C56DA492F0465FF189A6 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * MqttMsgSuback_Parse_mE8895B2B8E44CB9E6BC5BC43BD022E96F2AB99DC (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInternal(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * MqttMsgPublish_Parse_mBEC58FF1999C7B085C0CAD80FCCD73D28AF06F71 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * MqttMsgPuback_Parse_m1643B20F92F5D971FC3322B554458509C845AEE5 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * MqttMsgPubrec_Parse_m98F6B7E1C5F070BDA2F918AB733EFE650FC84009 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * MqttMsgPubrel_Parse_mA3FD71738536B0EC2A4CEA62E91313973314ADFE (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * MqttMsgPubcomp_Parse_mC310191A472E583F8384CD795E0234B068BCEE05 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * MqttMsgUnsuback_Parse_m94CF7BEE7B6B579F5CE7263401E7B1881FA154AB (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttClientException_get_ErrorCode_m239D24703AE2152374A48EDFF2EB1EEAD06DCADC (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.MqttClient::Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * MqttClient_Ping_mCF88172406AC1622608F98F4DCF0150A0D0CEA8D (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
inline RuntimeObject * Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64 (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 *, const RuntimeMethod*))Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_gshared)(__this, method);
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MsgInternalEvent_get_Message_mB58FA933C3A0E1DA086D3B46672AD700F1BE521C (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgSubscribed(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgSubscribed_m9936EA0B02793E8D8006102DBE5C299BCBD3C96C (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * ___suback0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublished(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgPublished_m1D88B3B2682E4A0FED5D464EA0A2D228596A6024 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, uint16_t ___messageId0, bool ___isPublished1, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgPublishReceived_m9910F9B8551A1E370DD1EA4C43A2951A1AC32355 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * ___publish0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgUnsubscribed(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgUnsubscribed_m799441C1B56F97208B7EE9794E3C2ED8B741E24A (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, uint16_t ___messageId0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Close_m3A1C17CE61EE793A7FEB59B5C658BDD9943E5648 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnConnectionClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnConnectionClosed_m523A79424FA7F1E8DF7EF30409EEE7B7CC8C3802 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_State_m51D48F950EB3669CB21A2244BAE6C1FB3102F6C4_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnInternalEvent(uPLibrary.Networking.M2Mqtt.Internal.InternalEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * ___internalEvent0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Timestamp(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Timestamp_mD2016AB6AE5374AB9AD90E192FA574290D2450E3_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Attempt()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_DupFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_DupFlag_m011F8A08A305B8303D5A9FFE75ED09DF45C02F93 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_DelayOnRetry()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Peek()
inline RuntimeObject * Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7 (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 *, const RuntimeMethod*))Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent__ctor_mD3F40FFD5772259178B160399C9F1DD87A23C483 (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, bool ___isPublished1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Timestamp()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Timestamp_m5F07CAA9F0C842F6E90330C86099EB36DF5468ED_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method);
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_AttemptsOnRetry()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttSettings_get_AttemptsOnRetry_m8CAF4C4E2A558901AF6F2FF0FC681FD8F8C5C5DB_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method);
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::get_CleanSession()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MqttClient_get_CleanSession_m4784D6CD91DFEE26071A488F5EE2CE8A7FB3FE59_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
inline Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6  ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0 (ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6  (*) (ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_inline (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 *, const RuntimeMethod*))Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93 (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 *, const RuntimeMethod*))Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0 (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 *, const RuntimeMethod*))Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0_gshared)(__this, method);
}
// System.String uPLibrary.Networking.M2Mqtt.MqttClient::get_ClientId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MqttClient_get_ClientId_m820897E89C80018DBB164E74255B07D70C2309C2_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttClientSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientSession__ctor_m32AF29767DDB0ECB6401044F80710B881DB89EDA (MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * __this, String_t* ___clientId0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_MessageId_m413A685FAE9683D4988BDEB84E80FD7EFF8A6D6A_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_Flow_mE9D9AB4A43305E0654EBA7DAE4A782FA005015E9_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_MessageId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t MqttMsgContextFinder_get_MessageId_m3FA2A8F9C32F17F9571A91B1C7ED03285BBB411E_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_Flow()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContextFinder_get_Flow_m05D9E2BC5E55F915219C754AAD1CB0734B75612D_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, const RuntimeMethod* method);
// System.Void Windows.Networking.HostName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostName__ctor_m2C9D18527DA0F7B9FC84DCE65EC631C4B1352391 (HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F * __this, String_t* ___hostName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream Windows.Networking.Sockets.StreamSocket::get_InputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_InputStream_m6D57EC16F8F6972471B13E4DDE0FC8AE2BF134C1 (StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * __this, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_mF47A7B4DC12145BA5E560C9FDA9298D3B7CC2551 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.WindowsRuntimeSystemExtensions::AsTask<Windows.Storage.Streams.IBuffer,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<!!0,!!1>)
inline Task_1_t4657CAC4312043C0D7F80DB11C11289050310679 * WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mFFEA2D4C8F27E2B53983646F6D1ADD9BC6878015 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Task_1_t4657CAC4312043C0D7F80DB11C11289050310679 * (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mFCAD370AF7E295155F8DC75E5B546BFD86627A55_gshared)(___source0, method);
}
// !0 System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>::get_Result()
inline RuntimeObject* Task_1_get_Result_mBFFAF1B85C42E7C3665B62C4BC37D3E06F3686C1 (Task_1_t4657CAC4312043C0D7F80DB11C11289050310679 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Task_1_t4657CAC4312043C0D7F80DB11C11289050310679 *, const RuntimeMethod*))Task_1_get_Result_mCC0AC3A8AC616ADEC95866B84E5ED10F6A0251DF_gshared)(__this, method);
}
// Windows.Storage.Streams.IOutputStream Windows.Networking.Sockets.StreamSocket::get_OutputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_OutputStream_m055F0C4768D50C1D7F6E7DCE03B478083E2C1A69 (StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<!!0,!!1>)
inline Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B * WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m303C42B69861E8F874A1086F0E9BACC368281BE4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B * (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m303C42B69861E8F874A1086F0E9BACC368281BE4_gshared)(___source0, method);
}
// !0 System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
inline uint32_t Task_1_get_Result_m091D5538C08715B3F562F7D158F609AD0F84AC8F (Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B *, const RuntimeMethod*))Task_1_get_Result_m091D5538C08715B3F562F7D158F609AD0F84AC8F_gshared)(__this, method);
}
// System.Void Windows.Networking.Sockets.StreamSocket::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSocket_Dispose_mD07871833F7EE46B03E591A46EF500843CFEE86B (StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * __this, const RuntimeMethod* method);
// System.Void Windows.Networking.Sockets.StreamSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSocket__ctor_mF1ACAD5EC6D7F47D3BE814F07A9F3B6B48A1D517 (StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// Windows.Networking.Sockets.SocketProtectionLevel uPLibrary.Networking.M2Mqtt.MqttSslUtility::ToSslPlatformEnum(uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSslUtility_ToSslPlatformEnum_m49D1D11E011BD2F69B8794B36CDC872DDA0B84FB (int32_t ___mqttSslProtocol0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction Windows.Networking.Sockets.StreamSocket::ConnectAsync(Windows.Networking.HostName,System.String,Windows.Networking.Sockets.SocketProtectionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_ConnectAsync_m176DA55D207F6B7611848E92B3C3ACD7A51F264A (StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * __this, HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F * ___remoteHostName0, String_t* ___remoteServiceName1, int32_t ___protectionLevel2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsRuntimeSystemExtensions_AsTask_m5D87CC8E008C9C3A4DC66F6BD108691CF8119ED1 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Wait_m7793234C16E5D2B719519CE3C55653EA4D1A815A (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings__ctor_m54CD660DFF5BB82EE00B83FA54D56799B91E2EC6 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnReceiving(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnReceiving_mCA4DF462EBBE272C32044A421AB783840656E86C_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_AttemptsOnRetry(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_AttemptsOnRetry_m50DDE673ED98BC1B1B4C00E64E944A3375A8F726_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_DelayOnRetry(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_DelayOnRetry_mB9A6F6381323D731DA159CF8B4D5E409612CDB99_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnConnection(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnConnection_m103307672646682FA045421AEDA4DF1B91660F5D_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_InflightQueueSize(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_InflightQueueSize_mD06733C0C7701FCEF60C6688BC5771309F09C4E1_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
inline void Queue_1__ctor_mFA6355FC0178C913F2940603749F7BD0C9307830 (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 *, const RuntimeMethod*))Queue_1__ctor_mFA6355FC0178C913F2940603749F7BD0C9307830_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_m2E4965489DEB1EE612F5A9E0BBEF47FAAF2C5223 (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, String_t* ___clientId0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_ClientId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mF7F64E538F9B1FB6D7C55A4321049DDF61154746_inline (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m83867C848534182C5FA003266CEB5D7EF7073F42 (Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_InflightMessages(uPLibrary.Networking.M2Mqtt.Hashtable)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_m1A30E75C47F3B2DE5BCA1F0C63C36BB9A8E9FCCE_inline (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
inline void Dictionary_2_Clear_mE02BFDCC216784E4CB370443AA386A7DF9BFD465 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_Clear_mE02BFDCC216784E4CB370443AA386A7DF9BFD465_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
inline Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948  Queue_1_GetEnumerator_mCFFC4079D7CA48A9669867C3CC1A484D85B3B609 (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948  (*) (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 *, const RuntimeMethod*))Queue_1_GetEnumerator_mCFFC4079D7CA48A9669867C3CC1A484D85B3B609_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_mB68F444669F259E330FBE79E3B57652D764E22AC (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 *, const RuntimeMethod*))Enumerator_get_Current_mB68F444669F259E330FBE79E3B57652D764E22AC_gshared)(__this, method);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_Invoke_mCF9FD63422456DD0807EF45C1A4079EDB88E80DC (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m67773E2CDA02DDA7E2E11CE6D9D8D0E99264D74D (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 *, const RuntimeMethod*))Enumerator_MoveNext_m67773E2CDA02DDA7E2E11CE6D9D8D0E99264D74D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_m132E7FA21C23D2EA073E3D2517294064BCE63113 (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 *, const RuntimeMethod*))Enumerator_Dispose_m132E7FA21C23D2EA073E3D2517294064BCE63113_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_Invoke_mB08E82C821DFB32DE04C26D1BA4F1E3AC5876478 (WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976 (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___errorCode0;
		__this->set_errorCode_17(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttClientException_get_ErrorCode_m239D24703AE2152374A48EDFF2EB1EEAD06DCADC (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_errorCode_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_m9D5650349CFD38E37C1FAB5833EB550602B2D293 (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttCommunicationException__ctor_m9D5650349CFD38E37C1FAB5833EB550602B2D293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_m301F6DECD5E6B93DAFF1E02D81DB2EBC890CC0B4 (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttCommunicationException__ctor_m301F6DECD5E6B93DAFF1E02D81DB2EBC890CC0B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Exception_t * L_1 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttConnectionException__ctor_m53BBF4394FF5030C9D9457740448D0BD8173C82E (MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttConnectionException__ctor_m53BBF4394FF5030C9D9457740448D0BD8173C82E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Fx::StartThread(uPLibrary.Networking.M2Mqtt.Fx/ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * ___threadStart0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B2_0 = NULL;
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * G_B2_1 = NULL;
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B1_0 = NULL;
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * L_0 = Task_get_Factory_m31F1298E08390A4AD46B85AB060F1FAD4CE12112_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_1 = ((U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var);
		U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * L_3 = ((U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_4 = (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *)il2cpp_codegen_object_new(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStartThreadU3Eb__1_0_m773A48B61F1DDBF70740EA0210F930C019D63BA2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_5 = L_4;
		((U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * L_6 = ___threadStart0;
		NullCheck(G_B2_1);
		TaskFactory_StartNew_m597DEE4AAE57633547AF6BAAE649F0E62C3F2953(G_B2_1, G_B2_0, L_6, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Fx/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF829D5D1F052075A242530350795A21AF8C31D43 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mF829D5D1F052075A242530350795A21AF8C31D43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * L_0 = (U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA *)il2cpp_codegen_object_new(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC2EAB107B00AE0657D9B7A3412B0ECDDAAB5A6D4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Fx/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC2EAB107B00AE0657D9B7A3412B0ECDDAAB5A6D4 (U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Fx/<>c::<StartThread>b__1_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartThreadU3Eb__1_0_m773A48B61F1DDBF70740EA0210F930C019D63BA2 (U3CU3Ec_t8B57F9B1705DDD818A2953A65F8C849537897CEA * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStartThreadU3Eb__1_0_m773A48B61F1DDBF70740EA0210F930C019D63BA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		NullCheck(((ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 *)CastclassSealed((RuntimeObject*)L_0, ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4_il2cpp_TypeInfo_var)));
		ThreadStart_Invoke_m979EC05A13E3382D13AD4231F54B85DDFA919463(((ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 *)CastclassSealed((RuntimeObject*)L_0, ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void uPLibrary.Networking.M2Mqtt.Fx/ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_mBEA75EEB578190423A4CA694A5BEF7729D8628BD (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.Fx/ThreadStart::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart_Invoke_m979EC05A13E3382D13AD4231F54B85DDFA919463 (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Fx/ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThreadStart_BeginInvoke_m25F8BD4837DA114E1E529CF300846A59A81BEA67 (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void uPLibrary.Networking.M2Mqtt.Fx/ThreadStart::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart_EndInvoke_mC1674250EB31A8BA1C6EBF15FB52CBFA3EE68A2E (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m83867C848534182C5FA003266CEB5D7EF7073F42 (Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hashtable__ctor_m83867C848534182C5FA003266CEB5D7EF7073F42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498(__this, /*hidden argument*/Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var);
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
// System.Void uPLibrary.Networking.M2Mqtt.Internal.InternalEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mD7AA129EC5EB58E288F38E91B1E112758BA8BAD6 (InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MsgInternalEvent_get_Message_mB58FA933C3A0E1DA086D3B46672AD700F1BE521C (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * __this, const RuntimeMethod* method)
{
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * V_0 = NULL;
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = __this->get_msg_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_m444553956AAF9A89EDE7448CA3705AC87121ED83 (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method)
{
	{
		InternalEvent__ctor_mD7AA129EC5EB58E288F38E91B1E112758BA8BAD6(__this, /*hidden argument*/NULL);
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___msg0;
		__this->set_msg_0(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent__ctor_mD3F40FFD5772259178B160399C9F1DD87A23C483 (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, bool ___isPublished1, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___msg0;
		MsgInternalEvent__ctor_m444553956AAF9A89EDE7448CA3705AC87121ED83(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___isPublished1;
		__this->set_isPublished_1(L_1);
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
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_type_50();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_DupFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgBase_get_DupFlag_mADC973EBF5810B977D73A6662BC68B1082C4CCB9 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_dupFlag_51();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_DupFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_DupFlag_m011F8A08A305B8303D5A9FFE75ED09DF45C02F93 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_dupFlag_51(L_0);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_QosLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_qosLevel_52();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Retain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgBase_get_Retain_m1B8D09BB9982003ABB5DA079AFF9552829B344EE (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_retain_53();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_messageId_54();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_54(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::encodeRemainingLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, int32_t ___remainingLength0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___index2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0003:
	{
		int32_t L_0 = ___remainingLength0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)128)));
		int32_t L_1 = ___remainingLength0;
		___remainingLength0 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)128)));
		int32_t L_2 = ___remainingLength0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)128)));
	}

IL_0025:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___buffer1;
		int32_t L_6 = ___index2;
		int32_t L_7 = L_6;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)(((int32_t)((uint8_t)L_8))));
		int32_t L_9 = ___remainingLength0;
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0003;
		}
	}
	{
		int32_t L_11 = ___index2;
		V_3 = L_11;
		goto IL_003c;
	}

IL_003c:
	{
		int32_t L_12 = V_3;
		return L_12;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::decodeRemainingLength(uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349 (RuntimeObject* ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_3 = L_0;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___channel0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_3;
		NullCheck(L_1);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_1, L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_3;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)127))), (int32_t)L_8))));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)((int32_t)128)));
		int32_t L_10 = V_2;
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_12 = V_1;
		V_5 = L_12;
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_13 = V_5;
		return L_13;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetTraceString(System.String,System.Object[],System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, String_t* ___name0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___fieldNames1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___fieldValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t G_B3_0 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___fieldNames1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___fieldValues2;
		G_B3_0 = ((!(((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_6, _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, /*hidden argument*/NULL);
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_0081;
	}

IL_0030:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = ___fieldValues2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		bool L_12 = V_2;
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_14, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, /*hidden argument*/NULL);
	}

IL_0053:
	{
		StringBuilder_t * L_15 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___fieldNames1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_15, L_19, /*hidden argument*/NULL);
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_20, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___fieldValues2;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		RuntimeObject * L_26 = MqttMsgBase_GetStringObject_m26DBF456C5F39D23910E6D1F406FA68C9F40ADF2(__this, L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_21, L_26, /*hidden argument*/NULL);
		V_2 = (bool)1;
	}

IL_007c:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = ___fieldValues2;
		NullCheck(L_29);
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))? 1 : 0);
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_31, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
	}

IL_009a:
	{
		StringBuilder_t * L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		V_7 = L_33;
		goto IL_00a4;
	}

IL_00a4:
	{
		String_t* L_34 = V_7;
		return L_34;
	}
}
// System.Object uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetStringObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MqttMsgBase_GetStringObject_m26DBF456C5F39D23910E6D1F406FA68C9F40ADF2 (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgBase_GetStringObject_m26DBF456C5F39D23910E6D1F406FA68C9F40ADF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	StringBuilder_t * V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	RuntimeObject * V_7 = NULL;
	bool V_8 = false;
	StringBuilder_t * V_9 = NULL;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	{
		RuntimeObject * L_0 = ___value0;
		V_0 = ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)IsInst((RuntimeObject*)L_0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		V_3 = _stringLiteralCE27CB141098FEB00714E758646BE3E99C185B71;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), (int32_t)2)), /*hidden argument*/NULL);
		V_4 = L_4;
		V_5 = 0;
		goto IL_0059;
	}

IL_0028:
	{
		StringBuilder_t * L_5 = V_4;
		String_t* L_6 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Il2CppChar L_11 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, ((int32_t)((int32_t)L_10>>(int32_t)4)), /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_5, L_11, /*hidden argument*/NULL);
		StringBuilder_t * L_12 = V_4;
		String_t* L_13 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		Il2CppChar L_18 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_13, ((int32_t)((int32_t)L_17&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_12);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_12, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_20 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		NullCheck(L_21);
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0028;
		}
	}
	{
		StringBuilder_t * L_23 = V_4;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		V_7 = L_24;
		goto IL_00e9;
	}

IL_0071:
	{
		RuntimeObject * L_25 = ___value0;
		V_1 = ((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)IsInst((RuntimeObject*)L_25, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = V_1;
		V_8 = (bool)((!(((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_26) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00e4;
		}
	}
	{
		StringBuilder_t * L_28 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_28, /*hidden argument*/NULL);
		V_9 = L_28;
		StringBuilder_t * L_29 = V_9;
		NullCheck(L_29);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_29, ((int32_t)91), /*hidden argument*/NULL);
		V_10 = 0;
		goto IL_00c2;
	}

IL_0099:
	{
		int32_t L_30 = V_10;
		V_11 = (bool)((((int32_t)L_30) > ((int32_t)0))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_00af;
		}
	}
	{
		StringBuilder_t * L_32 = V_9;
		NullCheck(L_32);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_32, ((int32_t)44), /*hidden argument*/NULL);
	}

IL_00af:
	{
		StringBuilder_t * L_33 = V_9;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = V_1;
		int32_t L_35 = V_10;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_33, L_37, /*hidden argument*/NULL);
		int32_t L_38 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00c2:
	{
		int32_t L_39 = V_10;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_40 = V_1;
		NullCheck(L_40);
		V_12 = (bool)((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))? 1 : 0);
		bool L_41 = V_12;
		if (L_41)
		{
			goto IL_0099;
		}
	}
	{
		StringBuilder_t * L_42 = V_9;
		NullCheck(L_42);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_42, ((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t * L_43 = V_9;
		NullCheck(L_43);
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		V_7 = L_44;
		goto IL_00e9;
	}

IL_00e4:
	{
		RuntimeObject * L_45 = ___value0;
		V_7 = L_45;
		goto IL_00e9;
	}

IL_00e9:
	{
		RuntimeObject * L_46 = V_7;
		return L_46;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgConnack_get_ReturnCode_m3C8C50A8D533AF30C8B15F7E281E1F7DA7D63088 (MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_returnCode_56();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnack__ctor_m2E4FDCC7EEF07598B52AF6B239306387605B037E (MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)2);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * MqttMsgConnack_Parse_mB21DF8FF63BA2DC8620F38F19238A5DA4C3EB3C4 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnack_Parse_mB21DF8FF63BA2DC8620F38F19238A5DA4C3EB3C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * V_6 = NULL;
	{
		MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_0 = (MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 *)il2cpp_codegen_object_new(MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76_il2cpp_TypeInfo_var);
		MqttMsgConnack__ctor_m2E4FDCC7EEF07598B52AF6B239306387605B037E(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgConnack_Parse_mB21DF8FF63BA2DC8620F38F19238A5DA4C3EB3C4_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_10);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_10, L_11);
		uint8_t L_12 = ___protocolVersion1;
		V_5 = (bool)((((int32_t)L_12) == ((int32_t)4))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_14 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		L_14->set_sessionPresent_55((bool)((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0));
	}

IL_0056:
	{
		MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_18 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 1;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		L_18->set_returnCode_56(L_21);
		MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_22 = V_1;
		V_6 = L_22;
		goto IL_0064;
	}

IL_0064:
	{
		MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_23 = V_6;
		return L_23;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgConnack_GetBytes_m863499ABC664551E5BC50DD4D9502C6E42CE53FB (MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * __this, uint8_t ___ProtocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnack_GetBytes_m863499ABC664551E5BC50DD4D9502C6E42CE53FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_11 = NULL;
	int32_t G_B11_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B11_1 = NULL;
	int32_t G_B10_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B12_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		uint8_t L_0 = ___ProtocolVersion0;
		V_7 = (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
		bool L_1 = V_7;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2));
		goto IL_0020;
	}

IL_001c:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2));
	}

IL_0020:
	{
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6))));
		V_0 = 1;
		int32_t L_7 = V_3;
		V_6 = L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_6;
		V_6 = ((int32_t)((int32_t)L_9/(int32_t)((int32_t)128)));
		int32_t L_10 = V_6;
		V_8 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_8;
		if (L_11)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), (int32_t)L_14)));
		V_4 = L_15;
		uint8_t L_16 = ___ProtocolVersion0;
		V_9 = (bool)((((int32_t)L_16) == ((int32_t)4))? 1 : 0);
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)32));
		goto IL_0076;
	}

IL_006a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_4;
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)32));
	}

IL_0076:
	{
		int32_t L_24 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_24, L_25, L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		uint8_t L_28 = ___ProtocolVersion0;
		V_10 = (bool)((((int32_t)L_28) == ((int32_t)4))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00a5;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = V_4;
		int32_t L_31 = V_5;
		int32_t L_32 = L_31;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		bool L_33 = __this->get_sessionPresent_55();
		G_B10_0 = L_32;
		G_B10_1 = L_30;
		if (L_33)
		{
			G_B11_0 = L_32;
			G_B11_1 = L_30;
			goto IL_00a1;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_00a2:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (uint8_t)G_B12_0);
		goto IL_00b0;
	}

IL_00a5:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_4;
		int32_t L_35 = V_5;
		int32_t L_36 = L_35;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)0);
	}

IL_00b0:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = V_4;
		int32_t L_38 = V_5;
		int32_t L_39 = L_38;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t L_40 = __this->get_returnCode_56();
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint8_t)L_40);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = V_4;
		V_11 = L_41;
		goto IL_00c6;
	}

IL_00c6:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = V_11;
		return L_42;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnack_ToString_m1227EBCFA8D10FBF5CE27015F1860C412DA0B8F9 (MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnack_ToString_m1227EBCFA8D10FBF5CE27015F1860C412DA0B8F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4299338335293EC177AC3E026CAE40D68E9DE349);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4299338335293EC177AC3E026CAE40D68E9DE349);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		uint8_t L_4 = __this->get_returnCode_56();
		uint8_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral9EC0433117B6EAC0B53D9565E2AC1EF7A6A46864, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		return L_8;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect__ctor_m2B22AB31C50BEC7A72937A81F3EBF1D4CD85E1BC (MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, uint8_t ___protocolVersion10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnect__ctor_m2B22AB31C50BEC7A72937A81F3EBF1D4CD85E1BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * G_B2_0 = NULL;
	MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * G_B3_1 = NULL;
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)1);
		String_t* L_0 = ___clientId0;
		__this->set_clientId_57(L_0);
		String_t* L_1 = ___username1;
		__this->set_username_63(L_1);
		String_t* L_2 = ___password2;
		__this->set_password_64(L_2);
		bool L_3 = ___willRetain3;
		__this->set_willRetain_58(L_3);
		uint8_t L_4 = ___willQosLevel4;
		__this->set_willQosLevel_59(L_4);
		bool L_5 = ___willFlag5;
		__this->set_willFlag_60(L_5);
		String_t* L_6 = ___willTopic6;
		__this->set_willTopic_61(L_6);
		String_t* L_7 = ___willMessage7;
		__this->set_willMessage_62(L_7);
		bool L_8 = ___cleanSession8;
		__this->set_cleanSession_65(L_8);
		uint16_t L_9 = ___keepAlivePeriod9;
		__this->set_keepAlivePeriod_66(L_9);
		uint8_t L_10 = ___protocolVersion10;
		__this->set_protocolVersion_56(L_10);
		uint8_t L_11 = __this->get_protocolVersion_56();
		G_B1_0 = __this;
		if ((((int32_t)L_11) == ((int32_t)4)))
		{
			G_B2_0 = __this;
			goto IL_0075;
		}
	}
	{
		G_B3_0 = _stringLiteral8DB3C2E2A5993D559931D6E8AAF634C6425CDFA4;
		G_B3_1 = G_B1_0;
		goto IL_007a;
	}

IL_0075:
	{
		G_B3_0 = _stringLiteralC0DD2F70AB2500805DC3941C04BD93AF1669BB8D;
		G_B3_1 = G_B2_0;
	}

IL_007a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_protocolName_55(G_B3_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC (MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_8 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_9 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_26 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B4_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B8_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B12_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B16_0 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B64_0 = 0;
	int32_t G_B64_1 = 0;
	int32_t G_B66_0 = 0;
	int32_t G_B65_0 = 0;
	int32_t G_B67_0 = 0;
	int32_t G_B67_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	uint8_t G_B77_0 = 0x0;
	uint8_t G_B76_0 = 0x0;
	int32_t G_B78_0 = 0;
	uint8_t G_B78_1 = 0x0;
	uint8_t G_B80_0 = 0x0;
	uint8_t G_B79_0 = 0x0;
	int32_t G_B81_0 = 0;
	uint8_t G_B81_1 = 0x0;
	uint8_t G_B83_0 = 0x0;
	uint8_t G_B82_0 = 0x0;
	int32_t G_B84_0 = 0;
	uint8_t G_B84_1 = 0x0;
	uint8_t G_B88_0 = 0x0;
	uint8_t G_B87_0 = 0x0;
	int32_t G_B89_0 = 0;
	uint8_t G_B89_1 = 0x0;
	uint8_t G_B91_0 = 0x0;
	uint8_t G_B90_0 = 0x0;
	int32_t G_B92_0 = 0;
	uint8_t G_B92_1 = 0x0;
	int32_t G_B95_0 = 0;
	int32_t G_B100_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_clientId_57();
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_6 = L_2;
		bool L_3 = __this->get_willFlag_60();
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = __this->get_willTopic_61();
		if (L_4)
		{
			goto IL_0031;
		}
	}

IL_002e:
	{
		G_B4_0 = ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(NULL));
		goto IL_0041;
	}

IL_0031:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_6 = __this->get_willTopic_61();
		NullCheck(L_5);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		G_B4_0 = L_7;
	}

IL_0041:
	{
		V_7 = G_B4_0;
		bool L_8 = __this->get_willFlag_60();
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_9 = __this->get_willMessage_62();
		if (L_9)
		{
			goto IL_0056;
		}
	}

IL_0053:
	{
		G_B8_0 = ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(NULL));
		goto IL_0066;
	}

IL_0056:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_10 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_11 = __this->get_willMessage_62();
		NullCheck(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
		G_B8_0 = L_12;
	}

IL_0066:
	{
		V_8 = G_B8_0;
		String_t* L_13 = __this->get_username_63();
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_14 = __this->get_username_63();
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0081;
		}
	}

IL_007e:
	{
		G_B12_0 = ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(NULL));
		goto IL_0091;
	}

IL_0081:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_16 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_17 = __this->get_username_63();
		NullCheck(L_16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		G_B12_0 = L_18;
	}

IL_0091:
	{
		V_9 = G_B12_0;
		String_t* L_19 = __this->get_password_64();
		if (!L_19)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_20 = __this->get_password_64();
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}

IL_00a9:
	{
		G_B16_0 = ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(NULL));
		goto IL_00bc;
	}

IL_00ac:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_22 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_23 = __this->get_password_64();
		NullCheck(L_22);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_22, L_23);
		G_B16_0 = L_24;
	}

IL_00bc:
	{
		V_10 = G_B16_0;
		uint8_t L_25 = __this->get_protocolVersion_56();
		V_13 = (bool)((((int32_t)L_25) == ((int32_t)4))? 1 : 0);
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0155;
		}
	}
	{
		bool L_27 = __this->get_willFlag_60();
		if (!L_27)
		{
			goto IL_0105;
		}
	}
	{
		uint8_t L_28 = __this->get_willQosLevel_59();
		if ((((int32_t)L_28) >= ((int32_t)3)))
		{
			goto IL_0102;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_7;
		if (!L_29)
		{
			goto IL_0102;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = V_8;
		if (!L_30)
		{
			goto IL_0102;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_7;
		if (!L_31)
		{
			goto IL_00f3;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = V_7;
		NullCheck(L_32);
		if (!(((RuntimeArray*)L_32)->max_length))
		{
			goto IL_0102;
		}
	}

IL_00f3:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_8;
		if (!L_33)
		{
			goto IL_00ff;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_8;
		NullCheck(L_34);
		G_B26_0 = ((((int32_t)(((RuntimeArray*)L_34)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0100;
	}

IL_00ff:
	{
		G_B26_0 = 0;
	}

IL_0100:
	{
		G_B28_0 = G_B26_0;
		goto IL_0103;
	}

IL_0102:
	{
		G_B28_0 = 1;
	}

IL_0103:
	{
		G_B30_0 = G_B28_0;
		goto IL_0106;
	}

IL_0105:
	{
		G_B30_0 = 0;
	}

IL_0106:
	{
		V_14 = (bool)G_B30_0;
		bool L_35 = V_14;
		if (!L_35)
		{
			goto IL_0113;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_36 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_36, 1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC_RuntimeMethod_var);
	}

IL_0113:
	{
		bool L_37 = __this->get_willFlag_60();
		if (L_37)
		{
			goto IL_0146;
		}
	}
	{
		bool L_38 = __this->get_willRetain_58();
		if (L_38)
		{
			goto IL_0143;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = V_7;
		if (L_39)
		{
			goto IL_0143;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = V_8;
		if (L_40)
		{
			goto IL_0143;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = V_7;
		if (!L_41)
		{
			goto IL_0134;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = V_7;
		NullCheck(L_42);
		if ((((RuntimeArray*)L_42)->max_length))
		{
			goto IL_0143;
		}
	}

IL_0134:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = V_8;
		if (!L_43)
		{
			goto IL_0140;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = V_8;
		NullCheck(L_44);
		G_B41_0 = ((!(((uint32_t)(((RuntimeArray*)L_44)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0141;
	}

IL_0140:
	{
		G_B41_0 = 0;
	}

IL_0141:
	{
		G_B43_0 = G_B41_0;
		goto IL_0144;
	}

IL_0143:
	{
		G_B43_0 = 1;
	}

IL_0144:
	{
		G_B45_0 = G_B43_0;
		goto IL_0147;
	}

IL_0146:
	{
		G_B45_0 = 0;
	}

IL_0147:
	{
		V_15 = (bool)G_B45_0;
		bool L_45 = V_15;
		if (!L_45)
		{
			goto IL_0154;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_46 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_46, 1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC_RuntimeMethod_var);
	}

IL_0154:
	{
	}

IL_0155:
	{
		uint16_t L_47 = __this->get_keepAlivePeriod_66();
		V_16 = (bool)((((int32_t)L_47) > ((int32_t)((int32_t)65535)))? 1 : 0);
		bool L_48 = V_16;
		if (!L_48)
		{
			goto IL_016f;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_49 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_49, 2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC_RuntimeMethod_var);
	}

IL_016f:
	{
		uint8_t L_50 = __this->get_willQosLevel_59();
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_0183;
		}
	}
	{
		uint8_t L_51 = __this->get_willQosLevel_59();
		G_B53_0 = ((((int32_t)L_51) > ((int32_t)2))? 1 : 0);
		goto IL_0184;
	}

IL_0183:
	{
		G_B53_0 = 1;
	}

IL_0184:
	{
		V_17 = (bool)G_B53_0;
		bool L_52 = V_17;
		if (!L_52)
		{
			goto IL_0191;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_53 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_53, 1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, MqttMsgConnect_GetBytes_m960688E4723BE67F93613F6F4F70401158747CAC_RuntimeMethod_var);
	}

IL_0191:
	{
		uint8_t L_54 = __this->get_protocolVersion_56();
		V_18 = (bool)((((int32_t)L_54) == ((int32_t)3))? 1 : 0);
		bool L_55 = V_18;
		if (!L_55)
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)8));
		goto IL_01ae;
	}

IL_01a8:
	{
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)6));
	}

IL_01ae:
	{
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		int32_t L_60 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)2));
		int32_t L_61 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = V_6;
		NullCheck(L_62);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))), (int32_t)2))));
		int32_t L_63 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_64 = V_7;
		G_B59_0 = L_63;
		if (L_64)
		{
			G_B60_0 = L_63;
			goto IL_01cb;
		}
	}
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_01d1;
	}

IL_01cb:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_65 = V_7;
		NullCheck(L_65);
		G_B61_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))), (int32_t)2));
		G_B61_1 = G_B60_0;
	}

IL_01d1:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B61_1, (int32_t)G_B61_0));
		int32_t L_66 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_67 = V_8;
		G_B62_0 = L_66;
		if (L_67)
		{
			G_B63_0 = L_66;
			goto IL_01db;
		}
	}
	{
		G_B64_0 = 0;
		G_B64_1 = G_B62_0;
		goto IL_01e1;
	}

IL_01db:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_68 = V_8;
		NullCheck(L_68);
		G_B64_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))), (int32_t)2));
		G_B64_1 = G_B63_0;
	}

IL_01e1:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B64_1, (int32_t)G_B64_0));
		int32_t L_69 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_70 = V_9;
		G_B65_0 = L_69;
		if (L_70)
		{
			G_B66_0 = L_69;
			goto IL_01eb;
		}
	}
	{
		G_B67_0 = 0;
		G_B67_1 = G_B65_0;
		goto IL_01f1;
	}

IL_01eb:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_71 = V_9;
		NullCheck(L_71);
		G_B67_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))), (int32_t)2));
		G_B67_1 = G_B66_0;
	}

IL_01f1:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B67_1, (int32_t)G_B67_0));
		int32_t L_72 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_73 = V_10;
		G_B68_0 = L_72;
		if (L_73)
		{
			G_B69_0 = L_72;
			goto IL_01fb;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_0201;
	}

IL_01fb:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_74 = V_10;
		NullCheck(L_74);
		G_B70_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))), (int32_t)2));
		G_B70_1 = G_B69_0;
	}

IL_0201:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B70_1, (int32_t)G_B70_0));
		int32_t L_75 = V_3;
		int32_t L_76 = V_1;
		int32_t L_77 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77))));
		V_0 = 1;
		int32_t L_78 = V_3;
		V_11 = L_78;
	}

IL_020e:
	{
		int32_t L_79 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		int32_t L_80 = V_11;
		V_11 = ((int32_t)((int32_t)L_80/(int32_t)((int32_t)128)));
		int32_t L_81 = V_11;
		V_19 = (bool)((((int32_t)L_81) > ((int32_t)0))? 1 : 0);
		bool L_82 = V_19;
		if (L_82)
		{
			goto IL_020e;
		}
	}
	{
		int32_t L_83 = V_0;
		int32_t L_84 = V_1;
		int32_t L_85 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)L_84)), (int32_t)L_85)));
		V_4 = L_86;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_87 = V_4;
		int32_t L_88 = V_5;
		int32_t L_89 = L_88;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)((int32_t)16));
		int32_t L_90 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_91 = V_4;
		int32_t L_92 = V_5;
		int32_t L_93 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_90, L_91, L_92, /*hidden argument*/NULL);
		V_5 = L_93;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = V_4;
		int32_t L_95 = V_5;
		int32_t L_96 = L_95;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint8_t)0);
		uint8_t L_97 = __this->get_protocolVersion_56();
		V_20 = (bool)((((int32_t)L_97) == ((int32_t)3))? 1 : 0);
		bool L_98 = V_20;
		if (!L_98)
		{
			goto IL_02a3;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_99 = V_4;
		int32_t L_100 = V_5;
		int32_t L_101 = L_100;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (uint8_t)6);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_102 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_102);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_103 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_102, _stringLiteral8DB3C2E2A5993D559931D6E8AAF634C6425CDFA4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_104 = V_4;
		int32_t L_105 = V_5;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_103, 0, (RuntimeArray *)(RuntimeArray *)L_104, L_105, 6, /*hidden argument*/NULL);
		int32_t L_106 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)6));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_107 = V_4;
		int32_t L_108 = V_5;
		int32_t L_109 = L_108;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (uint8_t)3);
		goto IL_02dc;
	}

IL_02a3:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_110 = V_4;
		int32_t L_111 = V_5;
		int32_t L_112 = L_111;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (uint8_t)4);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_113 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_113);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_114 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_113, _stringLiteralC0DD2F70AB2500805DC3941C04BD93AF1669BB8D);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_115 = V_4;
		int32_t L_116 = V_5;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_114, 0, (RuntimeArray *)(RuntimeArray *)L_115, L_116, 4, /*hidden argument*/NULL);
		int32_t L_117 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)4));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_118 = V_4;
		int32_t L_119 = V_5;
		int32_t L_120 = L_119;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (uint8_t)4);
	}

IL_02dc:
	{
		V_12 = (uint8_t)0;
		uint8_t L_121 = V_12;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_122 = V_9;
		G_B76_0 = L_121;
		if (L_122)
		{
			G_B77_0 = L_121;
			goto IL_02e8;
		}
	}
	{
		G_B78_0 = 0;
		G_B78_1 = G_B76_0;
		goto IL_02ed;
	}

IL_02e8:
	{
		G_B78_0 = ((int32_t)128);
		G_B78_1 = G_B77_0;
	}

IL_02ed:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B78_1|(int32_t)G_B78_0)))));
		uint8_t L_123 = V_12;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_124 = V_10;
		G_B79_0 = L_123;
		if (L_124)
		{
			G_B80_0 = L_123;
			goto IL_02fa;
		}
	}
	{
		G_B81_0 = 0;
		G_B81_1 = G_B79_0;
		goto IL_02fc;
	}

IL_02fa:
	{
		G_B81_0 = ((int32_t)64);
		G_B81_1 = G_B80_0;
	}

IL_02fc:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B81_1|(int32_t)G_B81_0)))));
		uint8_t L_125 = V_12;
		bool L_126 = __this->get_willRetain_58();
		G_B82_0 = L_125;
		if (L_126)
		{
			G_B83_0 = L_125;
			goto IL_030d;
		}
	}
	{
		G_B84_0 = 0;
		G_B84_1 = G_B82_0;
		goto IL_030f;
	}

IL_030d:
	{
		G_B84_0 = ((int32_t)32);
		G_B84_1 = G_B83_0;
	}

IL_030f:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B84_1|(int32_t)G_B84_0)))));
		bool L_127 = __this->get_willFlag_60();
		V_21 = L_127;
		bool L_128 = V_21;
		if (!L_128)
		{
			goto IL_032e;
		}
	}
	{
		uint8_t L_129 = V_12;
		uint8_t L_130 = __this->get_willQosLevel_59();
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_129|(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_130<<(int32_t)3))))))))));
	}

IL_032e:
	{
		uint8_t L_131 = V_12;
		bool L_132 = __this->get_willFlag_60();
		G_B87_0 = L_131;
		if (L_132)
		{
			G_B88_0 = L_131;
			goto IL_033b;
		}
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_033c;
	}

IL_033b:
	{
		G_B89_0 = 4;
		G_B89_1 = G_B88_0;
	}

IL_033c:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B89_1|(int32_t)G_B89_0)))));
		uint8_t L_133 = V_12;
		bool L_134 = __this->get_cleanSession_65();
		G_B90_0 = L_133;
		if (L_134)
		{
			G_B91_0 = L_133;
			goto IL_034d;
		}
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_034e;
	}

IL_034d:
	{
		G_B92_0 = 2;
		G_B92_1 = G_B91_0;
	}

IL_034e:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B92_1|(int32_t)G_B92_0)))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_135 = V_4;
		int32_t L_136 = V_5;
		int32_t L_137 = L_136;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
		uint8_t L_138 = V_12;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_137), (uint8_t)L_138);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_139 = V_4;
		int32_t L_140 = V_5;
		int32_t L_141 = L_140;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1));
		uint16_t L_142 = __this->get_keepAlivePeriod_66();
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_141), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_142>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_143 = V_4;
		int32_t L_144 = V_5;
		int32_t L_145 = L_144;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)1));
		uint16_t L_146 = __this->get_keepAlivePeriod_66();
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_146&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_147 = V_4;
		int32_t L_148 = V_5;
		int32_t L_149 = L_148;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_150 = V_6;
		NullCheck(L_150);
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_150)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_151 = V_4;
		int32_t L_152 = V_5;
		int32_t L_153 = L_152;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_154 = V_6;
		NullCheck(L_154);
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(L_153), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_155 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_156 = V_4;
		int32_t L_157 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_158 = V_6;
		NullCheck(L_158);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_155, 0, (RuntimeArray *)(RuntimeArray *)L_156, L_157, (((int32_t)((int32_t)(((RuntimeArray*)L_158)->max_length)))), /*hidden argument*/NULL);
		int32_t L_159 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_160 = V_6;
		NullCheck(L_160);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_160)->max_length))))));
		bool L_161 = __this->get_willFlag_60();
		if (!L_161)
		{
			goto IL_03e3;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_162 = V_7;
		G_B95_0 = ((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_162) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_03e4;
	}

IL_03e3:
	{
		G_B95_0 = 0;
	}

IL_03e4:
	{
		V_22 = (bool)G_B95_0;
		bool L_163 = V_22;
		if (!L_163)
		{
			goto IL_0432;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_164 = V_4;
		int32_t L_165 = V_5;
		int32_t L_166 = L_165;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_167 = V_7;
		NullCheck(L_167);
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_167)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_168 = V_4;
		int32_t L_169 = V_5;
		int32_t L_170 = L_169;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_171 = V_7;
		NullCheck(L_171);
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(L_170), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_171)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_172 = V_7;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_173 = V_4;
		int32_t L_174 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_175 = V_7;
		NullCheck(L_175);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_172, 0, (RuntimeArray *)(RuntimeArray *)L_173, L_174, (((int32_t)((int32_t)(((RuntimeArray*)L_175)->max_length)))), /*hidden argument*/NULL);
		int32_t L_176 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_177 = V_7;
		NullCheck(L_177);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_177)->max_length))))));
	}

IL_0432:
	{
		bool L_178 = __this->get_willFlag_60();
		if (!L_178)
		{
			goto IL_0441;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_179 = V_8;
		G_B100_0 = ((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_179) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0442;
	}

IL_0441:
	{
		G_B100_0 = 0;
	}

IL_0442:
	{
		V_23 = (bool)G_B100_0;
		bool L_180 = V_23;
		if (!L_180)
		{
			goto IL_0490;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_181 = V_4;
		int32_t L_182 = V_5;
		int32_t L_183 = L_182;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_183, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_184 = V_8;
		NullCheck(L_184);
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(L_183), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_184)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_185 = V_4;
		int32_t L_186 = V_5;
		int32_t L_187 = L_186;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_188 = V_8;
		NullCheck(L_188);
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(L_187), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_188)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_189 = V_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_190 = V_4;
		int32_t L_191 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_192 = V_8;
		NullCheck(L_192);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_189, 0, (RuntimeArray *)(RuntimeArray *)L_190, L_191, (((int32_t)((int32_t)(((RuntimeArray*)L_192)->max_length)))), /*hidden argument*/NULL);
		int32_t L_193 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_194 = V_8;
		NullCheck(L_194);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_194)->max_length))))));
	}

IL_0490:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_195 = V_9;
		V_24 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_195) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_196 = V_24;
		if (!L_196)
		{
			goto IL_04e3;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_197 = V_4;
		int32_t L_198 = V_5;
		int32_t L_199 = L_198;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_199, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_200 = V_9;
		NullCheck(L_200);
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(L_199), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_200)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_201 = V_4;
		int32_t L_202 = V_5;
		int32_t L_203 = L_202;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_204 = V_9;
		NullCheck(L_204);
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(L_203), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_204)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_205 = V_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_206 = V_4;
		int32_t L_207 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_208 = V_9;
		NullCheck(L_208);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_205, 0, (RuntimeArray *)(RuntimeArray *)L_206, L_207, (((int32_t)((int32_t)(((RuntimeArray*)L_208)->max_length)))), /*hidden argument*/NULL);
		int32_t L_209 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_210 = V_9;
		NullCheck(L_210);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_209, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_210)->max_length))))));
	}

IL_04e3:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_211 = V_10;
		V_25 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_211) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_212 = V_25;
		if (!L_212)
		{
			goto IL_0536;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_213 = V_4;
		int32_t L_214 = V_5;
		int32_t L_215 = L_214;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_216 = V_10;
		NullCheck(L_216);
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(L_215), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_216)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_217 = V_4;
		int32_t L_218 = V_5;
		int32_t L_219 = L_218;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_219, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_220 = V_10;
		NullCheck(L_220);
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(L_219), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_220)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_221 = V_10;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_222 = V_4;
		int32_t L_223 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_224 = V_10;
		NullCheck(L_224);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_221, 0, (RuntimeArray *)(RuntimeArray *)L_222, L_223, (((int32_t)((int32_t)(((RuntimeArray*)L_224)->max_length)))), /*hidden argument*/NULL);
		int32_t L_225 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_226 = V_10;
		NullCheck(L_226);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_225, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_226)->max_length))))));
	}

IL_0536:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_227 = V_4;
		V_26 = L_227;
		goto IL_053c;
	}

IL_053c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_228 = V_26;
		return L_228;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_ToString_mF350A0F9547EA3CE1FE3E2CDC58FAF3A2FFA5D3C (MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnect_ToString_mF350A0F9547EA3CE1FE3E2CDC58FAF3A2FFA5D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1CC5431BC7A515F5C4B0859605342DDB3BE21DED);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1CC5431BC7A515F5C4B0859605342DDB3BE21DED);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral03E88C2BE6E6E448EC82A4DAD45BDD33BAA67091);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral03E88C2BE6E6E448EC82A4DAD45BDD33BAA67091);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral66386326760C3B6616D93CF3DE7C3E77DB0EC028);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral66386326760C3B6616D93CF3DE7C3E77DB0EC028);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralFB7114EE7648F02F9F01337987D1CBAEC5A3C792);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralFB7114EE7648F02F9F01337987D1CBAEC5A3C792);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral33ADBAE3DC18FA902CDFB8BCCB1636C929549AF4);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral33ADBAE3DC18FA902CDFB8BCCB1636C929549AF4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB7A681DE7727459F9649657ECAA596768A9D544C);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralB7A681DE7727459F9649657ECAA596768A9D544C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral362CD9D464598B7708AE7E7A18DB2FA1CB64E313);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral362CD9D464598B7708AE7E7A18DB2FA1CB64E313);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral638EB8A87DFBB71E6D8EB3FF2B42734DB2C93AE1);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral638EB8A87DFBB71E6D8EB3FF2B42734DB2C93AE1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral249BA36000029BBE97499C03DB5A9001F6B734EC);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral249BA36000029BBE97499C03DB5A9001F6B734EC);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral5BAA61E4C9B93F3F0682250B6CF8331B7EE68FD8);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteral5BAA61E4C9B93F3F0682250B6CF8331B7EE68FD8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralA4EC7594B293C61BC2C3D81ADA9030F2352FABC7);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteralA4EC7594B293C61BC2C3D81ADA9030F2352FABC7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral072D0A73918B5C85047FB77EDED8FD83981DEF75);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)_stringLiteral072D0A73918B5C85047FB77EDED8FD83981DEF75);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
		String_t* L_15 = __this->get_protocolName_55();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_14;
		uint8_t L_17 = __this->get_protocolVersion_56();
		uint8_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_16;
		String_t* L_21 = __this->get_clientId_57();
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_20;
		bool L_23 = __this->get_willFlag_60();
		bool L_24 = L_23;
		RuntimeObject * L_25 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_22;
		bool L_27 = __this->get_willRetain_58();
		bool L_28 = L_27;
		RuntimeObject * L_29 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_29);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = L_26;
		uint8_t L_31 = __this->get_willQosLevel_59();
		uint8_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_33);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_30;
		String_t* L_35 = __this->get_willTopic_61();
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_34;
		String_t* L_37 = __this->get_willMessage_62();
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_36;
		String_t* L_39 = __this->get_username_63();
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_40 = L_38;
		String_t* L_41 = __this->get_password_64();
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_41);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_40;
		bool L_43 = __this->get_cleanSession_65();
		bool L_44 = L_43;
		RuntimeObject * L_45 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_45);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_46 = L_42;
		uint16_t L_47 = __this->get_keepAlivePeriod_66();
		uint16_t L_48 = L_47;
		RuntimeObject * L_49 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_49);
		String_t* L_50 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral6E288959D3443BCEC62386F7D9014542F6872829, L_12, L_46, /*hidden argument*/NULL);
		V_0 = L_50;
		goto IL_010d;
	}

IL_010d:
	{
		String_t* L_51 = V_0;
		return L_51;
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
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = __this->get_U3CMessageU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Message_m1F2C1AA3EF595E7CFCD756A41798C64B080336A0 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___value0, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_0(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_State_m51D48F950EB3669CB21A2244BAE6C1FB3102F6C4 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_State(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_1(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Flow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Flow_mC1CF39851B758CB60B8BFA0127FFE587F29EAB93 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Timestamp_m5F07CAA9F0C842F6E90330C86099EB36DF5468ED (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimestampU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Timestamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Timestamp_mD2016AB6AE5374AB9AD90E192FA574290D2450E3 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Attempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttemptU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Attempt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(MqttMsgFlow_tA5E2D61AB10628A9FEA9E7342F3842416D6E7E88_il2cpp_TypeInfo_var, &L_1);
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_3 = MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		uint16_t L_4 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_3, /*hidden argument*/NULL);
		uint16_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(L_2, _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0029;
	}

IL_0029:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext__ctor_m3B62F6196E34855A25AA2BE52BBDBFE84E0B5133 (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingReq__ctor_m016D7FBB17F03B0C10BFBB10FDAF5E52731F3681 (MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)((int32_t)12));
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPingReq_GetBytes_m21A51C1F9C6A4AA08CB7B1FC1C294D4DE9A5AE34 (MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingReq_GetBytes_m21A51C1F9C6A4AA08CB7B1FC1C294D4DE9A5AE34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		V_1 = 0;
		uint8_t L_1 = ___protocolVersion0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)192));
		goto IL_002c;
	}

IL_0020:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)192));
	}

IL_002c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		V_3 = L_12;
		goto IL_0038;
	}

IL_0038:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_3;
		return L_13;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPingReq_ToString_m5BDBEC56B8FCA7C5A5535986B2E02650BD01D36E (MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingReq_ToString_m5BDBEC56B8FCA7C5A5535986B2E02650BD01D36E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteralF07B4B6D031BB80AFBF85E719B96A0AB15F8B29B, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_1 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingResp__ctor_mBE73EB882489BFD9A0ACD9D3F48FE786AC8B3B86 (MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)((int32_t)13));
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * MqttMsgPingResp_Parse_m69E7B437D379FE0B2EF7C56DA492F0465FF189A6 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingResp_Parse_m69E7B437D379FE0B2EF7C56DA492F0465FF189A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * V_4 = NULL;
	{
		MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * L_0 = (MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 *)il2cpp_codegen_object_new(MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26_il2cpp_TypeInfo_var);
		MqttMsgPingResp__ctor_mBE73EB882489BFD9A0ACD9D3F48FE786AC8B3B86(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgPingResp_Parse_m69E7B437D379FE0B2EF7C56DA492F0465FF189A6_RuntimeMethod_var);
	}

IL_0023:
	{
	}

IL_0024:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * L_8 = V_0;
		V_4 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * L_9 = V_4;
		return L_9;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPingResp_GetBytes_m8267E31A0305394AA290485CA647C2FF9B7241C5 (MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingResp_GetBytes_m8267E31A0305394AA290485CA647C2FF9B7241C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		V_1 = 0;
		uint8_t L_1 = ___protocolVersion0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)208));
		goto IL_002c;
	}

IL_0020:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)208));
	}

IL_002c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		V_3 = L_12;
		goto IL_0038;
	}

IL_0038:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_3;
		return L_13;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPingResp_ToString_m6A3F618FFEFF6532EC6421290BBECEABA7AAF268 (MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingResp_ToString_m6A3F618FFEFF6532EC6421290BBECEABA7AAF268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral0631B97232CF68BB79EBFF6343BEBCE0C78E669D, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_1 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPuback__ctor_m0FEFC98C3DB2741D8D4DC0C2B639EA64A7F67226 (MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)4);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPuback_GetBytes_mF724A96625034391D4915AD4B3875AF5AF1C7576 (MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPuback_GetBytes_mF724A96625034391D4915AD4B3875AF5AF1C7576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)64));
		goto IL_0066;
	}

IL_005a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)64));
	}

IL_0066:
	{
		int32_t L_21 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint16_t L_28 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_28>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint16_t L_32 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_9;
		return L_34;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * MqttMsgPuback_Parse_m1643B20F92F5D971FC3322B554458509C845AEE5 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPuback_Parse_m1643B20F92F5D971FC3322B554458509C845AEE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * V_6 = NULL;
	{
		V_1 = 0;
		MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_0 = (MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 *)il2cpp_codegen_object_new(MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819_il2cpp_TypeInfo_var);
		MqttMsgPuback__ctor_m0FEFC98C3DB2741D8D4DC0C2B639EA64A7F67226(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgPuback_Parse_m1643B20F92F5D971FC3322B554458509C845AEE5_RuntimeMethod_var);
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_10);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_12 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_12)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_18 = V_2;
		MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_19 = L_18;
		NullCheck(L_19);
		uint16_t L_20 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->get_messageId_54();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20|(int32_t)L_25))))));
		MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_26 = V_2;
		V_6 = L_26;
		goto IL_0070;
	}

IL_0070:
	{
		MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_27 = V_6;
		return L_27;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPuback_ToString_m28234C530A61BEF76B098581F8D8A7591E11AC94 (MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPuback_ToString_m28234C530A61BEF76B098581F8D8A7591E11AC94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteralAC8EECED87E87D92BFC96AD5730C844E67D58335, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		return L_8;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubcomp__ctor_m7BD83A0D86E5D7238FF9AA0918CA632567D67D88 (MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)7);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPubcomp_GetBytes_m6DB33DAF0540F7523DD567F37D4EA8F3058ED61C (MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubcomp_GetBytes_m6DB33DAF0540F7523DD567F37D4EA8F3058ED61C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)112));
		goto IL_0066;
	}

IL_005a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)112));
	}

IL_0066:
	{
		int32_t L_21 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint16_t L_28 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_28>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint16_t L_32 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_9;
		return L_34;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * MqttMsgPubcomp_Parse_mC310191A472E583F8384CD795E0234B068BCEE05 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubcomp_Parse_mC310191A472E583F8384CD795E0234B068BCEE05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * V_6 = NULL;
	{
		V_1 = 0;
		MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_0 = (MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 *)il2cpp_codegen_object_new(MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504_il2cpp_TypeInfo_var);
		MqttMsgPubcomp__ctor_m7BD83A0D86E5D7238FF9AA0918CA632567D67D88(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgPubcomp_Parse_mC310191A472E583F8384CD795E0234B068BCEE05_RuntimeMethod_var);
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_10);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_12 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_12)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_18 = V_2;
		MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_19 = L_18;
		NullCheck(L_19);
		uint16_t L_20 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->get_messageId_54();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20|(int32_t)L_25))))));
		MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_26 = V_2;
		V_6 = L_26;
		goto IL_0070;
	}

IL_0070:
	{
		MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_27 = V_6;
		return L_27;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubcomp_ToString_mC4A5E10F6B07FA615D66C89BA4FCA13A3D3B37A1 (MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubcomp_ToString_mC4A5E10F6B07FA615D66C89BA4FCA13A3D3B37A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral1311C74702E59E282FB030A5052010C99AE3DFB4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		return L_8;
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
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Topic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublish_get_Topic_m2EC029568F205AD6B8D287F97E8F1B5FCAD1007A (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_topic_55();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPublish_get_Message_mD5FA74F4BF988F876AC52447CD49E84F7DE90D3F (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_message_56();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_mAD88F723221633DFCA491A820FC20AD1FEB5F7E6 (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)3);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m36775B27C3B5BD71CCC730EABB1C94923C66A72F (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, String_t* ___topic0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)3);
		String_t* L_0 = ___topic0;
		__this->set_topic_55(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___message1;
		__this->set_message_56(L_1);
		bool L_2 = ___dupFlag2;
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_dupFlag_51(L_2);
		uint8_t L_3 = ___qosLevel3;
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_qosLevel_52(L_3);
		bool L_4 = ___retain4;
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_retain_53(L_4);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_messageId_54((uint16_t)0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_17 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B23_0 = 0;
	uint8_t* G_B23_1 = NULL;
	int32_t G_B22_0 = 0;
	uint8_t* G_B22_1 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	uint8_t* G_B24_2 = NULL;
	int32_t G_B26_0 = 0;
	uint8_t* G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	uint8_t* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	uint8_t* G_B27_2 = NULL;
	int32_t G_B30_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		String_t* L_0 = __this->get_topic_55();
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_0, ((int32_t)35), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = __this->get_topic_55();
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_2, ((int32_t)43), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 1;
	}

IL_0032:
	{
		V_8 = (bool)G_B3_0;
		bool L_4 = V_8;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, 3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B_RuntimeMethod_var);
	}

IL_003f:
	{
		String_t* L_6 = __this->get_topic_55();
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_8 = __this->get_topic_55();
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_9) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 1;
	}

IL_0062:
	{
		V_9 = (bool)G_B8_0;
		bool L_10 = V_9;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_11 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_11, 4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B_RuntimeMethod_var);
	}

IL_006f:
	{
		uint8_t L_12 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		V_10 = (bool)((((int32_t)L_12) > ((int32_t)2))? 1 : 0);
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_14 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_14, 5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B_RuntimeMethod_var);
	}

IL_0085:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_15 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_16 = __this->get_topic_55();
		NullCheck(L_15);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_15, L_16);
		V_6 = L_17;
		int32_t L_18 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_6;
		NullCheck(L_19);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))), (int32_t)2))));
		uint8_t L_20 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00b4;
		}
	}
	{
		uint8_t L_21 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		G_B15_0 = ((((int32_t)L_21) == ((int32_t)2))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 1;
	}

IL_00b5:
	{
		V_11 = (bool)G_B15_0;
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2));
	}

IL_00c1:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = __this->get_message_56();
		V_12 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_26 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = __this->get_message_56();
		NullCheck(L_27);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))));
	}

IL_00db:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30))));
		V_0 = 1;
		int32_t L_31 = V_3;
		V_7 = L_31;
	}

IL_00e6:
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		int32_t L_33 = V_7;
		V_7 = ((int32_t)((int32_t)L_33/(int32_t)((int32_t)128)));
		int32_t L_34 = V_7;
		V_13 = (bool)((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
		bool L_35 = V_13;
		if (L_35)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)L_38)));
		V_4 = L_39;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = V_4;
		int32_t L_41 = V_5;
		uint8_t L_42 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_42<<(int32_t)1))))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = V_4;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		uint8_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)));
		int32_t L_46 = *((uint8_t*)L_45);
		bool L_47 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_dupFlag_51();
		G_B22_0 = L_46;
		G_B22_1 = L_45;
		if (L_47)
		{
			G_B23_0 = L_46;
			G_B23_1 = L_45;
			goto IL_0134;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		goto IL_0135;
	}

IL_0134:
	{
		G_B24_0 = 8;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
	}

IL_0135:
	{
		*((int8_t*)G_B24_2) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B24_1|(int32_t)G_B24_0)))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		uint8_t* L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)));
		int32_t L_51 = *((uint8_t*)L_50);
		bool L_52 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_retain_53();
		G_B25_0 = L_51;
		G_B25_1 = L_50;
		if (L_52)
		{
			G_B26_0 = L_51;
			G_B26_1 = L_50;
			goto IL_014e;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_014f;
	}

IL_014e:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_014f:
	{
		*((int8_t*)G_B27_2) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B27_1|(int32_t)G_B27_0)))));
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		int32_t L_54 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_55 = V_4;
		int32_t L_56 = V_5;
		int32_t L_57 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_54, L_55, L_56, /*hidden argument*/NULL);
		V_5 = L_57;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_58 = V_4;
		int32_t L_59 = V_5;
		int32_t L_60 = L_59;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_61 = V_6;
		NullCheck(L_61);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_65 = V_6;
		NullCheck(L_65);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_67 = V_4;
		int32_t L_68 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_69 = V_6;
		NullCheck(L_69);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_66, 0, (RuntimeArray *)(RuntimeArray *)L_67, L_68, (((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))), /*hidden argument*/NULL);
		int32_t L_70 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_71 = V_6;
		NullCheck(L_71);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))))));
		uint8_t L_72 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		if ((((int32_t)L_72) == ((int32_t)1)))
		{
			goto IL_01bf;
		}
	}
	{
		uint8_t L_73 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		G_B30_0 = ((((int32_t)L_73) == ((int32_t)2))? 1 : 0);
		goto IL_01c0;
	}

IL_01bf:
	{
		G_B30_0 = 1;
	}

IL_01c0:
	{
		V_14 = (bool)G_B30_0;
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_020f;
		}
	}
	{
		uint16_t L_75 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		V_15 = (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_15;
		if (!L_76)
		{
			goto IL_01de;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_77 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_77, ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, MqttMsgPublish_GetBytes_m78C29989B6CC21602287C2EE2DEC37B150BBDD6B_RuntimeMethod_var);
	}

IL_01de:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_78 = V_4;
		int32_t L_79 = V_5;
		int32_t L_80 = L_79;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		uint16_t L_81 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_81>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_82 = V_4;
		int32_t L_83 = V_5;
		int32_t L_84 = L_83;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		uint16_t L_85 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_85&(int32_t)((int32_t)255)))))));
	}

IL_020f:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = __this->get_message_56();
		V_16 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_86) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_87 = V_16;
		if (!L_87)
		{
			goto IL_0246;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_88 = __this->get_message_56();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_89 = V_4;
		int32_t L_90 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_91 = __this->get_message_56();
		NullCheck(L_91);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_88, 0, (RuntimeArray *)(RuntimeArray *)L_89, L_90, (((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))), /*hidden argument*/NULL);
		int32_t L_92 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_93 = __this->get_message_56();
		NullCheck(L_93);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length))))));
	}

IL_0246:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = V_4;
		V_17 = L_94;
		goto IL_024c;
	}

IL_024c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_95 = V_17;
		return L_95;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * MqttMsgPublish_Parse_mBEC58FF1999C7B085C0CAD80FCCD73D28AF06F71 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublish_Parse_mBEC58FF1999C7B085C0CAD80FCCD73D28AF06F71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * V_13 = NULL;
	int32_t G_B5_0 = 0;
	{
		V_1 = 0;
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_0 = (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC *)il2cpp_codegen_object_new(MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC_il2cpp_TypeInfo_var);
		MqttMsgPublish__ctor_mAD88F723221633DFCA491A820FC20AD1FEB5F7E6(L_0, /*hidden argument*/NULL);
		V_4 = L_0;
		RuntimeObject* L_1 = ___channel2;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		int32_t L_3 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		RuntimeObject* L_5 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_5, L_6);
		V_6 = L_7;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_13 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)((int32_t)L_13|(int32_t)L_18));
		int32_t L_19 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_2 = L_20;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		int32_t L_22 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = V_2;
		int32_t L_24 = V_3;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_21, L_22, (RuntimeArray *)(RuntimeArray *)L_23, 0, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_27 = V_4;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_28 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_2;
		NullCheck(L_28);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_30 = VirtFuncInvoker1< CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_28, L_29);
		String_t* L_31 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_topic_55(L_31);
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_32 = V_4;
		uint8_t L_33 = ___fixedHeaderFirstByte0;
		NullCheck(L_32);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_32)->set_qosLevel_52((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)6))>>(int32_t)1))))));
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_34 = V_4;
		NullCheck(L_34);
		uint8_t L_35 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_34)->get_qosLevel_52();
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)2))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_008e;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_37 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_37, 5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, MqttMsgPublish_Parse_mBEC58FF1999C7B085C0CAD80FCCD73D28AF06F71_RuntimeMethod_var);
	}

IL_008e:
	{
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_38 = V_4;
		uint8_t L_39 = ___fixedHeaderFirstByte0;
		NullCheck(L_38);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_38)->set_dupFlag_51((bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_39&(int32_t)8))>>(int32_t)3))) == ((int32_t)1))? 1 : 0));
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_40 = V_4;
		uint8_t L_41 = ___fixedHeaderFirstByte0;
		NullCheck(L_40);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_40)->set_retain_53((bool)((((int32_t)((int32_t)((int32_t)L_41&(int32_t)1))) == ((int32_t)1))? 1 : 0));
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_42 = V_4;
		NullCheck(L_42);
		uint8_t L_43 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_42)->get_qosLevel_52();
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_00c0;
		}
	}
	{
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_44 = V_4;
		NullCheck(L_44);
		uint8_t L_45 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_44)->get_qosLevel_52();
		G_B5_0 = ((((int32_t)L_45) == ((int32_t)2))? 1 : 0);
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B5_0 = 1;
	}

IL_00c1:
	{
		V_11 = (bool)G_B5_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_00f6;
		}
	}
	{
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_47 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = V_0;
		int32_t L_49 = V_1;
		int32_t L_50 = L_49;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		NullCheck(L_48);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_47);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_47)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_52<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_53 = V_4;
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_54 = L_53;
		NullCheck(L_54);
		uint16_t L_55 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_54)->get_messageId_54();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_56 = V_0;
		int32_t L_57 = V_1;
		int32_t L_58 = L_57;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_54);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_54)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_55|(int32_t)L_60))))));
	}

IL_00f6:
	{
		int32_t L_61 = V_5;
		int32_t L_62 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_62));
		int32_t L_63 = V_7;
		V_8 = L_63;
		V_9 = 0;
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_64 = V_4;
		int32_t L_65 = V_7;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_65);
		NullCheck(L_64);
		L_64->set_message_56(L_66);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_67 = V_0;
		int32_t L_68 = V_1;
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_69 = V_4;
		NullCheck(L_69);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_70 = L_69->get_message_56();
		int32_t L_71 = V_9;
		int32_t L_72 = V_6;
		int32_t L_73 = V_1;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_67, L_68, (RuntimeArray *)(RuntimeArray *)L_70, L_71, ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)L_73)), /*hidden argument*/NULL);
		int32_t L_74 = V_8;
		int32_t L_75 = V_6;
		int32_t L_76 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)L_76))));
		int32_t L_77 = V_9;
		int32_t L_78 = V_6;
		int32_t L_79 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)L_79))));
		goto IL_0166;
	}

IL_013a:
	{
		RuntimeObject* L_80 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_81 = V_0;
		NullCheck(L_80);
		int32_t L_82 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_80, L_81);
		V_6 = L_82;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_83 = V_0;
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_84 = V_4;
		NullCheck(L_84);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_85 = L_84->get_message_56();
		int32_t L_86 = V_9;
		int32_t L_87 = V_6;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_83, 0, (RuntimeArray *)(RuntimeArray *)L_85, L_86, L_87, /*hidden argument*/NULL);
		int32_t L_88 = V_8;
		int32_t L_89 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)L_89));
		int32_t L_90 = V_9;
		int32_t L_91 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)L_91));
	}

IL_0166:
	{
		int32_t L_92 = V_8;
		V_12 = (bool)((((int32_t)L_92) > ((int32_t)0))? 1 : 0);
		bool L_93 = V_12;
		if (L_93)
		{
			goto IL_013a;
		}
	}
	{
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_94 = V_4;
		V_13 = L_94;
		goto IL_0177;
	}

IL_0177:
	{
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_95 = V_13;
		return L_95;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublish_ToString_m0A5CED9F0D7199BC4D13CEB7889CDDA41933CC4C (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublish_ToString_m0A5CED9F0D7199BC4D13CEB7889CDDA41933CC4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralB415E16FBE4CA40F22707A97322B49CB9BC5E487);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralB415E16FBE4CA40F22707A97322B49CB9BC5E487);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral6F9B9AF3CD6E8B8A73C2CDCED37FE9F59226E27D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral6F9B9AF3CD6E8B8A73C2CDCED37FE9F59226E27D);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		uint16_t L_6 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_7 = L_6;
		RuntimeObject * L_8 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		String_t* L_10 = __this->get_topic_55();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = __this->get_message_56();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		String_t* L_13 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteralFF0FC30C743813F924DFF4B751315AF42D5AB08B, L_3, L_11, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
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
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Topic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublishEventArgs_get_Topic_m9E01C53079D23B0FC2A4F090089F814EE93F699B (MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_topic_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPublishEventArgs_get_Message_m03146F1874131BC7457CD92C8181AF80BA9B81AC (MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_message_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs__ctor_m21BB1A4A457F27AFCC5A7155384DC8969723E8DF (MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * __this, String_t* ___topic0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublishEventArgs__ctor_m21BB1A4A457F27AFCC5A7155384DC8969723E8DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___topic0;
		__this->set_topic_1(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___message1;
		__this->set_message_2(L_1);
		bool L_2 = ___dupFlag2;
		__this->set_dupFlag_3(L_2);
		uint8_t L_3 = ___qosLevel3;
		__this->set_qosLevel_4(L_3);
		bool L_4 = ___retain4;
		__this->set_retain_5(L_4);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::.ctor(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_mF781767C02B4359B6F8E3855A12354018BEB3608 (MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * __this, uint16_t ___messageId0, bool ___isPublished1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublishedEventArgs__ctor_mF781767C02B4359B6F8E3855A12354018BEB3608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
		bool L_1 = ___isPublished1;
		__this->set_isPublished_2(L_1);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrec__ctor_mB1E9FE13CD0067ECA57605D2100774463D8744F9 (MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)5);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPubrec_GetBytes_mE4442D5FBC7DC0A19FB98F0811FF28A43FA7AB4D (MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrec_GetBytes_mE4442D5FBC7DC0A19FB98F0811FF28A43FA7AB4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)80));
		goto IL_0066;
	}

IL_005a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)80));
	}

IL_0066:
	{
		int32_t L_21 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint16_t L_28 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_28>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint16_t L_32 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_9;
		return L_34;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * MqttMsgPubrec_Parse_m98F6B7E1C5F070BDA2F918AB733EFE650FC84009 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrec_Parse_m98F6B7E1C5F070BDA2F918AB733EFE650FC84009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * V_6 = NULL;
	{
		V_1 = 0;
		MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_0 = (MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 *)il2cpp_codegen_object_new(MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0_il2cpp_TypeInfo_var);
		MqttMsgPubrec__ctor_mB1E9FE13CD0067ECA57605D2100774463D8744F9(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgPubrec_Parse_m98F6B7E1C5F070BDA2F918AB733EFE650FC84009_RuntimeMethod_var);
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_10);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_12 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_12)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_18 = V_2;
		MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_19 = L_18;
		NullCheck(L_19);
		uint16_t L_20 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->get_messageId_54();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20|(int32_t)L_25))))));
		MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_26 = V_2;
		V_6 = L_26;
		goto IL_0070;
	}

IL_0070:
	{
		MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_27 = V_6;
		return L_27;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubrec_ToString_m0B7AB4A7DB03DB69B579A00F427C7AF2E877697E (MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrec_ToString_m0B7AB4A7DB03DB69B579A00F427C7AF2E877697E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteralC6FFABA00CF89618C24791827361E167AF00512C, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		return L_8;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m10C03C0D698E0979A6D7A0E066265CC81F90FB73 (MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)6);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_qosLevel_52((uint8_t)1);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgPubrel_GetBytes_m3294314B68EFE8286FABBC1972AFACC9F5EC9473 (MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrel_GetBytes_m3294314B68EFE8286FABBC1972AFACC9F5EC9473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_9 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	uint8_t* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	uint8_t* G_B7_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)98));
		goto IL_008d;
	}

IL_005a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_4;
		int32_t L_19 = V_5;
		uint8_t L_20 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)96)|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)1))))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_4;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		uint8_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		int32_t L_24 = *((uint8_t*)L_23);
		bool L_25 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_dupFlag_51();
		G_B5_0 = L_24;
		G_B5_1 = L_23;
		if (L_25)
		{
			G_B6_0 = L_24;
			G_B6_1 = L_23;
			goto IL_0082;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0083;
	}

IL_0082:
	{
		G_B7_0 = 8;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0083:
	{
		*((int8_t*)G_B7_2) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B7_1|(int32_t)G_B7_0)))));
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_27 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_27, L_28, L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		uint16_t L_34 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_34>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = V_4;
		int32_t L_36 = V_5;
		int32_t L_37 = L_36;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		uint16_t L_38 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = V_4;
		V_9 = L_39;
		goto IL_00d0;
	}

IL_00d0:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = V_9;
		return L_40;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * MqttMsgPubrel_Parse_mA3FD71738536B0EC2A4CEA62E91313973314ADFE (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrel_Parse_mA3FD71738536B0EC2A4CEA62E91313973314ADFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * V_7 = NULL;
	{
		V_1 = 0;
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_0 = (MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 *)il2cpp_codegen_object_new(MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980_il2cpp_TypeInfo_var);
		MqttMsgPubrel__ctor_m10C03C0D698E0979A6D7A0E066265CC81F90FB73(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgPubrel_Parse_mA3FD71738536B0EC2A4CEA62E91313973314ADFE_RuntimeMethod_var);
	}

IL_002c:
	{
	}

IL_002d:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_10);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_10, L_11);
		uint8_t L_12 = ___protocolVersion1;
		V_6 = (bool)((((int32_t)L_12) == ((int32_t)3))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_14 = V_2;
		uint8_t L_15 = ___fixedHeaderFirstByte0;
		NullCheck(L_14);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_14)->set_qosLevel_52((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)6))>>(int32_t)1))))));
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_16 = V_2;
		uint8_t L_17 = ___fixedHeaderFirstByte0;
		NullCheck(L_16);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_16)->set_dupFlag_51((bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17&(int32_t)8))>>(int32_t)3))) == ((int32_t)1))? 1 : 0));
	}

IL_0069:
	{
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_18 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_18)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_24 = V_2;
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_25 = L_24;
		NullCheck(L_25);
		uint16_t L_26 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_25)->get_messageId_54();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = V_0;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_25);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_25)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_26|(int32_t)L_31))))));
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_32 = V_2;
		V_7 = L_32;
		goto IL_0099;
	}

IL_0099:
	{
		MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_33 = V_7;
		return L_33;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubrel_ToString_mB9C55D82E0B91BFE077592C8405E69DE7E564DC0 (MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrel_ToString_mB9C55D82E0B91BFE077592C8405E69DE7E564DC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral1F44AB11C2A03ACD40BB22B156105B36CEC7605A, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		return L_8;
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
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_GrantedQoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgSuback_get_GrantedQoSLevels_mBDFC77A6B7F09BC0997C1E134AEFACA22769DA11 (MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_grantedQosLevels_55();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m96A955B0C6570EAF7C2F14849A979DA3474333AE (MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)((int32_t)9));
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * MqttMsgSuback_Parse_mE8895B2B8E44CB9E6BC5BC43BD022E96F2AB99DC (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSuback_Parse_mE8895B2B8E44CB9E6BC5BC43BD022E96F2AB99DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * V_8 = NULL;
	{
		V_1 = 0;
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_0 = (MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 *)il2cpp_codegen_object_new(MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580_il2cpp_TypeInfo_var);
		MqttMsgSuback__ctor_m96A955B0C6570EAF7C2F14849A979DA3474333AE(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgSuback_Parse_mE8895B2B8E44CB9E6BC5BC43BD022E96F2AB99DC_RuntimeMethod_var);
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_10);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_12 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_12)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_18 = V_2;
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_19 = L_18;
		NullCheck(L_19);
		uint16_t L_20 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->get_messageId_54();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20|(int32_t)L_25))))));
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_26 = V_2;
		int32_t L_27 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)2)));
		NullCheck(L_26);
		L_26->set_grantedQosLevels_55(L_28);
		V_4 = 0;
	}

IL_007c:
	{
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_29 = V_2;
		NullCheck(L_29);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = L_29->get_grantedQosLevels_55();
		int32_t L_31 = V_4;
		int32_t L_32 = L_31;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_0;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		NullCheck(L_33);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)L_37);
		int32_t L_38 = V_1;
		int32_t L_39 = V_3;
		V_7 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_7;
		if (L_40)
		{
			goto IL_007c;
		}
	}
	{
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_41 = V_2;
		V_8 = L_41;
		goto IL_00a2;
	}

IL_00a2:
	{
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_42 = V_8;
		return L_42;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgSuback_GetBytes_mDEAC0BF684C9C8FCFAF79C20D06F20DF179FEA10 (MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSuback_GetBytes_mDEAC0BF684C9C8FCFAF79C20D06F20DF179FEA10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_12 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		V_6 = 0;
		V_6 = 0;
		goto IL_0024;
	}

IL_0018:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_3 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_grantedQosLevels_55();
		NullCheck(L_4);
		V_8 = (bool)((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))? 1 : 0);
		bool L_5 = V_8;
		if (L_5)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_6 = V_3;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8))));
		V_0 = 1;
		int32_t L_9 = V_3;
		V_7 = L_9;
	}

IL_0041:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_7;
		V_7 = ((int32_t)((int32_t)L_11/(int32_t)((int32_t)128)));
		int32_t L_12 = V_7;
		V_9 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_9;
		if (L_13)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)), (int32_t)L_16)));
		V_4 = L_17;
		uint8_t L_18 = ___protocolVersion0;
		V_10 = (bool)((((int32_t)L_18) == ((int32_t)4))? 1 : 0);
		bool L_19 = V_10;
		if (!L_19)
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = V_4;
		int32_t L_21 = V_5;
		int32_t L_22 = L_21;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)144));
		goto IL_0092;
	}

IL_0083:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)144));
	}

IL_0092:
	{
		int32_t L_26 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = V_4;
		int32_t L_31 = V_5;
		int32_t L_32 = L_31;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		uint16_t L_33 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_4;
		int32_t L_35 = V_5;
		int32_t L_36 = L_35;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		uint16_t L_37 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)255)))))));
		V_6 = 0;
		goto IL_00ef;
	}

IL_00d4:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = __this->get_grantedQosLevels_55();
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)L_44);
		int32_t L_45 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00ef:
	{
		int32_t L_46 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_47 = __this->get_grantedQosLevels_55();
		NullCheck(L_47);
		V_11 = (bool)((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))? 1 : 0);
		bool L_48 = V_11;
		if (L_48)
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_49 = V_4;
		V_12 = L_49;
		goto IL_0107;
	}

IL_0107:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = V_12;
		return L_50;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSuback_ToString_mF4DE73D3A66C5EFB14E0427C6D55DD4E3D33CE5A (MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSuback_ToString_mF4DE73D3A66C5EFB14E0427C6D55DD4E3D33CE5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralFAF415CBA05A59C3E8F099DD4C2A128AA47DA882);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralFAF415CBA05A59C3E8F099DD4C2A128AA47DA882);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		uint16_t L_5 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get_grantedQosLevels_55();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		String_t* L_10 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral6899A446F073BEC454D3F2D08458D7B1371E0021, L_2, L_8, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		String_t* L_11 = V_0;
		return L_11;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor(System.String[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_mCD49AA4864D45A62EB79A3139FF0B1887F96F79B (MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___topics0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___qosLevels1, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___topics0;
		__this->set_topics_55(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___qosLevels1;
		__this->set_qosLevels_56(L_1);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_qosLevel_52((uint8_t)1);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91 (MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_18 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B26_0 = 0;
	uint8_t* G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	uint8_t* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	uint8_t* G_B27_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get_topics_55();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = __this->get_topics_55();
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_9 = (bool)G_B3_0;
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_3 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_3, 6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_RuntimeMethod_var);
	}

IL_002e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_qosLevels_56();
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_qosLevels_56();
		NullCheck(L_5);
		G_B8_0 = ((((int32_t)(((RuntimeArray*)L_5)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 1;
	}

IL_0043:
	{
		V_10 = (bool)G_B8_0;
		bool L_6 = V_10;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_7 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_7, 7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_RuntimeMethod_var);
	}

IL_0050:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = __this->get_topics_55();
		NullCheck(L_8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get_qosLevels_56();
		NullCheck(L_9);
		V_11 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_11;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_11 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_11, 8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_RuntimeMethod_var);
	}

IL_0072:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2));
		V_6 = 0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = __this->get_topics_55();
		NullCheck(L_13);
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_14 = (ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427*)(ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427*)SZArrayNew(ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))));
		V_7 = L_14;
		V_6 = 0;
		goto IL_00f5;
	}

IL_008d:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = __this->get_topics_55();
		int32_t L_16 = V_6;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = __this->get_topics_55();
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_23, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_24) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B16_0 = 1;
	}

IL_00b7:
	{
		V_12 = (bool)G_B16_0;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_26 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_26, 4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_RuntimeMethod_var);
	}

IL_00c4:
	{
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_27 = V_7;
		int32_t L_28 = V_6;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_29 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = __this->get_topics_55();
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_33);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_34);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_34);
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)2));
		int32_t L_36 = V_2;
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_37 = V_7;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))));
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00f5:
	{
		int32_t L_43 = V_6;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_44 = __this->get_topics_55();
		NullCheck(L_44);
		V_13 = (bool)((((int32_t)L_43) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))))? 1 : 0);
		bool L_45 = V_13;
		if (L_45)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_46 = V_3;
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48))));
		V_0 = 1;
		int32_t L_49 = V_3;
		V_8 = L_49;
	}

IL_0112:
	{
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_8;
		V_8 = ((int32_t)((int32_t)L_51/(int32_t)((int32_t)128)));
		int32_t L_52 = V_8;
		V_14 = (bool)((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
		bool L_53 = V_14;
		if (L_53)
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_54 = V_0;
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_57 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)L_55)), (int32_t)L_56)));
		V_4 = L_57;
		uint8_t L_58 = ___protocolVersion0;
		V_15 = (bool)((((int32_t)L_58) == ((int32_t)4))? 1 : 0);
		bool L_59 = V_15;
		if (!L_59)
		{
			goto IL_0154;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = L_61;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)130));
		goto IL_018a;
	}

IL_0154:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_63 = V_4;
		int32_t L_64 = V_5;
		uint8_t L_65 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_qosLevel_52();
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_65<<(int32_t)1))))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = V_4;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		uint8_t* L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)));
		int32_t L_69 = *((uint8_t*)L_68);
		bool L_70 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_dupFlag_51();
		G_B25_0 = L_69;
		G_B25_1 = L_68;
		if (L_70)
		{
			G_B26_0 = L_69;
			G_B26_1 = L_68;
			goto IL_017f;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_0180;
	}

IL_017f:
	{
		G_B27_0 = 8;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_0180:
	{
		*((int8_t*)G_B27_2) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B27_1|(int32_t)G_B27_0)))));
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_018a:
	{
		int32_t L_72 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_73 = V_4;
		int32_t L_74 = V_5;
		int32_t L_75 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_72, L_73, L_74, /*hidden argument*/NULL);
		V_5 = L_75;
		uint16_t L_76 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		V_16 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		bool L_77 = V_16;
		if (!L_77)
		{
			goto IL_01ae;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_78 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_78, ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, MqttMsgSubscribe_GetBytes_mBDB93C488301233A18816EC8E6A4AFF3532E5B91_RuntimeMethod_var);
	}

IL_01ae:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_79 = V_4;
		int32_t L_80 = V_5;
		int32_t L_81 = L_80;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		uint16_t L_82 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_82>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_83 = V_4;
		int32_t L_84 = V_5;
		int32_t L_85 = L_84;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		uint16_t L_86 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_86&(int32_t)((int32_t)255)))))));
		V_6 = 0;
		V_6 = 0;
		goto IL_0256;
	}

IL_01e6:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_87 = V_4;
		int32_t L_88 = V_5;
		int32_t L_89 = L_88;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_90 = V_7;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_93 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = V_4;
		int32_t L_95 = V_5;
		int32_t L_96 = L_95;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_97 = V_7;
		int32_t L_98 = V_6;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_100 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_101 = V_7;
		int32_t L_102 = V_6;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_104 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_105 = V_4;
		int32_t L_106 = V_5;
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_107 = V_7;
		int32_t L_108 = V_6;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_110 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_104, 0, (RuntimeArray *)(RuntimeArray *)L_105, L_106, (((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length)))), /*hidden argument*/NULL);
		int32_t L_111 = V_5;
		ByteU5BU5DU5BU5D_tE36E4F939AA9CDD1EEB440E1356FB86D9985E427* L_112 = V_7;
		int32_t L_113 = V_6;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_115 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_115)->max_length))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_116 = V_4;
		int32_t L_117 = V_5;
		int32_t L_118 = L_117;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_119 = __this->get_qosLevels_56();
		int32_t L_120 = V_6;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint8_t)L_122);
		int32_t L_123 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
	}

IL_0256:
	{
		int32_t L_124 = V_6;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_125 = __this->get_topics_55();
		NullCheck(L_125);
		V_17 = (bool)((((int32_t)L_124) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length))))))? 1 : 0);
		bool L_126 = V_17;
		if (L_126)
		{
			goto IL_01e6;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_127 = V_4;
		V_18 = L_127;
		goto IL_0271;
	}

IL_0271:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_128 = V_18;
		return L_128;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSubscribe_ToString_m08F82776D45FC0B308F028B58F5230B0743D75EA (MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSubscribe_ToString_m08F82776D45FC0B308F028B58F5230B0743D75EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralB729FFE0261CC358C3942DF5B6A06CAB8F1B9DC6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralB729FFE0261CC358C3942DF5B6A06CAB8F1B9DC6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral8A4AD343854F38A0C380554974052111791363E9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8A4AD343854F38A0C380554974052111791363E9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		uint16_t L_6 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_7 = L_6;
		RuntimeObject * L_8 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = __this->get_topics_55();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = __this->get_qosLevels_56();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		String_t* L_13 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral43A6E12318ADBBEE03F06872C109322B0F558E29, L_3, L_11, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::.ctor(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs__ctor_m1E94F55B43E436D192EF04C85C1CA1B474AA7078 (MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * __this, uint16_t ___messageId0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___grantedQosLevels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSubscribedEventArgs__ctor_m1E94F55B43E436D192EF04C85C1CA1B474AA7078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___grantedQosLevels1;
		__this->set_grantedQosLevels_2(L_1);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mC84D34AE765D8C87B41FD688896236E1FE1D3294 (MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_mCE50BD4D79EE14C39438B911864E92EB7FF802BD(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->set_type_50((uint8_t)((int32_t)11));
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * MqttMsgUnsuback_Parse_m94CF7BEE7B6B579F5CE7263401E7B1881FA154AB (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsuback_Parse_m94CF7BEE7B6B579F5CE7263401E7B1881FA154AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * V_6 = NULL;
	{
		V_1 = 0;
		MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_0 = (MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 *)il2cpp_codegen_object_new(MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849_il2cpp_TypeInfo_var);
		MqttMsgUnsuback__ctor_mC84D34AE765D8C87B41FD688896236E1FE1D3294(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_5 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_5, ((int32_t)12), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, MqttMsgUnsuback_Parse_m94CF7BEE7B6B579F5CE7263401E7B1881FA154AB_RuntimeMethod_var);
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7 = MqttMsgBase_decodeRemainingLength_m16D84FA399BDC077C449A12E08BC25EB743CF349(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_10);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_12 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_12)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_18 = V_2;
		MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_19 = L_18;
		NullCheck(L_19);
		uint16_t L_20 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->get_messageId_54();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_19)->set_messageId_54((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20|(int32_t)L_25))))));
		MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_26 = V_2;
		V_6 = L_26;
		goto IL_0070;
	}

IL_0070:
	{
		MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_27 = V_6;
		return L_27;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MqttMsgUnsuback_GetBytes_m442719040DB7E2B29219A9FDF3FDF1E06D8E4B3A (MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * __this, uint8_t ___protocolVersion0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsuback_GetBytes_m442719040DB7E2B29219A9FDF3FDF1E06D8E4B3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)176));
		goto IL_006c;
	}

IL_005d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)176));
	}

IL_006c:
	{
		int32_t L_21 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = MqttMsgBase_encodeRemainingLength_mEC98FD5DD984F1FD3278FE222828F47F8CD39D19(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint16_t L_28 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_28>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint16_t L_32 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_4;
		V_9 = L_33;
		goto IL_00af;
	}

IL_00af:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_9;
		return L_34;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgUnsuback_ToString_mEBC1FD6BB53F98D2BBFA79AB9348C61DBFEAB2CB (MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsuback_ToString_mEBC1FD6BB53F98D2BBFA79AB9348C61DBFEAB2CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC262B98E5C66E243EFD9C68419E56DB03393DF39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)__this)->get_messageId_54();
		uint16_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = MqttMsgBase_GetTraceString_m3FF30B30C6608A15991A7269B9BDBC699C7BE8AA(__this, _stringLiteral6A9D664A89CCA4881622D289AC3001060DB09178, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		return L_8;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs__ctor_mFFF8340A62888ED5CB93F69BFA1B53117A55F96E (MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * __this, uint16_t ___messageId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsubscribedEventArgs__ctor_mFFF8340A62888ED5CB93F69BFA1B53117A55F96E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_add_MqttMsgPublishReceived_m1653B283D7C4C60E37FD6C9ADDF34D55ED880C47 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_add_MqttMsgPublishReceived_m1653B283D7C4C60E37FD6C9ADDF34D55ED880C47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * V_0 = NULL;
	MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * V_1 = NULL;
	MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * V_2 = NULL;
	{
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_0 = __this->get_MqttMsgPublishReceived_12();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_1 = V_0;
		V_1 = L_1;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_2 = V_1;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *)CastclassSealed((RuntimeObject*)L_4, MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A_il2cpp_TypeInfo_var));
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A ** L_5 = __this->get_address_of_MqttMsgPublishReceived_12();
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_6 = V_2;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_7 = V_1;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_8 = InterlockedCompareExchangeImpl<MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *>((MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A **)L_5, L_6, L_7);
		V_0 = L_8;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_9 = V_0;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_10 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *)L_9) == ((RuntimeObject*)(MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::remove_MqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_remove_MqttMsgPublishReceived_mDC9E97A55AD7AA60FB574CF0899CCEB5A7F55C55 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_remove_MqttMsgPublishReceived_mDC9E97A55AD7AA60FB574CF0899CCEB5A7F55C55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * V_0 = NULL;
	MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * V_1 = NULL;
	MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * V_2 = NULL;
	{
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_0 = __this->get_MqttMsgPublishReceived_12();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_1 = V_0;
		V_1 = L_1;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_2 = V_1;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *)CastclassSealed((RuntimeObject*)L_4, MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A_il2cpp_TypeInfo_var));
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A ** L_5 = __this->get_address_of_MqttMsgPublishReceived_12();
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_6 = V_2;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_7 = V_1;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_8 = InterlockedCompareExchangeImpl<MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *>((MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A **)L_5, L_6, L_7);
		V_0 = L_8;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_9 = V_0;
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_10 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *)L_9) == ((RuntimeObject*)(MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_IsConnected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_IsConnected_m43BDCC1E91750D9DF5AF2C3F4F9131F719F65EFC (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsConnectedU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.MqttClient::get_ClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttClient_get_ClientId_m820897E89C80018DBB164E74255B07D70C2309C2 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CClientIdU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_ClientId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_ClientId_m856056B538AE64E54B84F85C790582D386CCD48E (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CClientIdU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::get_CleanSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttClient_get_CleanSession_m4784D6CD91DFEE26071A488F5EE2CE8A7FB3FE59 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CCleanSessionU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_CleanSession(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_CleanSession_m69E5A7723A0033DFECF986E053108C6018715047 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CCleanSessionU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_WillFlag_m9F5EC224C78D5DDF0A6AD4077C4B4234755C668F (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CWillFlagU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillQosLevel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_WillQosLevel_m7BD45F9D9FB55749BF79DAB5C49012FAB5CAF918 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CWillQosLevelU3Ek__BackingField_29(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillTopic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_WillTopic_m9F63D1704C6D13B987AB4DFC5C2C81B43B645ADB (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CWillTopicU3Ek__BackingField_30(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_WillMessage_m0317519AEAE905A27DB0C96268ABCC87BE9BC701 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CWillMessageU3Ek__BackingField_31(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.MqttProtocolVersion uPLibrary.Networking.M2Mqtt.MqttClient::get_ProtocolVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CProtocolVersionU3Ek__BackingField_32();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_ProtocolVersion(uPLibrary.Networking.M2Mqtt.MqttProtocolVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_set_ProtocolVersion_m080FFA550CA921E8B3A892E0D52F30A8E7D4DE9D (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CProtocolVersionU3Ek__BackingField_32(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient__ctor_m588A16F67CEEE19D2D351BA586EBFC387796E937 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___brokerHostName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___brokerHostName0;
		MqttClient__ctor_mF455ECC4CCE09B656E24A3B81BCC5578E993342F(__this, L_0, ((int32_t)1883), (bool)0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.String,System.Int32,System.Boolean,uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient__ctor_mF455ECC4CCE09B656E24A3B81BCC5578E993342F (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___brokerHostName0, int32_t ___brokerPort1, bool ___secure2, int32_t ___sslProtocol3, const RuntimeMethod* method)
{
	{
		__this->set_messageIdCounter_23((uint16_t)0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___brokerHostName0;
		int32_t L_1 = ___brokerPort1;
		bool L_2 = ___secure2;
		int32_t L_3 = ___sslProtocol3;
		MqttClient_Init_mA2158A56975AB9E152A2D1397D0B4F06117F97F3(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Init(System.String,System.Int32,System.Boolean,uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Init_mA2158A56975AB9E152A2D1397D0B4F06117F97F3 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___brokerHostName0, int32_t ___brokerPort1, bool ___secure2, int32_t ___sslProtocol3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Init_mA2158A56975AB9E152A2D1397D0B4F06117F97F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		MqttClient_set_ProtocolVersion_m080FFA550CA921E8B3A892E0D52F30A8E7D4DE9D_inline(__this, 4, /*hidden argument*/NULL);
		String_t* L_0 = ___brokerHostName0;
		__this->set_brokerHostName_0(L_0);
		int32_t L_1 = ___brokerPort1;
		__this->set_brokerPort_1(L_1);
		MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_2 = MqttSettings_get_Instance_m75C912F1E61B2468D88322A81A22F1C3DBB26177(/*hidden argument*/NULL);
		__this->set_settings_22(L_2);
		bool L_3 = ___secure2;
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_5 = __this->get_settings_22();
		int32_t L_6 = __this->get_brokerPort_1();
		NullCheck(L_5);
		MqttSettings_set_Port_mF755AF7B90B1C33AAFC396DC2CB79CF511679E88_inline(L_5, L_6, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_003e:
	{
		MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_7 = __this->get_settings_22();
		int32_t L_8 = __this->get_brokerPort_1();
		NullCheck(L_7);
		MqttSettings_set_SslPort_m82BF23296FFE370CCFC034ECC24D54F61F3E08A0_inline(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0050:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_9 = (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)il2cpp_codegen_object_new(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE(L_9, (bool)0, /*hidden argument*/NULL);
		__this->set_syncEndReceiving_5(L_9);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_10 = (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)il2cpp_codegen_object_new(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE(L_10, (bool)0, /*hidden argument*/NULL);
		__this->set_keepAliveEvent_9(L_10);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_11 = (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)il2cpp_codegen_object_new(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE(L_11, (bool)0, /*hidden argument*/NULL);
		__this->set_inflightWaitHandle_4(L_11);
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_12 = (Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 *)il2cpp_codegen_object_new(Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07_il2cpp_TypeInfo_var);
		Queue__ctor_m81695AF2DBEDBC014C13129CF91328AE3368EA50(L_12, /*hidden argument*/NULL);
		__this->set_inflightQueue_18(L_12);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_13 = (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)il2cpp_codegen_object_new(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE(L_13, (bool)0, /*hidden argument*/NULL);
		__this->set_receiveEventWaitHandle_3(L_13);
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_14 = (Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 *)il2cpp_codegen_object_new(Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07_il2cpp_TypeInfo_var);
		Queue__ctor_m81695AF2DBEDBC014C13129CF91328AE3368EA50(L_14, /*hidden argument*/NULL);
		__this->set_eventQueue_20(L_14);
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_15 = (Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 *)il2cpp_codegen_object_new(Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07_il2cpp_TypeInfo_var);
		Queue__ctor_m81695AF2DBEDBC014C13129CF91328AE3368EA50(L_15, /*hidden argument*/NULL);
		__this->set_internalQueue_19(L_15);
		__this->set_session_21((MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 *)NULL);
		String_t* L_16 = __this->get_brokerHostName_0();
		int32_t L_17 = __this->get_brokerPort_1();
		bool L_18 = ___secure2;
		int32_t L_19 = ___sslProtocol3;
		MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 * L_20 = (MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 *)il2cpp_codegen_object_new(MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040_il2cpp_TypeInfo_var);
		MqttNetworkChannel__ctor_m24D1A7F40282B4E8CA7EE85E2BF21A99BAD12B68(L_20, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		__this->set_channel_17(L_20);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttClient_Connect_mA6262AB9BCC0992E5D8F60A7BE4ACB4D8052FC9C (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___clientId0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		String_t* L_0 = ___clientId0;
		uint8_t L_1 = MqttClient_Connect_m31340A03358C5B85BC101BA45A68E62B04C283F6(__this, L_0, (String_t*)NULL, (String_t*)NULL, (bool)0, (uint8_t)0, (bool)0, (String_t*)NULL, (String_t*)NULL, (bool)1, (uint16_t)((int32_t)60), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttClient_Connect_m31340A03358C5B85BC101BA45A68E62B04C283F6 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Connect_m31340A03358C5B85BC101BA45A68E62B04C283F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * V_0 = NULL;
	MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	uint8_t V_5 = 0x0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___clientId0;
		String_t* L_1 = ___username1;
		String_t* L_2 = ___password2;
		bool L_3 = ___willRetain3;
		uint8_t L_4 = ___willQosLevel4;
		bool L_5 = ___willFlag5;
		String_t* L_6 = ___willTopic6;
		String_t* L_7 = ___willMessage7;
		bool L_8 = ___cleanSession8;
		uint16_t L_9 = ___keepAlivePeriod9;
		int32_t L_10 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
		MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * L_11 = (MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 *)il2cpp_codegen_object_new(MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4_il2cpp_TypeInfo_var);
		MqttMsgConnect__ctor_m2B22AB31C50BEC7A72937A81F3EBF1D4CD85E1BC(L_11, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, (uint8_t)(((int32_t)((uint8_t)L_10))), /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_12 = __this->get_channel_17();
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(3 /* System.Void uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Connect() */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_12);
		goto IL_003d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_13 = V_2;
		MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B * L_14 = (MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B *)il2cpp_codegen_object_new(MqttConnectionException_t8920C66B96126D424047F809CF0CC26C1AF83C4B_il2cpp_TypeInfo_var);
		MqttConnectionException__ctor_m53BBF4394FF5030C9D9457740448D0BD8173C82E(L_14, _stringLiteralAB8E3DC39C2E97D65670843FA291441C11CDD385, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, MqttClient_Connect_m31340A03358C5B85BC101BA45A68E62B04C283F6_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_003d:
	{
		__this->set_lastCommTime_11(0);
		__this->set_isRunning_2((bool)1);
		__this->set_isConnectionClosing_24((bool)0);
		ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * L_15 = (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 *)il2cpp_codegen_object_new(ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4_il2cpp_TypeInfo_var);
		ThreadStart__ctor_mBEA75EEB578190423A4CA694A5BEF7729D8628BD(L_15, __this, (intptr_t)((intptr_t)MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var), /*hidden argument*/NULL);
		Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD(L_15, /*hidden argument*/NULL);
		MqttMsgConnect_tDA6E1E68E014DE6B497B7FD9760C72983BB3F3A4 * L_16 = V_0;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_17 = MqttClient_SendReceive_mE29BE285AEF0AA4699222C643DF66FBF44709C2D(__this, L_16, /*hidden argument*/NULL);
		V_1 = ((MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 *)CastclassClass((RuntimeObject*)L_17, MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76_il2cpp_TypeInfo_var));
		MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_18 = V_1;
		NullCheck(L_18);
		uint8_t L_19 = MqttMsgConnack_get_ReturnCode_m3C8C50A8D533AF30C8B15F7E281E1F7DA7D63088(L_18, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_011c;
		}
	}
	{
		String_t* L_21 = ___clientId0;
		MqttClient_set_ClientId_m856056B538AE64E54B84F85C790582D386CCD48E_inline(__this, L_21, /*hidden argument*/NULL);
		bool L_22 = ___cleanSession8;
		MqttClient_set_CleanSession_m69E5A7723A0033DFECF986E053108C6018715047_inline(__this, L_22, /*hidden argument*/NULL);
		bool L_23 = ___willFlag5;
		MqttClient_set_WillFlag_m9F5EC224C78D5DDF0A6AD4077C4B4234755C668F_inline(__this, L_23, /*hidden argument*/NULL);
		String_t* L_24 = ___willTopic6;
		MqttClient_set_WillTopic_m9F63D1704C6D13B987AB4DFC5C2C81B43B645ADB_inline(__this, L_24, /*hidden argument*/NULL);
		String_t* L_25 = ___willMessage7;
		MqttClient_set_WillMessage_m0317519AEAE905A27DB0C96268ABCC87BE9BC701_inline(__this, L_25, /*hidden argument*/NULL);
		uint8_t L_26 = ___willQosLevel4;
		MqttClient_set_WillQosLevel_m7BD45F9D9FB55749BF79DAB5C49012FAB5CAF918_inline(__this, L_26, /*hidden argument*/NULL);
		uint16_t L_27 = ___keepAlivePeriod9;
		__this->set_keepAlivePeriod_8(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)((int32_t)1000))));
		MqttClient_RestoreSession_m8E5C1200B09C7E9045EDA240824FED53C37E182B(__this, /*hidden argument*/NULL);
		int32_t L_28 = __this->get_keepAlivePeriod_8();
		V_4 = (bool)((!(((uint32_t)L_28) <= ((uint32_t)0)))? 1 : 0);
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00ef;
		}
	}
	{
		ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * L_30 = (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 *)il2cpp_codegen_object_new(ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4_il2cpp_TypeInfo_var);
		ThreadStart__ctor_mBEA75EEB578190423A4CA694A5BEF7729D8628BD(L_30, __this, (intptr_t)((intptr_t)MqttClient_KeepAliveThread_m7B9B78C39C4C5C3E845EA870F39CA27DE34576BE_RuntimeMethod_var), /*hidden argument*/NULL);
		Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD(L_30, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * L_31 = (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 *)il2cpp_codegen_object_new(ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4_il2cpp_TypeInfo_var);
		ThreadStart__ctor_mBEA75EEB578190423A4CA694A5BEF7729D8628BD(L_31, __this, (intptr_t)((intptr_t)MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_RuntimeMethod_var), /*hidden argument*/NULL);
		Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD(L_31, /*hidden argument*/NULL);
		ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 * L_32 = (ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4 *)il2cpp_codegen_object_new(ThreadStart_t3436C6DA2BFCCCCABE3119D4CEB60C3A596427D4_il2cpp_TypeInfo_var);
		ThreadStart__ctor_mBEA75EEB578190423A4CA694A5BEF7729D8628BD(L_32, __this, (intptr_t)((intptr_t)MqttClient_ProcessInflightThread_m9B4FF468ACAAFD685DD63A62606DB4EDDE28BA18_RuntimeMethod_var), /*hidden argument*/NULL);
		Fx_StartThread_m5CAD1A347665DDAC1DA4A8CE47EC8AD8F157AEAD(L_32, /*hidden argument*/NULL);
		MqttClient_set_IsConnected_m43BDCC1E91750D9DF5AF2C3F4F9131F719F65EFC_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_011c:
	{
		MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_33 = V_1;
		NullCheck(L_33);
		uint8_t L_34 = MqttMsgConnack_get_ReturnCode_m3C8C50A8D533AF30C8B15F7E281E1F7DA7D63088(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		goto IL_0126;
	}

IL_0126:
	{
		uint8_t L_35 = V_5;
		return L_35;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Close_m3A1C17CE61EE793A7FEB59B5C658BDD9943E5648 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Close_m3A1C17CE61EE793A7FEB59B5C658BDD9943E5648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		__this->set_isRunning_2((bool)0);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_0 = __this->get_receiveEventWaitHandle_3();
		V_0 = (bool)((!(((RuntimeObject*)(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_2 = __this->get_receiveEventWaitHandle_3();
		NullCheck(L_2);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_3 = __this->get_inflightWaitHandle_4();
		V_1 = (bool)((!(((RuntimeObject*)(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_5 = __this->get_inflightWaitHandle_4();
		NullCheck(L_5);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_6 = __this->get_keepAliveEvent_9();
		NullCheck(L_6);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_6, /*hidden argument*/NULL);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_7 = __this->get_keepAliveEventEnd_10();
		V_2 = (bool)((!(((RuntimeObject*)(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_9 = __this->get_keepAliveEventEnd_10();
		NullCheck(L_9);
		VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_9);
	}

IL_005f:
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_10 = __this->get_inflightQueue_18();
		NullCheck(L_10);
		Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46(L_10, /*hidden argument*/Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46_RuntimeMethod_var);
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_11 = __this->get_internalQueue_19();
		NullCheck(L_11);
		Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46(L_11, /*hidden argument*/Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46_RuntimeMethod_var);
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_12 = __this->get_eventQueue_20();
		NullCheck(L_12);
		Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46(L_12, /*hidden argument*/Queue_1_Clear_m256ACDC18D883DB9CFCFCF0F693C92FE1A7A0F46_RuntimeMethod_var);
		RuntimeObject* L_13 = __this->get_channel_17();
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(2 /* System.Void uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Close() */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_13);
		MqttClient_set_IsConnected_m43BDCC1E91750D9DF5AF2C3F4F9131F719F65EFC_inline(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.MqttClient::Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * MqttClient_Ping_mCF88172406AC1622608F98F4DCF0150A0D0CEA8D (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Ping_mCF88172406AC1622608F98F4DCF0150A0D0CEA8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 * V_0 = NULL;
	MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 * L_0 = (MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 *)il2cpp_codegen_object_new(MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586_il2cpp_TypeInfo_var);
		MqttMsgPingReq__ctor_m016D7FBB17F03B0C10BFBB10FDAF5E52731F3681(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		MqttMsgPingReq_t4521664050A1020BABE292FBEE1810F5AA4D3586 * L_1 = V_0;
		int32_t L_2 = __this->get_keepAlivePeriod_8();
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_3 = MqttClient_SendReceive_m1A53FEF4445EEDB709C738BB605C7D94969E1365(__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = ((MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 *)CastclassClass((RuntimeObject*)L_3, MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26_il2cpp_TypeInfo_var));
		goto IL_003c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001d;
		throw e;
	}

CATCH_001d:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_2;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(1, _stringLiteralAB2A0EFB14E859CDA36B10F0DFB1A520824F4047, L_5, /*hidden argument*/NULL);
		MqttClient_OnConnectionClosing_mC7312CEF8A452C5BE59D6ACF089DC38C28CF6FC8(__this, /*hidden argument*/NULL);
		V_1 = (MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 *)NULL;
		goto IL_003c;
	} // end catch (depth: 1)

IL_003c:
	{
		MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * L_6 = V_1;
		return L_6;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Subscribe(System.String[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttClient_Subscribe_m244A05BC20FBF9DEE01DD1133BAD6DCE5CD2E5AB (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___topics0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___qosLevels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Subscribe_m244A05BC20FBF9DEE01DD1133BAD6DCE5CD2E5AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * V_0 = NULL;
	uint16_t V_1 = 0;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___topics0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___qosLevels1;
		MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * L_2 = (MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E *)il2cpp_codegen_object_new(MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E_il2cpp_TypeInfo_var);
		MqttMsgSubscribe__ctor_mCD49AA4864D45A62EB79A3139FF0B1887F96F79B(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * L_3 = V_0;
		uint16_t L_4 = MqttClient_GetMessageId_mD7F9CF145B639E7C30DE676D48EE2EF4352D0962(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_3, L_4, /*hidden argument*/NULL);
		MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * L_5 = V_0;
		MqttClient_EnqueueInflight_mF5246BBBA18BB5A4EF5CF6155F9CB5A6B0D36D57(__this, L_5, 0, /*hidden argument*/NULL);
		MqttMsgSubscribe_tFCDFF964341E4A393125700AECFFF3EE08535C8E * L_6 = V_0;
		NullCheck(L_6);
		uint16_t L_7 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0028;
	}

IL_0028:
	{
		uint16_t L_8 = V_1;
		return L_8;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Publish(System.String,System.Byte[],System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttClient_Publish_mCE2D404652BD0602F1DC6F01B0B5822E870B084D (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___topic0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message1, uint8_t ___qosLevel2, bool ___retain3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Publish_mCE2D404652BD0602F1DC6F01B0B5822E870B084D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	uint16_t V_3 = 0;
	{
		String_t* L_0 = ___topic0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___message1;
		uint8_t L_2 = ___qosLevel2;
		bool L_3 = ___retain3;
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_4 = (MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC *)il2cpp_codegen_object_new(MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC_il2cpp_TypeInfo_var);
		MqttMsgPublish__ctor_m36775B27C3B5BD71CCC730EABB1C94923C66A72F(L_4, L_0, L_1, (bool)0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_5 = V_0;
		uint16_t L_6 = MqttClient_GetMessageId_mD7F9CF145B639E7C30DE676D48EE2EF4352D0962(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_5, L_6, /*hidden argument*/NULL);
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_7 = V_0;
		bool L_8 = MqttClient_EnqueueInflight_mF5246BBBA18BB5A4EF5CF6155F9CB5A6B0D36D57(__this, L_7, 0, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0031;
		}
	}
	{
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_11 = V_0;
		NullCheck(L_11);
		uint16_t L_12 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		goto IL_0039;
	}

IL_0031:
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_13 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_13, ((int32_t)11), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, MqttClient_Publish_mCE2D404652BD0602F1DC6F01B0B5822E870B084D_RuntimeMethod_var);
	}

IL_0039:
	{
		uint16_t L_14 = V_3;
		return L_14;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnInternalEvent(uPLibrary.Networking.M2Mqtt.Internal.InternalEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * ___internalEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_0 = __this->get_eventQueue_20();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_2 = __this->get_eventQueue_20();
		InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_3 = ___internalEvent0;
		NullCheck(L_2);
		Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0027:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_6 = __this->get_receiveEventWaitHandle_3();
		NullCheck(L_6);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnConnectionClosing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnConnectionClosing_mC7312CEF8A452C5BE59D6ACF089DC38C28CF6FC8 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_isConnectionClosing_24();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_isConnectionClosing_24((bool)1);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_2 = __this->get_receiveEventWaitHandle_3();
		NullCheck(L_2);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgPublishReceived_m9910F9B8551A1E370DD1EA4C43A2951A1AC32355 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * ___publish0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgPublishReceived_m9910F9B8551A1E370DD1EA4C43A2951A1AC32355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_0 = __this->get_MqttMsgPublishReceived_12();
		V_0 = (bool)((!(((RuntimeObject*)(MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * L_2 = __this->get_MqttMsgPublishReceived_12();
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_3 = ___publish0;
		NullCheck(L_3);
		String_t* L_4 = MqttMsgPublish_get_Topic_m2EC029568F205AD6B8D287F97E8F1B5FCAD1007A(L_3, /*hidden argument*/NULL);
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_5 = ___publish0;
		NullCheck(L_5);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = MqttMsgPublish_get_Message_mD5FA74F4BF988F876AC52447CD49E84F7DE90D3F(L_5, /*hidden argument*/NULL);
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_7 = ___publish0;
		NullCheck(L_7);
		bool L_8 = MqttMsgBase_get_DupFlag_mADC973EBF5810B977D73A6662BC68B1082C4CCB9(L_7, /*hidden argument*/NULL);
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_9 = ___publish0;
		NullCheck(L_9);
		uint8_t L_10 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_9, /*hidden argument*/NULL);
		MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_11 = ___publish0;
		NullCheck(L_11);
		bool L_12 = MqttMsgBase_get_Retain_m1B8D09BB9982003ABB5DA079AFF9552829B344EE(L_11, /*hidden argument*/NULL);
		MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * L_13 = (MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 *)il2cpp_codegen_object_new(MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614_il2cpp_TypeInfo_var);
		MqttMsgPublishEventArgs__ctor_m21BB1A4A457F27AFCC5A7155384DC8969723E8DF(L_13, L_4, L_6, L_8, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_2);
		MqttMsgPublishEventHandler_Invoke_m388FC922AB3D4B5AE5B38F6183E9643FC2C763C9(L_2, __this, L_13, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublished(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgPublished_m1D88B3B2682E4A0FED5D464EA0A2D228596A6024 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, uint16_t ___messageId0, bool ___isPublished1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgPublished_m1D88B3B2682E4A0FED5D464EA0A2D228596A6024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * L_0 = __this->get_MqttMsgPublished_13();
		V_0 = (bool)((!(((RuntimeObject*)(MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * L_2 = __this->get_MqttMsgPublished_13();
		uint16_t L_3 = ___messageId0;
		bool L_4 = ___isPublished1;
		MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * L_5 = (MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 *)il2cpp_codegen_object_new(MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990_il2cpp_TypeInfo_var);
		MqttMsgPublishedEventArgs__ctor_mF781767C02B4359B6F8E3855A12354018BEB3608(L_5, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		MqttMsgPublishedEventHandler_Invoke_mB93376E00DC68FE03ED697A923FEF96359C0A7E8(L_2, __this, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgSubscribed(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgSubscribed_m9936EA0B02793E8D8006102DBE5C299BCBD3C96C (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * ___suback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgSubscribed_m9936EA0B02793E8D8006102DBE5C299BCBD3C96C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * L_0 = __this->get_MqttMsgSubscribed_14();
		V_0 = (bool)((!(((RuntimeObject*)(MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * L_2 = __this->get_MqttMsgSubscribed_14();
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_3 = ___suback0;
		NullCheck(L_3);
		uint16_t L_4 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_3, /*hidden argument*/NULL);
		MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_5 = ___suback0;
		NullCheck(L_5);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = MqttMsgSuback_get_GrantedQoSLevels_mBDFC77A6B7F09BC0997C1E134AEFACA22769DA11(L_5, /*hidden argument*/NULL);
		MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * L_7 = (MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 *)il2cpp_codegen_object_new(MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6_il2cpp_TypeInfo_var);
		MqttMsgSubscribedEventArgs__ctor_m1E94F55B43E436D192EF04C85C1CA1B474AA7078(L_7, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		MqttMsgSubscribedEventHandler_Invoke_m1DC5242B1AA9604623532514379DD8CF391128D1(L_2, __this, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgUnsubscribed(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnMqttMsgUnsubscribed_m799441C1B56F97208B7EE9794E3C2ED8B741E24A (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, uint16_t ___messageId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgUnsubscribed_m799441C1B56F97208B7EE9794E3C2ED8B741E24A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * L_0 = __this->get_MqttMsgUnsubscribed_15();
		V_0 = (bool)((!(((RuntimeObject*)(MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * L_2 = __this->get_MqttMsgUnsubscribed_15();
		uint16_t L_3 = ___messageId0;
		MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * L_4 = (MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA *)il2cpp_codegen_object_new(MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA_il2cpp_TypeInfo_var);
		MqttMsgUnsubscribedEventArgs__ctor_mFFF8340A62888ED5CB93F69BFA1B53117A55F96E(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MqttMsgUnsubscribedEventHandler_Invoke_mC16FAC7804CABE42CF8DB89DEFFC5FE12260B080(L_2, __this, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnConnectionClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_OnConnectionClosed_m523A79424FA7F1E8DF7EF30409EEE7B7CC8C3802 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnConnectionClosed_m523A79424FA7F1E8DF7EF30409EEE7B7CC8C3802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * L_0 = __this->get_ConnectionClosed_16();
		V_0 = (bool)((!(((RuntimeObject*)(ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * L_2 = __this->get_ConnectionClosed_16();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_3 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_2);
		ConnectionClosedEventHandler_Invoke_m348A7A22C77D47E87A02A82838E6E900E1CEBAB9(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Send_mC3536A77343FDF3E785DE739B34F9BE280DACFBB (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgBytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Send_mC3536A77343FDF3E785DE739B34F9BE280DACFBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_0 = __this->get_channel_17();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___msgBytes0;
		NullCheck(L_0);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Send(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_2 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		__this->set_lastCommTime_11(L_2);
		goto IL_0038;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001d;
		throw e;
	}

CATCH_001d:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(1, _stringLiteralAB2A0EFB14E859CDA36B10F0DFB1A520824F4047, L_4, /*hidden argument*/NULL);
		Exception_t * L_5 = V_0;
		MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * L_6 = (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 *)il2cpp_codegen_object_new(MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059_il2cpp_TypeInfo_var);
		MqttCommunicationException__ctor_m301F6DECD5E6B93DAFF1E02D81DB2EBC890CC0B4(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, MqttClient_Send_mC3536A77343FDF3E785DE739B34F9BE280DACFBB_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0038:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___msg0;
		Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralA47405273FF48709BE2DF105F39E24827ADAD5ED, L_0, /*hidden argument*/NULL);
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_1 = ___msg0;
		int32_t L_2 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uint8_t >::Invoke(4 /* System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetBytes(System.Byte) */, L_1, (uint8_t)(((int32_t)((uint8_t)L_2))));
		MqttClient_Send_mC3536A77343FDF3E785DE739B34F9BE280DACFBB(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgBytes0, int32_t ___timeout1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_0 = __this->get_syncEndReceiving_5();
		NullCheck(L_0);
		EventWaitHandle_Reset_m59EBCEA32BC9C67B4E432BEA5FF0A42ED0CC8A6F(L_0, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_1 = __this->get_channel_17();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___msgBytes0;
		NullCheck(L_1);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Send(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_1, L_2);
		int32_t L_3 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		__this->set_lastCommTime_11(L_3);
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0029;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(1, _stringLiteralAB2A0EFB14E859CDA36B10F0DFB1A520824F4047, L_5, /*hidden argument*/NULL);
		Exception_t * L_6 = V_0;
		MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * L_7 = (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 *)il2cpp_codegen_object_new(MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059_il2cpp_TypeInfo_var);
		MqttCommunicationException__ctor_m301F6DECD5E6B93DAFF1E02D81DB2EBC890CC0B4(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0044:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_8 = __this->get_syncEndReceiving_5();
		int32_t L_9 = ___timeout1;
		NullCheck(L_8);
		bool L_10 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_8, L_9);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		Exception_t * L_12 = __this->get_exReceiving_7();
		V_2 = (bool)((((RuntimeObject*)(Exception_t *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_14 = __this->get_msgReceived_6();
		V_3 = L_14;
		goto IL_0079;
	}

IL_006b:
	{
		Exception_t * L_15 = __this->get_exReceiving_7();
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1_RuntimeMethod_var);
	}

IL_0072:
	{
		MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * L_16 = (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 *)il2cpp_codegen_object_new(MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059_il2cpp_TypeInfo_var);
		MqttCommunicationException__ctor_m9D5650349CFD38E37C1FAB5833EB550602B2D293(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1_RuntimeMethod_var);
	}

IL_0079:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_17 = V_3;
		return L_17;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttClient_SendReceive_mE29BE285AEF0AA4699222C643DF66FBF44709C2D (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method)
{
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * V_0 = NULL;
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___msg0;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_1 = MqttClient_SendReceive_m1A53FEF4445EEDB709C738BB605C7D94969E1365(__this, L_0, ((int32_t)30000), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_2 = V_0;
		return L_2;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttClient_SendReceive_m1A53FEF4445EEDB709C738BB605C7D94969E1365 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, int32_t ___timeout1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_SendReceive_m1A53FEF4445EEDB709C738BB605C7D94969E1365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * V_0 = NULL;
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___msg0;
		Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralA47405273FF48709BE2DF105F39E24827ADAD5ED, L_0, /*hidden argument*/NULL);
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_1 = ___msg0;
		int32_t L_2 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uint8_t >::Invoke(4 /* System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetBytes(System.Byte) */, L_1, (uint8_t)(((int32_t)((uint8_t)L_2))));
		int32_t L_4 = ___timeout1;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_5 = MqttClient_SendReceive_m905C0A7F4E749D9634EB54E1077C7715458155F1(__this, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_6 = V_0;
		return L_6;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInflight(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttClient_EnqueueInflight_mF5246BBBA18BB5A4EF5CF6155F9CB5A6B0D36D57 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, int32_t ___flow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_EnqueueInflight_mF5246BBBA18BB5A4EF5CF6155F9CB5A6B0D36D57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_2 = NULL;
	bool V_3 = false;
	MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * V_4 = NULL;
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_9 = NULL;
	uint8_t V_10 = 0x0;
	bool V_11 = false;
	bool V_12 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B38_0 = 0;
	{
		V_0 = (bool)1;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___msg0;
		NullCheck(L_0);
		uint8_t L_1 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0017;
		}
	}
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_2 = ___msg0;
		NullCheck(L_2);
		uint8_t L_3 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_008d;
		}
	}
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_5 = __this->get_inflightQueue_18();
		V_2 = L_5;
		V_3 = (bool)0;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_6 = V_2;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_6, (bool*)(&V_3), /*hidden argument*/NULL);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_7 = ___msg0;
			NullCheck(L_7);
			uint16_t L_8 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_7, /*hidden argument*/NULL);
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_9 = (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E *)il2cpp_codegen_object_new(MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E_il2cpp_TypeInfo_var);
			MqttMsgContextFinder__ctor_mE579211DCABC287B83369A2E6C1F77BE3C8AC73B(L_9, L_8, 1, /*hidden argument*/NULL);
			V_4 = L_9;
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_10 = __this->get_inflightQueue_18();
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_11 = V_4;
			QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * L_12 = (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A *)il2cpp_codegen_object_new(QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A_il2cpp_TypeInfo_var);
			QueuePredicate__ctor_m97BA408280C913C9C050A31247F9B4A1E054489F(L_12, L_11, (intptr_t)((intptr_t)MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A_RuntimeMethod_var), /*hidden argument*/NULL);
			RuntimeObject * L_13 = QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117(L_10, L_12, /*hidden argument*/NULL);
			V_5 = ((MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)CastclassClass((RuntimeObject*)L_13, MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var));
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_14 = V_5;
			V_6 = (bool)((!(((RuntimeObject*)(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_15 = V_6;
			if (!L_15)
			{
				goto IL_007e;
			}
		}

IL_0068:
		{
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_16 = V_5;
			NullCheck(L_16);
			MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_16, 2, /*hidden argument*/NULL);
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_17 = V_5;
			NullCheck(L_17);
			MqttMsgContext_set_Flow_mC1CF39851B758CB60B8BFA0127FFE587F29EAB93_inline(L_17, 1, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x8C, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		{
			bool L_18 = V_3;
			if (!L_18)
			{
				goto IL_008b;
			}
		}

IL_0084:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_19 = V_2;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_19, /*hidden argument*/NULL);
		}

IL_008b:
		{
			IL2CPP_END_FINALLY(129)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
	}

IL_008d:
	{
		bool L_20 = V_0;
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_022f;
		}
	}
	{
		V_8 = 0;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_22 = ___msg0;
		NullCheck(L_22);
		uint8_t L_23 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_22, /*hidden argument*/NULL);
		V_10 = L_23;
		uint8_t L_24 = V_10;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00b8;
			}
			case 1:
			{
				goto IL_00bd;
			}
			case 2:
			{
				goto IL_00c2;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_00b8:
	{
		V_8 = 0;
		goto IL_00c7;
	}

IL_00bd:
	{
		V_8 = 1;
		goto IL_00c7;
	}

IL_00c2:
	{
		V_8 = 2;
		goto IL_00c7;
	}

IL_00c7:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_25 = ___msg0;
		NullCheck(L_25);
		uint8_t L_26 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_25, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_26) == ((int32_t)8))? 1 : 0);
		bool L_27 = V_11;
		if (!L_27)
		{
			goto IL_00dc;
		}
	}
	{
		V_8 = ((int32_t)11);
		goto IL_00f0;
	}

IL_00dc:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_28 = ___msg0;
		NullCheck(L_28);
		uint8_t L_29 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_28, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_30 = V_12;
		if (!L_30)
		{
			goto IL_00f0;
		}
	}
	{
		V_8 = ((int32_t)12);
	}

IL_00f0:
	{
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_31 = (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)il2cpp_codegen_object_new(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var);
		MqttMsgContext__ctor_m3B62F6196E34855A25AA2BE52BBDBFE84E0B5133(L_31, /*hidden argument*/NULL);
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_32 = L_31;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_33 = ___msg0;
		NullCheck(L_32);
		MqttMsgContext_set_Message_m1F2C1AA3EF595E7CFCD756A41798C64B080336A0_inline(L_32, L_33, /*hidden argument*/NULL);
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_34 = L_32;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_34, L_35, /*hidden argument*/NULL);
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_36 = L_34;
		int32_t L_37 = ___flow1;
		NullCheck(L_36);
		MqttMsgContext_set_Flow_mC1CF39851B758CB60B8BFA0127FFE587F29EAB93_inline(L_36, L_37, /*hidden argument*/NULL);
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_38 = L_36;
		NullCheck(L_38);
		MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B_inline(L_38, 0, /*hidden argument*/NULL);
		V_9 = L_38;
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_39 = __this->get_inflightQueue_18();
		V_13 = L_39;
		V_14 = (bool)0;
	}

IL_0123:
	try
	{ // begin try (depth: 1)
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_40 = V_13;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_40, (bool*)(&V_14), /*hidden argument*/NULL);
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_41 = __this->get_inflightQueue_18();
			NullCheck(L_41);
			int32_t L_42 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_41, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
			MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_43 = __this->get_settings_22();
			NullCheck(L_43);
			int32_t L_44 = MqttSettings_get_InflightQueueSize_m30D0D72A080B36EA22B38D37455299111FCE943B_inline(L_43, /*hidden argument*/NULL);
			V_0 = (bool)((((int32_t)L_42) < ((int32_t)L_44))? 1 : 0);
			bool L_45 = V_0;
			V_15 = L_45;
			bool L_46 = V_15;
			if (!L_46)
			{
				goto IL_021e;
			}
		}

IL_0151:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_47 = __this->get_inflightQueue_18();
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_48 = V_9;
			NullCheck(L_47);
			Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_47, L_48, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_49 = ___msg0;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralB7758CE4D25BA29415A5317E6A64AC6D04DAE586, L_49, /*hidden argument*/NULL);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_50 = ___msg0;
			NullCheck(L_50);
			uint8_t L_51 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_50, /*hidden argument*/NULL);
			V_16 = (bool)((((int32_t)L_51) == ((int32_t)3))? 1 : 0);
			bool L_52 = V_16;
			if (!L_52)
			{
				goto IL_021d;
			}
		}

IL_0180:
		{
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_53 = V_9;
			NullCheck(L_53);
			int32_t L_54 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_53, /*hidden argument*/NULL);
			if (L_54)
			{
				goto IL_01a1;
			}
		}

IL_018a:
		{
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_55 = ___msg0;
			NullCheck(L_55);
			uint8_t L_56 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_55, /*hidden argument*/NULL);
			if ((((int32_t)L_56) == ((int32_t)1)))
			{
				goto IL_019e;
			}
		}

IL_0193:
		{
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_57 = ___msg0;
			NullCheck(L_57);
			uint8_t L_58 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_57, /*hidden argument*/NULL);
			G_B29_0 = ((((int32_t)L_58) == ((int32_t)2))? 1 : 0);
			goto IL_019f;
		}

IL_019e:
		{
			G_B29_0 = 1;
		}

IL_019f:
		{
			G_B31_0 = G_B29_0;
			goto IL_01a2;
		}

IL_01a1:
		{
			G_B31_0 = 0;
		}

IL_01a2:
		{
			V_17 = (bool)G_B31_0;
			bool L_59 = V_17;
			if (!L_59)
			{
				goto IL_01d5;
			}
		}

IL_01a8:
		{
			MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_60 = __this->get_session_21();
			V_18 = (bool)((!(((RuntimeObject*)(MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 *)L_60) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_61 = V_18;
			if (!L_61)
			{
				goto IL_01d2;
			}
		}

IL_01b8:
		{
			MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_62 = __this->get_session_21();
			NullCheck(L_62);
			Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_63 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_62, /*hidden argument*/NULL);
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_64 = V_9;
			NullCheck(L_64);
			String_t* L_65 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_64, /*hidden argument*/NULL);
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_66 = V_9;
			NullCheck(L_63);
			Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B(L_63, L_65, L_66, /*hidden argument*/Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_RuntimeMethod_var);
		}

IL_01d2:
		{
			goto IL_021c;
		}

IL_01d5:
		{
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_67 = V_9;
			NullCheck(L_67);
			int32_t L_68 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_67, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_68) == ((uint32_t)1))))
			{
				goto IL_01ea;
			}
		}

IL_01df:
		{
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_69 = ___msg0;
			NullCheck(L_69);
			uint8_t L_70 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_69, /*hidden argument*/NULL);
			G_B38_0 = ((((int32_t)L_70) == ((int32_t)2))? 1 : 0);
			goto IL_01eb;
		}

IL_01ea:
		{
			G_B38_0 = 0;
		}

IL_01eb:
		{
			V_19 = (bool)G_B38_0;
			bool L_71 = V_19;
			if (!L_71)
			{
				goto IL_021c;
			}
		}

IL_01f1:
		{
			MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_72 = __this->get_session_21();
			V_20 = (bool)((!(((RuntimeObject*)(MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 *)L_72) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_73 = V_20;
			if (!L_73)
			{
				goto IL_021b;
			}
		}

IL_0201:
		{
			MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_74 = __this->get_session_21();
			NullCheck(L_74);
			Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_75 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_74, /*hidden argument*/NULL);
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_76 = V_9;
			NullCheck(L_76);
			String_t* L_77 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_76, /*hidden argument*/NULL);
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_78 = V_9;
			NullCheck(L_75);
			Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B(L_75, L_77, L_78, /*hidden argument*/Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_RuntimeMethod_var);
		}

IL_021b:
		{
		}

IL_021c:
		{
		}

IL_021d:
		{
		}

IL_021e:
		{
			IL2CPP_LEAVE(0x22E, FINALLY_0221);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0221;
	}

FINALLY_0221:
	{ // begin finally (depth: 1)
		{
			bool L_79 = V_14;
			if (!L_79)
			{
				goto IL_022d;
			}
		}

IL_0225:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_80 = V_13;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_80, /*hidden argument*/NULL);
		}

IL_022d:
		{
			IL2CPP_END_FINALLY(545)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(545)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x22E, IL_022e)
	}

IL_022e:
	{
	}

IL_022f:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_81 = __this->get_inflightWaitHandle_4();
		NullCheck(L_81);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_81, /*hidden argument*/NULL);
		bool L_82 = V_0;
		V_21 = L_82;
		goto IL_0240;
	}

IL_0240:
	{
		bool L_83 = V_21;
		return L_83;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInternal(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_2 = NULL;
	bool V_3 = false;
	MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * V_4 = NULL;
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_5 = NULL;
	bool V_6 = false;
	MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * V_7 = NULL;
	bool V_8 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_9 = NULL;
	bool V_10 = false;
	MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * V_11 = NULL;
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_15 = NULL;
	bool V_16 = false;
	MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * V_17 = NULL;
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_21 = NULL;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)1;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___msg0;
		NullCheck(L_0);
		uint8_t L_1 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)6))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0095;
		}
	}
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_3 = __this->get_inflightQueue_18();
		V_2 = L_3;
		V_3 = (bool)0;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_4 = V_2;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_4, (bool*)(&V_3), /*hidden argument*/NULL);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_5 = ___msg0;
			NullCheck(L_5);
			uint16_t L_6 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_5, /*hidden argument*/NULL);
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_7 = (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E *)il2cpp_codegen_object_new(MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E_il2cpp_TypeInfo_var);
			MqttMsgContextFinder__ctor_mE579211DCABC287B83369A2E6C1F77BE3C8AC73B(L_7, L_6, 1, /*hidden argument*/NULL);
			V_4 = L_7;
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_8 = __this->get_inflightQueue_18();
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_9 = V_4;
			QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * L_10 = (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A *)il2cpp_codegen_object_new(QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A_il2cpp_TypeInfo_var);
			QueuePredicate__ctor_m97BA408280C913C9C050A31247F9B4A1E054489F(L_10, L_9, (intptr_t)((intptr_t)MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A_RuntimeMethod_var), /*hidden argument*/NULL);
			RuntimeObject * L_11 = QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117(L_8, L_10, /*hidden argument*/NULL);
			V_5 = ((MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)CastclassClass((RuntimeObject*)L_11, MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var));
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_12 = V_5;
			V_6 = (bool)((((RuntimeObject*)(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_13 = V_6;
			if (!L_13)
			{
				goto IL_0081;
			}
		}

IL_005f:
		{
			MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_14 = (MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 *)il2cpp_codegen_object_new(MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504_il2cpp_TypeInfo_var);
			MqttMsgPubcomp__ctor_m7BD83A0D86E5D7238FF9AA0918CA632567D67D88(L_14, /*hidden argument*/NULL);
			V_7 = L_14;
			MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_15 = V_7;
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_16 = ___msg0;
			NullCheck(L_16);
			uint16_t L_17 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_15, L_17, /*hidden argument*/NULL);
			MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_18 = V_7;
			MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_18, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		{
			bool L_19 = V_3;
			if (!L_19)
			{
				goto IL_008e;
			}
		}

IL_0087:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_20 = V_2;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_20, /*hidden argument*/NULL);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(132)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
	}

IL_008f:
	{
		goto IL_017d;
	}

IL_0095:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_21 = ___msg0;
		NullCheck(L_21);
		uint8_t L_22 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_21, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_22) == ((int32_t)7))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_010a;
		}
	}
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_24 = __this->get_inflightQueue_18();
		V_9 = L_24;
		V_10 = (bool)0;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_25 = V_9;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_25, (bool*)(&V_10), /*hidden argument*/NULL);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_26 = ___msg0;
			NullCheck(L_26);
			uint16_t L_27 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_26, /*hidden argument*/NULL);
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_28 = (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E *)il2cpp_codegen_object_new(MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E_il2cpp_TypeInfo_var);
			MqttMsgContextFinder__ctor_mE579211DCABC287B83369A2E6C1F77BE3C8AC73B(L_28, L_27, 0, /*hidden argument*/NULL);
			V_11 = L_28;
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_29 = __this->get_inflightQueue_18();
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_30 = V_11;
			QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * L_31 = (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A *)il2cpp_codegen_object_new(QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A_il2cpp_TypeInfo_var);
			QueuePredicate__ctor_m97BA408280C913C9C050A31247F9B4A1E054489F(L_31, L_30, (intptr_t)((intptr_t)MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A_RuntimeMethod_var), /*hidden argument*/NULL);
			RuntimeObject * L_32 = QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117(L_29, L_31, /*hidden argument*/NULL);
			V_12 = ((MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)CastclassClass((RuntimeObject*)L_32, MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var));
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_33 = V_12;
			V_13 = (bool)((((RuntimeObject*)(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)L_33) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_34 = V_13;
			if (!L_34)
			{
				goto IL_00f7;
			}
		}

IL_00f3:
		{
			V_0 = (bool)0;
		}

IL_00f7:
		{
			IL2CPP_LEAVE(0x107, FINALLY_00fa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fa;
	}

FINALLY_00fa:
	{ // begin finally (depth: 1)
		{
			bool L_35 = V_10;
			if (!L_35)
			{
				goto IL_0106;
			}
		}

IL_00fe:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_36 = V_9;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_36, /*hidden argument*/NULL);
		}

IL_0106:
		{
			IL2CPP_END_FINALLY(250)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(250)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x107, IL_0107)
	}

IL_0107:
	{
		goto IL_017d;
	}

IL_010a:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_37 = ___msg0;
		NullCheck(L_37);
		uint8_t L_38 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_37, /*hidden argument*/NULL);
		V_14 = (bool)((((int32_t)L_38) == ((int32_t)5))? 1 : 0);
		bool L_39 = V_14;
		if (!L_39)
		{
			goto IL_017d;
		}
	}
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_40 = __this->get_inflightQueue_18();
		V_15 = L_40;
		V_16 = (bool)0;
	}

IL_0125:
	try
	{ // begin try (depth: 1)
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_41 = V_15;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_41, (bool*)(&V_16), /*hidden argument*/NULL);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_42 = ___msg0;
			NullCheck(L_42);
			uint16_t L_43 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_42, /*hidden argument*/NULL);
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_44 = (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E *)il2cpp_codegen_object_new(MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E_il2cpp_TypeInfo_var);
			MqttMsgContextFinder__ctor_mE579211DCABC287B83369A2E6C1F77BE3C8AC73B(L_44, L_43, 0, /*hidden argument*/NULL);
			V_17 = L_44;
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_45 = __this->get_inflightQueue_18();
			MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * L_46 = V_17;
			QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * L_47 = (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A *)il2cpp_codegen_object_new(QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A_il2cpp_TypeInfo_var);
			QueuePredicate__ctor_m97BA408280C913C9C050A31247F9B4A1E054489F(L_47, L_46, (intptr_t)((intptr_t)MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A_RuntimeMethod_var), /*hidden argument*/NULL);
			RuntimeObject * L_48 = QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117(L_45, L_47, /*hidden argument*/NULL);
			V_18 = ((MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)CastclassClass((RuntimeObject*)L_48, MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var));
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_49 = V_18;
			V_19 = (bool)((((RuntimeObject*)(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)L_49) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_50 = V_19;
			if (!L_50)
			{
				goto IL_016c;
			}
		}

IL_0168:
		{
			V_0 = (bool)0;
		}

IL_016c:
		{
			IL2CPP_LEAVE(0x17C, FINALLY_016f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_016f;
	}

FINALLY_016f:
	{ // begin finally (depth: 1)
		{
			bool L_51 = V_16;
			if (!L_51)
			{
				goto IL_017b;
			}
		}

IL_0173:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_52 = V_15;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_52, /*hidden argument*/NULL);
		}

IL_017b:
		{
			IL2CPP_END_FINALLY(367)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(367)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17C, IL_017c)
	}

IL_017c:
	{
	}

IL_017d:
	{
		bool L_53 = V_0;
		V_20 = L_53;
		bool L_54 = V_20;
		if (!L_54)
		{
			goto IL_01d3;
		}
	}
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_55 = __this->get_internalQueue_19();
		V_21 = L_55;
		V_22 = (bool)0;
	}

IL_0190:
	try
	{ // begin try (depth: 1)
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_56 = V_21;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_56, (bool*)(&V_22), /*hidden argument*/NULL);
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_57 = __this->get_internalQueue_19();
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_58 = ___msg0;
		NullCheck(L_57);
		Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_57, L_58, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_59 = ___msg0;
		Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralB7758CE4D25BA29415A5317E6A64AC6D04DAE586, L_59, /*hidden argument*/NULL);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_60 = __this->get_inflightWaitHandle_4();
		NullCheck(L_60);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_60, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1D2, FINALLY_01c5);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c5;
	}

FINALLY_01c5:
	{ // begin finally (depth: 1)
		{
			bool L_61 = V_22;
			if (!L_61)
			{
				goto IL_01d1;
			}
		}

IL_01c9:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_62 = V_21;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_62, /*hidden argument*/NULL);
		}

IL_01d1:
		{
			IL2CPP_END_FINALLY(453)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(453)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D2, IL_01d2)
	}

IL_01d2:
	{
	}

IL_01d3:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::ReceiveThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * V_5 = NULL;
	MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * V_6 = NULL;
	MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * V_7 = NULL;
	MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * V_8 = NULL;
	MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * V_9 = NULL;
	MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * V_10 = NULL;
	MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * V_11 = NULL;
	Exception_t * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B28_0 = 0;
	{
		V_0 = 0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_0;
		goto IL_0330;
	}

IL_000f:
	{
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_1 = __this->get_channel_17();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
			NullCheck(L_1);
			int32_t L_3 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t66F8EDDB514F44F11FC40124ABA97528449AF1F3_il2cpp_TypeInfo_var, L_1, L_2);
			V_0 = L_3;
			int32_t L_4 = V_0;
			V_3 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_029c;
			}
		}

IL_0029:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = 0;
			uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_2 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)240)))>>(int32_t)4)))));
			uint8_t L_9 = V_2;
			V_4 = L_9;
			uint8_t L_10 = V_4;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0080;
				}
				case 1:
				{
					goto IL_0088;
				}
				case 2:
				{
					goto IL_014a;
				}
				case 3:
				{
					goto IL_017f;
				}
				case 4:
				{
					goto IL_01b3;
				}
				case 5:
				{
					goto IL_01e7;
				}
				case 6:
				{
					goto IL_0218;
				}
				case 7:
				{
					goto IL_010e;
				}
				case 8:
				{
					goto IL_0116;
				}
				case 9:
				{
					goto IL_0249;
				}
				case 10:
				{
					goto IL_0251;
				}
				case 11:
				{
					goto IL_00c7;
				}
				case 12:
				{
					goto IL_00cf;
				}
				case 13:
				{
					goto IL_0282;
				}
			}
		}

IL_007b:
		{
			goto IL_028a;
		}

IL_0080:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_11 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
			MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_11, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var);
		}

IL_0088:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = 0;
			uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			int32_t L_15 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_16 = __this->get_channel_17();
			MqttMsgConnack_t11C99D6E186D71A0D2A10EBF2E3E33913335AC76 * L_17 = MqttMsgConnack_Parse_mB21DF8FF63BA2DC8620F38F19238A5DA4C3EB3C4(L_14, (uint8_t)(((int32_t)((uint8_t)L_15))), L_16, /*hidden argument*/NULL);
			__this->set_msgReceived_6(L_17);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_18 = __this->get_msgReceived_6();
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_18, /*hidden argument*/NULL);
			AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_19 = __this->get_syncEndReceiving_5();
			NullCheck(L_19);
			EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_19, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_00c7:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_20 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
			MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_20, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var);
		}

IL_00cf:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_1;
			NullCheck(L_21);
			int32_t L_22 = 0;
			uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			int32_t L_24 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_25 = __this->get_channel_17();
			MqttMsgPingResp_tBC1ACB199447991C0CCEA789CE1E5A9B98A6AA26 * L_26 = MqttMsgPingResp_Parse_m69E7B437D379FE0B2EF7C56DA492F0465FF189A6(L_23, (uint8_t)(((int32_t)((uint8_t)L_24))), L_25, /*hidden argument*/NULL);
			__this->set_msgReceived_6(L_26);
			MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_27 = __this->get_msgReceived_6();
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_27, /*hidden argument*/NULL);
			AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_28 = __this->get_syncEndReceiving_5();
			NullCheck(L_28);
			EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_28, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_010e:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_29 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
			MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_29, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var);
		}

IL_0116:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = V_1;
			NullCheck(L_30);
			int32_t L_31 = 0;
			uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
			int32_t L_33 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_34 = __this->get_channel_17();
			MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_35 = MqttMsgSuback_Parse_mE8895B2B8E44CB9E6BC5BC43BD022E96F2AB99DC(L_32, (uint8_t)(((int32_t)((uint8_t)L_33))), L_34, /*hidden argument*/NULL);
			V_5 = L_35;
			MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_36 = V_5;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_36, /*hidden argument*/NULL);
			MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 * L_37 = V_5;
			MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636(__this, L_37, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_014a:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = V_1;
			NullCheck(L_38);
			int32_t L_39 = 0;
			uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
			int32_t L_41 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_42 = __this->get_channel_17();
			MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_43 = MqttMsgPublish_Parse_mBEC58FF1999C7B085C0CAD80FCCD73D28AF06F71(L_40, (uint8_t)(((int32_t)((uint8_t)L_41))), L_42, /*hidden argument*/NULL);
			V_6 = L_43;
			MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_44 = V_6;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_44, /*hidden argument*/NULL);
			MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC * L_45 = V_6;
			MqttClient_EnqueueInflight_mF5246BBBA18BB5A4EF5CF6155F9CB5A6B0D36D57(__this, L_45, 1, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_017f:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = V_1;
			NullCheck(L_46);
			int32_t L_47 = 0;
			uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
			int32_t L_49 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_50 = __this->get_channel_17();
			MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_51 = MqttMsgPuback_Parse_m1643B20F92F5D971FC3322B554458509C845AEE5(L_48, (uint8_t)(((int32_t)((uint8_t)L_49))), L_50, /*hidden argument*/NULL);
			V_7 = L_51;
			MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_52 = V_7;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_52, /*hidden argument*/NULL);
			MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_53 = V_7;
			MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636(__this, L_53, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_01b3:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_54 = V_1;
			NullCheck(L_54);
			int32_t L_55 = 0;
			uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			int32_t L_57 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_58 = __this->get_channel_17();
			MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_59 = MqttMsgPubrec_Parse_m98F6B7E1C5F070BDA2F918AB733EFE650FC84009(L_56, (uint8_t)(((int32_t)((uint8_t)L_57))), L_58, /*hidden argument*/NULL);
			V_8 = L_59;
			MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_60 = V_8;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_60, /*hidden argument*/NULL);
			MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_61 = V_8;
			MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636(__this, L_61, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_01e7:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = V_1;
			NullCheck(L_62);
			int32_t L_63 = 0;
			uint8_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
			int32_t L_65 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_66 = __this->get_channel_17();
			MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_67 = MqttMsgPubrel_Parse_mA3FD71738536B0EC2A4CEA62E91313973314ADFE(L_64, (uint8_t)(((int32_t)((uint8_t)L_65))), L_66, /*hidden argument*/NULL);
			V_9 = L_67;
			MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_68 = V_9;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_68, /*hidden argument*/NULL);
			MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_69 = V_9;
			MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636(__this, L_69, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_0218:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_70 = V_1;
			NullCheck(L_70);
			int32_t L_71 = 0;
			uint8_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
			int32_t L_73 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_74 = __this->get_channel_17();
			MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_75 = MqttMsgPubcomp_Parse_mC310191A472E583F8384CD795E0234B068BCEE05(L_72, (uint8_t)(((int32_t)((uint8_t)L_73))), L_74, /*hidden argument*/NULL);
			V_10 = L_75;
			MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_76 = V_10;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_76, /*hidden argument*/NULL);
			MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_77 = V_10;
			MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636(__this, L_77, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_0249:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_78 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
			MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_78, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var);
		}

IL_0251:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_79 = V_1;
			NullCheck(L_79);
			int32_t L_80 = 0;
			uint8_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
			int32_t L_82 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_83 = __this->get_channel_17();
			MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_84 = MqttMsgUnsuback_Parse_m94CF7BEE7B6B579F5CE7263401E7B1881FA154AB(L_81, (uint8_t)(((int32_t)((uint8_t)L_82))), L_83, /*hidden argument*/NULL);
			V_11 = L_84;
			MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_85 = V_11;
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)16), _stringLiteralC36AEA525418E9DDD0A31B65EBCD2E786A18FCC8, L_85, /*hidden argument*/NULL);
			MqttMsgUnsuback_t6937A02550ECB4305D575B46AB4CBDFA6984A849 * L_86 = V_11;
			MqttClient_EnqueueInternal_m386CD5FD87C0CADC0A1E59ACFF1713848C927636(__this, L_86, /*hidden argument*/NULL);
			goto IL_0292;
		}

IL_0282:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_87 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
			MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_87, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var);
		}

IL_028a:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_88 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
			MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_88, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, MqttClient_ReceiveThread_mA7A811289805B8595D0337D5DB6B02396F25C9D5_RuntimeMethod_var);
		}

IL_0292:
		{
			__this->set_exReceiving_7((Exception_t *)NULL);
			goto IL_02a5;
		}

IL_029c:
		{
			MqttClient_OnConnectionClosing_mC7312CEF8A452C5BE59D6ACF089DC38C28CF6FC8(__this, /*hidden argument*/NULL);
		}

IL_02a5:
		{
			goto IL_032f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_02ab;
		throw e;
	}

CATCH_02ab:
	{ // begin catch(System.Exception)
		{
			V_12 = ((Exception_t *)__exception_local);
			Exception_t * L_89 = V_12;
			NullCheck(L_89);
			String_t* L_90 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_89);
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(1, _stringLiteralAB2A0EFB14E859CDA36B10F0DFB1A520824F4047, L_90, /*hidden argument*/NULL);
			Exception_t * L_91 = V_12;
			MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * L_92 = (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 *)il2cpp_codegen_object_new(MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059_il2cpp_TypeInfo_var);
			MqttCommunicationException__ctor_m301F6DECD5E6B93DAFF1E02D81DB2EBC890CC0B4(L_92, L_91, /*hidden argument*/NULL);
			__this->set_exReceiving_7(L_92);
			V_13 = (bool)0;
			Exception_t * L_93 = V_12;
			NullCheck(L_93);
			Type_t * L_94 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_93, /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_95 = { reinterpret_cast<intptr_t> (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_96 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_95, /*hidden argument*/NULL);
			V_14 = (bool)((((RuntimeObject*)(Type_t *)L_94) == ((RuntimeObject*)(Type_t *)L_96))? 1 : 0);
			bool L_97 = V_14;
			if (!L_97)
			{
				goto IL_031b;
			}
		}

IL_02ea:
		{
			Exception_t * L_98 = V_12;
			V_15 = ((MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)IsInstClass((RuntimeObject*)L_98, MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var));
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_99 = V_15;
			NullCheck(L_99);
			int32_t L_100 = MqttClientException_get_ErrorCode_m239D24703AE2152374A48EDFF2EB1EEAD06DCADC(L_99, /*hidden argument*/NULL);
			if ((((int32_t)L_100) == ((int32_t)((int32_t)12))))
			{
				goto IL_0317;
			}
		}

IL_02ff:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_101 = V_15;
			NullCheck(L_101);
			int32_t L_102 = MqttClientException_get_ErrorCode_m239D24703AE2152374A48EDFF2EB1EEAD06DCADC(L_101, /*hidden argument*/NULL);
			if ((((int32_t)L_102) == ((int32_t)((int32_t)15))))
			{
				goto IL_0317;
			}
		}

IL_030a:
		{
			MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_103 = V_15;
			NullCheck(L_103);
			int32_t L_104 = MqttClientException_get_ErrorCode_m239D24703AE2152374A48EDFF2EB1EEAD06DCADC(L_103, /*hidden argument*/NULL);
			G_B28_0 = ((((int32_t)L_104) == ((int32_t)((int32_t)13)))? 1 : 0);
			goto IL_0318;
		}

IL_0317:
		{
			G_B28_0 = 1;
		}

IL_0318:
		{
			V_13 = (bool)G_B28_0;
		}

IL_031b:
		{
			bool L_105 = V_13;
			V_16 = L_105;
			bool L_106 = V_16;
			if (!L_106)
			{
				goto IL_032c;
			}
		}

IL_0323:
		{
			MqttClient_OnConnectionClosing_mC7312CEF8A452C5BE59D6ACF089DC38C28CF6FC8(__this, /*hidden argument*/NULL);
		}

IL_032c:
		{
			goto IL_032f;
		}
	} // end catch (depth: 1)

IL_032f:
	{
	}

IL_0330:
	{
		bool L_107 = __this->get_isRunning_2();
		V_17 = L_107;
		bool L_108 = V_17;
		if (L_108)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::KeepAliveThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_KeepAliveThread_m7B9B78C39C4C5C3E845EA870F39CA27DE34576BE (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_KeepAliveThread_m7B9B78C39C4C5C3E845EA870F39CA27DE34576BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = 0;
		int32_t L_0 = __this->get_keepAlivePeriod_8();
		V_1 = L_0;
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_1 = (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)il2cpp_codegen_object_new(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_keepAliveEventEnd_10(L_1);
		goto IL_006d;
	}

IL_0018:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_2 = __this->get_keepAliveEvent_9();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_2, L_3);
		bool L_4 = __this->get_isRunning_2();
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_6 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		int32_t L_7 = __this->get_lastCommTime_11();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_keepAlivePeriod_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		MqttClient_Ping_mCF88172406AC1622608F98F4DCF0150A0D0CEA8D(__this, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_keepAlivePeriod_8();
		V_1 = L_11;
		goto IL_006b;
	}

IL_0060:
	{
		int32_t L_12 = __this->get_keepAlivePeriod_8();
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
	}

IL_006b:
	{
	}

IL_006c:
	{
	}

IL_006d:
	{
		bool L_14 = __this->get_isRunning_2();
		V_4 = L_14;
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0018;
		}
	}
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_16 = __this->get_keepAliveEventEnd_10();
		NullCheck(L_16);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::DispatchEventThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * V_2 = NULL;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * V_7 = NULL;
	bool V_8 = false;
	uint8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	int32_t G_B36_0 = 0;
	{
		goto IL_01df;
	}

IL_0006:
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_0 = __this->get_eventQueue_20();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_0, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		bool L_2 = __this->get_isConnectionClosing_24();
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_4 = __this->get_receiveEventWaitHandle_3();
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
	}

IL_0030:
	{
		bool L_5 = __this->get_isRunning_2();
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_01de;
		}
	}
	{
		V_2 = (InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 *)NULL;
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_7 = __this->get_eventQueue_20();
		V_3 = L_7;
		V_4 = (bool)0;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_8 = V_3;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_8, (bool*)(&V_4), /*hidden argument*/NULL);
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_9 = __this->get_eventQueue_20();
			NullCheck(L_9);
			int32_t L_10 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_9, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
			V_5 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_0079;
			}
		}

IL_0068:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_12 = __this->get_eventQueue_20();
			NullCheck(L_12);
			RuntimeObject * L_13 = Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_12, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
			V_2 = ((InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 *)CastclassClass((RuntimeObject*)L_13, InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03_il2cpp_TypeInfo_var));
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_4;
			if (!L_14)
			{
				goto IL_0087;
			}
		}

IL_0080:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_15 = V_3;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		}

IL_0087:
		{
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
	}

IL_0088:
	{
		InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_16 = V_2;
		V_6 = (bool)((!(((RuntimeObject*)(InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_01b1;
		}
	}
	{
		InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_18 = V_2;
		NullCheck(((MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 *)CastclassClass((RuntimeObject*)L_18, MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408_il2cpp_TypeInfo_var)));
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_19 = MsgInternalEvent_get_Message_mB58FA933C3A0E1DA086D3B46672AD700F1BE521C(((MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 *)CastclassClass((RuntimeObject*)L_18, MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_7 = L_19;
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_20 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_20) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_01b0;
		}
	}
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_22 = V_7;
		NullCheck(L_22);
		uint8_t L_23 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_22, /*hidden argument*/NULL);
		V_9 = L_23;
		uint8_t L_24 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0101;
			}
			case 1:
			{
				goto IL_01af;
			}
			case 2:
			{
				goto IL_0124;
			}
			case 3:
			{
				goto IL_015d;
			}
			case 4:
			{
				goto IL_01af;
			}
			case 5:
			{
				goto IL_016e;
			}
			case 6:
			{
				goto IL_017e;
			}
			case 7:
			{
				goto IL_0109;
			}
			case 8:
			{
				goto IL_0111;
			}
			case 9:
			{
				goto IL_018f;
			}
			case 10:
			{
				goto IL_0197;
			}
			case 11:
			{
				goto IL_01af;
			}
			case 12:
			{
				goto IL_01af;
			}
			case 13:
			{
				goto IL_01a7;
			}
		}
	}
	{
		goto IL_01af;
	}

IL_0101:
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_25 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_25, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_RuntimeMethod_var);
	}

IL_0109:
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_26 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_26, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_RuntimeMethod_var);
	}

IL_0111:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_27 = V_7;
		MqttClient_OnMqttMsgSubscribed_m9936EA0B02793E8D8006102DBE5C299BCBD3C96C(__this, ((MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580 *)CastclassClass((RuntimeObject*)L_27, MqttMsgSuback_t1C31B06D946B40D003604F93292A892099CFF580_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_0124:
	{
		InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_28 = V_2;
		NullCheck(L_28);
		Type_t * L_29 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_28, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_30 = { reinterpret_cast<intptr_t> (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_31 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_30, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_29) == ((RuntimeObject*)(Type_t *)L_31))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_014d;
		}
	}
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_33 = V_7;
		NullCheck(L_33);
		uint16_t L_34 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_33, /*hidden argument*/NULL);
		MqttClient_OnMqttMsgPublished_m1D88B3B2682E4A0FED5D464EA0A2D228596A6024(__this, L_34, (bool)0, /*hidden argument*/NULL);
		goto IL_015b;
	}

IL_014d:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_35 = V_7;
		MqttClient_OnMqttMsgPublishReceived_m9910F9B8551A1E370DD1EA4C43A2951A1AC32355(__this, ((MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC *)CastclassClass((RuntimeObject*)L_35, MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_015b:
	{
		goto IL_01af;
	}

IL_015d:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_36 = V_7;
		NullCheck(L_36);
		uint16_t L_37 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_36, /*hidden argument*/NULL);
		MqttClient_OnMqttMsgPublished_m1D88B3B2682E4A0FED5D464EA0A2D228596A6024(__this, L_37, (bool)1, /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_016e:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_38 = V_7;
		MqttClient_OnMqttMsgPublishReceived_m9910F9B8551A1E370DD1EA4C43A2951A1AC32355(__this, ((MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC *)CastclassClass((RuntimeObject*)L_38, MqttMsgPublish_t15C92E5F141B221839C77780C792F07998C921BC_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_017e:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_39 = V_7;
		NullCheck(L_39);
		uint16_t L_40 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_39, /*hidden argument*/NULL);
		MqttClient_OnMqttMsgPublished_m1D88B3B2682E4A0FED5D464EA0A2D228596A6024(__this, L_40, (bool)1, /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_018f:
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_41 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_41, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_RuntimeMethod_var);
	}

IL_0197:
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_42 = V_7;
		NullCheck(L_42);
		uint16_t L_43 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_42, /*hidden argument*/NULL);
		MqttClient_OnMqttMsgUnsubscribed_m799441C1B56F97208B7EE9794E3C2ED8B741E24A(__this, L_43, /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_01a7:
	{
		MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C * L_44 = (MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C *)il2cpp_codegen_object_new(MqttClientException_t9ED0FFFD136BD01820CE31DD376D949B0EF03E5C_il2cpp_TypeInfo_var);
		MqttClientException__ctor_mCF61027E402BA2A7C8C38A77713FA56407CB4976(L_44, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, MqttClient_DispatchEventThread_mA7FFCA8FCD7BED0AF09959CFC078FB4D67A6A058_RuntimeMethod_var);
	}

IL_01af:
	{
	}

IL_01b0:
	{
	}

IL_01b1:
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_45 = __this->get_eventQueue_20();
		NullCheck(L_45);
		int32_t L_46 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_45, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
		if (L_46)
		{
			goto IL_01c6;
		}
	}
	{
		bool L_47 = __this->get_isConnectionClosing_24();
		G_B36_0 = ((int32_t)(L_47));
		goto IL_01c7;
	}

IL_01c6:
	{
		G_B36_0 = 0;
	}

IL_01c7:
	{
		V_11 = (bool)G_B36_0;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_01dd;
		}
	}
	{
		MqttClient_Close_m3A1C17CE61EE793A7FEB59B5C658BDD9943E5648(__this, /*hidden argument*/NULL);
		MqttClient_OnConnectionClosed_m523A79424FA7F1E8DF7EF30409EEE7B7CC8C3802(__this, /*hidden argument*/NULL);
	}

IL_01dd:
	{
	}

IL_01de:
	{
	}

IL_01df:
	{
		bool L_49 = __this->get_isRunning_2();
		V_12 = L_49;
		bool L_50 = V_12;
		if (L_50)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::ProcessInflightThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_ProcessInflightThread_m9B4FF468ACAAFD685DD63A62606DB4EDDE28BA18 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_ProcessInflightThread_m9B4FF468ACAAFD685DD63A62606DB4EDDE28BA18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_0 = NULL;
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * V_1 = NULL;
	MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * V_2 = NULL;
	InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_9 = NULL;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * V_27 = NULL;
	bool V_28 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_29 = NULL;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_34 = NULL;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int32_t V_43 = 0;
	bool V_44 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_45 = NULL;
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * V_50 = NULL;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_51 = NULL;
	bool V_52 = false;
	bool V_53 = false;
	bool V_54 = false;
	bool V_55 = false;
	bool V_56 = false;
	int32_t V_57 = 0;
	bool V_58 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_59 = NULL;
	bool V_60 = false;
	bool V_61 = false;
	bool V_62 = false;
	bool V_63 = false;
	MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * V_64 = NULL;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_65 = NULL;
	bool V_66 = false;
	bool V_67 = false;
	bool V_68 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_69 = NULL;
	bool V_70 = false;
	bool V_71 = false;
	bool V_72 = false;
	bool V_73 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_74 = NULL;
	bool V_75 = false;
	bool V_76 = false;
	bool V_77 = false;
	bool V_78 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_79 = NULL;
	bool V_80 = false;
	bool V_81 = false;
	bool V_82 = false;
	bool V_83 = false;
	bool V_84 = false;
	int32_t V_85 = 0;
	bool V_86 = false;
	MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * V_87 = NULL;
	bool V_88 = false;
	bool V_89 = false;
	bool V_90 = false;
	bool V_91 = false;
	bool V_92 = false;
	bool V_93 = false;
	MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * V_94 = NULL;
	bool V_95 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 12);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B74_0 = 0;
	int32_t G_B86_0 = 0;
	int32_t G_B94_0 = 0;
	int32_t G_B109_0 = 0;
	int32_t G_B119_0 = 0;
	int32_t G_B128_0 = 0;
	int32_t G_B135_0 = 0;
	int32_t G_B150_0 = 0;
	int32_t G_B161_0 = 0;
	int32_t G_B180_0 = 0;
	int32_t G_B191_0 = 0;
	int32_t G_B198_0 = 0;
	int32_t G_B214_0 = 0;
	int32_t G_B221_0 = 0;
	int32_t G_B234_0 = 0;
	int32_t G_B246_0 = 0;
	{
		V_0 = (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)NULL;
		V_1 = (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)NULL;
		V_2 = (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)NULL;
		V_3 = (InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 *)NULL;
		V_4 = (bool)0;
		V_5 = (-1);
		V_7 = (bool)0;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0d75;
		}

IL_0018:
		{
			AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_0 = __this->get_inflightWaitHandle_4();
			int32_t L_1 = V_5;
			NullCheck(L_0);
			VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_0, L_1);
			bool L_2 = __this->get_isRunning_2();
			V_8 = L_2;
			bool L_3 = V_8;
			if (!L_3)
			{
				goto IL_0d74;
			}
		}

IL_0036:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_4 = __this->get_inflightQueue_18();
			V_9 = L_4;
			V_10 = (bool)0;
		}

IL_0042:
		try
		{ // begin try (depth: 2)
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_5 = V_9;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_5, (bool*)(&V_10), /*hidden argument*/NULL);
				V_7 = (bool)0;
				V_4 = (bool)0;
				V_2 = (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)NULL;
				V_5 = ((int32_t)2147483647LL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_6 = __this->get_inflightQueue_18();
				NullCheck(L_6);
				int32_t L_7 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_6, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
				V_11 = L_7;
				goto IL_0d16;
			}

IL_006e:
			{
				int32_t L_8 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
				V_4 = (bool)0;
				V_2 = (MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)NULL;
				bool L_9 = __this->get_isRunning_2();
				V_12 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
				bool L_10 = V_12;
				if (!L_10)
				{
					goto IL_008e;
				}
			}

IL_0089:
			{
				goto IL_0d24;
			}

IL_008e:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_11 = __this->get_inflightQueue_18();
				NullCheck(L_11);
				RuntimeObject * L_12 = Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_11, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
				V_0 = ((MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)CastclassClass((RuntimeObject*)L_12, MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var));
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_13 = V_0;
				NullCheck(L_13);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_14 = MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline(L_13, /*hidden argument*/NULL);
				V_1 = L_14;
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_15 = V_0;
				NullCheck(L_15);
				int32_t L_16 = MqttMsgContext_get_State_m51D48F950EB3669CB21A2244BAE6C1FB3102F6C4_inline(L_15, /*hidden argument*/NULL);
				V_13 = L_16;
				int32_t L_17 = V_13;
				switch (L_17)
				{
					case 0:
					{
						goto IL_00f6;
					}
					case 1:
					{
						goto IL_0144;
					}
					case 2:
					{
						goto IL_0264;
					}
					case 3:
					{
						goto IL_0333;
					}
					case 4:
					{
						goto IL_05e4;
					}
					case 5:
					{
						goto IL_081c;
					}
					case 6:
					{
						goto IL_099c;
					}
					case 7:
					{
						goto IL_0c59;
					}
					case 8:
					{
						goto IL_0c5e;
					}
					case 9:
					{
						goto IL_0d0f;
					}
					case 10:
					{
						goto IL_0d11;
					}
					case 11:
					{
						goto IL_0144;
					}
					case 12:
					{
						goto IL_0144;
					}
					case 13:
					{
						goto IL_0333;
					}
					case 14:
					{
						goto IL_0333;
					}
				}
			}

IL_00f1:
			{
				goto IL_0d13;
			}

IL_00f6:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_18 = V_0;
				NullCheck(L_18);
				int32_t L_19 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_18, /*hidden argument*/NULL);
				V_14 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
				bool L_20 = V_14;
				if (!L_20)
				{
					goto IL_0111;
				}
			}

IL_0105:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_21 = V_1;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_21, /*hidden argument*/NULL);
				goto IL_0131;
			}

IL_0111:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_22 = V_0;
				NullCheck(L_22);
				int32_t L_23 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_22, /*hidden argument*/NULL);
				V_15 = (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
				bool L_24 = V_15;
				if (!L_24)
				{
					goto IL_0131;
				}
			}

IL_0120:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_25 = V_1;
				MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * L_26 = (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 *)il2cpp_codegen_object_new(MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408_il2cpp_TypeInfo_var);
				MsgInternalEvent__ctor_m444553956AAF9A89EDE7448CA3705AC87121ED83(L_26, L_25, /*hidden argument*/NULL);
				V_3 = L_26;
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_27 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_27, /*hidden argument*/NULL);
			}

IL_0131:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_28 = V_1;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralB12C2B1025448596E1FCD706936A9DE4D257D9D3, L_28, /*hidden argument*/NULL);
				goto IL_0d15;
			}

IL_0144:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_29 = V_0;
				NullCheck(L_29);
				int32_t L_30 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_29, /*hidden argument*/NULL);
				V_16 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
				bool L_31 = V_16;
				if (!L_31)
				{
					goto IL_0213;
				}
			}

IL_0156:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_32 = V_0;
				int32_t L_33 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
				NullCheck(L_32);
				MqttMsgContext_set_Timestamp_mD2016AB6AE5374AB9AD90E192FA574290D2450E3_inline(L_32, L_33, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_34 = V_0;
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_35 = L_34;
				NullCheck(L_35);
				int32_t L_36 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_35, /*hidden argument*/NULL);
				V_17 = L_36;
				int32_t L_37 = V_17;
				NullCheck(L_35);
				MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B_inline(L_35, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_38 = V_1;
				NullCheck(L_38);
				uint8_t L_39 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_38, /*hidden argument*/NULL);
				V_18 = (bool)((((int32_t)L_39) == ((int32_t)3))? 1 : 0);
				bool L_40 = V_18;
				if (!L_40)
				{
					goto IL_01a8;
				}
			}

IL_0185:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_41 = V_0;
				NullCheck(L_41);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_41, 3, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_42 = V_0;
				NullCheck(L_42);
				int32_t L_43 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_42, /*hidden argument*/NULL);
				V_19 = (bool)((((int32_t)L_43) > ((int32_t)1))? 1 : 0);
				bool L_44 = V_19;
				if (!L_44)
				{
					goto IL_01a5;
				}
			}

IL_019d:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_45 = V_1;
				NullCheck(L_45);
				MqttMsgBase_set_DupFlag_m011F8A08A305B8303D5A9FFE75ED09DF45C02F93(L_45, (bool)1, /*hidden argument*/NULL);
			}

IL_01a5:
			{
				goto IL_01db;
			}

IL_01a8:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_46 = V_1;
				NullCheck(L_46);
				uint8_t L_47 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_46, /*hidden argument*/NULL);
				V_20 = (bool)((((int32_t)L_47) == ((int32_t)8))? 1 : 0);
				bool L_48 = V_20;
				if (!L_48)
				{
					goto IL_01c2;
				}
			}

IL_01b7:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_49 = V_0;
				NullCheck(L_49);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_49, ((int32_t)13), /*hidden argument*/NULL);
				goto IL_01db;
			}

IL_01c2:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_50 = V_1;
				NullCheck(L_50);
				uint8_t L_51 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_50, /*hidden argument*/NULL);
				V_21 = (bool)((((int32_t)L_51) == ((int32_t)((int32_t)10)))? 1 : 0);
				bool L_52 = V_21;
				if (!L_52)
				{
					goto IL_01db;
				}
			}

IL_01d2:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_53 = V_0;
				NullCheck(L_53);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_53, ((int32_t)14), /*hidden argument*/NULL);
			}

IL_01db:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_54 = V_1;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_54, /*hidden argument*/NULL);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_55 = __this->get_settings_22();
				NullCheck(L_55);
				int32_t L_56 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_55, /*hidden argument*/NULL);
				int32_t L_57 = V_5;
				if ((((int32_t)L_56) < ((int32_t)L_57)))
				{
					goto IL_01f6;
				}
			}

IL_01f2:
			{
				int32_t L_58 = V_5;
				G_B26_0 = L_58;
				goto IL_0201;
			}

IL_01f6:
			{
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_59 = __this->get_settings_22();
				NullCheck(L_59);
				int32_t L_60 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_59, /*hidden argument*/NULL);
				G_B26_0 = L_60;
			}

IL_0201:
			{
				V_5 = G_B26_0;
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_61 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_62 = V_0;
				NullCheck(L_61);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_61, L_62, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				goto IL_025f;
			}

IL_0213:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_63 = V_0;
				NullCheck(L_63);
				int32_t L_64 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_63, /*hidden argument*/NULL);
				V_22 = (bool)((((int32_t)L_64) == ((int32_t)1))? 1 : 0);
				bool L_65 = V_22;
				if (!L_65)
				{
					goto IL_025f;
				}
			}

IL_0222:
			{
				MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_66 = (MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 *)il2cpp_codegen_object_new(MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819_il2cpp_TypeInfo_var);
				MqttMsgPuback__ctor_m0FEFC98C3DB2741D8D4DC0C2B639EA64A7F67226(L_66, /*hidden argument*/NULL);
				V_23 = L_66;
				MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_67 = V_23;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_68 = V_1;
				NullCheck(L_68);
				uint16_t L_69 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_68, /*hidden argument*/NULL);
				NullCheck(L_67);
				MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_67, L_69, /*hidden argument*/NULL);
				MqttMsgPuback_tB0E20EA48E1231D5788995B9C8631D357547F819 * L_70 = V_23;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_70, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_71 = V_1;
				MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * L_72 = (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 *)il2cpp_codegen_object_new(MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408_il2cpp_TypeInfo_var);
				MsgInternalEvent__ctor_m444553956AAF9A89EDE7448CA3705AC87121ED83(L_72, L_71, /*hidden argument*/NULL);
				V_3 = L_72;
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_73 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_73, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_74 = V_1;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralB12C2B1025448596E1FCD706936A9DE4D257D9D3, L_74, /*hidden argument*/NULL);
			}

IL_025f:
			{
				goto IL_0d15;
			}

IL_0264:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_75 = V_0;
				NullCheck(L_75);
				int32_t L_76 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_75, /*hidden argument*/NULL);
				V_24 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
				bool L_77 = V_24;
				if (!L_77)
				{
					goto IL_02ea;
				}
			}

IL_0273:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_78 = V_0;
				int32_t L_79 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
				NullCheck(L_78);
				MqttMsgContext_set_Timestamp_mD2016AB6AE5374AB9AD90E192FA574290D2450E3_inline(L_78, L_79, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_80 = V_0;
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_81 = L_80;
				NullCheck(L_81);
				int32_t L_82 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_81, /*hidden argument*/NULL);
				V_17 = L_82;
				int32_t L_83 = V_17;
				NullCheck(L_81);
				MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B_inline(L_81, ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1)), /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_84 = V_0;
				NullCheck(L_84);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_84, 4, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_85 = V_0;
				NullCheck(L_85);
				int32_t L_86 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_85, /*hidden argument*/NULL);
				V_25 = (bool)((((int32_t)L_86) > ((int32_t)1))? 1 : 0);
				bool L_87 = V_25;
				if (!L_87)
				{
					goto IL_02b2;
				}
			}

IL_02aa:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_88 = V_1;
				NullCheck(L_88);
				MqttMsgBase_set_DupFlag_m011F8A08A305B8303D5A9FFE75ED09DF45C02F93(L_88, (bool)1, /*hidden argument*/NULL);
			}

IL_02b2:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_89 = V_1;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_89, /*hidden argument*/NULL);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_90 = __this->get_settings_22();
				NullCheck(L_90);
				int32_t L_91 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_90, /*hidden argument*/NULL);
				int32_t L_92 = V_5;
				if ((((int32_t)L_91) < ((int32_t)L_92)))
				{
					goto IL_02cd;
				}
			}

IL_02c9:
			{
				int32_t L_93 = V_5;
				G_B36_0 = L_93;
				goto IL_02d8;
			}

IL_02cd:
			{
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_94 = __this->get_settings_22();
				NullCheck(L_94);
				int32_t L_95 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_94, /*hidden argument*/NULL);
				G_B36_0 = L_95;
			}

IL_02d8:
			{
				V_5 = G_B36_0;
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_96 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_97 = V_0;
				NullCheck(L_96);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_96, L_97, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				goto IL_032e;
			}

IL_02ea:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_98 = V_0;
				NullCheck(L_98);
				int32_t L_99 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_98, /*hidden argument*/NULL);
				V_26 = (bool)((((int32_t)L_99) == ((int32_t)1))? 1 : 0);
				bool L_100 = V_26;
				if (!L_100)
				{
					goto IL_032e;
				}
			}

IL_02f9:
			{
				MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_101 = (MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 *)il2cpp_codegen_object_new(MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0_il2cpp_TypeInfo_var);
				MqttMsgPubrec__ctor_mB1E9FE13CD0067ECA57605D2100774463D8744F9(L_101, /*hidden argument*/NULL);
				V_27 = L_101;
				MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_102 = V_27;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_103 = V_1;
				NullCheck(L_103);
				uint16_t L_104 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_103, /*hidden argument*/NULL);
				NullCheck(L_102);
				MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_102, L_104, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_105 = V_0;
				NullCheck(L_105);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_105, 5, /*hidden argument*/NULL);
				MqttMsgPubrec_t27D333A4DBE8FCC480AA064D362E0F2EE22BB1C0 * L_106 = V_27;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_106, /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_107 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_108 = V_0;
				NullCheck(L_107);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_107, L_108, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
			}

IL_032e:
			{
				goto IL_0d15;
			}

IL_0333:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_109 = V_0;
				NullCheck(L_109);
				int32_t L_110 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_109, /*hidden argument*/NULL);
				V_28 = (bool)((((int32_t)L_110) == ((int32_t)0))? 1 : 0);
				bool L_111 = V_28;
				if (!L_111)
				{
					goto IL_05df;
				}
			}

IL_0345:
			{
				V_4 = (bool)0;
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_112 = __this->get_internalQueue_19();
				V_29 = L_112;
				V_30 = (bool)0;
			}

IL_0354:
			try
			{ // begin try (depth: 3)
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_113 = V_29;
					Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_113, (bool*)(&V_30), /*hidden argument*/NULL);
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_114 = __this->get_internalQueue_19();
					NullCheck(L_114);
					int32_t L_115 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_114, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
					V_31 = (bool)((((int32_t)L_115) > ((int32_t)0))? 1 : 0);
					bool L_116 = V_31;
					if (!L_116)
					{
						goto IL_0384;
					}
				}

IL_0373:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_117 = __this->get_internalQueue_19();
					NullCheck(L_117);
					RuntimeObject * L_118 = Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7(L_117, /*hidden argument*/Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7_RuntimeMethod_var);
					V_2 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)CastclassClass((RuntimeObject*)L_118, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09_il2cpp_TypeInfo_var));
				}

IL_0384:
				{
					IL2CPP_LEAVE(0x394, FINALLY_0387);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0387;
			}

FINALLY_0387:
			{ // begin finally (depth: 3)
				{
					bool L_119 = V_30;
					if (!L_119)
					{
						goto IL_0393;
					}
				}

IL_038b:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_120 = V_29;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_120, /*hidden argument*/NULL);
				}

IL_0393:
				{
					IL2CPP_END_FINALLY(903)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(903)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x394, IL_0394)
			}

IL_0394:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_121 = V_2;
				V_32 = (bool)((!(((RuntimeObject*)(MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)L_121) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_122 = V_32;
				if (!L_122)
				{
					goto IL_04dc;
				}
			}

IL_03a1:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_123 = V_2;
				NullCheck(L_123);
				uint8_t L_124 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_123, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_124) == ((uint32_t)4))))
				{
					goto IL_03c2;
				}
			}

IL_03ab:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_125 = V_1;
				NullCheck(L_125);
				uint8_t L_126 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_125, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_126) == ((uint32_t)3))))
				{
					goto IL_03c2;
				}
			}

IL_03b4:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_127 = V_2;
				NullCheck(L_127);
				uint16_t L_128 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_127, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_129 = V_1;
				NullCheck(L_129);
				uint16_t L_130 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_129, /*hidden argument*/NULL);
				if ((((int32_t)L_128) == ((int32_t)L_130)))
				{
					goto IL_040a;
				}
			}

IL_03c2:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_131 = V_2;
				NullCheck(L_131);
				uint8_t L_132 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_131, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_132) == ((uint32_t)((int32_t)9)))))
				{
					goto IL_03e3;
				}
			}

IL_03cc:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_133 = V_1;
				NullCheck(L_133);
				uint8_t L_134 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_133, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_134) == ((uint32_t)8))))
				{
					goto IL_03e3;
				}
			}

IL_03d5:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_135 = V_2;
				NullCheck(L_135);
				uint16_t L_136 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_135, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_137 = V_1;
				NullCheck(L_137);
				uint16_t L_138 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_137, /*hidden argument*/NULL);
				if ((((int32_t)L_136) == ((int32_t)L_138)))
				{
					goto IL_040a;
				}
			}

IL_03e3:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_139 = V_2;
				NullCheck(L_139);
				uint8_t L_140 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_139, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_140) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_0407;
				}
			}

IL_03ed:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_141 = V_1;
				NullCheck(L_141);
				uint8_t L_142 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_141, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_142) == ((uint32_t)((int32_t)10)))))
				{
					goto IL_0407;
				}
			}

IL_03f7:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_143 = V_2;
				NullCheck(L_143);
				uint16_t L_144 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_143, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_145 = V_1;
				NullCheck(L_145);
				uint16_t L_146 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_145, /*hidden argument*/NULL);
				G_B59_0 = ((((int32_t)L_144) == ((int32_t)L_146))? 1 : 0);
				goto IL_0408;
			}

IL_0407:
			{
				G_B59_0 = 0;
			}

IL_0408:
			{
				G_B61_0 = G_B59_0;
				goto IL_040b;
			}

IL_040a:
			{
				G_B61_0 = 1;
			}

IL_040b:
			{
				V_33 = (bool)G_B61_0;
				bool L_147 = V_33;
				if (!L_147)
				{
					goto IL_04db;
				}
			}

IL_0414:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_148 = __this->get_internalQueue_19();
				V_34 = L_148;
				V_35 = (bool)0;
			}

IL_0420:
			try
			{ // begin try (depth: 3)
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_149 = V_34;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_149, (bool*)(&V_35), /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_150 = __this->get_internalQueue_19();
				NullCheck(L_150);
				Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_150, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
				V_4 = (bool)1;
				V_7 = (bool)1;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_151 = V_2;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteral7D09EDE359E11D65BDF41E913BBADF4F9DCA2C49, L_151, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x45B, FINALLY_044e);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_044e;
			}

FINALLY_044e:
			{ // begin finally (depth: 3)
				{
					bool L_152 = V_35;
					if (!L_152)
					{
						goto IL_045a;
					}
				}

IL_0452:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_153 = V_34;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_153, /*hidden argument*/NULL);
				}

IL_045a:
				{
					IL2CPP_END_FINALLY(1102)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1102)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x45B, IL_045b)
			}

IL_045b:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_154 = V_2;
				NullCheck(L_154);
				uint8_t L_155 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_154, /*hidden argument*/NULL);
				V_36 = (bool)((((int32_t)L_155) == ((int32_t)4))? 1 : 0);
				bool L_156 = V_36;
				if (!L_156)
				{
					goto IL_0474;
				}
			}

IL_046a:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_157 = V_2;
				MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 * L_158 = (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 *)il2cpp_codegen_object_new(MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_il2cpp_TypeInfo_var);
				MsgPublishedInternalEvent__ctor_mD3F40FFD5772259178B160399C9F1DD87A23C483(L_158, L_157, (bool)1, /*hidden argument*/NULL);
				V_3 = L_158;
				goto IL_047b;
			}

IL_0474:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_159 = V_2;
				MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * L_160 = (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 *)il2cpp_codegen_object_new(MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408_il2cpp_TypeInfo_var);
				MsgInternalEvent__ctor_m444553956AAF9A89EDE7448CA3705AC87121ED83(L_160, L_159, /*hidden argument*/NULL);
				V_3 = L_160;
			}

IL_047b:
			{
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_161 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_161, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_162 = V_1;
				NullCheck(L_162);
				uint8_t L_163 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_162, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_163) == ((uint32_t)3))))
				{
					goto IL_04ac;
				}
			}

IL_048c:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_164 = __this->get_session_21();
				if (!L_164)
				{
					goto IL_04ac;
				}
			}

IL_0494:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_165 = __this->get_session_21();
				NullCheck(L_165);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_166 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_165, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_167 = V_0;
				NullCheck(L_167);
				String_t* L_168 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_167, /*hidden argument*/NULL);
				NullCheck(L_166);
				bool L_169 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_166, L_168, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
				G_B74_0 = ((int32_t)(L_169));
				goto IL_04ad;
			}

IL_04ac:
			{
				G_B74_0 = 0;
			}

IL_04ad:
			{
				V_37 = (bool)G_B74_0;
				bool L_170 = V_37;
				if (!L_170)
				{
					goto IL_04cc;
				}
			}

IL_04b3:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_171 = __this->get_session_21();
				NullCheck(L_171);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_172 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_171, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_173 = V_0;
				NullCheck(L_173);
				String_t* L_174 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_173, /*hidden argument*/NULL);
				NullCheck(L_172);
				Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_172, L_174, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			}

IL_04cc:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_175 = V_1;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralB12C2B1025448596E1FCD706936A9DE4D257D9D3, L_175, /*hidden argument*/NULL);
			}

IL_04db:
			{
			}

IL_04dc:
			{
				bool L_176 = V_4;
				V_38 = (bool)((((int32_t)L_176) == ((int32_t)0))? 1 : 0);
				bool L_177 = V_38;
				if (!L_177)
				{
					goto IL_05de;
				}
			}

IL_04ea:
			{
				int32_t L_178 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_179 = V_0;
				NullCheck(L_179);
				int32_t L_180 = MqttMsgContext_get_Timestamp_m5F07CAA9F0C842F6E90330C86099EB36DF5468ED_inline(L_179, /*hidden argument*/NULL);
				V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_178, (int32_t)L_180));
				int32_t L_181 = V_6;
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_182 = __this->get_settings_22();
				NullCheck(L_182);
				int32_t L_183 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_182, /*hidden argument*/NULL);
				V_39 = (bool)((((int32_t)((((int32_t)L_181) < ((int32_t)L_183))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_184 = V_39;
				if (!L_184)
				{
					goto IL_05b0;
				}
			}

IL_0514:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_185 = V_0;
				NullCheck(L_185);
				int32_t L_186 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_185, /*hidden argument*/NULL);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_187 = __this->get_settings_22();
				NullCheck(L_187);
				int32_t L_188 = MqttSettings_get_AttemptsOnRetry_m8CAF4C4E2A558901AF6F2FF0FC681FD8F8C5C5DB_inline(L_187, /*hidden argument*/NULL);
				V_40 = (bool)((((int32_t)L_186) < ((int32_t)L_188))? 1 : 0);
				bool L_189 = V_40;
				if (!L_189)
				{
					goto IL_054a;
				}
			}

IL_052e:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_190 = V_0;
				NullCheck(L_190);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_190, 1, /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_191 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_192 = V_0;
				NullCheck(L_191);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_191, L_192, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				V_5 = 0;
				goto IL_05ad;
			}

IL_054a:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_193 = V_1;
				NullCheck(L_193);
				uint8_t L_194 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_193, /*hidden argument*/NULL);
				V_41 = (bool)((((int32_t)L_194) == ((int32_t)3))? 1 : 0);
				bool L_195 = V_41;
				if (!L_195)
				{
					goto IL_05ac;
				}
			}

IL_055a:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_196 = __this->get_session_21();
				if (!L_196)
				{
					goto IL_057b;
				}
			}

IL_0563:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_197 = __this->get_session_21();
				NullCheck(L_197);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_198 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_197, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_199 = V_0;
				NullCheck(L_199);
				String_t* L_200 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_199, /*hidden argument*/NULL);
				NullCheck(L_198);
				bool L_201 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_198, L_200, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
				G_B86_0 = ((int32_t)(L_201));
				goto IL_057c;
			}

IL_057b:
			{
				G_B86_0 = 0;
			}

IL_057c:
			{
				V_42 = (bool)G_B86_0;
				bool L_202 = V_42;
				if (!L_202)
				{
					goto IL_059b;
				}
			}

IL_0582:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_203 = __this->get_session_21();
				NullCheck(L_203);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_204 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_203, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_205 = V_0;
				NullCheck(L_205);
				String_t* L_206 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_205, /*hidden argument*/NULL);
				NullCheck(L_204);
				Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_204, L_206, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			}

IL_059b:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_207 = V_1;
				MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 * L_208 = (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 *)il2cpp_codegen_object_new(MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_il2cpp_TypeInfo_var);
				MsgPublishedInternalEvent__ctor_mD3F40FFD5772259178B160399C9F1DD87A23C483(L_208, L_207, (bool)0, /*hidden argument*/NULL);
				V_3 = L_208;
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_209 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_209, /*hidden argument*/NULL);
			}

IL_05ac:
			{
			}

IL_05ad:
			{
				goto IL_05dd;
			}

IL_05b0:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_210 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_211 = V_0;
				NullCheck(L_210);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_210, L_211, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_212 = __this->get_settings_22();
				NullCheck(L_212);
				int32_t L_213 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_212, /*hidden argument*/NULL);
				int32_t L_214 = V_6;
				V_43 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_213, (int32_t)L_214));
				int32_t L_215 = V_43;
				int32_t L_216 = V_5;
				if ((((int32_t)L_215) < ((int32_t)L_216)))
				{
					goto IL_05d8;
				}
			}

IL_05d4:
			{
				int32_t L_217 = V_5;
				G_B94_0 = L_217;
				goto IL_05da;
			}

IL_05d8:
			{
				int32_t L_218 = V_43;
				G_B94_0 = L_218;
			}

IL_05da:
			{
				V_5 = G_B94_0;
			}

IL_05dd:
			{
			}

IL_05de:
			{
			}

IL_05df:
			{
				goto IL_0d15;
			}

IL_05e4:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_219 = V_0;
				NullCheck(L_219);
				int32_t L_220 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_219, /*hidden argument*/NULL);
				V_44 = (bool)((((int32_t)L_220) == ((int32_t)0))? 1 : 0);
				bool L_221 = V_44;
				if (!L_221)
				{
					goto IL_0817;
				}
			}

IL_05f6:
			{
				V_4 = (bool)0;
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_222 = __this->get_internalQueue_19();
				V_45 = L_222;
				V_46 = (bool)0;
			}

IL_0605:
			try
			{ // begin try (depth: 3)
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_223 = V_45;
					Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_223, (bool*)(&V_46), /*hidden argument*/NULL);
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_224 = __this->get_internalQueue_19();
					NullCheck(L_224);
					int32_t L_225 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_224, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
					V_47 = (bool)((((int32_t)L_225) > ((int32_t)0))? 1 : 0);
					bool L_226 = V_47;
					if (!L_226)
					{
						goto IL_0635;
					}
				}

IL_0624:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_227 = __this->get_internalQueue_19();
					NullCheck(L_227);
					RuntimeObject * L_228 = Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7(L_227, /*hidden argument*/Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7_RuntimeMethod_var);
					V_2 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)CastclassClass((RuntimeObject*)L_228, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09_il2cpp_TypeInfo_var));
				}

IL_0635:
				{
					IL2CPP_LEAVE(0x645, FINALLY_0638);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0638;
			}

FINALLY_0638:
			{ // begin finally (depth: 3)
				{
					bool L_229 = V_46;
					if (!L_229)
					{
						goto IL_0644;
					}
				}

IL_063c:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_230 = V_45;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_230, /*hidden argument*/NULL);
				}

IL_0644:
				{
					IL2CPP_END_FINALLY(1592)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1592)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x645, IL_0645)
			}

IL_0645:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_231 = V_2;
				if (!L_231)
				{
					goto IL_0653;
				}
			}

IL_0648:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_232 = V_2;
				NullCheck(L_232);
				uint8_t L_233 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_232, /*hidden argument*/NULL);
				G_B109_0 = ((((int32_t)L_233) == ((int32_t)5))? 1 : 0);
				goto IL_0654;
			}

IL_0653:
			{
				G_B109_0 = 0;
			}

IL_0654:
			{
				V_48 = (bool)G_B109_0;
				bool L_234 = V_48;
				if (!L_234)
				{
					goto IL_0725;
				}
			}

IL_065d:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_235 = V_2;
				NullCheck(L_235);
				uint16_t L_236 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_235, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_237 = V_1;
				NullCheck(L_237);
				uint16_t L_238 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_237, /*hidden argument*/NULL);
				V_49 = (bool)((((int32_t)L_236) == ((int32_t)L_238))? 1 : 0);
				bool L_239 = V_49;
				if (!L_239)
				{
					goto IL_0724;
				}
			}

IL_0675:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_240 = __this->get_internalQueue_19();
				V_51 = L_240;
				V_52 = (bool)0;
			}

IL_0681:
			try
			{ // begin try (depth: 3)
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_241 = V_51;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_241, (bool*)(&V_52), /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_242 = __this->get_internalQueue_19();
				NullCheck(L_242);
				Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_242, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
				V_4 = (bool)1;
				V_7 = (bool)1;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_243 = V_2;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteral7D09EDE359E11D65BDF41E913BBADF4F9DCA2C49, L_243, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x6BC, FINALLY_06af);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_06af;
			}

FINALLY_06af:
			{ // begin finally (depth: 3)
				{
					bool L_244 = V_52;
					if (!L_244)
					{
						goto IL_06bb;
					}
				}

IL_06b3:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_245 = V_51;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_245, /*hidden argument*/NULL);
				}

IL_06bb:
				{
					IL2CPP_END_FINALLY(1711)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1711)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x6BC, IL_06bc)
			}

IL_06bc:
			{
				MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_246 = (MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 *)il2cpp_codegen_object_new(MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980_il2cpp_TypeInfo_var);
				MqttMsgPubrel__ctor_m10C03C0D698E0979A6D7A0E066265CC81F90FB73(L_246, /*hidden argument*/NULL);
				V_50 = L_246;
				MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_247 = V_50;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_248 = V_1;
				NullCheck(L_248);
				uint16_t L_249 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_248, /*hidden argument*/NULL);
				NullCheck(L_247);
				MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_247, L_249, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_250 = V_0;
				NullCheck(L_250);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_250, 6, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_251 = V_0;
				int32_t L_252 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
				NullCheck(L_251);
				MqttMsgContext_set_Timestamp_mD2016AB6AE5374AB9AD90E192FA574290D2450E3_inline(L_251, L_252, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_253 = V_0;
				NullCheck(L_253);
				MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B_inline(L_253, 1, /*hidden argument*/NULL);
				MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_254 = V_50;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_254, /*hidden argument*/NULL);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_255 = __this->get_settings_22();
				NullCheck(L_255);
				int32_t L_256 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_255, /*hidden argument*/NULL);
				int32_t L_257 = V_5;
				if ((((int32_t)L_256) < ((int32_t)L_257)))
				{
					goto IL_0709;
				}
			}

IL_0705:
			{
				int32_t L_258 = V_5;
				G_B119_0 = L_258;
				goto IL_0714;
			}

IL_0709:
			{
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_259 = __this->get_settings_22();
				NullCheck(L_259);
				int32_t L_260 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_259, /*hidden argument*/NULL);
				G_B119_0 = L_260;
			}

IL_0714:
			{
				V_5 = G_B119_0;
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_261 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_262 = V_0;
				NullCheck(L_261);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_261, L_262, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
			}

IL_0724:
			{
			}

IL_0725:
			{
				bool L_263 = V_4;
				V_53 = (bool)((((int32_t)L_263) == ((int32_t)0))? 1 : 0);
				bool L_264 = V_53;
				if (!L_264)
				{
					goto IL_0816;
				}
			}

IL_0733:
			{
				int32_t L_265 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_266 = V_0;
				NullCheck(L_266);
				int32_t L_267 = MqttMsgContext_get_Timestamp_m5F07CAA9F0C842F6E90330C86099EB36DF5468ED_inline(L_266, /*hidden argument*/NULL);
				V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_265, (int32_t)L_267));
				int32_t L_268 = V_6;
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_269 = __this->get_settings_22();
				NullCheck(L_269);
				int32_t L_270 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_269, /*hidden argument*/NULL);
				V_54 = (bool)((((int32_t)((((int32_t)L_268) < ((int32_t)L_270))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_271 = V_54;
				if (!L_271)
				{
					goto IL_07e8;
				}
			}

IL_075d:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_272 = V_0;
				NullCheck(L_272);
				int32_t L_273 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_272, /*hidden argument*/NULL);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_274 = __this->get_settings_22();
				NullCheck(L_274);
				int32_t L_275 = MqttSettings_get_AttemptsOnRetry_m8CAF4C4E2A558901AF6F2FF0FC681FD8F8C5C5DB_inline(L_274, /*hidden argument*/NULL);
				V_55 = (bool)((((int32_t)L_273) < ((int32_t)L_275))? 1 : 0);
				bool L_276 = V_55;
				if (!L_276)
				{
					goto IL_0793;
				}
			}

IL_0777:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_277 = V_0;
				NullCheck(L_277);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_277, 2, /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_278 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_279 = V_0;
				NullCheck(L_278);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_278, L_279, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				V_5 = 0;
				goto IL_07e5;
			}

IL_0793:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_280 = __this->get_session_21();
				if (!L_280)
				{
					goto IL_07b4;
				}
			}

IL_079c:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_281 = __this->get_session_21();
				NullCheck(L_281);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_282 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_281, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_283 = V_0;
				NullCheck(L_283);
				String_t* L_284 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_283, /*hidden argument*/NULL);
				NullCheck(L_282);
				bool L_285 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_282, L_284, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
				G_B128_0 = ((int32_t)(L_285));
				goto IL_07b5;
			}

IL_07b4:
			{
				G_B128_0 = 0;
			}

IL_07b5:
			{
				V_56 = (bool)G_B128_0;
				bool L_286 = V_56;
				if (!L_286)
				{
					goto IL_07d4;
				}
			}

IL_07bb:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_287 = __this->get_session_21();
				NullCheck(L_287);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_288 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_287, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_289 = V_0;
				NullCheck(L_289);
				String_t* L_290 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_289, /*hidden argument*/NULL);
				NullCheck(L_288);
				Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_288, L_290, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			}

IL_07d4:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_291 = V_1;
				MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 * L_292 = (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 *)il2cpp_codegen_object_new(MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_il2cpp_TypeInfo_var);
				MsgPublishedInternalEvent__ctor_mD3F40FFD5772259178B160399C9F1DD87A23C483(L_292, L_291, (bool)0, /*hidden argument*/NULL);
				V_3 = L_292;
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_293 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_293, /*hidden argument*/NULL);
			}

IL_07e5:
			{
				goto IL_0815;
			}

IL_07e8:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_294 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_295 = V_0;
				NullCheck(L_294);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_294, L_295, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_296 = __this->get_settings_22();
				NullCheck(L_296);
				int32_t L_297 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_296, /*hidden argument*/NULL);
				int32_t L_298 = V_6;
				V_57 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_297, (int32_t)L_298));
				int32_t L_299 = V_57;
				int32_t L_300 = V_5;
				if ((((int32_t)L_299) < ((int32_t)L_300)))
				{
					goto IL_0810;
				}
			}

IL_080c:
			{
				int32_t L_301 = V_5;
				G_B135_0 = L_301;
				goto IL_0812;
			}

IL_0810:
			{
				int32_t L_302 = V_57;
				G_B135_0 = L_302;
			}

IL_0812:
			{
				V_5 = G_B135_0;
			}

IL_0815:
			{
			}

IL_0816:
			{
			}

IL_0817:
			{
				goto IL_0d15;
			}

IL_081c:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_303 = V_0;
				NullCheck(L_303);
				int32_t L_304 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_303, /*hidden argument*/NULL);
				V_58 = (bool)((((int32_t)L_304) == ((int32_t)1))? 1 : 0);
				bool L_305 = V_58;
				if (!L_305)
				{
					goto IL_0997;
				}
			}

IL_082e:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_306 = __this->get_internalQueue_19();
				V_59 = L_306;
				V_60 = (bool)0;
			}

IL_083a:
			try
			{ // begin try (depth: 3)
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_307 = V_59;
					Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_307, (bool*)(&V_60), /*hidden argument*/NULL);
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_308 = __this->get_internalQueue_19();
					NullCheck(L_308);
					int32_t L_309 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_308, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
					V_61 = (bool)((((int32_t)L_309) > ((int32_t)0))? 1 : 0);
					bool L_310 = V_61;
					if (!L_310)
					{
						goto IL_086a;
					}
				}

IL_0859:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_311 = __this->get_internalQueue_19();
					NullCheck(L_311);
					RuntimeObject * L_312 = Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7(L_311, /*hidden argument*/Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7_RuntimeMethod_var);
					V_2 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)CastclassClass((RuntimeObject*)L_312, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09_il2cpp_TypeInfo_var));
				}

IL_086a:
				{
					IL2CPP_LEAVE(0x87A, FINALLY_086d);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_086d;
			}

FINALLY_086d:
			{ // begin finally (depth: 3)
				{
					bool L_313 = V_60;
					if (!L_313)
					{
						goto IL_0879;
					}
				}

IL_0871:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_314 = V_59;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_314, /*hidden argument*/NULL);
				}

IL_0879:
				{
					IL2CPP_END_FINALLY(2157)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(2157)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x87A, IL_087a)
			}

IL_087a:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_315 = V_2;
				if (!L_315)
				{
					goto IL_0888;
				}
			}

IL_087d:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_316 = V_2;
				NullCheck(L_316);
				uint8_t L_317 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_316, /*hidden argument*/NULL);
				G_B150_0 = ((((int32_t)L_317) == ((int32_t)6))? 1 : 0);
				goto IL_0889;
			}

IL_0888:
			{
				G_B150_0 = 0;
			}

IL_0889:
			{
				V_62 = (bool)G_B150_0;
				bool L_318 = V_62;
				if (!L_318)
				{
					goto IL_0987;
				}
			}

IL_0892:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_319 = V_2;
				NullCheck(L_319);
				uint16_t L_320 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_319, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_321 = V_1;
				NullCheck(L_321);
				uint16_t L_322 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_321, /*hidden argument*/NULL);
				V_63 = (bool)((((int32_t)L_320) == ((int32_t)L_322))? 1 : 0);
				bool L_323 = V_63;
				if (!L_323)
				{
					goto IL_0975;
				}
			}

IL_08aa:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_324 = __this->get_internalQueue_19();
				V_65 = L_324;
				V_66 = (bool)0;
			}

IL_08b6:
			try
			{ // begin try (depth: 3)
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_325 = V_65;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_325, (bool*)(&V_66), /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_326 = __this->get_internalQueue_19();
				NullCheck(L_326);
				Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_326, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
				V_7 = (bool)1;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_327 = V_2;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteral7D09EDE359E11D65BDF41E913BBADF4F9DCA2C49, L_327, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x8EE, FINALLY_08e1);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_08e1;
			}

FINALLY_08e1:
			{ // begin finally (depth: 3)
				{
					bool L_328 = V_66;
					if (!L_328)
					{
						goto IL_08ed;
					}
				}

IL_08e5:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_329 = V_65;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_329, /*hidden argument*/NULL);
				}

IL_08ed:
				{
					IL2CPP_END_FINALLY(2273)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(2273)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x8EE, IL_08ee)
			}

IL_08ee:
			{
				MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_330 = (MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 *)il2cpp_codegen_object_new(MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504_il2cpp_TypeInfo_var);
				MqttMsgPubcomp__ctor_m7BD83A0D86E5D7238FF9AA0918CA632567D67D88(L_330, /*hidden argument*/NULL);
				V_64 = L_330;
				MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_331 = V_64;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_332 = V_1;
				NullCheck(L_332);
				uint16_t L_333 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_332, /*hidden argument*/NULL);
				NullCheck(L_331);
				MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_331, L_333, /*hidden argument*/NULL);
				MqttMsgPubcomp_tD7172DEF395A34FE6EB38142D63930DD7D3D0504 * L_334 = V_64;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_334, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_335 = V_1;
				MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 * L_336 = (MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408 *)il2cpp_codegen_object_new(MsgInternalEvent_t5EF4F5D5BC9AA4529BE4CD08AA662B4D57ABC408_il2cpp_TypeInfo_var);
				MsgInternalEvent__ctor_m444553956AAF9A89EDE7448CA3705AC87121ED83(L_336, L_335, /*hidden argument*/NULL);
				V_3 = L_336;
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_337 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_337, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_338 = V_1;
				NullCheck(L_338);
				uint8_t L_339 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_338, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_339) == ((uint32_t)3))))
				{
					goto IL_0944;
				}
			}

IL_0924:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_340 = __this->get_session_21();
				if (!L_340)
				{
					goto IL_0944;
				}
			}

IL_092c:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_341 = __this->get_session_21();
				NullCheck(L_341);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_342 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_341, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_343 = V_0;
				NullCheck(L_343);
				String_t* L_344 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_343, /*hidden argument*/NULL);
				NullCheck(L_342);
				bool L_345 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_342, L_344, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
				G_B161_0 = ((int32_t)(L_345));
				goto IL_0945;
			}

IL_0944:
			{
				G_B161_0 = 0;
			}

IL_0945:
			{
				V_67 = (bool)G_B161_0;
				bool L_346 = V_67;
				if (!L_346)
				{
					goto IL_0964;
				}
			}

IL_094b:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_347 = __this->get_session_21();
				NullCheck(L_347);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_348 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_347, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_349 = V_0;
				NullCheck(L_349);
				String_t* L_350 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_349, /*hidden argument*/NULL);
				NullCheck(L_348);
				Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_348, L_350, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			}

IL_0964:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_351 = V_1;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralB12C2B1025448596E1FCD706936A9DE4D257D9D3, L_351, /*hidden argument*/NULL);
				goto IL_0984;
			}

IL_0975:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_352 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_353 = V_0;
				NullCheck(L_352);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_352, L_353, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
			}

IL_0984:
			{
				goto IL_0996;
			}

IL_0987:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_354 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_355 = V_0;
				NullCheck(L_354);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_354, L_355, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
			}

IL_0996:
			{
			}

IL_0997:
			{
				goto IL_0d15;
			}

IL_099c:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_356 = V_0;
				NullCheck(L_356);
				int32_t L_357 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_356, /*hidden argument*/NULL);
				V_68 = (bool)((((int32_t)L_357) == ((int32_t)0))? 1 : 0);
				bool L_358 = V_68;
				if (!L_358)
				{
					goto IL_0c54;
				}
			}

IL_09ae:
			{
				V_4 = (bool)0;
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_359 = __this->get_internalQueue_19();
				V_69 = L_359;
				V_70 = (bool)0;
			}

IL_09bd:
			try
			{ // begin try (depth: 3)
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_360 = V_69;
					Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_360, (bool*)(&V_70), /*hidden argument*/NULL);
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_361 = __this->get_internalQueue_19();
					NullCheck(L_361);
					int32_t L_362 = Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_inline(L_361, /*hidden argument*/Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_RuntimeMethod_var);
					V_71 = (bool)((((int32_t)L_362) > ((int32_t)0))? 1 : 0);
					bool L_363 = V_71;
					if (!L_363)
					{
						goto IL_09ed;
					}
				}

IL_09dc:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_364 = __this->get_internalQueue_19();
					NullCheck(L_364);
					RuntimeObject * L_365 = Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7(L_364, /*hidden argument*/Queue_1_Peek_mA304CCFC8A53E4F05CE1AE944F000233F55179C7_RuntimeMethod_var);
					V_2 = ((MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 *)CastclassClass((RuntimeObject*)L_365, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09_il2cpp_TypeInfo_var));
				}

IL_09ed:
				{
					IL2CPP_LEAVE(0x9FD, FINALLY_09f0);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_09f0;
			}

FINALLY_09f0:
			{ // begin finally (depth: 3)
				{
					bool L_366 = V_70;
					if (!L_366)
					{
						goto IL_09fc;
					}
				}

IL_09f4:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_367 = V_69;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_367, /*hidden argument*/NULL);
				}

IL_09fc:
				{
					IL2CPP_END_FINALLY(2544)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(2544)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x9FD, IL_09fd)
			}

IL_09fd:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_368 = V_2;
				if (!L_368)
				{
					goto IL_0a0b;
				}
			}

IL_0a00:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_369 = V_2;
				NullCheck(L_369);
				uint8_t L_370 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_369, /*hidden argument*/NULL);
				G_B180_0 = ((((int32_t)L_370) == ((int32_t)7))? 1 : 0);
				goto IL_0a0c;
			}

IL_0a0b:
			{
				G_B180_0 = 0;
			}

IL_0a0c:
			{
				V_72 = (bool)G_B180_0;
				bool L_371 = V_72;
				if (!L_371)
				{
					goto IL_0ae2;
				}
			}

IL_0a15:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_372 = V_2;
				NullCheck(L_372);
				uint16_t L_373 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_372, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_374 = V_1;
				NullCheck(L_374);
				uint16_t L_375 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_374, /*hidden argument*/NULL);
				V_73 = (bool)((((int32_t)L_373) == ((int32_t)L_375))? 1 : 0);
				bool L_376 = V_73;
				if (!L_376)
				{
					goto IL_0adc;
				}
			}

IL_0a2d:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_377 = __this->get_internalQueue_19();
				V_74 = L_377;
				V_75 = (bool)0;
			}

IL_0a39:
			try
			{ // begin try (depth: 3)
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_378 = V_74;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_378, (bool*)(&V_75), /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_379 = __this->get_internalQueue_19();
				NullCheck(L_379);
				Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_379, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
				V_4 = (bool)1;
				V_7 = (bool)1;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_380 = V_2;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteral7D09EDE359E11D65BDF41E913BBADF4F9DCA2C49, L_380, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0xA74, FINALLY_0a67);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0a67;
			}

FINALLY_0a67:
			{ // begin finally (depth: 3)
				{
					bool L_381 = V_75;
					if (!L_381)
					{
						goto IL_0a73;
					}
				}

IL_0a6b:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_382 = V_74;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_382, /*hidden argument*/NULL);
				}

IL_0a73:
				{
					IL2CPP_END_FINALLY(2663)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(2663)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0xA74, IL_0a74)
			}

IL_0a74:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_383 = V_2;
				MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 * L_384 = (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 *)il2cpp_codegen_object_new(MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_il2cpp_TypeInfo_var);
				MsgPublishedInternalEvent__ctor_mD3F40FFD5772259178B160399C9F1DD87A23C483(L_384, L_383, (bool)1, /*hidden argument*/NULL);
				V_3 = L_384;
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_385 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_385, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_386 = V_1;
				NullCheck(L_386);
				uint8_t L_387 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_386, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_387) == ((uint32_t)3))))
				{
					goto IL_0aad;
				}
			}

IL_0a8d:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_388 = __this->get_session_21();
				if (!L_388)
				{
					goto IL_0aad;
				}
			}

IL_0a95:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_389 = __this->get_session_21();
				NullCheck(L_389);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_390 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_389, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_391 = V_0;
				NullCheck(L_391);
				String_t* L_392 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_391, /*hidden argument*/NULL);
				NullCheck(L_390);
				bool L_393 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_390, L_392, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
				G_B191_0 = ((int32_t)(L_393));
				goto IL_0aae;
			}

IL_0aad:
			{
				G_B191_0 = 0;
			}

IL_0aae:
			{
				V_76 = (bool)G_B191_0;
				bool L_394 = V_76;
				if (!L_394)
				{
					goto IL_0acd;
				}
			}

IL_0ab4:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_395 = __this->get_session_21();
				NullCheck(L_395);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_396 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_395, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_397 = V_0;
				NullCheck(L_397);
				String_t* L_398 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_397, /*hidden argument*/NULL);
				NullCheck(L_396);
				Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_396, L_398, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			}

IL_0acd:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_399 = V_1;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralB12C2B1025448596E1FCD706936A9DE4D257D9D3, L_399, /*hidden argument*/NULL);
			}

IL_0adc:
			{
				goto IL_0b62;
			}

IL_0ae2:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_400 = V_2;
				if (!L_400)
				{
					goto IL_0af0;
				}
			}

IL_0ae5:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_401 = V_2;
				NullCheck(L_401);
				uint8_t L_402 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_401, /*hidden argument*/NULL);
				G_B198_0 = ((((int32_t)L_402) == ((int32_t)5))? 1 : 0);
				goto IL_0af1;
			}

IL_0af0:
			{
				G_B198_0 = 0;
			}

IL_0af1:
			{
				V_77 = (bool)G_B198_0;
				bool L_403 = V_77;
				if (!L_403)
				{
					goto IL_0b62;
				}
			}

IL_0af7:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_404 = V_2;
				NullCheck(L_404);
				uint16_t L_405 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_404, /*hidden argument*/NULL);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_406 = V_1;
				NullCheck(L_406);
				uint16_t L_407 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_406, /*hidden argument*/NULL);
				V_78 = (bool)((((int32_t)L_405) == ((int32_t)L_407))? 1 : 0);
				bool L_408 = V_78;
				if (!L_408)
				{
					goto IL_0b61;
				}
			}

IL_0b0c:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_409 = __this->get_internalQueue_19();
				V_79 = L_409;
				V_80 = (bool)0;
			}

IL_0b18:
			try
			{ // begin try (depth: 3)
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_410 = V_79;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_410, (bool*)(&V_80), /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_411 = __this->get_internalQueue_19();
				NullCheck(L_411);
				Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_411, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
				V_4 = (bool)1;
				V_7 = (bool)1;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_412 = V_2;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteral7D09EDE359E11D65BDF41E913BBADF4F9DCA2C49, L_412, /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_413 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_414 = V_0;
				NullCheck(L_413);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_413, L_414, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				IL2CPP_LEAVE(0xB60, FINALLY_0b53);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0b53;
			}

FINALLY_0b53:
			{ // begin finally (depth: 3)
				{
					bool L_415 = V_80;
					if (!L_415)
					{
						goto IL_0b5f;
					}
				}

IL_0b57:
				{
					Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_416 = V_79;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_416, /*hidden argument*/NULL);
				}

IL_0b5f:
				{
					IL2CPP_END_FINALLY(2899)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(2899)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0xB60, IL_0b60)
			}

IL_0b60:
			{
			}

IL_0b61:
			{
			}

IL_0b62:
			{
				bool L_417 = V_4;
				V_81 = (bool)((((int32_t)L_417) == ((int32_t)0))? 1 : 0);
				bool L_418 = V_81;
				if (!L_418)
				{
					goto IL_0c53;
				}
			}

IL_0b70:
			{
				int32_t L_419 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_420 = V_0;
				NullCheck(L_420);
				int32_t L_421 = MqttMsgContext_get_Timestamp_m5F07CAA9F0C842F6E90330C86099EB36DF5468ED_inline(L_420, /*hidden argument*/NULL);
				V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_419, (int32_t)L_421));
				int32_t L_422 = V_6;
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_423 = __this->get_settings_22();
				NullCheck(L_423);
				int32_t L_424 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_423, /*hidden argument*/NULL);
				V_82 = (bool)((((int32_t)((((int32_t)L_422) < ((int32_t)L_424))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_425 = V_82;
				if (!L_425)
				{
					goto IL_0c25;
				}
			}

IL_0b9a:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_426 = V_0;
				NullCheck(L_426);
				int32_t L_427 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_426, /*hidden argument*/NULL);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_428 = __this->get_settings_22();
				NullCheck(L_428);
				int32_t L_429 = MqttSettings_get_AttemptsOnRetry_m8CAF4C4E2A558901AF6F2FF0FC681FD8F8C5C5DB_inline(L_428, /*hidden argument*/NULL);
				V_83 = (bool)((((int32_t)L_427) < ((int32_t)L_429))? 1 : 0);
				bool L_430 = V_83;
				if (!L_430)
				{
					goto IL_0bd0;
				}
			}

IL_0bb4:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_431 = V_0;
				NullCheck(L_431);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_431, 8, /*hidden argument*/NULL);
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_432 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_433 = V_0;
				NullCheck(L_432);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_432, L_433, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				V_5 = 0;
				goto IL_0c22;
			}

IL_0bd0:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_434 = __this->get_session_21();
				if (!L_434)
				{
					goto IL_0bf1;
				}
			}

IL_0bd9:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_435 = __this->get_session_21();
				NullCheck(L_435);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_436 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_435, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_437 = V_0;
				NullCheck(L_437);
				String_t* L_438 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_437, /*hidden argument*/NULL);
				NullCheck(L_436);
				bool L_439 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_436, L_438, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
				G_B214_0 = ((int32_t)(L_439));
				goto IL_0bf2;
			}

IL_0bf1:
			{
				G_B214_0 = 0;
			}

IL_0bf2:
			{
				V_84 = (bool)G_B214_0;
				bool L_440 = V_84;
				if (!L_440)
				{
					goto IL_0c11;
				}
			}

IL_0bf8:
			{
				MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_441 = __this->get_session_21();
				NullCheck(L_441);
				Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_442 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_441, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_443 = V_0;
				NullCheck(L_443);
				String_t* L_444 = MqttMsgContext_get_Key_mFE3414731604C2B9D10D470A56626A37E481CFBD(L_443, /*hidden argument*/NULL);
				NullCheck(L_442);
				Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_442, L_444, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			}

IL_0c11:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_445 = V_1;
				MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 * L_446 = (MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1 *)il2cpp_codegen_object_new(MsgPublishedInternalEvent_t6AFE3A3228CB6BED60FD8E0941BA1D9F4DEA95E1_il2cpp_TypeInfo_var);
				MsgPublishedInternalEvent__ctor_mD3F40FFD5772259178B160399C9F1DD87A23C483(L_446, L_445, (bool)0, /*hidden argument*/NULL);
				V_3 = L_446;
				InternalEvent_t8584B7EE18DC6BC3E2FD7FAC4C46689059B96E03 * L_447 = V_3;
				MqttClient_OnInternalEvent_mC64366CDE2617BC86B71E672FB5F74CBACF70B27(__this, L_447, /*hidden argument*/NULL);
			}

IL_0c22:
			{
				goto IL_0c52;
			}

IL_0c25:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_448 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_449 = V_0;
				NullCheck(L_448);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_448, L_449, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_450 = __this->get_settings_22();
				NullCheck(L_450);
				int32_t L_451 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_450, /*hidden argument*/NULL);
				int32_t L_452 = V_6;
				V_85 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_451, (int32_t)L_452));
				int32_t L_453 = V_85;
				int32_t L_454 = V_5;
				if ((((int32_t)L_453) < ((int32_t)L_454)))
				{
					goto IL_0c4d;
				}
			}

IL_0c49:
			{
				int32_t L_455 = V_5;
				G_B221_0 = L_455;
				goto IL_0c4f;
			}

IL_0c4d:
			{
				int32_t L_456 = V_85;
				G_B221_0 = L_456;
			}

IL_0c4f:
			{
				V_5 = G_B221_0;
			}

IL_0c52:
			{
			}

IL_0c53:
			{
			}

IL_0c54:
			{
				goto IL_0d15;
			}

IL_0c59:
			{
				goto IL_0d15;
			}

IL_0c5e:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_457 = V_0;
				NullCheck(L_457);
				int32_t L_458 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_457, /*hidden argument*/NULL);
				V_86 = (bool)((((int32_t)L_458) == ((int32_t)0))? 1 : 0);
				bool L_459 = V_86;
				if (!L_459)
				{
					goto IL_0d0d;
				}
			}

IL_0c70:
			{
				MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_460 = (MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 *)il2cpp_codegen_object_new(MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980_il2cpp_TypeInfo_var);
				MqttMsgPubrel__ctor_m10C03C0D698E0979A6D7A0E066265CC81F90FB73(L_460, /*hidden argument*/NULL);
				V_87 = L_460;
				MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_461 = V_87;
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_462 = V_1;
				NullCheck(L_462);
				uint16_t L_463 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_462, /*hidden argument*/NULL);
				NullCheck(L_461);
				MqttMsgBase_set_MessageId_mB63C19E984F2394072C1334FDDA91B646AAE33E7(L_461, L_463, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_464 = V_0;
				NullCheck(L_464);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_464, 6, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_465 = V_0;
				int32_t L_466 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
				NullCheck(L_465);
				MqttMsgContext_set_Timestamp_mD2016AB6AE5374AB9AD90E192FA574290D2450E3_inline(L_465, L_466, /*hidden argument*/NULL);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_467 = V_0;
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_468 = L_467;
				NullCheck(L_468);
				int32_t L_469 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_468, /*hidden argument*/NULL);
				V_17 = L_469;
				int32_t L_470 = V_17;
				NullCheck(L_468);
				MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B_inline(L_468, ((int32_t)il2cpp_codegen_add((int32_t)L_470, (int32_t)1)), /*hidden argument*/NULL);
				int32_t L_471 = MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline(__this, /*hidden argument*/NULL);
				V_88 = (bool)((((int32_t)L_471) == ((int32_t)3))? 1 : 0);
				bool L_472 = V_88;
				if (!L_472)
				{
					goto IL_0cd6;
				}
			}

IL_0cbc:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_473 = V_0;
				NullCheck(L_473);
				int32_t L_474 = MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline(L_473, /*hidden argument*/NULL);
				V_89 = (bool)((((int32_t)L_474) > ((int32_t)1))? 1 : 0);
				bool L_475 = V_89;
				if (!L_475)
				{
					goto IL_0cd5;
				}
			}

IL_0ccc:
			{
				MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_476 = V_87;
				NullCheck(L_476);
				MqttMsgBase_set_DupFlag_m011F8A08A305B8303D5A9FFE75ED09DF45C02F93(L_476, (bool)1, /*hidden argument*/NULL);
			}

IL_0cd5:
			{
			}

IL_0cd6:
			{
				MqttMsgPubrel_t40D522035B157A95EE1D351AACA32B7E3383A980 * L_477 = V_87;
				MqttClient_Send_mFA4C7CBD3A49194B098FDD379B5041A4702F2831(__this, L_477, /*hidden argument*/NULL);
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_478 = __this->get_settings_22();
				NullCheck(L_478);
				int32_t L_479 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_478, /*hidden argument*/NULL);
				int32_t L_480 = V_5;
				if ((((int32_t)L_479) < ((int32_t)L_480)))
				{
					goto IL_0cf2;
				}
			}

IL_0cee:
			{
				int32_t L_481 = V_5;
				G_B234_0 = L_481;
				goto IL_0cfd;
			}

IL_0cf2:
			{
				MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_482 = __this->get_settings_22();
				NullCheck(L_482);
				int32_t L_483 = MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline(L_482, /*hidden argument*/NULL);
				G_B234_0 = L_483;
			}

IL_0cfd:
			{
				V_5 = G_B234_0;
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_484 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_485 = V_0;
				NullCheck(L_484);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_484, L_485, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
			}

IL_0d0d:
			{
				goto IL_0d15;
			}

IL_0d0f:
			{
				goto IL_0d15;
			}

IL_0d11:
			{
				goto IL_0d15;
			}

IL_0d13:
			{
				goto IL_0d15;
			}

IL_0d15:
			{
			}

IL_0d16:
			{
				int32_t L_486 = V_11;
				V_90 = (bool)((((int32_t)L_486) > ((int32_t)0))? 1 : 0);
				bool L_487 = V_90;
				if (L_487)
				{
					goto IL_006e;
				}
			}

IL_0d24:
			{
				int32_t L_488 = V_5;
				V_91 = (bool)((((int32_t)L_488) == ((int32_t)((int32_t)2147483647LL)))? 1 : 0);
				bool L_489 = V_91;
				if (!L_489)
				{
					goto IL_0d36;
				}
			}

IL_0d33:
			{
				V_5 = (-1);
			}

IL_0d36:
			{
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_490 = V_2;
				if (!L_490)
				{
					goto IL_0d40;
				}
			}

IL_0d39:
			{
				bool L_491 = V_7;
				G_B246_0 = ((((int32_t)L_491) == ((int32_t)0))? 1 : 0);
				goto IL_0d41;
			}

IL_0d40:
			{
				G_B246_0 = 0;
			}

IL_0d41:
			{
				V_92 = (bool)G_B246_0;
				bool L_492 = V_92;
				if (!L_492)
				{
					goto IL_0d63;
				}
			}

IL_0d47:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_493 = __this->get_internalQueue_19();
				NullCheck(L_493);
				Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64(L_493, /*hidden argument*/Queue_1_Dequeue_m25C395F6EF2389BF231B1647D547DAF77ECA7B64_RuntimeMethod_var);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_494 = V_2;
				Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(((int32_t)32), _stringLiteralCA79D522F019CE176E26BFF7941CC29B9EDC5535, L_494, /*hidden argument*/NULL);
			}

IL_0d63:
			{
				IL2CPP_LEAVE(0xD73, FINALLY_0d66);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0d66;
		}

FINALLY_0d66:
		{ // begin finally (depth: 2)
			{
				bool L_495 = V_10;
				if (!L_495)
				{
					goto IL_0d72;
				}
			}

IL_0d6a:
			{
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_496 = V_9;
				Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_496, /*hidden argument*/NULL);
			}

IL_0d72:
			{
				IL2CPP_END_FINALLY(3430)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(3430)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xD73, IL_0d73)
		}

IL_0d73:
		{
		}

IL_0d74:
		{
		}

IL_0d75:
		{
			bool L_497 = __this->get_isRunning_2();
			V_93 = L_497;
			bool L_498 = V_93;
			if (L_498)
			{
				goto IL_0018;
			}
		}

IL_0d84:
		{
			goto IL_0dbe;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0d87;
		throw e;
	}

CATCH_0d87:
	{ // begin catch(uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException)
		{
			V_94 = ((MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 *)__exception_local);
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_499 = V_0;
			V_95 = (bool)((!(((RuntimeObject*)(MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)L_499) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_500 = V_95;
			if (!L_500)
			{
				goto IL_0da1;
			}
		}

IL_0d94:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_501 = __this->get_inflightQueue_18();
			MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_502 = V_0;
			NullCheck(L_501);
			Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_501, L_502, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
		}

IL_0da1:
		{
			MqttCommunicationException_t50388D3F0201183159D57E897DFD13FB6FB25059 * L_503 = V_94;
			NullCheck(L_503);
			String_t* L_504 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_503);
			Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37(1, _stringLiteralAB2A0EFB14E859CDA36B10F0DFB1A520824F4047, L_504, /*hidden argument*/NULL);
			MqttClient_OnConnectionClosing_mC7312CEF8A452C5BE59D6ACF089DC38C28CF6FC8(__this, /*hidden argument*/NULL);
			goto IL_0dbe;
		}
	} // end catch (depth: 1)

IL_0dbe:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::RestoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClient_RestoreSession_m8E5C1200B09C7E9045EDA240824FED53C37E182B (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_RestoreSession_m8E5C1200B09C7E9045EDA240824FED53C37E182B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * V_2 = NULL;
	bool V_3 = false;
	Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6  V_4;
	memset((&V_4), 0, sizeof(V_4));
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		bool L_0 = MqttClient_get_CleanSession_m4784D6CD91DFEE26071A488F5EE2CE8A7FB3FE59_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0166;
		}
	}
	{
		MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_2 = __this->get_session_21();
		V_1 = (bool)((!(((RuntimeObject*)(MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0150;
		}
	}
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_4 = __this->get_inflightQueue_18();
		V_2 = L_4;
		V_3 = (bool)0;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_5 = V_2;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_5, (bool*)(&V_3), /*hidden argument*/NULL);
			MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_6 = __this->get_session_21();
			NullCheck(L_6);
			Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_7 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * L_8 = Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4(L_7, /*hidden argument*/Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_RuntimeMethod_var);
			NullCheck(L_8);
			Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6  L_9 = ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0(L_8, /*hidden argument*/ValueCollection_GetEnumerator_m7A12639A28DE8959DC682764BF2582EA59CDAFE0_RuntimeMethod_var);
			V_4 = L_9;
		}

IL_004e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0116;
			}

IL_0053:
			{
				RuntimeObject * L_10 = Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_inline((Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_RuntimeMethod_var);
				V_5 = ((MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)CastclassClass((RuntimeObject*)L_10, MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var));
				Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_11 = __this->get_inflightQueue_18();
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_12 = V_5;
				NullCheck(L_11);
				Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854(L_11, L_12, /*hidden argument*/Queue_1_Enqueue_m5C66F5D4AE6FC24FC593F5518B7FAC3B6B65F854_RuntimeMethod_var);
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_13 = V_5;
				NullCheck(L_13);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_14 = MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline(L_13, /*hidden argument*/NULL);
				NullCheck(L_14);
				uint8_t L_15 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_14, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_15) == ((uint32_t)3))))
				{
					goto IL_008b;
				}
			}

IL_007f:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_16 = V_5;
				NullCheck(L_16);
				int32_t L_17 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_16, /*hidden argument*/NULL);
				G_B8_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				goto IL_008c;
			}

IL_008b:
			{
				G_B8_0 = 0;
			}

IL_008c:
			{
				V_6 = (bool)G_B8_0;
				bool L_18 = V_6;
				if (!L_18)
				{
					goto IL_0115;
				}
			}

IL_0095:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_19 = V_5;
				NullCheck(L_19);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_20 = MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline(L_19, /*hidden argument*/NULL);
				NullCheck(L_20);
				uint8_t L_21 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_20, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_21) == ((uint32_t)1))))
				{
					goto IL_00b1;
				}
			}

IL_00a5:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_22 = V_5;
				NullCheck(L_22);
				int32_t L_23 = MqttMsgContext_get_State_m51D48F950EB3669CB21A2244BAE6C1FB3102F6C4_inline(L_22, /*hidden argument*/NULL);
				G_B12_0 = ((((int32_t)L_23) == ((int32_t)3))? 1 : 0);
				goto IL_00b2;
			}

IL_00b1:
			{
				G_B12_0 = 0;
			}

IL_00b2:
			{
				V_7 = (bool)G_B12_0;
				bool L_24 = V_7;
				if (!L_24)
				{
					goto IL_00c5;
				}
			}

IL_00b8:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_25 = V_5;
				NullCheck(L_25);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_25, 1, /*hidden argument*/NULL);
				goto IL_0114;
			}

IL_00c5:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_26 = V_5;
				NullCheck(L_26);
				MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_27 = MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline(L_26, /*hidden argument*/NULL);
				NullCheck(L_27);
				uint8_t L_28 = MqttMsgBase_get_QosLevel_m842D2B98F3F3B2DE779F41EB2931B946F80BC994(L_27, /*hidden argument*/NULL);
				V_8 = (bool)((((int32_t)L_28) == ((int32_t)2))? 1 : 0);
				bool L_29 = V_8;
				if (!L_29)
				{
					goto IL_0114;
				}
			}

IL_00da:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_30 = V_5;
				NullCheck(L_30);
				int32_t L_31 = MqttMsgContext_get_State_m51D48F950EB3669CB21A2244BAE6C1FB3102F6C4_inline(L_30, /*hidden argument*/NULL);
				V_9 = (bool)((((int32_t)L_31) == ((int32_t)4))? 1 : 0);
				bool L_32 = V_9;
				if (!L_32)
				{
					goto IL_00f8;
				}
			}

IL_00eb:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_33 = V_5;
				NullCheck(L_33);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_33, 2, /*hidden argument*/NULL);
				goto IL_0113;
			}

IL_00f8:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_34 = V_5;
				NullCheck(L_34);
				int32_t L_35 = MqttMsgContext_get_State_m51D48F950EB3669CB21A2244BAE6C1FB3102F6C4_inline(L_34, /*hidden argument*/NULL);
				V_10 = (bool)((((int32_t)L_35) == ((int32_t)6))? 1 : 0);
				bool L_36 = V_10;
				if (!L_36)
				{
					goto IL_0113;
				}
			}

IL_0108:
			{
				MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_37 = V_5;
				NullCheck(L_37);
				MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline(L_37, 8, /*hidden argument*/NULL);
			}

IL_0113:
			{
			}

IL_0114:
			{
			}

IL_0115:
			{
			}

IL_0116:
			{
				bool L_38 = Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93((Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m350743CACD3C814992ECBC0A503B3275F6429F93_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0053;
				}
			}

IL_0122:
			{
				IL2CPP_LEAVE(0x133, FINALLY_0124);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0124;
		}

FINALLY_0124:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0((Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m12F4E079ED28B6FD3BC6A1B509EB6EA604F9CFA0_RuntimeMethod_var);
			IL2CPP_END_FINALLY(292)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(292)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x133, IL_0133)
		}

IL_0133:
		{
			IL2CPP_LEAVE(0x141, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		{
			bool L_39 = V_3;
			if (!L_39)
			{
				goto IL_0140;
			}
		}

IL_0139:
		{
			Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_40 = V_2;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_40, /*hidden argument*/NULL);
		}

IL_0140:
		{
			IL2CPP_END_FINALLY(310)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x141, IL_0141)
	}

IL_0141:
	{
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_41 = __this->get_inflightWaitHandle_4();
		NullCheck(L_41);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_41, /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_0150:
	{
		String_t* L_42 = MqttClient_get_ClientId_m820897E89C80018DBB164E74255B07D70C2309C2_inline(__this, /*hidden argument*/NULL);
		MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_43 = (MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 *)il2cpp_codegen_object_new(MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1_il2cpp_TypeInfo_var);
		MqttClientSession__ctor_m32AF29767DDB0ECB6401044F80710B881DB89EDA(L_43, L_42, /*hidden argument*/NULL);
		__this->set_session_21(L_43);
	}

IL_0163:
	{
		goto IL_0183;
	}

IL_0166:
	{
		MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_44 = __this->get_session_21();
		V_11 = (bool)((!(((RuntimeObject*)(MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 *)L_44) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_0182;
		}
	}
	{
		MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * L_46 = __this->get_session_21();
		NullCheck(L_46);
		VirtActionInvoker0::Invoke(4 /* System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::Clear() */, L_46);
	}

IL_0182:
	{
	}

IL_0183:
	{
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::GetMessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttClient_GetMessageId_mD7F9CF145B639E7C30DE676D48EE2EF4352D0962 (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * G_B2_0 = NULL;
	MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * G_B3_1 = NULL;
	{
		uint16_t L_0 = __this->get_messageIdCounter_23();
		G_B1_0 = __this;
		if (((int32_t)((int32_t)L_0%(int32_t)((int32_t)65535))))
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0013:
	{
		uint16_t L_1 = __this->get_messageIdCounter_23();
		G_B3_0 = (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))));
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_messageIdCounter_23((uint16_t)G_B3_0);
		uint16_t L_2 = __this->get_messageIdCounter_23();
		V_0 = L_2;
		goto IL_002a;
	}

IL_002a:
	{
		uint16_t L_3 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionClosedEventHandler__ctor_mF5CD9E1BC836702BDB667575C2A2E9C6E8039E88 (ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionClosedEventHandler_Invoke_m348A7A22C77D47E87A02A82838E6E900E1CEBAB9 (ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionClosedEventHandler_BeginInvoke_mD8F440CADDFCDB6B6E8DCC57B70BE73A29264980 (ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionClosedEventHandler_EndInvoke_m02602E89B0956102885853061B977AFC4B9E22F4 (ConnectionClosedEventHandler_t4C96DDD75F8266F817FFF90CDC5F7BD3334BF2CD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgContextFinder_get_MessageId_m3FA2A8F9C32F17F9571A91B1C7ED03285BBB411E (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_MessageId_m413A685FAE9683D4988BDEB84E80FD7EFF8A6D6A (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_Flow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContextFinder_get_Flow_m05D9E2BC5E55F915219C754AAD1CB0734B75612D (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_Flow_mE9D9AB4A43305E0654EBA7DAE4A782FA005015E9 (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::.ctor(System.UInt16,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContextFinder__ctor_mE579211DCABC287B83369A2E6C1F77BE3C8AC73B (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, uint16_t ___messageId0, int32_t ___flow1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		MqttMsgContextFinder_set_MessageId_m413A685FAE9683D4988BDEB84E80FD7EFF8A6D6A_inline(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___flow1;
		MqttMsgContextFinder_set_Flow_mE9D9AB4A43305E0654EBA7DAE4A782FA005015E9_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::Find(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgContextFinder_Find_m2E7DD00372528814D268939E403DCA7B3C15F09A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		V_0 = ((MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 *)CastclassClass((RuntimeObject*)L_0, MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8_il2cpp_TypeInfo_var));
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_1 = V_0;
		NullCheck(L_1);
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_2 = MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint8_t L_3 = MqttMsgBase_get_Type_mBDDEFAD9D303E41BA767B572FF3C910ADD4D7A02(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0039;
		}
	}
	{
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_4 = V_0;
		NullCheck(L_4);
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_5 = MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint16_t L_6 = MqttMsgBase_get_MessageId_m2A0F529B71FC98AE2D3ED23B969E89D0DB13E9DE(L_5, /*hidden argument*/NULL);
		uint16_t L_7 = MqttMsgContextFinder_get_MessageId_m3FA2A8F9C32F17F9571A91B1C7ED03285BBB411E_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = MqttMsgContextFinder_get_Flow_m05D9E2BC5E55F915219C754AAD1CB0734B75612D_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = 0;
	}

IL_003a:
	{
		V_1 = (bool)G_B4_0;
		goto IL_003d;
	}

IL_003d:
	{
		bool L_11 = V_1;
		return L_11;
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventHandler__ctor_m61665F00F9292C3D0F66D774ECC2C1118512F235 (MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventHandler_Invoke_m388FC922AB3D4B5AE5B38F6183E9643FC2C763C9 (MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgPublishEventHandler_BeginInvoke_m6B4976785FA56B0359F145B8015C04F59D1B5E4E (MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t75E8E58CD5C4BEB7DAE376975052D5B367842614 * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventHandler_EndInvoke_m4817C8BF51E77D37A329049EF755FAFDF6DBAB53 (MqttMsgPublishEventHandler_t0A2CBC82782C3F7A49978965CE7929E7EA5CAC5A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventHandler__ctor_mB7EE49800AB3F856375D64D988E2E7FE6402CF47 (MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventHandler_Invoke_mB93376E00DC68FE03ED697A923FEF96359C0A7E8 (MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgPublishedEventHandler_BeginInvoke_m68726E6C75FE068112C1A662A9B437EF148B378F (MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_tFB75D4237E6E0DFB6D8C559F484D82F0ECEE3990 * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventHandler_EndInvoke_m2BCF5B0DD61AE46BE590CED78684BD7609BADF51 (MqttMsgPublishedEventHandler_t840C4AA7870A6DCB1EAF3AE0D8CE852AEE110B48 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventHandler__ctor_mBF712B1968780307F95F38A32D9EC1C1E048EF16 (MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventHandler_Invoke_m1DC5242B1AA9604623532514379DD8CF391128D1 (MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgSubscribedEventHandler_BeginInvoke_mB27173355533B6C22791DF9718FAF572E5AA2FFE (MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_tA2D9C45026AB0E3C12CE11F3FFCADB3BC3A6EFB6 * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventHandler_EndInvoke_mEBA83470B1F106635218477494D994CE8366FA9B (MqttMsgSubscribedEventHandler_t0D4EA5DA8664506B31C5CDC126CA9CC883B4AABD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventHandler__ctor_m54A03BB062A934CD4F3744BD98C58D6FA41DCC4E (MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventHandler_Invoke_mC16FAC7804CABE42CF8DB89DEFFC5FE12260B080 (MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgUnsubscribedEventHandler_BeginInvoke_mD044E1CBFC7FBF8ECB73D5701F089022FC0D6847 (MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t52F2816C16C96C633E2156565A81C6D8D88A4DAA * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventHandler_EndInvoke_mE3D348D618CBAFBB95B75CEC3F2F9305A1593A07 (MqttMsgUnsubscribedEventHandler_tCF29263A8216800B9E3CD6302C6D0B1897F8E33E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32,System.Boolean,uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m24D1A7F40282B4E8CA7EE85E2BF21A99BAD12B68 (MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 * __this, String_t* ___remoteHostName0, int32_t ___remotePort1, bool ___secure2, int32_t ___sslProtocol3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttNetworkChannel__ctor_m24D1A7F40282B4E8CA7EE85E2BF21A99BAD12B68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___remoteHostName0;
		HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F * L_1 = (HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F *)il2cpp_codegen_object_new(HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F_il2cpp_TypeInfo_var);
		HostName__ctor_m2C9D18527DA0F7B9FC84DCE65EC631C4B1352391(L_1, L_0, /*hidden argument*/NULL);
		__this->set_remoteHostName_1(L_1);
		int32_t L_2 = ___remotePort1;
		__this->set_remotePort_2(L_2);
		bool L_3 = ___secure2;
		__this->set_secure_3(L_3);
		int32_t L_4 = ___sslProtocol3;
		__this->set_sslProtocol_4(L_4);
		bool L_5 = ___secure2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = ___sslProtocol3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, _stringLiteral74D3F4220E7636C164132B5992171318C76316CA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, MqttNetworkChannel__ctor_m24D1A7F40282B4E8CA7EE85E2BF21A99BAD12B68_RuntimeMethod_var);
	}

IL_0044:
	{
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Receive_mB4A99FA0224D71B236AD993A7CB4DE5D04257988 (MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttNetworkChannel_Receive_mB4A99FA0224D71B236AD993A7CB4DE5D04257988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_1 = 0;
		goto IL_0046;
	}

IL_0005:
	{
		StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * L_0 = __this->get_socket_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = StreamSocket_get_InputStream_m6D57EC16F8F6972471B13E4DDE0FC8AE2BF134C1(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		RuntimeObject* L_3 = WindowsRuntimeBufferExtensions_AsBuffer_mF47A7B4DC12145BA5E560C9FDA9298D3B7CC2551(L_2, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___buffer0;
		NullCheck(L_4);
		NullCheck(L_1);
		RuntimeObject* L_5 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_t9A06904D0534FEFA9174E580FCA59EDA460E6C6E_il2cpp_TypeInfo_var, L_1, L_3, (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), 0);
		Task_1_t4657CAC4312043C0D7F80DB11C11289050310679 * L_6 = WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mFFEA2D4C8F27E2B53983646F6D1ADD9BC6878015(L_5, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mFFEA2D4C8F27E2B53983646F6D1ADD9BC6878015_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7 = Task_1_get_Result_mBFFAF1B85C42E7C3665B62C4BC37D3E06F3686C1(L_6, /*hidden argument*/Task_1_get_Result_mBFFAF1B85C42E7C3665B62C4BC37D3E06F3686C1_RuntimeMethod_var);
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		uint32_t L_9 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377_il2cpp_TypeInfo_var, L_8);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = 0;
		goto IL_0058;
	}

IL_003c:
	{
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		uint32_t L_13 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t83F9F472A52B669A9C0A73804881D1BFC3C05377_il2cpp_TypeInfo_var, L_12);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_13));
	}

IL_0046:
	{
		int32_t L_14 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___buffer0;
		NullCheck(L_15);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___buffer0;
		NullCheck(L_17);
		V_3 = (((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))));
		goto IL_0058;
	}

IL_0058:
	{
		int32_t L_18 = V_3;
		return L_18;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Send_m496C24B2B6E607D23D89042FE5D63315AC57BAED (MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttNetworkChannel_Send_m496C24B2B6E607D23D89042FE5D63315AC57BAED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * L_0 = __this->get_socket_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = StreamSocket_get_OutputStream_m055F0C4768D50C1D7F6E7DCE03B478083E2C1A69(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		RuntimeObject* L_3 = WindowsRuntimeBufferExtensions_AsBuffer_mF47A7B4DC12145BA5E560C9FDA9298D3B7CC2551(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_tDDEC725E2EE24D9CB5CF43B540772BFAB27E5AB4_il2cpp_TypeInfo_var, L_1, L_3);
		Task_1_t921824CC35589352AE27EF8A81E6EA7CB6A78F3B * L_5 = WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m303C42B69861E8F874A1086F0E9BACC368281BE4(L_4, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m303C42B69861E8F874A1086F0E9BACC368281BE4_RuntimeMethod_var);
		NullCheck(L_5);
		uint32_t L_6 = Task_1_get_Result_m091D5538C08715B3F562F7D158F609AD0F84AC8F(L_5, /*hidden argument*/Task_1_get_Result_m091D5538C08715B3F562F7D158F609AD0F84AC8F_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Close_mA5833D818477B82A185A1553785D04D8F8D69FAD (MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 * __this, const RuntimeMethod* method)
{
	{
		StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * L_0 = __this->get_socket_0();
		NullCheck(L_0);
		StreamSocket_Dispose_mD07871833F7EE46B03E591A46EF500843CFEE86B(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Connect_m82D279820FC9F12F75C6E0D7C44638A5E72510ED (MqttNetworkChannel_tC8535398FFFBDDC4899812A55AD99B12D061B040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttNetworkChannel_Connect_m82D279820FC9F12F75C6E0D7C44638A5E72510ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * L_0 = (StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA *)il2cpp_codegen_object_new(StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA_il2cpp_TypeInfo_var);
		StreamSocket__ctor_mF1ACAD5EC6D7F47D3BE814F07A9F3B6B48A1D517(L_0, /*hidden argument*/NULL);
		__this->set_socket_0(L_0);
		StreamSocket_t35DDC5E485B0CBC2BF8BEA1F9348DE7382B929BA * L_1 = __this->get_socket_0();
		HostName_tDD37407B091F8A365D9C09F55E6F4D488358064F * L_2 = __this->get_remoteHostName_1();
		int32_t* L_3 = __this->get_address_of_remotePort_2();
		String_t* L_4 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_sslProtocol_4();
		int32_t L_6 = MqttSslUtility_ToSslPlatformEnum_m49D1D11E011BD2F69B8794B36CDC872DDA0B84FB(L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_7 = StreamSocket_ConnectAsync_m176DA55D207F6B7611848E92B3C3ACD7A51F264A(L_1, L_2, L_4, L_6, /*hidden argument*/NULL);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = WindowsRuntimeSystemExtensions_AsTask_m5D87CC8E008C9C3A4DC66F6BD108691CF8119ED1(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Task_Wait_m7793234C16E5D2B719519CE3C55653EA4D1A815A(L_8, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_Port_mF755AF7B90B1C33AAFC396DC2CB79CF511679E88 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPortU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_SslPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_SslPort_m82BF23296FFE370CCFC034ECC24D54F61F3E08A0 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSslPortU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnConnection_m103307672646682FA045421AEDA4DF1B91660F5D (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnConnectionU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnReceiving(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnReceiving_mCA4DF462EBBE272C32044A421AB783840656E86C (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnReceivingU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_AttemptsOnRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_AttemptsOnRetry_m8CAF4C4E2A558901AF6F2FF0FC681FD8F8C5C5DB (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttemptsOnRetryU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_AttemptsOnRetry(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_AttemptsOnRetry_m50DDE673ED98BC1B1B4C00E64E944A3375A8F726 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptsOnRetryU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_DelayOnRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDelayOnRetryU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_DelayOnRetry(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_DelayOnRetry_mB9A6F6381323D731DA159CF8B4D5E409612CDB99 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDelayOnRetryU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_InflightQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_InflightQueueSize_m30D0D72A080B36EA22B38D37455299111FCE943B (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CInflightQueueSizeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_InflightQueueSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_InflightQueueSize_mD06733C0C7701FCEF60C6688BC5771309F09C4E1 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInflightQueueSizeU3Ek__BackingField_13(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * MqttSettings_get_Instance_m75C912F1E61B2468D88322A81A22F1C3DBB26177 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSettings_get_Instance_m75C912F1E61B2468D88322A81A22F1C3DBB26177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * V_1 = NULL;
	{
		MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_0 = ((MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_il2cpp_TypeInfo_var))->get_instance_14();
		V_0 = (bool)((((RuntimeObject*)(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_2 = (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D *)il2cpp_codegen_object_new(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_il2cpp_TypeInfo_var);
		MqttSettings__ctor_m54CD660DFF5BB82EE00B83FA54D56799B91E2EC6(L_2, /*hidden argument*/NULL);
		((MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_il2cpp_TypeInfo_var))->set_instance_14(L_2);
	}

IL_0017:
	{
		MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_3 = ((MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D_il2cpp_TypeInfo_var))->get_instance_14();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * L_4 = V_1;
		return L_4;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings__ctor_m54CD660DFF5BB82EE00B83FA54D56799B91E2EC6 (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		MqttSettings_set_Port_mF755AF7B90B1C33AAFC396DC2CB79CF511679E88_inline(__this, ((int32_t)1883), /*hidden argument*/NULL);
		MqttSettings_set_SslPort_m82BF23296FFE370CCFC034ECC24D54F61F3E08A0_inline(__this, ((int32_t)8883), /*hidden argument*/NULL);
		MqttSettings_set_TimeoutOnReceiving_mCA4DF462EBBE272C32044A421AB783840656E86C_inline(__this, ((int32_t)30000), /*hidden argument*/NULL);
		MqttSettings_set_AttemptsOnRetry_m50DDE673ED98BC1B1B4C00E64E944A3375A8F726_inline(__this, 3, /*hidden argument*/NULL);
		MqttSettings_set_DelayOnRetry_mB9A6F6381323D731DA159CF8B4D5E409612CDB99_inline(__this, ((int32_t)10000), /*hidden argument*/NULL);
		MqttSettings_set_TimeoutOnConnection_m103307672646682FA045421AEDA4DF1B91660F5D_inline(__this, ((int32_t)30000), /*hidden argument*/NULL);
		MqttSettings_set_InflightQueueSize_mD06733C0C7701FCEF60C6688BC5771309F09C4E1_inline(__this, ((int32_t)2147483647LL), /*hidden argument*/NULL);
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
// Windows.Networking.Sockets.SocketProtectionLevel uPLibrary.Networking.M2Mqtt.MqttSslUtility::ToSslPlatformEnum(uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSslUtility_ToSslPlatformEnum_m49D1D11E011BD2F69B8794B36CDC872DDA0B84FB (int32_t ___mqttSslProtocol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSslUtility_ToSslPlatformEnum_m49D1D11E011BD2F69B8794B36CDC872DDA0B84FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___mqttSslProtocol0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_002b;
			}
			case 4:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0033;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_003e;
	}

IL_0023:
	{
		V_1 = 2;
		goto IL_003e;
	}

IL_0027:
	{
		V_1 = 6;
		goto IL_003e;
	}

IL_002b:
	{
		V_1 = 7;
		goto IL_003e;
	}

IL_002f:
	{
		V_1 = 8;
		goto IL_003e;
	}

IL_0033:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteral5F57DEFD51B4090CA6A76A47CCBEDD11D7001F71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, MqttSslUtility_ToSslPlatformEnum_m49D1D11E011BD2F69B8794B36CDC872DDA0B84FB_RuntimeMethod_var);
	}

IL_003e:
	{
		int32_t L_3 = V_1;
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
// System.Void uPLibrary.Networking.M2Mqtt.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_m81695AF2DBEDBC014C13129CF91328AE3368EA50 (Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue__ctor_m81695AF2DBEDBC014C13129CF91328AE3368EA50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1__ctor_mFA6355FC0178C913F2940603749F7BD0C9307830(__this, /*hidden argument*/Queue_1__ctor_mFA6355FC0178C913F2940603749F7BD0C9307830_RuntimeMethod_var);
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
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttClientSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientSession__ctor_m32AF29767DDB0ECB6401044F80710B881DB89EDA (MqttClientSession_t446A0C7DAFE391890BEDBFD6FE47FE0E809383E1 * __this, String_t* ___clientId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clientId0;
		MqttSession__ctor_m2E4965489DEB1EE612F5A9E0BBEF47FAAF2C5223(__this, L_0, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_ClientId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mF7F64E538F9B1FB6D7C55A4321049DDF61154746 (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CClientIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_InflightMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851 (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_0 = __this->get_U3CInflightMessagesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_InflightMessages(uPLibrary.Networking.M2Mqtt.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_m1A30E75C47F3B2DE5BCA1F0C63C36BB9A8E9FCCE (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * ___value0, const RuntimeMethod* method)
{
	{
		Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_0 = ___value0;
		__this->set_U3CInflightMessagesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_m2E4965489DEB1EE612F5A9E0BBEF47FAAF2C5223 (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, String_t* ___clientId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSession__ctor_m2E4965489DEB1EE612F5A9E0BBEF47FAAF2C5223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___clientId0;
		MqttSession_set_ClientId_mF7F64E538F9B1FB6D7C55A4321049DDF61154746_inline(__this, L_0, /*hidden argument*/NULL);
		Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_1 = (Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C *)il2cpp_codegen_object_new(Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C_il2cpp_TypeInfo_var);
		Hashtable__ctor_m83867C848534182C5FA003266CEB5D7EF7073F42(L_1, /*hidden argument*/NULL);
		MqttSession_set_InflightMessages_m1A30E75C47F3B2DE5BCA1F0C63C36BB9A8E9FCCE_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_Clear_mD052AAED74E43111244BA02AB87E81F0EDD52860 (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSession_Clear_mD052AAED74E43111244BA02AB87E81F0EDD52860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttSession_set_ClientId_mF7F64E538F9B1FB6D7C55A4321049DDF61154746_inline(__this, (String_t*)NULL, /*hidden argument*/NULL);
		Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_0 = MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Clear_mE02BFDCC216784E4CB370443AA386A7DF9BFD465(L_0, /*hidden argument*/Dictionary_2_Clear_mE02BFDCC216784E4CB370443AA386A7DF9BFD465_RuntimeMethod_var);
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
// System.Object uPLibrary.Networking.M2Mqtt.Utility.QueueExtension::Get(uPLibrary.Networking.M2Mqtt.Queue,uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117 (Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * ___queue0, QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueueExtension_Get_mD0DFBACDD2903EBD254F095F102C34AFC36ED117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Queue_t299C9DA19A80134AF4F87FE88E0D5E6B72A25D07 * L_0 = ___queue0;
		NullCheck(L_0);
		Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948  L_1 = Queue_1_GetEnumerator_mCFFC4079D7CA48A9669867C3CC1A484D85B3B609(L_0, /*hidden argument*/Queue_1_GetEnumerator_mCFFC4079D7CA48A9669867C3CC1A484D85B3B609_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_000b:
		{
			RuntimeObject * L_2 = Enumerator_get_Current_mB68F444669F259E330FBE79E3B57652D764E22AC((Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB68F444669F259E330FBE79E3B57652D764E22AC_RuntimeMethod_var);
			V_1 = L_2;
			QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * L_3 = ___predicate1;
			RuntimeObject * L_4 = V_1;
			NullCheck(L_3);
			bool L_5 = QueuePredicate_Invoke_mCF9FD63422456DD0807EF45C1A4079EDB88E80DC(L_3, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0023;
			}
		}

IL_001f:
		{
			RuntimeObject * L_7 = V_1;
			V_3 = L_7;
			IL2CPP_LEAVE(0x42, FINALLY_002f);
		}

IL_0023:
		{
		}

IL_0024:
		{
			bool L_8 = Enumerator_MoveNext_m67773E2CDA02DDA7E2E11CE6D9D8D0E99264D74D((Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m67773E2CDA02DDA7E2E11CE6D9D8D0E99264D74D_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000b;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m132E7FA21C23D2EA073E3D2517294064BCE63113((Enumerator_tF5273EFC455C89E07B3F21D622322563A1F44948 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m132E7FA21C23D2EA073E3D2517294064BCE63113_RuntimeMethod_var);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		V_3 = NULL;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject * L_9 = V_3;
		return L_9;
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
// System.Void uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuePredicate__ctor_m97BA408280C913C9C050A31247F9B4A1E054489F (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_Invoke_mCF9FD63422456DD0807EF45C1A4079EDB88E80DC (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___item0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___item0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___item0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___item0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___item0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___item0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___item0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___item0);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___item0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___item0);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___item0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___item0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___item0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___item0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueuePredicate_BeginInvoke_mBED5E1C6599C6EC82019D0ECC12DE7F3554018FB (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * __this, RuntimeObject * ___item0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_EndInvoke_mF7734283CA8F337FBF48AA5C53A8811849B11EA8 (QueuePredicate_t25B6F609A2C11E62ACE58D0CC3A4C487EF4CF54A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37 (int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m54FB82985239D9F7B69683542932838E15C0AD37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * L_0 = ((Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) > ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * L_4 = ((Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_tDBB10A10DCF7819704BCA0ECB4299AE70880406D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_5 = ___format1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		RuntimeObject * L_8 = ___arg12;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		WriteTrace_Invoke_mB08E82C821DFB32DE04C26D1BA4F1E3AC5876478(L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_0031:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace__ctor_mB84142F988F3DB42112C1FA1497CBE6CB11F6364 (WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_Invoke_mB08E82C821DFB32DE04C26D1BA4F1E3AC5876478 (WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___format0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___format0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___format0, ___args1);
					else
						GenericVirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___format0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___format0, ___args1);
					else
						VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___format0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___args1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___format0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___format0, ___args1);
					else
						GenericVirtActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___format0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___format0, ___args1);
					else
						VirtActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___format0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___format0) - 1), ___args1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___format0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___format0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::BeginInvoke(System.String,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteTrace_BeginInvoke_m1EC08D41F0DB05DD7ED0CC3ACA83AD0E1975AA29 (WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___format0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_EndInvoke_mC2C3D5977471BB00EBA2AB0C37032CCBA1DE6C7A (WriteTrace_t513108CBA4E466415717F9786DE52821FD8D9FA4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * Task_get_Factory_m31F1298E08390A4AD46B85AB060F1FAD4CE12112_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_get_Factory_m31F1298E08390A4AD46B85AB060F1FAD4CE12112M2Mqtt_WinRT_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * L_0 = ((Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields*)il2cpp_codegen_static_fields_for(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var))->get_s_factory_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_mBC963756A3A9C139F366F8E06783F2D28380184C_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * MqttMsgContext_get_Message_m340701A6BF26C36BAC4FE900D7B15784D2A3AB72_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = __this->get_U3CMessageU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_ProtocolVersion_m080FFA550CA921E8B3A892E0D52F30A8E7D4DE9D_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CProtocolVersionU3Ek__BackingField_32(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_Port_mF755AF7B90B1C33AAFC396DC2CB79CF511679E88_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPortU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_SslPort_m82BF23296FFE370CCFC034ECC24D54F61F3E08A0_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSslPortU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttClient_get_ProtocolVersion_m93EF859121BB5FF2A8CDFB1881BB77950562F700_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CProtocolVersionU3Ek__BackingField_32();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_ClientId_m856056B538AE64E54B84F85C790582D386CCD48E_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CClientIdU3Ek__BackingField_26(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_CleanSession_m69E5A7723A0033DFECF986E053108C6018715047_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CCleanSessionU3Ek__BackingField_27(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillFlag_m9F5EC224C78D5DDF0A6AD4077C4B4234755C668F_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CWillFlagU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillTopic_m9F63D1704C6D13B987AB4DFC5C2C81B43B645ADB_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CWillTopicU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillMessage_m0317519AEAE905A27DB0C96268ABCC87BE9BC701_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CWillMessageU3Ek__BackingField_31(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_WillQosLevel_m7BD45F9D9FB55749BF79DAB5C49012FAB5CAF918_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CWillQosLevelU3Ek__BackingField_29(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttClient_set_IsConnected_m43BDCC1E91750D9DF5AF2C3F4F9131F719F65EFC_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsConnectedU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_State_mA826D139617CCFFC9BEAFBD388A42133DC67393C_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Flow_mC1CF39851B758CB60B8BFA0127FFE587F29EAB93_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Message_m1F2C1AA3EF595E7CFCD756A41798C64B080336A0_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * ___value0, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t6A7C48290592C51A5B9162A03F0FB79491EE4E09 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Attempt_m2550CD36A8F3D01083EB9522C0EB0340E87B6F2B_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttSettings_get_InflightQueueSize_m30D0D72A080B36EA22B38D37455299111FCE943B_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CInflightQueueSizeU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * MqttSession_get_InflightMessages_mBEFB6BA4D95A15179CE098336D7109C368A71851_inline (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_0 = __this->get_U3CInflightMessagesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_State_m51D48F950EB3669CB21A2244BAE6C1FB3102F6C4_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContext_set_Timestamp_mD2016AB6AE5374AB9AD90E192FA574290D2450E3_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Attempt_m4787A2942927C9BD398F5EFEF75266F716923648_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttemptU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttSettings_get_DelayOnRetry_m9BB675DBCB25355C1D72251B7D65AFC22E3B2005_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDelayOnRetryU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Timestamp_m5F07CAA9F0C842F6E90330C86099EB36DF5468ED_inline (MqttMsgContext_t63F58B7ADFA96684E728363FAA426BFE854F84C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimestampU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttSettings_get_AttemptsOnRetry_m8CAF4C4E2A558901AF6F2FF0FC681FD8F8C5C5DB_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttemptsOnRetryU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MqttClient_get_CleanSession_m4784D6CD91DFEE26071A488F5EE2CE8A7FB3FE59_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CCleanSessionU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MqttClient_get_ClientId_m820897E89C80018DBB164E74255B07D70C2309C2_inline (MqttClient_t5FFC2DF6E05C317A722C462513413A41F38A9F48 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CClientIdU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_MessageId_m413A685FAE9683D4988BDEB84E80FD7EFF8A6D6A_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_Flow_mE9D9AB4A43305E0654EBA7DAE4A782FA005015E9_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t MqttMsgContextFinder_get_MessageId_m3FA2A8F9C32F17F9571A91B1C7ED03285BBB411E_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContextFinder_get_Flow_m05D9E2BC5E55F915219C754AAD1CB0734B75612D_inline (MqttMsgContextFinder_t3E9324F7759EE59A7540E6EC77CD78A2645C624E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnReceiving_mCA4DF462EBBE272C32044A421AB783840656E86C_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnReceivingU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_AttemptsOnRetry_m50DDE673ED98BC1B1B4C00E64E944A3375A8F726_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptsOnRetryU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_DelayOnRetry_mB9A6F6381323D731DA159CF8B4D5E409612CDB99_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDelayOnRetryU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnConnection_m103307672646682FA045421AEDA4DF1B91660F5D_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnConnectionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_InflightQueueSize_mD06733C0C7701FCEF60C6688BC5771309F09C4E1_inline (MqttSettings_t616B6D7A35F88CB21ECB2FD29EF8A26CA34A542D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInflightQueueSizeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mF7F64E538F9B1FB6D7C55A4321049DDF61154746_inline (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CClientIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_m1A30E75C47F3B2DE5BCA1F0C63C36BB9A8E9FCCE_inline (MqttSession_t7E75A315E3AA995867A55BBD325382B4FD18DDD8 * __this, Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * ___value0, const RuntimeMethod* method)
{
	{
		Hashtable_t0BB37789D24A3CD4EFA4F1663ED774678C9CBF4C * L_0 = ___value0;
		__this->set_U3CInflightMessagesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mB96407BDC46B8C141F324B2F30F3B288007DE769_gshared_inline (Queue_1_t6B103D553DF84276B052D65E7D6FD48A90060917 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m29EC6C6EB1047528546CB514A575C8C4EFA48E1C_gshared_inline (Enumerator_tB5076FB1730C18188DBB208FD1B6870FC5A660E6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
