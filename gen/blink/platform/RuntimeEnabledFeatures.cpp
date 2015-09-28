// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {

void RuntimeEnabledFeatures::setStableFeaturesEnabled(bool enable)
{
    setApplicationCacheEnabled(enable);
    setPrefixedVideoFullscreenEnabled(enable);
    setThemeColorEnabled(enable);
    setCryptoEnabled(enable);
    setCSSShapesEnabled(enable);
    setCSSTouchActionEnabled(enable);
    setCSSTransformsUnprefixedEnabled(enable);
    setCSSWillChangeEnabled(enable);
    setDatabaseEnabled(enable);
    setDialogElementEnabled(enable);
    setEncryptedMediaAnyVersionEnabled(enable);
    setFileSystemEnabled(enable);
    setFontLoadEventsEnabled(enable);
    setFastTextAutosizingEnabled(enable);
    setGamepadEnabled(enable);
    setHTMLImportsEnabled(enable);
    setHighResolutionTimeInWorkersEnabled(enable);
    setLayerSquashingEnabled(enable);
    setPrefixedEncryptedMediaEnabled(enable);
    setLocalStorageEnabled(enable);
    setMediaEnabled(enable);
    setMediaQueryParserEnabled(enable);
    setMediaStreamEnabled(enable);
    setNotificationsEnabled(enable);
    setObjectFitPositionEnabled(enable);
    setPagePopupEnabled(enable);
    setPath2DEnabled(enable);
    setPeerConnectionEnabled(enable);
    setQuotaEnabled(enable);
    setRepaintAfterLayoutEnabled(enable);
    setScriptedSpeechEnabled(enable);
    setSessionStorageEnabled(enable);
    setSharedWorkerEnabled(enable);
    setSpeechSynthesisEnabled(enable);
    setSubpixelFontScalingEnabled(enable);
    setTargetedStyleRecalcEnabled(enable);
    setTouchEnabled(enable);
    setWebAnimationsElementAnimateEnabled(enable);
    setWebAudioEnabled(enable);
    setWOFF2Enabled(enable);
    setXSLTEnabled(enable);
}

void RuntimeEnabledFeatures::setExperimentalFeaturesEnabled(bool enable)
{
    setAudioVideoTracksEnabled(enable);
    setBatteryStatusEnabled(enable);
    setBeaconEnabled(enable);
    setClientHintsDprEnabled(enable);
    setCSSAnimationUnprefixedEnabled(enable);
    setCSSCompositingEnabled(enable);
    setCSSExclusionsEnabled(enable);
    setCSSGridLayoutEnabled(enable);
    setCSSMaskSourceTypeEnabled(enable);
    setCSSOMSmoothScrollEnabled(enable);
    setCSSViewportEnabled(enable);
    setCSS3TextEnabled(enable);
    setCSS3TextDecorationsEnabled(enable);
    setCustomSchemeHandlerEnabled(enable);
    setEncodingAPIEnabled(enable);
    setExperimentalContentSecurityPolicyFeaturesEnabled(enable);
    setFileAPIBlobCloseEnabled(enable);
    setFileConstructorEnabled(enable);
    setIMEAPIEnabled(enable);
    setImageDataConstructorEnabled(enable);
    setIndexedDBExperimentalEnabled(enable);
    setInputModeAttributeEnabled(enable);
    setMediaControllerEnabled(enable);
    setMediaSourceExperimentalEnabled(enable);
    setMemoryInfoInWorkersEnabled(enable);
    setNavigationTransitionsEnabled(enable);
    setNetworkInformationEnabled(enable);
    setPushMessagingEnabled(enable);
    setQuotaPromiseEnabled(enable);
    setRegionBasedColumnsEnabled(enable);
    setScreenOrientationEnabled(enable);
    setScrollTopLeftInteropEnabled(enable);
    setServiceWorkerEnabled(enable);
    setPictureSizesEnabled(enable);
    setPictureEnabled(enable);
    setStreamEnabled(enable);
    setThreadedParserDataReceiverEnabled(enable);
    setUserSelectAllEnabled(enable);
    setWebAnimationsAPIEnabled(enable);
    setWebGLDraftExtensionsEnabled(enable);
    setWebVTTRegionsEnabled(enable);
}

void RuntimeEnabledFeatures::setTestFeaturesEnabled(bool enable)
{
    setCSSStickyPositionEnabled(enable);
    setCSSTouchActionDelayEnabled(enable);
    setDeviceLightEnabled(enable);
    setEncryptedMediaEnabled(enable);
    setExperimentalCanvasFeaturesEnabled(enable);
    setExperimentalWebSocketEnabled(enable);
    setManifestEnabled(enable);
    setRequestAutocompleteEnabled(enable);
    setShowModalDialogEnabled(enable);
    setSubresourceIntegrityEnabled(enable);
    setWebMIDIEnabled(enable);
    setPseudoClassesInMatchingCriteriaInAuthorShadowTreesEnabled(enable);
}

