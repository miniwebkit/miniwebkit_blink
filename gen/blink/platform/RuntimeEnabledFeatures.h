// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef RuntimeEnabledFeatures_h
#define RuntimeEnabledFeatures_h

#include "platform/PlatformExport.h"

namespace blink {

// A class that stores static enablers for all experimental features.

class PLATFORM_EXPORT RuntimeEnabledFeatures {
public:
    static void setStableFeaturesEnabled(bool);
    static void setExperimentalFeaturesEnabled(bool);
    static void setTestFeaturesEnabled(bool);


    static void setApplicationCacheEnabled(bool isEnabled) { isApplicationCacheEnabled = isEnabled; }
    static bool applicationCacheEnabled() { return isApplicationCacheEnabled; }

    static void setAudioVideoTracksEnabled(bool isEnabled) { isAudioVideoTracksEnabled = isEnabled; }
    static bool audioVideoTracksEnabled() { return isAudioVideoTracksEnabled && isMediaEnabled; }

    static void setAuthorShadowDOMForAnyElementEnabled(bool isEnabled) { isAuthorShadowDOMForAnyElementEnabled = isEnabled; }
    static bool authorShadowDOMForAnyElementEnabled() { return isAuthorShadowDOMForAnyElementEnabled; }

    static void setBatteryStatusEnabled(bool isEnabled) { isBatteryStatusEnabled = isEnabled; }
    static bool batteryStatusEnabled() { return isBatteryStatusEnabled; }

    static void setBeaconEnabled(bool isEnabled) { isBeaconEnabled = isEnabled; }
    static bool beaconEnabled() { return isBeaconEnabled; }

    static void setPrefixedVideoFullscreenEnabled(bool isEnabled) { isPrefixedVideoFullscreenEnabled = isEnabled; }
    static bool prefixedVideoFullscreenEnabled() { return isPrefixedVideoFullscreenEnabled; }

    static void setBleedingEdgeFastPathsEnabled(bool isEnabled) { isBleedingEdgeFastPathsEnabled = isEnabled; }
    static bool bleedingEdgeFastPathsEnabled() { return isBleedingEdgeFastPathsEnabled; }

    static void setThemeColorEnabled(bool isEnabled) { isThemeColorEnabled = isEnabled; }
    static bool themeColorEnabled() { return isThemeColorEnabled; }

    static void setClientHintsDprEnabled(bool isEnabled) { isClientHintsDprEnabled = isEnabled; }
    static bool clientHintsDprEnabled() { return isClientHintsDprEnabled; }

    static void setCryptoEnabled(bool isEnabled) { isCryptoEnabled = isEnabled; }
    static bool cryptoEnabled() { return isCryptoEnabled; }

    static void setCSSAnimationUnprefixedEnabled(bool isEnabled) { isCSSAnimationUnprefixedEnabled = isEnabled; }
    static bool cssAnimationUnprefixedEnabled() { return isCSSAnimationUnprefixedEnabled; }

    static void setCSSCompositingEnabled(bool isEnabled) { isCSSCompositingEnabled = isEnabled; }
    static bool cssCompositingEnabled() { return isCSSCompositingEnabled; }

    static void setCSSExclusionsEnabled(bool isEnabled) { isCSSExclusionsEnabled = isEnabled; }
    static bool cssExclusionsEnabled() { return isCSSExclusionsEnabled; }

    static void setCSSGridLayoutEnabled(bool isEnabled) { isCSSGridLayoutEnabled = isEnabled; }
    static bool cssGridLayoutEnabled() { return isCSSGridLayoutEnabled; }

    static void setCSSMaskSourceTypeEnabled(bool isEnabled) { isCSSMaskSourceTypeEnabled = isEnabled; }
    static bool cssMaskSourceTypeEnabled() { return isCSSMaskSourceTypeEnabled; }

    static void setCSSOMSmoothScrollEnabled(bool isEnabled) { isCSSOMSmoothScrollEnabled = isEnabled; }
    static bool cssomSmoothScrollEnabled() { return isCSSOMSmoothScrollEnabled; }

    static void setCSSShapesEnabled(bool isEnabled) { isCSSShapesEnabled = isEnabled; }
    static bool cssShapesEnabled() { return isCSSShapesEnabled; }

