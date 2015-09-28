// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EventModulesInterfaces_h
#define EventModulesInterfaces_h

#include "EventInterfaces.h"

#if ENABLE(WEB_AUDIO)
#define EVENT_MODULES_INTERFACES_FOR_EACH_WEB_AUDIO(macro) \
    macro(AudioProcessingEvent) \
    macro(OfflineAudioCompletionEvent) \

#else
#define EVENT_MODULES_INTERFACES_FOR_EACH_WEB_AUDIO(macro)
#endif

#define EVENT_MODULES_INTERFACES_FOR_EACH(macro) \
    \
    macro(CloseEvent) \
    macro(DeviceLightEvent) \
    macro(DeviceMotionEvent) \
    macro(DeviceOrientationEvent) \
    macro(FetchEvent) \
    macro(GamepadEvent) \
    macro(IDBVersionChangeEvent) \
    macro(InstallEvent) \
    macro(InstallPhaseEvent) \
    macro(MIDIConnectionEvent) \
    macro(MIDIMessageEvent) \
    macro(MediaKeyMessageEvent) \
    macro(MediaKeyNeededEvent) \
    macro(MediaStreamEvent) \
    macro(MediaStreamTrackEvent) \
    macro(PushEvent) \
    macro(RTCDTMFToneChangeEvent) \
    macro(RTCDataChannelEvent) \
    macro(RTCIceCandidateEvent) \
    macro(SpeechRecognitionError) \
    macro(SpeechRecognitionEvent) \
    macro(SpeechSynthesisEvent) \
    \
    EVENT_MODULES_INTERFACES_FOR_EACH_WEB_AUDIO(macro) \

#endif // EventModulesInterfaces_h
