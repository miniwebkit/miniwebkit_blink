// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EventModulesHeaders_h
#define EventModulesHeaders_h

#include "EventHeaders.h"

#include "modules/speech/SpeechSynthesisEvent.h"
#include "V8SpeechSynthesisEvent.h"
#include "modules/gamepad/GamepadEvent.h"
#include "V8GamepadEvent.h"
#include "modules/push_messaging/PushEvent.h"
#include "V8PushEvent.h"
#include "modules/device_light/DeviceLightEvent.h"
#include "V8DeviceLightEvent.h"
#include "modules/serviceworkers/InstallPhaseEvent.h"
#include "V8InstallPhaseEvent.h"
#include "modules/mediastream/RTCDTMFToneChangeEvent.h"
#include "V8RTCDTMFToneChangeEvent.h"
#include "modules/device_orientation/DeviceOrientationEvent.h"
#include "V8DeviceOrientationEvent.h"
#include "modules/encryptedmedia/MediaKeyMessageEvent.h"
#include "V8MediaKeyMessageEvent.h"
#include "modules/speech/SpeechRecognitionEvent.h"
#include "V8SpeechRecognitionEvent.h"
#include "modules/mediastream/MediaStreamTrackEvent.h"
#include "V8MediaStreamTrackEvent.h"
#include "modules/mediastream/RTCIceCandidateEvent.h"
#include "V8RTCIceCandidateEvent.h"
#include "modules/encryptedmedia/MediaKeyNeededEvent.h"
#include "V8MediaKeyNeededEvent.h"
#include "modules/device_orientation/DeviceMotionEvent.h"
#include "V8DeviceMotionEvent.h"
#include "modules/serviceworkers/FetchEvent.h"
#include "V8FetchEvent.h"
#if ENABLE(WEB_AUDIO)
#include "modules/webaudio/OfflineAudioCompletionEvent.h"
#include "V8OfflineAudioCompletionEvent.h"
#endif
#include "modules/mediastream/MediaStreamEvent.h"
#include "V8MediaStreamEvent.h"
#include "modules/speech/SpeechRecognitionError.h"
#include "V8SpeechRecognitionError.h"
#include "modules/serviceworkers/InstallEvent.h"
#include "V8InstallEvent.h"
#include "modules/mediastream/RTCDataChannelEvent.h"
#include "V8RTCDataChannelEvent.h"
#include "modules/indexeddb/IDBVersionChangeEvent.h"
#include "V8IDBVersionChangeEvent.h"
#include "modules/webmidi/MIDIConnectionEvent.h"
#include "V8MIDIConnectionEvent.h"
#include "modules/websockets/CloseEvent.h"
#include "V8CloseEvent.h"
#include "modules/webmidi/MIDIMessageEvent.h"
#include "V8MIDIMessageEvent.h"
#if ENABLE(WEB_AUDIO)
#include "modules/webaudio/AudioProcessingEvent.h"
#include "V8AudioProcessingEvent.h"
#endif

#endif // EventModulesHeaders_h