    static void setCSSStickyPositionEnabled(bool isEnabled) { isCSSStickyPositionEnabled = isEnabled; }
    static bool cssStickyPositionEnabled() { return isCSSStickyPositionEnabled; }

    static void setCSSTouchActionEnabled(bool isEnabled) { isCSSTouchActionEnabled = isEnabled; }
    static bool cssTouchActionEnabled() { return isCSSTouchActionEnabled; }

    static void setCSSTouchActionDelayEnabled(bool isEnabled) { isCSSTouchActionDelayEnabled = isEnabled; }
    static bool cssTouchActionDelayEnabled() { return isCSSTouchActionDelayEnabled; }

    static void setCSSTransformsUnprefixedEnabled(bool isEnabled) { isCSSTransformsUnprefixedEnabled = isEnabled; }
    static bool cssTransformsUnprefixedEnabled() { return isCSSTransformsUnprefixedEnabled; }

    static void setCSSViewportEnabled(bool isEnabled) { isCSSViewportEnabled = isEnabled; }
    static bool cssViewportEnabled() { return isCSSViewportEnabled; }

    static void setCSSWillChangeEnabled(bool isEnabled) { isCSSWillChangeEnabled = isEnabled; }
    static bool cssWillChangeEnabled() { return isCSSWillChangeEnabled; }

    static void setCSS3TextEnabled(bool isEnabled) { isCSS3TextEnabled = isEnabled; }
    static bool css3TextEnabled() { return isCSS3TextEnabled; }

    static void setCSS3TextDecorationsEnabled(bool isEnabled) { isCSS3TextDecorationsEnabled = isEnabled; }
    static bool css3TextDecorationsEnabled() { return isCSS3TextDecorationsEnabled; }

    static void setCustomSchemeHandlerEnabled(bool isEnabled) { isCustomSchemeHandlerEnabled = isEnabled; }
    static bool customSchemeHandlerEnabled() { return isCustomSchemeHandlerEnabled && isNavigatorContentUtilsEnabled; }

    static void setDatabaseEnabled(bool isEnabled) { isDatabaseEnabled = isEnabled; }
    static bool databaseEnabled() { return isDatabaseEnabled; }

    static void setDeviceLightEnabled(bool isEnabled) { isDeviceLightEnabled = isEnabled; }
    static bool deviceLightEnabled() { return isDeviceLightEnabled; }

    static void setDialogElementEnabled(bool isEnabled) { isDialogElementEnabled = isEnabled; }
    static bool dialogElementEnabled() { return isDialogElementEnabled; }

    static void setEncodingAPIEnabled(bool isEnabled) { isEncodingAPIEnabled = isEnabled; }
    static bool encodingAPIEnabled() { return isEncodingAPIEnabled; }

    static void setEncryptedMediaEnabled(bool isEnabled) { isEncryptedMediaEnabled = isEnabled; }
    static bool encryptedMediaEnabled() { return isEncryptedMediaEnabled; }

    static void setEncryptedMediaAnyVersionEnabled(bool isEnabled) { isEncryptedMediaAnyVersionEnabled = isEnabled; }
    static bool encryptedMediaAnyVersionEnabled() { return isEncryptedMediaAnyVersionEnabled; }

    static void setExperimentalCanvasFeaturesEnabled(bool isEnabled) { isExperimentalCanvasFeaturesEnabled = isEnabled; }
    static bool experimentalCanvasFeaturesEnabled() { return isExperimentalCanvasFeaturesEnabled; }

    static void setExperimentalContentSecurityPolicyFeaturesEnabled(bool isEnabled) { isExperimentalContentSecurityPolicyFeaturesEnabled = isEnabled; }
    static bool experimentalContentSecurityPolicyFeaturesEnabled() { return isExperimentalContentSecurityPolicyFeaturesEnabled; }

    static void setExperimentalWebSocketEnabled(bool isEnabled) { isExperimentalWebSocketEnabled = isEnabled; }
    static bool experimentalWebSocketEnabled() { return isExperimentalWebSocketEnabled; }

    static void setFastMobileScrollingEnabled(bool isEnabled) { isFastMobileScrollingEnabled = isEnabled; }
    static bool fastMobileScrollingEnabled() { return isFastMobileScrollingEnabled; }