bool RuntimeEnabledFeatures::isApplicationCacheEnabled = true;
bool RuntimeEnabledFeatures::isAudioVideoTracksEnabled = false;
bool RuntimeEnabledFeatures::isAuthorShadowDOMForAnyElementEnabled = false;
bool RuntimeEnabledFeatures::isBatteryStatusEnabled = false;
bool RuntimeEnabledFeatures::isBeaconEnabled = false;
bool RuntimeEnabledFeatures::isPrefixedVideoFullscreenEnabled = true;
bool RuntimeEnabledFeatures::isBleedingEdgeFastPathsEnabled = false;
bool RuntimeEnabledFeatures::isThemeColorEnabled = true;
bool RuntimeEnabledFeatures::isClientHintsDprEnabled = false;
bool RuntimeEnabledFeatures::isCryptoEnabled = true;
bool RuntimeEnabledFeatures::isCSSAnimationUnprefixedEnabled = false;
bool RuntimeEnabledFeatures::isCSSCompositingEnabled = false;
bool RuntimeEnabledFeatures::isCSSExclusionsEnabled = false;
bool RuntimeEnabledFeatures::isCSSGridLayoutEnabled = false;
bool RuntimeEnabledFeatures::isCSSMaskSourceTypeEnabled = false;
bool RuntimeEnabledFeatures::isCSSOMSmoothScrollEnabled = false;
bool RuntimeEnabledFeatures::isCSSShapesEnabled = true;
bool RuntimeEnabledFeatures::isCSSStickyPositionEnabled = false;
bool RuntimeEnabledFeatures::isCSSTouchActionEnabled = true;
bool RuntimeEnabledFeatures::isCSSTouchActionDelayEnabled = false;
bool RuntimeEnabledFeatures::isCSSTransformsUnprefixedEnabled = true;
bool RuntimeEnabledFeatures::isCSSViewportEnabled = false;
bool RuntimeEnabledFeatures::isCSSWillChangeEnabled = true;
bool RuntimeEnabledFeatures::isCSS3TextEnabled = false;
bool RuntimeEnabledFeatures::isCSS3TextDecorationsEnabled = false;
bool RuntimeEnabledFeatures::isCustomSchemeHandlerEnabled = false;
bool RuntimeEnabledFeatures::isDatabaseEnabled = true;
bool RuntimeEnabledFeatures::isDeviceLightEnabled = false;
bool RuntimeEnabledFeatures::isDialogElementEnabled = true;
bool RuntimeEnabledFeatures::isEncodingAPIEnabled = false;
bool RuntimeEnabledFeatures::isEncryptedMediaEnabled = false;
bool RuntimeEnabledFeatures::isEncryptedMediaAnyVersionEnabled = true;
bool RuntimeEnabledFeatures::isExperimentalCanvasFeaturesEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalContentSecurityPolicyFeaturesEnabled = false;
bool RuntimeEnabledFeatures::isExperimentalWebSocketEnabled = false;
bool RuntimeEnabledFeatures::isFastMobileScrollingEnabled = false;
bool RuntimeEnabledFeatures::isFileAPIBlobCloseEnabled = false;
bool RuntimeEnabledFeatures::isFileConstructorEnabled = false;
bool RuntimeEnabledFeatures::isFileSystemEnabled = true;
bool RuntimeEnabledFeatures::isFontLoadEventsEnabled = true;
bool RuntimeEnabledFeatures::isFastTextAutosizingEnabled = true;
bool RuntimeEnabledFeatures::isGamepadEnabled = true;
bool RuntimeEnabledFeatures::isHTMLImportsEnabled = true;
bool RuntimeEnabledFeatures::isHighResolutionTimeInWorkersEnabled = true;
bool RuntimeEnabledFeatures::isIMEAPIEnabled = false;
bool RuntimeEnabledFeatures::isImageDataConstructorEnabled = false;
bool RuntimeEnabledFeatures::isIndexedDBExperimentalEnabled = false;
bool RuntimeEnabledFeatures::isInputModeAttributeEnabled = false;
bool RuntimeEnabledFeatures::isLangAttributeAwareFormControlUIEnabled = false;
bool RuntimeEnabledFeatures::isLayerSquashingEnabled = true;
bool RuntimeEnabledFeatures::isPrefixedEncryptedMediaEnabled = true;
bool RuntimeEnabledFeatures::isLocalStorageEnabled = true;
bool RuntimeEnabledFeatures::isManifestEnabled = false;
bool RuntimeEnabledFeatures::isMediaEnabled = true;
bool RuntimeEnabledFeatures::isMediaControllerEnabled = false;
bool RuntimeEnabledFeatures::isMediaQueryParserEnabled = true;
bool RuntimeEnabledFeatures::isMediaSourceEnabled = false;
bool RuntimeEnabledFeatures::isMediaSourceExperimentalEnabled = false;
bool RuntimeEnabledFeatures::isMediaStreamEnabled = true;
bool RuntimeEnabledFeatures::isMemoryInfoInWorkersEnabled = false;
bool RuntimeEnabledFeatures::isNavigationTransitionsEnabled = false;
bool RuntimeEnabledFeatures::isNavigatorContentUtilsEnabled = false;
bool RuntimeEnabledFeatures::isNetworkInformationEnabled = false;
bool RuntimeEnabledFeatures::isNotificationsEnabled = true;
bool RuntimeEnabledFeatures::isObjectFitPositionEnabled = true;
bool RuntimeEnabledFeatures::isOrientationEventEnabled = false;
bool RuntimeEnabledFeatures::isOverlayFullscreenVideoEnabled = false;
bool RuntimeEnabledFeatures::isPagePopupEnabled = true;
bool RuntimeEnabledFeatures::isPath2DEnabled = true;
bool RuntimeEnabledFeatures::isPathOpsSVGClippingEnabled = false;
bool RuntimeEnabledFeatures::isPeerConnectionEnabled = true;
bool RuntimeEnabledFeatures::isPreciseMemoryInfoEnabled = false;
bool RuntimeEnabledFeatures::isPushMessagingEnabled = false;
bool RuntimeEnabledFeatures::isQuotaEnabled = true;
bool RuntimeEnabledFeatures::isQuotaPromiseEnabled = false;
bool RuntimeEnabledFeatures::isOverlayScrollbarsEnabled = false;
bool RuntimeEnabledFeatures::isRegionBasedColumnsEnabled = false;
bool RuntimeEnabledFeatures::isRepaintAfterLayoutEnabled = true;
bool RuntimeEnabledFeatures::isRequestAutocompleteEnabled = false;
bool RuntimeEnabledFeatures::isScreenOrientationEnabled = false;
bool RuntimeEnabledFeatures::isScriptedSpeechEnabled = true;
bool RuntimeEnabledFeatures::isScrollTopLeftInteropEnabled = false;
bool RuntimeEnabledFeatures::isServiceWorkerEnabled = false;
bool RuntimeEnabledFeatures::isSessionStorageEnabled = true;
bool RuntimeEnabledFeatures::isSharedWorkerEnabled = true;
bool RuntimeEnabledFeatures::isPictureSizesEnabled = false;
bool RuntimeEnabledFeatures::isPictureEnabled = false;
bool RuntimeEnabledFeatures::isShowModalDialogEnabled = false;
bool RuntimeEnabledFeatures::isSpeechSynthesisEnabled = true;
bool RuntimeEnabledFeatures::isStreamEnabled = false;
bool RuntimeEnabledFeatures::isSubpixelFontScalingEnabled = true;
bool RuntimeEnabledFeatures::isSubresourceIntegrityEnabled = false;
bool RuntimeEnabledFeatures::isTargetedStyleRecalcEnabled = true;
bool RuntimeEnabledFeatures::isTouchEnabled = true;
bool RuntimeEnabledFeatures::isTouchIconLoadingEnabled = false;
bool RuntimeEnabledFeatures::isThreadedParserDataReceiverEnabled = false;
bool RuntimeEnabledFeatures::isUserSelectAllEnabled = false;
bool RuntimeEnabledFeatures::isWebAnimationsSVGEnabled = false;
bool RuntimeEnabledFeatures::isWebAnimationsElementAnimateEnabled = true;
bool RuntimeEnabledFeatures::isWebAnimationsAPIEnabled = false;
#if ENABLE(WEB_AUDIO)
bool RuntimeEnabledFeatures::isWebAudioEnabled = true;
#endif // ENABLE(WEB_AUDIO)
bool RuntimeEnabledFeatures::isWebGLDraftExtensionsEnabled = false;
bool RuntimeEnabledFeatures::isWebGLImageChromiumEnabled = false;
bool RuntimeEnabledFeatures::isWebMIDIEnabled = false;
bool RuntimeEnabledFeatures::isWebVTTRegionsEnabled = false;
bool RuntimeEnabledFeatures::isWOFF2Enabled = true;
bool RuntimeEnabledFeatures::isXSLTEnabled = true;
bool RuntimeEnabledFeatures::isPseudoClassesInMatchingCriteriaInAuthorShadowTreesEnabled = false;

} // namespace blink
