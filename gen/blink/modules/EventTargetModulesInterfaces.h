// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EventTargetModulesInterfaces_h
#define EventTargetModulesInterfaces_h

#include "EventTargetInterfaces.h"

#if ENABLE(WEB_AUDIO)
#define EVENT_TARGET_MODULES_INTERFACES_FOR_EACH_WEB_AUDIO(macro) \
    macro(AudioContext) \
    macro(AudioNode) \

#else
#define EVENT_TARGET_MODULES_INTERFACES_FOR_EACH_WEB_AUDIO(macro)
#endif

#define EVENT_TARGET_MODULES_INTERFACES_FOR_EACH(macro) \
    \
    macro(BatteryManager) \
    macro(FileWriter) \
    macro(IDBDatabase) \
    macro(IDBOpenDBRequest) \
    macro(IDBRequest) \
    macro(IDBTransaction) \
    macro(MIDIAccess) \
    macro(MIDIInput) \
    macro(MIDIPort) \
    macro(MediaKeySession) \
    macro(MediaSource) \
    macro(MediaStream) \
    macro(MediaStreamTrack) \
    macro(NetworkInformation) \
    macro(Notification) \
    macro(RTCDTMFSender) \
    macro(RTCDataChannel) \
    macro(RTCPeerConnection) \
    macro(ServiceWorker) \
    macro(ServiceWorkerGlobalScope) \
    macro(SourceBuffer) \
    macro(SourceBufferList) \
    macro(SpeechRecognition) \
    macro(SpeechSynthesis) \
    macro(SpeechSynthesisUtterance) \
    macro(WebSocket) \
    \
    EVENT_TARGET_MODULES_INTERFACES_FOR_EACH_WEB_AUDIO(macro) \

#endif // EventTargetModulesInterfaces_h