    static void setFileAPIBlobCloseEnabled(bool isEnabled) { isFileAPIBlobCloseEnabled = isEnabled; }
    static bool fileAPIBlobCloseEnabled() { return isFileAPIBlobCloseEnabled; }

    static void setFileConstructorEnabled(bool isEnabled) { isFileConstructorEnabled = isEnabled; }
    static bool fileConstructorEnabled() { return isFileConstructorEnabled; }

    static void setFileSystemEnabled(bool isEnabled) { isFileSystemEnabled = isEnabled; }
    static bool fileSystemEnabled() { return isFileSystemEnabled; }

    static void setFontLoadEventsEnabled(bool isEnabled) { isFontLoadEventsEnabled = isEnabled; }
    static bool fontLoadEventsEnabled() { return isFontLoadEventsEnabled; }

    static void setFastTextAutosizingEnabled(bool isEnabled) { isFastTextAutosizingEnabled = isEnabled; }
    static bool fastTextAutosizingEnabled() { return isFastTextAutosizingEnabled; }

    static void setGamepadEnabled(bool isEnabled) { isGamepadEnabled = isEnabled; }
    static bool gamepadEnabled() { return isGamepadEnabled; }

    static void setHTMLImportsEnabled(bool isEnabled) { isHTMLImportsEnabled = isEnabled; }
    static bool htmlImportsEnabled() { return isHTMLImportsEnabled; }

    static void setHighResolutionTimeInWorkersEnabled(bool isEnabled) { isHighResolutionTimeInWorkersEnabled = isEnabled; }
    static bool highResolutionTimeInWorkersEnabled() { return isHighResolutionTimeInWorkersEnabled; }

    static void setIMEAPIEnabled(bool isEnabled) { isIMEAPIEnabled = isEnabled; }
    static bool imeAPIEnabled() { return isIMEAPIEnabled; }

    static void setImageDataConstructorEnabled(bool isEnabled) { isImageDataConstructorEnabled = isEnabled; }
    static bool imageDataConstructorEnabled() { return isImageDataConstructorEnabled; }

    static void setIndexedDBExperimentalEnabled(bool isEnabled) { isIndexedDBExperimentalEnabled = isEnabled; }
    static bool indexedDBExperimentalEnabled() { return isIndexedDBExperimentalEnabled; }

    static void setInputModeAttributeEnabled(bool isEnabled) { isInputModeAttributeEnabled = isEnabled; }
    static bool inputModeAttributeEnabled() { return isInputModeAttributeEnabled; }

    static void setLangAttributeAwareFormControlUIEnabled(bool isEnabled) { isLangAttributeAwareFormControlUIEnabled = isEnabled; }
    static bool langAttributeAwareFormControlUIEnabled() { return isLangAttributeAwareFormControlUIEnabled; }

    static void setLayerSquashingEnabled(bool isEnabled) { isLayerSquashingEnabled = isEnabled; }
    static bool layerSquashingEnabled() { return isLayerSquashingEnabled; }

    static void setPrefixedEncryptedMediaEnabled(bool isEnabled) { isPrefixedEncryptedMediaEnabled = isEnabled; }
    static bool prefixedEncryptedMediaEnabled() { return isPrefixedEncryptedMediaEnabled; }

    static void setLocalStorageEnabled(bool isEnabled) { isLocalStorageEnabled = isEnabled; }
    static bool localStorageEnabled() { return isLocalStorageEnabled; }

    static void setManifestEnabled(bool isEnabled) { isManifestEnabled = isEnabled; }
    static bool manifestEnabled() { return isManifestEnabled; }

    static void setMediaEnabled(bool isEnabled) { isMediaEnabled = isEnabled; }
    static bool mediaEnabled() { return isMediaEnabled; }

    static void setMediaControllerEnabled(bool isEnabled) { isMediaControllerEnabled = isEnabled; }
    static bool mediaControllerEnabled() { return isMediaControllerEnabled && isMediaEnabled; }

    static void setMediaQueryParserEnabled(bool isEnabled) { isMediaQueryParserEnabled = isEnabled; }
    static bool mediaQueryParserEnabled() { return isMediaQueryParserEnabled; }

