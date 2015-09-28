// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EventTargetModulesNames_h
#define EventTargetModulesNames_h

#include "EventTargetNames.h"

namespace blink {
namespace EventTargetNames {

#ifndef EVENT_TARGET_NAMES_HIDE_GLOBALS

extern const WTF::AtomicString BatteryManager;
extern const WTF::AtomicString MediaKeySession;
extern const WTF::AtomicString FileWriter;
extern const WTF::AtomicString IDBDatabase;
extern const WTF::AtomicString IDBOpenDBRequest;
extern const WTF::AtomicString IDBRequest;
extern const WTF::AtomicString IDBTransaction;
extern const WTF::AtomicString MediaSource;
extern const WTF::AtomicString SourceBuffer;
extern const WTF::AtomicString SourceBufferList;
extern const WTF::AtomicString MediaStream;
extern const WTF::AtomicString MediaStreamTrack;
extern const WTF::AtomicString RTCDTMFSender;
extern const WTF::AtomicString RTCDataChannel;
extern const WTF::AtomicString RTCPeerConnection;
extern const WTF::AtomicString NetworkInformation;
extern const WTF::AtomicString Notification;
extern const WTF::AtomicString ServiceWorker;
extern const WTF::AtomicString ServiceWorkerGlobalScope;
extern const WTF::AtomicString SpeechRecognition;
extern const WTF::AtomicString SpeechSynthesis;
extern const WTF::AtomicString SpeechSynthesisUtterance;
extern const WTF::AtomicString MIDIAccess;
extern const WTF::AtomicString MIDIInput;
extern const WTF::AtomicString MIDIPort;
extern const WTF::AtomicString WebSocket;
#if ENABLE(WEB_AUDIO)
extern const WTF::AtomicString AudioContext;
#endif // ENABLE(WEB_AUDIO)
#if ENABLE(WEB_AUDIO)
extern const WTF::AtomicString AudioNode;
#endif // ENABLE(WEB_AUDIO)

#endif // EVENT_TARGET_NAMES_HIDE_GLOBALS

 void initModules();

} // EventTargetNames
} // blink

#endif
