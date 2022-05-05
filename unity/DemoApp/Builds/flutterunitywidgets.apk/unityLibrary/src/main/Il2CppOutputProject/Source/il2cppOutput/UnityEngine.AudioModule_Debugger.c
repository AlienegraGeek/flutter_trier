#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[27] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0 } /* 0x06000005 System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x06000014 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x06000016 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000017 System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[125] = 
{
	{ 36846, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 36846, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 36846, 1, 343, 343, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 36846, 1, 344, 344, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 36846, 1, 344, 344, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 36846, 1, 345, 345, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 36846, 1, 345, 345, 17, 63, 19, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 36846, 1, 346, 346, 9, 10, 25, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 36847, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 36847, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 36847, 1, 350, 350, 16, 51, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 36847, 1, 350, 350, 16, 51, 11, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 36848, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 36848, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 36848, 1, 354, 354, 16, 48, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 36848, 1, 354, 354, 16, 48, 11, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 36853, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 36853, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 36853, 1, 379, 379, 17, 21, 0, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 36854, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 36854, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 36854, 1, 380, 380, 17, 29, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 36855, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 36855, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 36855, 1, 387, 387, 17, 18, 0, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 36855, 1, 388, 388, 21, 51, 1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 36855, 1, 389, 389, 17, 18, 9, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 36856, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 36856, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 36856, 1, 412, 412, 13, 14, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 36856, 1, 413, 413, 17, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 36856, 1, 413, 413, 17, 39, 2, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 36856, 1, 413, 413, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 36856, 1, 414, 414, 17, 18, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 36856, 1, 415, 415, 21, 38, 17, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 36856, 1, 415, 415, 21, 38, 18, kSequencePointKind_StepOut, 0, 35 } /* seqPointIndex: 35 */,
	{ 36856, 1, 416, 416, 21, 47, 24, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 36856, 1, 416, 416, 21, 47, 24, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 36856, 1, 416, 416, 0, 0, 30, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 36856, 1, 417, 417, 21, 22, 33, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 36856, 1, 418, 418, 25, 39, 34, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 36856, 1, 418, 418, 25, 39, 34, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 36856, 1, 418, 418, 0, 0, 40, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 36856, 1, 419, 419, 29, 47, 43, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 36856, 1, 419, 419, 29, 47, 43, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 36856, 1, 419, 419, 0, 0, 49, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 36856, 1, 421, 421, 29, 48, 51, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 36856, 1, 421, 421, 29, 48, 51, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 36856, 1, 422, 422, 21, 22, 57, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 36856, 1, 423, 423, 21, 52, 58, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 36856, 1, 423, 423, 0, 0, 67, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 36856, 1, 424, 424, 25, 50, 70, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 36856, 1, 424, 424, 25, 50, 76, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 36856, 1, 425, 425, 17, 18, 82, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 36856, 1, 426, 426, 13, 14, 83, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 36857, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 36857, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 36857, 1, 429, 429, 13, 14, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 36857, 1, 430, 430, 17, 50, 1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 36857, 1, 430, 430, 17, 50, 1, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 36857, 1, 431, 431, 13, 14, 7, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 36858, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 36858, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 36858, 1, 434, 434, 13, 14, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 36858, 1, 435, 435, 17, 49, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 36858, 1, 435, 435, 17, 49, 1, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 36858, 1, 436, 436, 13, 14, 7, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 36859, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 36859, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 36859, 1, 626, 626, 9, 10, 0, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 36859, 1, 627, 627, 13, 45, 1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 36859, 1, 627, 627, 0, 0, 11, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 36859, 1, 628, 628, 17, 43, 14, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 36859, 1, 628, 628, 17, 43, 21, kSequencePointKind_StepOut, 0, 73 } /* seqPointIndex: 73 */,
	{ 36859, 1, 629, 629, 9, 10, 27, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 36860, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 36860, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 36860, 1, 633, 633, 9, 10, 0, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 36860, 1, 634, 634, 13, 50, 1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 36860, 1, 634, 634, 0, 0, 11, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 36860, 1, 635, 635, 17, 52, 14, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 36860, 1, 635, 635, 17, 52, 21, kSequencePointKind_StepOut, 0, 81 } /* seqPointIndex: 81 */,
	{ 36860, 1, 636, 636, 9, 10, 27, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 36865, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 36865, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 36865, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 36865, 2, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 36865, 2, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 36866, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 36866, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 36866, 2, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 36866, 2, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 36866, 2, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 36866, 2, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 36866, 2, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 36866, 2, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 36867, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 36867, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 36867, 3, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 36867, 3, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 36867, 3, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 36868, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 36868, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 36868, 3, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 36868, 3, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 36868, 3, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 105 } /* seqPointIndex: 105 */,
	{ 36868, 3, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 106 } /* seqPointIndex: 106 */,
	{ 36868, 3, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 107 } /* seqPointIndex: 107 */,
	{ 36868, 3, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 36869, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 36869, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 36869, 4, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 36869, 4, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 36869, 4, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 36869, 4, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 36869, 4, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 36869, 4, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 36870, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 36870, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 36870, 4, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 36870, 4, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 36870, 4, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 36870, 4, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 36870, 4, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 36870, 4, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/Audio.bindings.cs", { 167, 2, 22, 70, 58, 2, 209, 216, 91, 16, 131, 31, 57, 29, 102, 133} }, //1 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.cs", { 136, 110, 11, 239, 4, 37, 180, 165, 136, 112, 116, 151, 134, 78, 48, 235} }, //2 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //3 
{ "/Users/bokken/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[6] = 
{
	{ 5256, 1 },
	{ 5255, 1 },
	{ 5259, 1 },
	{ 5262, 2 },
	{ 5263, 3 },
	{ 5266, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 26 },
	{ 0, 11 },
	{ 0, 84 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[27] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 11, 1, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 84, 2, 1 } /* System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 28, 3, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 4, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 12, 5, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 6, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 7, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 8, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 9, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 10, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	125,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	6,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