    static void setMediaSourceEnabled(bool isEnabled) { isMediaSourceEnabled = isEnabled; }
    static bool mediaSourceEnabled() { return isMediaSourceEnabled; }

    static void setMediaSourceExperimentalEnabled(bool isEnabled) { isMediaSourceExperimentalEnabled = isEnabled; }
    static bool mediaSourceExperimentalEnabled() { return isMediaSourceExperimentalEnabled && isMediaSourceEnabled; }

    static void setMediaStreamEnabled(bool isEnabled) { isMediaStreamEnabled = isEnabled; }
    static bool mediaStreamEnabled() { return isMediaStreamEnabled; }

    static void setMemoryInfoInWorkersEnabled(bool isEnabled) { isMemoryInfoInWorkersEnabled = isEnabled; }
    static bool memoryInfoInWorkersEnabled() { return isMemoryInfoInWorkersEnabled; }

    static void setNavigationTransitionsEnabled(bool isEnabled) { isNavigationTransitionsEnabled = isEnabled; }
    static bool navigationTransitionsEnabled() { return isNavigationTransitionsEnabled; }

    static void setNavigatorContentUtilsEnabled(bool isEnabled) { isNavigatorContentUtilsEnabled = isEnabled; }
    static bool navigatorContentUtilsEnabled() { return isNavigatorContentUtilsEnabled; }

    static void setNetworkInformationEnabled(bool isEnabled) { isNetworkInformationEnabled = isEnabled; }
    static bool networkInformationEnabled() { return isNetworkInformationEnabled; }

    static void setNotificationsEnabled(bool isEnabled) { isNotificationsEnabled = isEnabled; }
    static bool notificationsEnabled() { return isNotificationsEnabled; }

    static void setObjectFitPositionEnabled(bool isEnabled) { isObjectFitPositionEnabled = isEnabled; }
    static bool objectFitPositionEnabled() { return isObjectFitPositionEnabled; }

    static void setOrientationEventEnabled(bool isEnabled) { isOrientationEventEnabled = isEnabled; }
    static bool orientationEventEnabled() { return isOrientationEventEnabled; }

    static void setOverlayFullscreenVideoEnabled(bool isEnabled) { isOverlayFullscreenVideoEnabled = isEnabled; }
    static bool overlayFullscreenVideoEnabled() { return isOverlayFullscreenVideoEnabled; }

    static void setPagePopupEnabled(bool isEnabled) { isPagePopupEnabled = isEnabled; }
    static bool pagePopupEnabled() { return isPagePopupEnabled; }

    static void setPath2DEnabled(bool isEnabled) { isPath2DEnabled = isEnabled; }
    static bool path2DEnabled() { return isPath2DEnabled; }

    static void setPathOpsSVGClippingEnabled(bool isEnabled) { isPathOpsSVGClippingEnabled = isEnabled; }
    static bool pathOpsSVGClippingEnabled() { return isPathOpsSVGClippingEnabled; }

    static void setPeerConnectionEnabled(bool isEnabled) { isPeerConnectionEnabled = isEnabled; }
    static bool peerConnectionEnabled() { return isPeerConnectionEnabled && isMediaStreamEnabled; }

    static void setPreciseMemoryInfoEnabled(bool isEnabled) { isPreciseMemoryInfoEnabled = isEnabled; }
    static bool preciseMemoryInfoEnabled() { return isPreciseMemoryInfoEnabled; }

    static void setPushMessagingEnabled(bool isEnabled) { isPushMessagingEnabled = isEnabled; }
    static bool pushMessagingEnabled() { return isPushMessagingEnabled; }

    static void setQuotaEnabled(bool isEnabled) { isQuotaEnabled = isEnabled; }
    static bool quotaEnabled() { return isQuotaEnabled; }

    static void setQuotaPromiseEnabled(bool isEnabled) { isQuotaPromiseEnabled = isEnabled; }
    static bool quotaPromiseEnabled() { return isQuotaPromiseEnabled; }

    static void setOverlayScrollbarsEnabled(bool isEnabled) { isOverlayScrollbarsEnabled = isEnabled; }
    static bool overlayScrollbarsEnabled() { return isOverlayScrollbarsEnabled; }

