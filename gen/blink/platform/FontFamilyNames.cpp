// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#ifdef SKIP_STATIC_CONSTRUCTORS_ON_GCC
#define FONT_FAMILY_NAMES_HIDE_GLOBALS 1
#endif

#include "FontFamilyNames.h"

#include "wtf/StaticConstructors.h"

namespace blink {
namespace FontFamilyNames {

using namespace WTF;

DEFINE_GLOBAL(AtomicString, webkit_cursiveStorage)
PLATFORM_EXPORT const AtomicString& webkit_cursive = *reinterpret_cast<const AtomicString*>(&webkit_cursiveStorage);
DEFINE_GLOBAL(AtomicString, webkit_fantasyStorage)
PLATFORM_EXPORT const AtomicString& webkit_fantasy = *reinterpret_cast<const AtomicString*>(&webkit_fantasyStorage);
DEFINE_GLOBAL(AtomicString, webkit_monospaceStorage)
PLATFORM_EXPORT const AtomicString& webkit_monospace = *reinterpret_cast<const AtomicString*>(&webkit_monospaceStorage);
DEFINE_GLOBAL(AtomicString, webkit_pictographStorage)
PLATFORM_EXPORT const AtomicString& webkit_pictograph = *reinterpret_cast<const AtomicString*>(&webkit_pictographStorage);
DEFINE_GLOBAL(AtomicString, webkit_sans_serifStorage)
PLATFORM_EXPORT const AtomicString& webkit_sans_serif = *reinterpret_cast<const AtomicString*>(&webkit_sans_serifStorage);
DEFINE_GLOBAL(AtomicString, webkit_serifStorage)
PLATFORM_EXPORT const AtomicString& webkit_serif = *reinterpret_cast<const AtomicString*>(&webkit_serifStorage);
DEFINE_GLOBAL(AtomicString, webkit_standardStorage)
PLATFORM_EXPORT const AtomicString& webkit_standard = *reinterpret_cast<const AtomicString*>(&webkit_standardStorage);

void init()
{
    StringImpl* webkit_cursiveImpl = StringImpl::createStatic("-webkit-cursive", 15, 7063387);
    StringImpl* webkit_fantasyImpl = StringImpl::createStatic("-webkit-fantasy", 15, 16384875);
    StringImpl* webkit_monospaceImpl = StringImpl::createStatic("-webkit-monospace", 17, 14315487);
    StringImpl* webkit_pictographImpl = StringImpl::createStatic("-webkit-pictograph", 18, 7921289);
    StringImpl* webkit_sans_serifImpl = StringImpl::createStatic("-webkit-sans-serif", 18, 1961926);
    StringImpl* webkit_serifImpl = StringImpl::createStatic("-webkit-serif", 13, 7070799);
    StringImpl* webkit_standardImpl = StringImpl::createStatic("-webkit-standard", 16, 6994621);

    new ((void*)&webkit_cursive) AtomicString(webkit_cursiveImpl);
    new ((void*)&webkit_fantasy) AtomicString(webkit_fantasyImpl);
    new ((void*)&webkit_monospace) AtomicString(webkit_monospaceImpl);
    new ((void*)&webkit_pictograph) AtomicString(webkit_pictographImpl);
    new ((void*)&webkit_sans_serif) AtomicString(webkit_sans_serifImpl);
    new ((void*)&webkit_serif) AtomicString(webkit_serifImpl);
    new ((void*)&webkit_standard) AtomicString(webkit_standardImpl);
}

} // FontFamilyNames
} // blink
