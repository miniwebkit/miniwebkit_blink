// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#ifdef SKIP_STATIC_CONSTRUCTORS_ON_GCC
#define EVENT_NAMES_HIDE_GLOBALS 1
#endif

#include "EventModulesNames.h"

#include "wtf/StaticConstructors.h"

namespace blink {
namespace EventNames {

using namespace WTF;

DEFINE_GLOBAL(AtomicString, DeviceMotionEvent)
DEFINE_GLOBAL(AtomicString, DeviceOrientationEvent)
DEFINE_GLOBAL(AtomicString, GamepadEvent)
DEFINE_GLOBAL(AtomicString, IDBVersionChangeEvent)
DEFINE_GLOBAL(AtomicString, MediaStreamEvent)
DEFINE_GLOBAL(AtomicString, MediaStreamTrackEvent)
DEFINE_GLOBAL(AtomicString, RTCDTMFToneChangeEvent)
DEFINE_GLOBAL(AtomicString, RTCDataChannelEvent)
DEFINE_GLOBAL(AtomicString, RTCIceCandidateEvent)
DEFINE_GLOBAL(AtomicString, SpeechRecognitionError)
DEFINE_GLOBAL(AtomicString, SpeechRecognitionEvent)
DEFINE_GLOBAL(AtomicString, CloseEvent)
DEFINE_GLOBAL(AtomicString, DeviceLightEvent)
DEFINE_GLOBAL(AtomicString, MediaKeyMessageEvent)
DEFINE_GLOBAL(AtomicString, MediaKeyNeededEvent)
DEFINE_GLOBAL(AtomicString, PushEvent)
DEFINE_GLOBAL(AtomicString, FetchEvent)
DEFINE_GLOBAL(AtomicString, InstallEvent)
DEFINE_GLOBAL(AtomicString, InstallPhaseEvent)
DEFINE_GLOBAL(AtomicString, SpeechSynthesisEvent)
DEFINE_GLOBAL(AtomicString, MIDIConnectionEvent)
DEFINE_GLOBAL(AtomicString, MIDIMessageEvent)
#if ENABLE(WEB_AUDIO)
DEFINE_GLOBAL(AtomicString, AudioProcessingEvent)
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
DEFINE_GLOBAL(AtomicString, OfflineAudioCompletionEvent)
#endif // ENABLE(WEB_AUDIO)

void initModules()
{
    StringImpl* DeviceMotionEventImpl = StringImpl::createStatic("DeviceMotionEvent", 17, 12345260);
    StringImpl* DeviceOrientationEventImpl = StringImpl::createStatic("DeviceOrientationEvent", 22, 858735);
    StringImpl* GamepadEventImpl = StringImpl::createStatic("GamepadEvent", 12, 11020890);
    StringImpl* IDBVersionChangeEventImpl = StringImpl::createStatic("IDBVersionChangeEvent", 21, 7770749);
    StringImpl* MediaStreamEventImpl = StringImpl::createStatic("MediaStreamEvent", 16, 328267);
    StringImpl* MediaStreamTrackEventImpl = StringImpl::createStatic("MediaStreamTrackEvent", 21, 13109664);
    StringImpl* RTCDTMFToneChangeEventImpl = StringImpl::createStatic("RTCDTMFToneChangeEvent", 22, 16457152);
    StringImpl* RTCDataChannelEventImpl = StringImpl::createStatic("RTCDataChannelEvent", 19, 1105547);
    StringImpl* RTCIceCandidateEventImpl = StringImpl::createStatic("RTCIceCandidateEvent", 20, 6147283);
    StringImpl* SpeechRecognitionErrorImpl = StringImpl::createStatic("SpeechRecognitionError", 22, 13037355);
    StringImpl* SpeechRecognitionEventImpl = StringImpl::createStatic("SpeechRecognitionEvent", 22, 6869292);
    StringImpl* CloseEventImpl = StringImpl::createStatic("CloseEvent", 10, 11722244);
    StringImpl* DeviceLightEventImpl = StringImpl::createStatic("DeviceLightEvent", 16, 8667494);
    StringImpl* MediaKeyMessageEventImpl = StringImpl::createStatic("MediaKeyMessageEvent", 20, 4827241);
    StringImpl* MediaKeyNeededEventImpl = StringImpl::createStatic("MediaKeyNeededEvent", 19, 15558110);
    StringImpl* PushEventImpl = StringImpl::createStatic("PushEvent", 9, 508183);
    StringImpl* FetchEventImpl = StringImpl::createStatic("FetchEvent", 10, 6447122);
    StringImpl* InstallEventImpl = StringImpl::createStatic("InstallEvent", 12, 13461741);
    StringImpl* InstallPhaseEventImpl = StringImpl::createStatic("InstallPhaseEvent", 17, 16110373);
    StringImpl* SpeechSynthesisEventImpl = StringImpl::createStatic("SpeechSynthesisEvent", 20, 17758);
    StringImpl* MIDIConnectionEventImpl = StringImpl::createStatic("MIDIConnectionEvent", 19, 5515626);
    StringImpl* MIDIMessageEventImpl = StringImpl::createStatic("MIDIMessageEvent", 16, 12787442);
#if ENABLE(WEB_AUDIO)
    StringImpl* AudioProcessingEventImpl = StringImpl::createStatic("AudioProcessingEvent", 20, 9607128);
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
    StringImpl* OfflineAudioCompletionEventImpl = StringImpl::createStatic("OfflineAudioCompletionEvent", 27, 6072331);
#endif // ENABLE(WEB_AUDIO)

    new ((void*)&DeviceMotionEvent) AtomicString(DeviceMotionEventImpl);
    new ((void*)&DeviceOrientationEvent) AtomicString(DeviceOrientationEventImpl);
    new ((void*)&GamepadEvent) AtomicString(GamepadEventImpl);
    new ((void*)&IDBVersionChangeEvent) AtomicString(IDBVersionChangeEventImpl);
    new ((void*)&MediaStreamEvent) AtomicString(MediaStreamEventImpl);
    new ((void*)&MediaStreamTrackEvent) AtomicString(MediaStreamTrackEventImpl);
    new ((void*)&RTCDTMFToneChangeEvent) AtomicString(RTCDTMFToneChangeEventImpl);
    new ((void*)&RTCDataChannelEvent) AtomicString(RTCDataChannelEventImpl);
    new ((void*)&RTCIceCandidateEvent) AtomicString(RTCIceCandidateEventImpl);
    new ((void*)&SpeechRecognitionError) AtomicString(SpeechRecognitionErrorImpl);
    new ((void*)&SpeechRecognitionEvent) AtomicString(SpeechRecognitionEventImpl);
    new ((void*)&CloseEvent) AtomicString(CloseEventImpl);
    new ((void*)&DeviceLightEvent) AtomicString(DeviceLightEventImpl);
    new ((void*)&MediaKeyMessageEvent) AtomicString(MediaKeyMessageEventImpl);
    new ((void*)&MediaKeyNeededEvent) AtomicString(MediaKeyNeededEventImpl);
    new ((void*)&PushEvent) AtomicString(PushEventImpl);
    new ((void*)&FetchEvent) AtomicString(FetchEventImpl);
    new ((void*)&InstallEvent) AtomicString(InstallEventImpl);
    new ((void*)&InstallPhaseEvent) AtomicString(InstallPhaseEventImpl);
    new ((void*)&SpeechSynthesisEvent) AtomicString(SpeechSynthesisEventImpl);
    new ((void*)&MIDIConnectionEvent) AtomicString(MIDIConnectionEventImpl);
    new ((void*)&MIDIMessageEvent) AtomicString(MIDIMessageEventImpl);
#if ENABLE(WEB_AUDIO)
    new ((void*)&AudioProcessingEvent) AtomicString(AudioProcessingEventImpl);
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
    new ((void*)&OfflineAudioCompletionEvent) AtomicString(OfflineAudioCompletionEventImpl);
#endif // ENABLE(WEB_AUDIO)
}

} // EventNames
} // blink
