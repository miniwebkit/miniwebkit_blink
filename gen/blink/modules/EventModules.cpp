// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/EventModulesFactory.h"

#include "EventModulesHeaders.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {

PassRefPtrWillBeRawPtr<Event> EventModulesFactory::create(const String& type)
{
    if (type == "DeviceLightEvent" && RuntimeEnabledFeatures::deviceLightEnabled())
        return DeviceLightEvent::create();
    if (type == "DeviceMotionEvent")
        return DeviceMotionEvent::create();
    if (type == "DeviceOrientationEvent")
        return DeviceOrientationEvent::create();
    if (type == "MediaKeyMessageEvent" && RuntimeEnabledFeatures::encryptedMediaEnabled())
        return MediaKeyMessageEvent::create();
    if (type == "MediaKeyNeededEvent" && RuntimeEnabledFeatures::encryptedMediaEnabled())
        return MediaKeyNeededEvent::create();
    if (type == "GamepadEvent")
        return GamepadEvent::create();
    if (type == "IDBVersionChangeEvent")
        return IDBVersionChangeEvent::create();
    if (type == "MediaStreamEvent")
        return MediaStreamEvent::create();
    if (type == "MediaStreamTrackEvent")
        return MediaStreamTrackEvent::create();
    if (type == "RTCDTMFToneChangeEvent")
        return RTCDTMFToneChangeEvent::create();
    if (type == "RTCDataChannelEvent")
        return RTCDataChannelEvent::create();
    if (type == "RTCIceCandidateEvent")
        return RTCIceCandidateEvent::create();
    if (type == "PushEvent" && RuntimeEnabledFeatures::pushMessagingEnabled())
        return PushEvent::create();
    if (type == "FetchEvent" && RuntimeEnabledFeatures::serviceWorkerEnabled())
        return FetchEvent::create();
    if (type == "InstallEvent" && RuntimeEnabledFeatures::serviceWorkerEnabled())
        return InstallEvent::create();
    if (type == "InstallPhaseEvent" && RuntimeEnabledFeatures::serviceWorkerEnabled())
        return InstallPhaseEvent::create();
    if (type == "SpeechRecognitionError")
        return SpeechRecognitionError::create();
    if (type == "SpeechRecognitionEvent")
        return SpeechRecognitionEvent::create();
    if (type == "SpeechSynthesisEvent" && RuntimeEnabledFeatures::speechSynthesisEnabled())
        return SpeechSynthesisEvent::create();
#if ENABLE(WEB_AUDIO)
    if (type == "AudioProcessingEvent")
        return AudioProcessingEvent::create();
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
    if (type == "OfflineAudioCompletionEvent")
        return OfflineAudioCompletionEvent::create();
#endif // ENABLE(WEB_AUDIO)
    if (type == "MIDIConnectionEvent" && RuntimeEnabledFeatures::webMIDIEnabled())
        return MIDIConnectionEvent::create();
    if (type == "MIDIMessageEvent" && RuntimeEnabledFeatures::webMIDIEnabled())
        return MIDIMessageEvent::create();
    if (type == "CloseEvent")
        return CloseEvent::create();
    return nullptr;
}

} // namespace blink
