// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EventTargetModulesHeaders_h
#define EventTargetModulesHeaders_h

#include "EventTargetHeaders.h"

#include "modules/speech/SpeechSynthesis.h"
#include "V8SpeechSynthesis.h"
#include "modules/webmidi/MIDIPort.h"
#include "V8MIDIPort.h"
#include "modules/webmidi/MIDIAccess.h"
#include "V8MIDIAccess.h"
#include "modules/notifications/Notification.h"
#include "V8Notification.h"
#include "modules/serviceworkers/ServiceWorker.h"
#include "V8ServiceWorker.h"
#include "modules/netinfo/NetworkInformation.h"
#include "V8NetworkInformation.h"
#include "modules/mediastream/RTCDataChannel.h"
#include "V8RTCDataChannel.h"
#include "modules/serviceworkers/ServiceWorkerGlobalScope.h"
#include "V8ServiceWorkerGlobalScope.h"
#include "modules/indexeddb/IDBRequest.h"
#include "V8IDBRequest.h"
#include "modules/speech/SpeechSynthesisUtterance.h"
#include "V8SpeechSynthesisUtterance.h"
#include "modules/indexeddb/IDBOpenDBRequest.h"
#include "V8IDBOpenDBRequest.h"
#include "modules/mediastream/RTCDTMFSender.h"
#include "V8RTCDTMFSender.h"
#include "modules/mediasource/MediaSource.h"
#include "V8MediaSource.h"
#include "modules/websockets/WebSocket.h"
#include "V8WebSocket.h"
#include "modules/indexeddb/IDBTransaction.h"
#include "V8IDBTransaction.h"
#include "modules/webmidi/MIDIInput.h"
#include "V8MIDIInput.h"
#include "modules/battery/BatteryManager.h"
#include "V8BatteryManager.h"
#include "modules/mediasource/SourceBuffer.h"
#include "V8SourceBuffer.h"
#if ENABLE(WEB_AUDIO)
#include "modules/webaudio/AudioContext.h"
#include "V8AudioContext.h"
#endif
#include "modules/speech/SpeechRecognition.h"
#include "V8SpeechRecognition.h"
#include "modules/mediastream/MediaStream.h"
#include "V8MediaStream.h"
#include "modules/encryptedmedia/MediaKeySession.h"
#include "V8MediaKeySession.h"
#include "modules/mediastream/MediaStreamTrack.h"
#include "V8MediaStreamTrack.h"
#if ENABLE(WEB_AUDIO)
#include "modules/webaudio/AudioNode.h"
#include "V8AudioNode.h"
#endif
#include "modules/mediasource/SourceBufferList.h"
#include "V8SourceBufferList.h"
#include "modules/filesystem/FileWriter.h"
#include "V8FileWriter.h"
#include "modules/indexeddb/IDBDatabase.h"
#include "V8IDBDatabase.h"
#include "modules/mediastream/RTCPeerConnection.h"
#include "V8RTCPeerConnection.h"

#endif // EventTargetModulesHeaders_h