    static void setRegionBasedColumnsEnabled(bool isEnabled) { isRegionBasedColumnsEnabled = isEnabled; }
    static bool regionBasedColumnsEnabled() { return isRegionBasedColumnsEnabled; }

    static void setRepaintAfterLayoutEnabled(bool isEnabled) { isRepaintAfterLayoutEnabled = isEnabled; }
    static bool repaintAfterLayoutEnabled() { return isRepaintAfterLayoutEnabled; }

    static void setRequestAutocompleteEnabled(bool isEnabled) { isRequestAutocompleteEnabled = isEnabled; }
    static bool requestAutocompleteEnabled() { return isRequestAutocompleteEnabled; }

    static void setScreenOrientationEnabled(bool isEnabled) { isScreenOrientationEnabled = isEnabled; }
    static bool screenOrientationEnabled() { return isScreenOrientationEnabled; }

    static void setScriptedSpeechEnabled(bool isEnabled) { isScriptedSpeechEnabled = isEnabled; }
    static bool scriptedSpeechEnabled() { return isScriptedSpeechEnabled; }

    static void setScrollTopLeftInteropEnabled(bool isEnabled) { isScrollTopLeftInteropEnabled = isEnabled; }
    static bool scrollTopLeftInteropEnabled() { return isScrollTopLeftInteropEnabled; }

    static void setServiceWorkerEnabled(bool isEnabled) { isServiceWorkerEnabled = isEnabled; }
    static bool serviceWorkerEnabled() { return isServiceWorkerEnabled; }

    static void setSessionStorageEnabled(bool isEnabled) { isSessionStorageEnabled = isEnabled; }
    static bool sessionStorageEnabled() { return isSessionStorageEnabled; }

    static void setSharedWorkerEnabled(bool isEnabled) { isSharedWorkerEnabled = isEnabled; }
    static bool sharedWorkerEnabled() { return isSharedWorkerEnabled; }

    static void setPictureSizesEnabled(bool isEnabled) { isPictureSizesEnabled = isEnabled; }
    static bool pictureSizesEnabled() { return isPictureSizesEnabled; }

    static void setPictureEnabled(bool isEnabled) { isPictureEnabled = isEnabled; }
    static bool pictureEnabled() { return isPictureEnabled; }

    static void setShowModalDialogEnabled(bool isEnabled) { isShowModalDialogEnabled = isEnabled; }
    static bool showModalDialogEnabled() { return isShowModalDialogEnabled; }

    static void setSpeechSynthesisEnabled(bool isEnabled) { isSpeechSynthesisEnabled = isEnabled; }
    static bool speechSynthesisEnabled() { return isSpeechSynthesisEnabled; }

    static void setStreamEnabled(bool isEnabled) { isStreamEnabled = isEnabled; }
    static bool streamEnabled() { return isStreamEnabled; }

    static void setSubpixelFontScalingEnabled(bool isEnabled) { isSubpixelFontScalingEnabled = isEnabled; }
    static bool subpixelFontScalingEnabled() { return isSubpixelFontScalingEnabled; }

    static void setSubresourceIntegrityEnabled(bool isEnabled) { isSubresourceIntegrityEnabled = isEnabled; }
    static bool subresourceIntegrityEnabled() { return isSubresourceIntegrityEnabled; }

    static void setTargetedStyleRecalcEnabled(bool isEnabled) { isTargetedStyleRecalcEnabled = isEnabled; }
    static bool targetedStyleRecalcEnabled() { return isTargetedStyleRecalcEnabled; }

    static void setTouchEnabled(bool isEnabled) { isTouchEnabled = isEnabled; }
    static bool touchEnabled() { return isTouchEnabled; }

    static void setTouchIconLoadingEnabled(bool isEnabled) { isTouchIconLoadingEnabled = isEnabled; }
    static bool touchIconLoadingEnabled() { return isTouchIconLoadingEnabled; }

    static void setThreadedParserDataReceiverEnabled(bool isEnabled) { isThreadedParserDataReceiverEnabled = isEnabled; }
    static bool threadedParserDataReceiverEnabled() { return isThreadedParserDataReceiverEnabled; }

