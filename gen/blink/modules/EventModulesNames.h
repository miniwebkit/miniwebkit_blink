// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EventModulesNames_h
#define EventModulesNames_h

#include "EventNames.h"

namespace blink {
namespace EventNames {

#ifndef EVENT_NAMES_HIDE_GLOBALS

extern const WTF::AtomicString DeviceMotionEvent;
extern const WTF::AtomicString DeviceOrientationEvent;
extern const WTF::AtomicString GamepadEvent;
extern const WTF::AtomicString IDBVersionChangeEvent;
extern const WTF::AtomicString MediaStreamEvent;
extern const WTF::AtomicString MediaStreamTrackEvent;
extern const WTF::AtomicString RTCDTMFToneChangeEvent;
extern const WTF::AtomicString RTCDataChannelEvent;
extern const WTF::AtomicString RTCIceCandidateEvent;
extern const WTF::AtomicString SpeechRecognitionError;
extern const WTF::AtomicString SpeechRecognitionEvent;
extern const WTF::AtomicString CloseEvent;
extern const WTF::AtomicString DeviceLightEvent;
extern const WTF::AtomicString MediaKeyMessageEvent;
extern const WTF::AtomicString MediaKeyNeededEvent;
extern const WTF::AtomicString PushEvent;
extern const WTF::AtomicString FetchEvent;
extern const WTF::AtomicString InstallEvent;
extern const WTF::AtomicString InstallPhaseEvent;
extern const WTF::AtomicString SpeechSynthesisEvent;
extern const WTF::AtomicString MIDIConnectionEvent;
extern const WTF::AtomicString MIDIMessageEvent;
#if ENABLE(WEB_AUDIO)
extern const WTF::AtomicString AudioProcessingEvent;
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
extern const WTF::AtomicString OfflineAudioCompletionEvent;
#endif // ENABLE(WEB_AUDIO)

#endif // EVENT_NAMES_HIDE_GLOBALS

 void initModules();

} // EventNames
} // blink

#endif
