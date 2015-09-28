// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#ifdef SKIP_STATIC_CONSTRUCTORS_ON_GCC
#define EVENT_TARGET_NAMES_HIDE_GLOBALS 1
#endif

#include "EventTargetModulesNames.h"

#include "wtf/StaticConstructors.h"

namespace blink {
namespace EventTargetNames {

using namespace WTF;

DEFINE_GLOBAL(AtomicString, BatteryManager)
DEFINE_GLOBAL(AtomicString, MediaKeySession)
DEFINE_GLOBAL(AtomicString, FileWriter)
DEFINE_GLOBAL(AtomicString, IDBDatabase)
DEFINE_GLOBAL(AtomicString, IDBOpenDBRequest)
DEFINE_GLOBAL(AtomicString, IDBRequest)
DEFINE_GLOBAL(AtomicString, IDBTransaction)
DEFINE_GLOBAL(AtomicString, MediaSource)
DEFINE_GLOBAL(AtomicString, SourceBuffer)
DEFINE_GLOBAL(AtomicString, SourceBufferList)
DEFINE_GLOBAL(AtomicString, MediaStream)
DEFINE_GLOBAL(AtomicString, MediaStreamTrack)
DEFINE_GLOBAL(AtomicString, RTCDTMFSender)
DEFINE_GLOBAL(AtomicString, RTCDataChannel)
DEFINE_GLOBAL(AtomicString, RTCPeerConnection)
DEFINE_GLOBAL(AtomicString, NetworkInformation)
DEFINE_GLOBAL(AtomicString, Notification)
DEFINE_GLOBAL(AtomicString, ServiceWorker)
DEFINE_GLOBAL(AtomicString, ServiceWorkerGlobalScope)
DEFINE_GLOBAL(AtomicString, SpeechRecognition)
DEFINE_GLOBAL(AtomicString, SpeechSynthesis)
DEFINE_GLOBAL(AtomicString, SpeechSynthesisUtterance)
DEFINE_GLOBAL(AtomicString, MIDIAccess)
DEFINE_GLOBAL(AtomicString, MIDIInput)
DEFINE_GLOBAL(AtomicString, MIDIPort)
DEFINE_GLOBAL(AtomicString, WebSocket)
#if ENABLE(WEB_AUDIO)
DEFINE_GLOBAL(AtomicString, AudioContext)
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
DEFINE_GLOBAL(AtomicString, AudioNode)
#endif // ENABLE(WEB_AUDIO)

void initModules()
{
    StringImpl* BatteryManagerImpl = StringImpl::createStatic("BatteryManager", 14, 5049459);
    StringImpl* MediaKeySessionImpl = StringImpl::createStatic("MediaKeySession", 15, 1701501);
    StringImpl* FileWriterImpl = StringImpl::createStatic("FileWriter", 10, 15152482);
    StringImpl* IDBDatabaseImpl = StringImpl::createStatic("IDBDatabase", 11, 1126017);
    StringImpl* IDBOpenDBRequestImpl = StringImpl::createStatic("IDBOpenDBRequest", 16, 8388818);
    StringImpl* IDBRequestImpl = StringImpl::createStatic("IDBRequest", 10, 16217380);
    StringImpl* IDBTransactionImpl = StringImpl::createStatic("IDBTransaction", 14, 13326789);
    StringImpl* MediaSourceImpl = StringImpl::createStatic("MediaSource", 11, 10009800);
    StringImpl* SourceBufferImpl = StringImpl::createStatic("SourceBuffer", 12, 3244577);
    StringImpl* SourceBufferListImpl = StringImpl::createStatic("SourceBufferList", 16, 5225283);
    StringImpl* MediaStreamImpl = StringImpl::createStatic("MediaStream", 11, 5095066);
    StringImpl* MediaStreamTrackImpl = StringImpl::createStatic("MediaStreamTrack", 16, 16623886);
    StringImpl* RTCDTMFSenderImpl = StringImpl::createStatic("RTCDTMFSender", 13, 7965945);
    StringImpl* RTCDataChannelImpl = StringImpl::createStatic("RTCDataChannel", 14, 16002100);
    StringImpl* RTCPeerConnectionImpl = StringImpl::createStatic("RTCPeerConnection", 17, 11238437);
    StringImpl* NetworkInformationImpl = StringImpl::createStatic("NetworkInformation", 18, 3171974);
    StringImpl* NotificationImpl = StringImpl::createStatic("Notification", 12, 7262241);
    StringImpl* ServiceWorkerImpl = StringImpl::createStatic("ServiceWorker", 13, 3155984);
    StringImpl* ServiceWorkerGlobalScopeImpl = StringImpl::createStatic("ServiceWorkerGlobalScope", 24, 16474009);
    StringImpl* SpeechRecognitionImpl = StringImpl::createStatic("SpeechRecognition", 17, 1914212);
    StringImpl* SpeechSynthesisImpl = StringImpl::createStatic("SpeechSynthesis", 15, 9951205);
    StringImpl* SpeechSynthesisUtteranceImpl = StringImpl::createStatic("SpeechSynthesisUtterance", 24, 12730322);
    StringImpl* MIDIAccessImpl = StringImpl::createStatic("MIDIAccess", 10, 13252796);
    StringImpl* MIDIInputImpl = StringImpl::createStatic("MIDIInput", 9, 13226940);
    StringImpl* MIDIPortImpl = StringImpl::createStatic("MIDIPort", 8, 15710269);
    StringImpl* WebSocketImpl = StringImpl::createStatic("WebSocket", 9, 5027682);
#if ENABLE(WEB_AUDIO)
    StringImpl* AudioContextImpl = StringImpl::createStatic("AudioContext", 12, 5207992);
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
    StringImpl* AudioNodeImpl = StringImpl::createStatic("AudioNode", 9, 5081561);
#endif // ENABLE(WEB_AUDIO)

    new ((void*)&BatteryManager) AtomicString(BatteryManagerImpl);
    new ((void*)&MediaKeySession) AtomicString(MediaKeySessionImpl);
    new ((void*)&FileWriter) AtomicString(FileWriterImpl);
    new ((void*)&IDBDatabase) AtomicString(IDBDatabaseImpl);
    new ((void*)&IDBOpenDBRequest) AtomicString(IDBOpenDBRequestImpl);
    new ((void*)&IDBRequest) AtomicString(IDBRequestImpl);
    new ((void*)&IDBTransaction) AtomicString(IDBTransactionImpl);
    new ((void*)&MediaSource) AtomicString(MediaSourceImpl);
    new ((void*)&SourceBuffer) AtomicString(SourceBufferImpl);
    new ((void*)&SourceBufferList) AtomicString(SourceBufferListImpl);
    new ((void*)&MediaStream) AtomicString(MediaStreamImpl);
    new ((void*)&MediaStreamTrack) AtomicString(MediaStreamTrackImpl);
    new ((void*)&RTCDTMFSender) AtomicString(RTCDTMFSenderImpl);
    new ((void*)&RTCDataChannel) AtomicString(RTCDataChannelImpl);
    new ((void*)&RTCPeerConnection) AtomicString(RTCPeerConnectionImpl);
    new ((void*)&NetworkInformation) AtomicString(NetworkInformationImpl);
    new ((void*)&Notification) AtomicString(NotificationImpl);
    new ((void*)&ServiceWorker) AtomicString(ServiceWorkerImpl);
    new ((void*)&ServiceWorkerGlobalScope) AtomicString(ServiceWorkerGlobalScopeImpl);
    new ((void*)&SpeechRecognition) AtomicString(SpeechRecognitionImpl);
    new ((void*)&SpeechSynthesis) AtomicString(SpeechSynthesisImpl);
    new ((void*)&SpeechSynthesisUtterance) AtomicString(SpeechSynthesisUtteranceImpl);
    new ((void*)&MIDIAccess) AtomicString(MIDIAccessImpl);
    new ((void*)&MIDIInput) AtomicString(MIDIInputImpl);
    new ((void*)&MIDIPort) AtomicString(MIDIPortImpl);
    new ((void*)&WebSocket) AtomicString(WebSocketImpl);
#if ENABLE(WEB_AUDIO)
    new ((void*)&AudioContext) AtomicString(AudioContextImpl);
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
    new ((void*)&AudioNode) AtomicString(AudioNodeImpl);
#endif // ENABLE(WEB_AUDIO)
}

} // EventTargetNames
} // blink