    static void setUserSelectAllEnabled(bool isEnabled) { isUserSelectAllEnabled = isEnabled; }
    static bool userSelectAllEnabled() { return isUserSelectAllEnabled; }

    static void setWebAnimationsSVGEnabled(bool isEnabled) { isWebAnimationsSVGEnabled = isEnabled; }
    static bool webAnimationsSVGEnabled() { return isWebAnimationsSVGEnabled; }

    static void setWebAnimationsElementAnimateEnabled(bool isEnabled) { isWebAnimationsElementAnimateEnabled = isEnabled; }
    static bool webAnimationsElementAnimateEnabled() { return isWebAnimationsElementAnimateEnabled; }

    static void setWebAnimationsAPIEnabled(bool isEnabled) { isWebAnimationsAPIEnabled = isEnabled; }
    static bool webAnimationsAPIEnabled() { return isWebAnimationsAPIEnabled && isWebAnimationsElementAnimateEnabled; }

#if ENABLE(WEB_AUDIO)
    static void setWebAudioEnabled(bool isEnabled) { isWebAudioEnabled = isEnabled; }
    static bool webAudioEnabled() { return isWebAudioEnabled; }
#else
    static void setWebAudioEnabled(bool) { }
    static bool webAudioEnabled() { return false; }
#endif

    static void setWebGLDraftExtensionsEnabled(bool isEnabled) { isWebGLDraftExtensionsEnabled = isEnabled; }
    static bool webGLDraftExtensionsEnabled() { return isWebGLDraftExtensionsEnabled; }

    static void setWebGLImageChromiumEnabled(bool isEnabled) { isWebGLImageChromiumEnabled = isEnabled; }
    static bool webGLImageChromiumEnabled() { return isWebGLImageChromiumEnabled; }

    static void setWebMIDIEnabled(bool isEnabled) { isWebMIDIEnabled = isEnabled; }
    static bool webMIDIEnabled() { return isWebMIDIEnabled; }

    static void setWebVTTRegionsEnabled(bool isEnabled) { isWebVTTRegionsEnabled = isEnabled; }
    static bool webVTTRegionsEnabled() { return isWebVTTRegionsEnabled && isMediaEnabled; }

    static void setWOFF2Enabled(bool isEnabled) { isWOFF2Enabled = isEnabled; }
    static bool woff2Enabled() { return isWOFF2Enabled; }

    static void setXSLTEnabled(bool isEnabled) { isXSLTEnabled = isEnabled; }
    static bool xsltEnabled() { return isXSLTEnabled; }

    static void setPseudoClassesInMatchingCriteriaInAuthorShadowTreesEnabled(bool isEnabled) { isPseudoClassesInMatchingCriteriaInAuthorShadowTreesEnabled = isEnabled; }
    static bool pseudoClassesInMatchingCriteriaInAuthorShadowTreesEnabled() { return isPseudoClassesInMatchingCriteriaInAuthorShadowTreesEnabled; }


private:
    RuntimeEnabledFeatures() { }

    static bool isApplicationCacheEnabled;
    static bool isAudioVideoTracksEnabled;
    static bool isAuthorShadowDOMForAnyElementEnabled;
    static bool isBatteryStatusEnabled;
    static bool isBeaconEnabled;
    static bool isPrefixedVideoFullscreenEnabled;
    static bool isBleedingEdgeFastPathsEnabled;
    static bool isThemeColorEnabled;
    static bool isClientHintsDprEnabled;
    static bool isCryptoEnabled;
    static bool isCSSAnimationUnprefixedEnabled;
    static bool isCSSCompositingEnabled;
    static bool isCSSExclusionsEnabled;
    static bool isCSSGridLayoutEnabled;
    static bool isCSSMaskSourceTypeEnabled;
    static bool isCSSOMSmoothScrollEnabled;
    static bool isCSSShapesEnabled;
    static bool isCSSStickyPositionEnabled;
    static bool isCSSTouchActionEnabled;
    static bool isCSSTouchActionDelayEnabled;
    static bool isCSSTransformsUnprefixedEnabled;
    static bool isCSSViewportEnabled;
    static bool isCSSWillChangeEnabled;
    static bool isCSS3TextEnabled;
    static bool isCSS3TextDecorationsEnabled;
    static bool isCustomSchemeHandlerEnabled;
    static bool isDatabaseEnabled;
    static bool isDeviceLightEnabled;
    static bool isDialogElementEnabled;
    static bool isEncodingAPIEnabled;
    static bool isEncryptedMediaEnabled;
    static bool isEncryptedMediaAnyVersionEnabled;
    static bool isExperimentalCanvasFeaturesEnabled;
    static bool isExperimentalContentSecurityPolicyFeaturesEnabled;
    static bool isExperimentalWebSocketEnabled;
    static bool isFastMobileScrollingEnabled;
    static bool isFileAPIBlobCloseEnabled;
    static bool isFileConstructorEnabled;
    static bool isFileSystemEnabled;
    static bool isFontLoadEventsEnabled;
    static bool isFastTextAutosizingEnabled;
    static bool isGamepadEnabled;
    static bool isHTMLImportsEnabled;
    static bool isHighResolutionTimeInWorkersEnabled;
    static bool isIMEAPIEnabled;
    static bool isImageDataConstructorEnabled;
    static bool isIndexedDBExperimentalEnabled;
    static bool isInputModeAttributeEnabled;
    static bool isLangAttributeAwareFormControlUIEnabled;
    static bool isLayerSquashingEnabled;
    static bool isPrefixedEncryptedMediaEnabled;
    static bool isLocalStorageEnabled;
    static bool isManifestEnabled;
    static bool isMediaEnabled;
    static bool isMediaControllerEnabled;
    static bool isMediaQueryParserEnabled;
    static bool isMediaSourceEnabled;
    static bool isMediaSourceExperimentalEnabled;
    static bool isMediaStreamEnabled;
    static bool isMemoryInfoInWorkersEnabled;
    static bool isNavigationTransitionsEnabled;
    static bool isNavigatorContentUtilsEnabled;
    static bool isNetworkInformationEnabled;
    static bool isNotificationsEnabled;
    static bool isObjectFitPositionEnabled;
    static bool isOrientationEventEnabled;
    static bool isOverlayFullscreenVideoEnabled;
    static bool isPagePopupEnabled;
    static bool isPath2DEnabled;
    static bool isPathOpsSVGClippingEnabled;
    static bool isPeerConnectionEnabled;
    static bool isPreciseMemoryInfoEnabled;
    static bool isPushMessagingEnabled;
    static bool isQuotaEnabled;
    static bool isQuotaPromiseEnabled;
    static bool isOverlayScrollbarsEnabled;
    static bool isRegionBasedColumnsEnabled;
    static bool isRepaintAfterLayoutEnabled;
    static bool isRequestAutocompleteEnabled;
    static bool isScreenOrientationEnabled;
    static bool isScriptedSpeechEnabled;
    static bool isScrollTopLeftInteropEnabled;
    static bool isServiceWorkerEnabled;
    static bool isSessionStorageEnabled;
    static bool isSharedWorkerEnabled;
    static bool isPictureSizesEnabled;
    static bool isPictureEnabled;
    static bool isShowModalDialogEnabled;
    static bool isSpeechSynthesisEnabled;
    static bool isStreamEnabled;
    static bool isSubpixelFontScalingEnabled;
    static bool isSubresourceIntegrityEnabled;
    static bool isTargetedStyleRecalcEnabled;
    static bool isTouchEnabled;
    static bool isTouchIconLoadingEnabled;
    static bool isThreadedParserDataReceiverEnabled;
    static bool isUserSelectAllEnabled;
    static bool isWebAnimationsSVGEnabled;
    static bool isWebAnimationsElementAnimateEnabled;
    static bool isWebAnimationsAPIEnabled;
#if ENABLE(WEB_AUDIO)
    static bool isWebAudioEnabled;
#endif // ENABLE(WEB_AUDIO)
    static bool isWebGLDraftExtensionsEnabled;
    static bool isWebGLImageChromiumEnabled;
    static bool isWebMIDIEnabled;
    static bool isWebVTTRegionsEnabled;
    static bool isWOFF2Enabled;
    static bool isXSLTEnabled;
    static bool isPseudoClassesInMatchingCriteriaInAuthorShadowTreesEnabled;
};

} // namespace blink

#endif // RuntimeEnabledFeatures_h
