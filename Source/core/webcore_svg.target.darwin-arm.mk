# This file is generated by gyp; do not edit.

include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := third_party_WebKit_Source_core_webcore_svg_gyp
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(call local-intermediates-dir)
gyp_shared_intermediate_dir := $(call intermediates-dir-for,GYP,shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES := \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_core_webcore_prerequisites_gyp)/webcore_prerequisites.stamp \
	$(call intermediates-dir-for,STATIC_LIBRARIES,skia_skia_library_gyp)/skia_skia_library_gyp.a

GYP_GENERATED_OUTPUTS :=

# Make sure our deps and generated files are built first.
LOCAL_ADDITIONAL_DEPENDENCIES := $(GYP_TARGET_DEPENDENCIES) $(GYP_GENERATED_OUTPUTS)

LOCAL_GENERATED_SOURCES :=

GYP_COPIED_SOURCE_ORIGIN_DIRS :=

LOCAL_SRC_FILES := \
	third_party/WebKit/Source/core/rendering/style/SVGRenderStyle.cpp \
	third_party/WebKit/Source/core/rendering/style/SVGRenderStyleDefs.cpp \
	third_party/WebKit/Source/core/rendering/svg/ReferenceFilterBuilder.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGBlock.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGContainer.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGEllipse.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGForeignObject.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGGradientStop.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGHiddenContainer.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGImage.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGInline.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGInlineText.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGModelObject.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGPath.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGRect.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResource.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceClipper.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceContainer.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceFilter.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceFilterPrimitive.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceGradient.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceLinearGradient.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceMarker.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceMasker.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourcePattern.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceRadialGradient.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGResourceSolidColor.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGRoot.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGShape.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGTSpan.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGText.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGTextPath.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGTransformableContainer.cpp \
	third_party/WebKit/Source/core/rendering/svg/RenderSVGViewportContainer.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGInlineFlowBox.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGInlineTextBox.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGPathData.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGRenderSupport.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGRenderTreeAsText.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGRenderingContext.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGResources.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGResourcesCache.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGResourcesCycleSolver.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGRootInlineBox.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextChunk.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextChunkBuilder.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextLayoutAttributes.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextLayoutAttributesBuilder.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextLayoutEngine.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextLayoutEngineBaseline.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextLayoutEngineSpacing.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextMetrics.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextMetricsBuilder.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextQuery.cpp \
	third_party/WebKit/Source/core/rendering/svg/SVGTextRunRenderingContext.cpp \
	third_party/WebKit/Source/core/svg/ColorDistance.cpp \
	third_party/WebKit/Source/core/svg/SVGAElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAltGlyphDefElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAltGlyphElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAltGlyphItemElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAngle.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimateColorElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedAngle.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedBoolean.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedColor.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedEnumeration.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedInteger.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedIntegerOptionalInteger.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedLength.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedLengthList.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedNumber.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedNumberList.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedNumberOptionalNumber.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedPath.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedPointList.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedPreserveAspectRatio.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedRect.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedString.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedTransformList.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedType.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimatedTypeAnimator.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimateElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimateMotionElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimateTransformElement.cpp \
	third_party/WebKit/Source/core/svg/SVGAnimationElement.cpp \
	third_party/WebKit/Source/core/svg/SVGCircleElement.cpp \
	third_party/WebKit/Source/core/svg/SVGClipPathElement.cpp \
	third_party/WebKit/Source/core/svg/SVGColor.cpp \
	third_party/WebKit/Source/core/svg/SVGComponentTransferFunctionElement.cpp \
	third_party/WebKit/Source/core/svg/SVGCursorElement.cpp \
	third_party/WebKit/Source/core/svg/SVGDefsElement.cpp \
	third_party/WebKit/Source/core/svg/SVGDescElement.cpp \
	third_party/WebKit/Source/core/svg/SVGDocument.cpp \
	third_party/WebKit/Source/core/svg/SVGDocumentExtensions.cpp \
	third_party/WebKit/Source/core/svg/SVGElement.cpp \
	third_party/WebKit/Source/core/svg/SVGElementInstance.cpp \
	third_party/WebKit/Source/core/svg/SVGElementInstanceList.cpp \
	third_party/WebKit/Source/core/svg/SVGEllipseElement.cpp \
	third_party/WebKit/Source/core/svg/SVGExternalResourcesRequired.cpp \
	third_party/WebKit/Source/core/svg/SVGFEBlendElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEColorMatrixElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEComponentTransferElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFECompositeElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEConvolveMatrixElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEDiffuseLightingElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEDisplacementMapElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEDistantLightElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEDropShadowElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEFloodElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEFuncAElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEFuncBElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEFuncGElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEFuncRElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEGaussianBlurElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEImageElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFELightElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEMergeElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEMergeNodeElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEMorphologyElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEOffsetElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFEPointLightElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFESpecularLightingElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFESpotLightElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFETileElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFETurbulenceElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFilterElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFilterPrimitiveStandardAttributes.cpp \
	third_party/WebKit/Source/core/svg/SVGFitToViewBox.cpp \
	third_party/WebKit/Source/core/svg/SVGFontData.cpp \
	third_party/WebKit/Source/core/svg/SVGFontElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFontFaceElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFontFaceFormatElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFontFaceNameElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFontFaceSrcElement.cpp \
	third_party/WebKit/Source/core/svg/SVGFontFaceUriElement.cpp \
	third_party/WebKit/Source/core/svg/SVGForeignObjectElement.cpp \
	third_party/WebKit/Source/core/svg/SVGGElement.cpp \
	third_party/WebKit/Source/core/svg/SVGGlyphElement.cpp \
	third_party/WebKit/Source/core/svg/SVGGlyphRefElement.cpp \
	third_party/WebKit/Source/core/svg/SVGGradientElement.cpp \
	third_party/WebKit/Source/core/svg/SVGGraphicsElement.cpp \
	third_party/WebKit/Source/core/svg/SVGHKernElement.cpp \
	third_party/WebKit/Source/core/svg/SVGImageElement.cpp \
	third_party/WebKit/Source/core/svg/SVGImageLoader.cpp \
	third_party/WebKit/Source/core/svg/SVGLangSpace.cpp \
	third_party/WebKit/Source/core/svg/SVGLength.cpp \
	third_party/WebKit/Source/core/svg/SVGLengthContext.cpp \
	third_party/WebKit/Source/core/svg/SVGLengthList.cpp \
	third_party/WebKit/Source/core/svg/SVGLineElement.cpp \
	third_party/WebKit/Source/core/svg/SVGLinearGradientElement.cpp \
	third_party/WebKit/Source/core/svg/SVGLocatable.cpp \
	third_party/WebKit/Source/core/svg/SVGMPathElement.cpp \
	third_party/WebKit/Source/core/svg/SVGMarkerElement.cpp \
	third_party/WebKit/Source/core/svg/SVGMaskElement.cpp \
	third_party/WebKit/Source/core/svg/SVGMetadataElement.cpp \
	third_party/WebKit/Source/core/svg/SVGMissingGlyphElement.cpp \
	third_party/WebKit/Source/core/svg/SVGNumberList.cpp \
	third_party/WebKit/Source/core/svg/SVGPaint.cpp \
	third_party/WebKit/Source/core/svg/SVGParserUtilities.cpp \
	third_party/WebKit/Source/core/svg/SVGPathBlender.cpp \
	third_party/WebKit/Source/core/svg/SVGPathBuilder.cpp \
	third_party/WebKit/Source/core/svg/SVGPathByteStreamBuilder.cpp \
	third_party/WebKit/Source/core/svg/SVGPathByteStreamSource.cpp \
	third_party/WebKit/Source/core/svg/SVGPathElement.cpp \
	third_party/WebKit/Source/core/svg/SVGPathParser.cpp \
	third_party/WebKit/Source/core/svg/SVGPathSegList.cpp \
	third_party/WebKit/Source/core/svg/SVGPathSegListBuilder.cpp \
	third_party/WebKit/Source/core/svg/SVGPathSegListSource.cpp \
	third_party/WebKit/Source/core/svg/SVGPathStringBuilder.cpp \
	third_party/WebKit/Source/core/svg/SVGPathStringSource.cpp \
	third_party/WebKit/Source/core/svg/SVGPathTraversalStateBuilder.cpp \
	third_party/WebKit/Source/core/svg/SVGPathUtilities.cpp \
	third_party/WebKit/Source/core/svg/SVGPatternElement.cpp \
	third_party/WebKit/Source/core/svg/SVGPointList.cpp \
	third_party/WebKit/Source/core/svg/SVGPolyElement.cpp \
	third_party/WebKit/Source/core/svg/SVGPolygonElement.cpp \
	third_party/WebKit/Source/core/svg/SVGPolylineElement.cpp \
	third_party/WebKit/Source/core/svg/SVGPreserveAspectRatio.cpp \
	third_party/WebKit/Source/core/svg/SVGRadialGradientElement.cpp \
	third_party/WebKit/Source/core/svg/SVGRectElement.cpp \
	third_party/WebKit/Source/core/svg/SVGSVGElement.cpp \
	third_party/WebKit/Source/core/svg/SVGScriptElement.cpp \
	third_party/WebKit/Source/core/svg/SVGSetElement.cpp \
	third_party/WebKit/Source/core/svg/SVGStopElement.cpp \
	third_party/WebKit/Source/core/svg/SVGStringList.cpp \
	third_party/WebKit/Source/core/svg/SVGStyleElement.cpp \
	third_party/WebKit/Source/core/svg/SVGSwitchElement.cpp \
	third_party/WebKit/Source/core/svg/SVGSymbolElement.cpp \
	third_party/WebKit/Source/core/svg/SVGTSpanElement.cpp \
	third_party/WebKit/Source/core/svg/SVGTests.cpp \
	third_party/WebKit/Source/core/svg/SVGTextContentElement.cpp \
	third_party/WebKit/Source/core/svg/SVGTextElement.cpp \
	third_party/WebKit/Source/core/svg/SVGTextPathElement.cpp \
	third_party/WebKit/Source/core/svg/SVGTextPositioningElement.cpp \
	third_party/WebKit/Source/core/svg/SVGTitleElement.cpp \
	third_party/WebKit/Source/core/svg/SVGTransform.cpp \
	third_party/WebKit/Source/core/svg/SVGTransformDistance.cpp \
	third_party/WebKit/Source/core/svg/SVGTransformList.cpp \
	third_party/WebKit/Source/core/svg/SVGTransformable.cpp \
	third_party/WebKit/Source/core/svg/SVGURIReference.cpp \
	third_party/WebKit/Source/core/svg/SVGUnknownElement.cpp \
	third_party/WebKit/Source/core/svg/SVGUseElement.cpp \
	third_party/WebKit/Source/core/svg/SVGVKernElement.cpp \
	third_party/WebKit/Source/core/svg/SVGViewElement.cpp \
	third_party/WebKit/Source/core/svg/SVGViewSpec.cpp \
	third_party/WebKit/Source/core/svg/SVGZoomAndPan.cpp \
	third_party/WebKit/Source/core/svg/SVGZoomEvent.cpp \
	third_party/WebKit/Source/core/svg/animation/SMILTime.cpp \
	third_party/WebKit/Source/core/svg/animation/SMILTimeContainer.cpp \
	third_party/WebKit/Source/core/svg/animation/SVGSMILElement.cpp \
	third_party/WebKit/Source/core/svg/graphics/SVGImageCache.cpp \
	third_party/WebKit/Source/core/svg/graphics/SVGImage.cpp \
	third_party/WebKit/Source/core/svg/graphics/SVGImageForContainer.cpp \
	third_party/WebKit/Source/core/svg/graphics/filters/SVGFEImage.cpp \
	third_party/WebKit/Source/core/svg/graphics/filters/SVGFilter.cpp \
	third_party/WebKit/Source/core/svg/graphics/filters/SVGFilterBuilder.cpp \
	third_party/WebKit/Source/core/svg/properties/SVGAnimatedProperty.cpp \
	third_party/WebKit/Source/core/svg/properties/SVGAttributeToPropertyMap.cpp \
	third_party/WebKit/Source/core/svg/properties/SVGPathSegListPropertyTearOff.cpp


# Flags passed to both C and C++ files.
MY_CFLAGS_Debug := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-format \
	-fno-tree-sra \
	-fuse-ld=gold \
	-Wno-psabi \
	-ffunction-sections \
	-funwind-tables \
	-g \
	-fstack-protector \
	-fno-short-enums \
	-finline-limit=64 \
	-Wa,--noexecstack \
	-U_FORTIFY_SOURCE \
	-Wno-extra \
	-Wno-ignored-qualifiers \
	-Wno-type-limits \
	-Wno-address \
	-Wno-format-security \
	-Wno-return-type \
	-Wno-sequence-point \
	-Os \
	-g \
	-fomit-frame-pointer \
	-fdata-sections \
	-ffunction-sections

MY_DEFS_Debug := \
	'-DANGLE_DX11' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DNO_TCMALLOC' \
	'-DDISCARDABLE_MEMORY_ALWAYS_SUPPORTED_NATIVELY' \
	'-DSYSTEM_NATIVELY_SIGNALS_MEMORY_PRESSURE' \
	'-DDISABLE_NACL' \
	'-DCHROMIUM_BUILD' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DUSE_PROPRIETARY_CODECS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DUSE_OPENSSL=1' \
	'-DENABLE_EGLIMAGE=1' \
	'-DCLD_VERSION=1' \
	'-DBLINK_IMPLEMENTATION=1' \
	'-DINSIDE_BLINK' \
	'-DENABLE_CSS3_TEXT=0' \
	'-DENABLE_CSS_EXCLUSIONS=1' \
	'-DENABLE_CSS_REGIONS=1' \
	'-DENABLE_CUSTOM_SCHEME_HANDLER=0' \
	'-DENABLE_ENCRYPTED_MEDIA_V2=1' \
	'-DENABLE_SVG_FONTS=1' \
	'-DENABLE_GDI_FONTS_ON_WINDOWS=0' \
	'-DENABLE_TOUCH_ICON_LOADING=1' \
	'-DWTF_USE_CONCATENATED_IMPULSE_RESPONSES=1' \
	'-DENABLE_CALENDAR_PICKER=0' \
	'-DENABLE_FAST_MOBILE_SCROLLING=1' \
	'-DENABLE_INPUT_SPEECH=0' \
	'-DENABLE_LEGACY_NOTIFICATIONS=0' \
	'-DENABLE_MEDIA_CAPTURE=1' \
	'-DENABLE_ORIENTATION_EVENTS=1' \
	'-DENABLE_NAVIGATOR_CONTENT_UTILS=0' \
	'-DENABLE_OPENTYPE_VERTICAL=1' \
	'-DU_USING_ICU_NAMESPACE=0' \
	'-DSK_ENABLE_INST_COUNT=0' \
	'-DSK_SUPPORT_GPU=1' \
	'-DGR_GL_CUSTOM_SETUP_HEADER="GrGLConfig_chrome.h"' \
	'-DSK_ENABLE_LEGACY_API_ALIASING=1' \
	'-DSK_BUILD_FOR_ANDROID' \
	'-DSK_USE_POSIX_THREADS' \
	'-DSK_DEFERRED_CANVAS_USES_FACTORIES=1' \
	'-DCHROME_PNG_WRITE_SUPPORT' \
	'-DPNG_USER_CONFIG' \
	'-DLIBXML_STATIC' \
	'-DLIBXSLT_STATIC' \
	'-DUSE_SYSTEM_LIBJPEG' \
	'-DANDROID' \
	'-D__GNU_SOURCE=1' \
	'-DUSE_STLPORT=1' \
	'-D_STLP_USE_PTR_SPECIALIZATIONS=1' \
	'-DCHROME_BUILD_ID=""' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=1' \
	'-DWTF_USE_DYNAMIC_ANNOTATIONS=1' \
	'-D_DEBUG'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Debug := \
	$(gyp_shared_intermediate_dir)/shim_headers/ashmem/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icuuc/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icui18n/target \
	$(LOCAL_PATH)/third_party/khronos \
	$(LOCAL_PATH)/gpu \
	$(LOCAL_PATH) \
	$(LOCAL_PATH)/third_party/WebKit \
	$(LOCAL_PATH)/third_party/WebKit/Source \
	$(gyp_shared_intermediate_dir)/blink \
	$(gyp_shared_intermediate_dir)/blink/bindings \
	$(LOCAL_PATH)/third_party/angle_dx11/include \
	$(PWD)/external/icu4c/common \
	$(PWD)/external/icu4c/i18n \
	$(LOCAL_PATH)/third_party/skia/src/core \
	$(LOCAL_PATH)/skia/config \
	$(LOCAL_PATH)/third_party/skia/include/config \
	$(LOCAL_PATH)/third_party/skia/include/core \
	$(LOCAL_PATH)/third_party/skia/include/effects \
	$(LOCAL_PATH)/third_party/skia/include/pdf \
	$(LOCAL_PATH)/third_party/skia/include/gpu \
	$(LOCAL_PATH)/third_party/skia/include/lazy \
	$(LOCAL_PATH)/third_party/skia/include/pathops \
	$(LOCAL_PATH)/third_party/skia/include/pipe \
	$(LOCAL_PATH)/third_party/skia/include/ports \
	$(LOCAL_PATH)/third_party/skia/include/utils \
	$(LOCAL_PATH)/skia/ext \
	$(LOCAL_PATH)/third_party/iccjpeg \
	$(LOCAL_PATH)/third_party/libpng \
	$(LOCAL_PATH)/third_party/libwebp \
	$(LOCAL_PATH)/third_party/libxml/linux/include \
	$(LOCAL_PATH)/third_party/libxml/src/include \
	$(LOCAL_PATH)/third_party/libxslt \
	$(LOCAL_PATH)/third_party/npapi \
	$(LOCAL_PATH)/third_party/npapi/bindings \
	$(LOCAL_PATH)/third_party/ots/include \
	$(LOCAL_PATH)/third_party/qcms/src \
	$(LOCAL_PATH)/third_party/sqlite \
	$(LOCAL_PATH)/third_party/zlib \
	$(LOCAL_PATH)/v8/include \
	$(PWD)/external/jpeg \
	$(PWD)/frameworks/wilhelm/include \
	$(PWD)/bionic \
	$(PWD)/external/stlport/stlport


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Debug := \
	-fno-rtti \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-Wno-c++0x-compat \
	-Wno-deprecated \
	-Wno-abi \
	-Wno-error=c++0x-compat \
	-Wno-non-virtual-dtor \
	-Wno-sign-promo \
	-Wno-non-virtual-dtor


# Flags passed to both C and C++ files.
MY_CFLAGS_Release := \
	-fstack-protector \
	--param=ssp-buffer-size=4 \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-Wno-format \
	-fno-tree-sra \
	-fuse-ld=gold \
	-Wno-psabi \
	-ffunction-sections \
	-funwind-tables \
	-g \
	-fstack-protector \
	-fno-short-enums \
	-finline-limit=64 \
	-Wa,--noexecstack \
	-U_FORTIFY_SOURCE \
	-Wno-extra \
	-Wno-ignored-qualifiers \
	-Wno-type-limits \
	-Wno-address \
	-Wno-format-security \
	-Wno-return-type \
	-Wno-sequence-point \
	-Os \
	-fno-ident \
	-fdata-sections \
	-ffunction-sections \
	-fomit-frame-pointer

MY_DEFS_Release := \
	'-DANGLE_DX11' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DNO_TCMALLOC' \
	'-DDISCARDABLE_MEMORY_ALWAYS_SUPPORTED_NATIVELY' \
	'-DSYSTEM_NATIVELY_SIGNALS_MEMORY_PRESSURE' \
	'-DDISABLE_NACL' \
	'-DCHROMIUM_BUILD' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DUSE_PROPRIETARY_CODECS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DUSE_OPENSSL=1' \
	'-DENABLE_EGLIMAGE=1' \
	'-DCLD_VERSION=1' \
	'-DBLINK_IMPLEMENTATION=1' \
	'-DINSIDE_BLINK' \
	'-DENABLE_CSS3_TEXT=0' \
	'-DENABLE_CSS_EXCLUSIONS=1' \
	'-DENABLE_CSS_REGIONS=1' \
	'-DENABLE_CUSTOM_SCHEME_HANDLER=0' \
	'-DENABLE_ENCRYPTED_MEDIA_V2=1' \
	'-DENABLE_SVG_FONTS=1' \
	'-DENABLE_GDI_FONTS_ON_WINDOWS=0' \
	'-DENABLE_TOUCH_ICON_LOADING=1' \
	'-DWTF_USE_CONCATENATED_IMPULSE_RESPONSES=1' \
	'-DENABLE_CALENDAR_PICKER=0' \
	'-DENABLE_FAST_MOBILE_SCROLLING=1' \
	'-DENABLE_INPUT_SPEECH=0' \
	'-DENABLE_LEGACY_NOTIFICATIONS=0' \
	'-DENABLE_MEDIA_CAPTURE=1' \
	'-DENABLE_ORIENTATION_EVENTS=1' \
	'-DENABLE_NAVIGATOR_CONTENT_UTILS=0' \
	'-DENABLE_OPENTYPE_VERTICAL=1' \
	'-DU_USING_ICU_NAMESPACE=0' \
	'-DSK_ENABLE_INST_COUNT=0' \
	'-DSK_SUPPORT_GPU=1' \
	'-DGR_GL_CUSTOM_SETUP_HEADER="GrGLConfig_chrome.h"' \
	'-DSK_ENABLE_LEGACY_API_ALIASING=1' \
	'-DSK_BUILD_FOR_ANDROID' \
	'-DSK_USE_POSIX_THREADS' \
	'-DSK_DEFERRED_CANVAS_USES_FACTORIES=1' \
	'-DCHROME_PNG_WRITE_SUPPORT' \
	'-DPNG_USER_CONFIG' \
	'-DLIBXML_STATIC' \
	'-DLIBXSLT_STATIC' \
	'-DUSE_SYSTEM_LIBJPEG' \
	'-DANDROID' \
	'-D__GNU_SOURCE=1' \
	'-DUSE_STLPORT=1' \
	'-D_STLP_USE_PTR_SPECIALIZATIONS=1' \
	'-DCHROME_BUILD_ID=""' \
	'-DNDEBUG' \
	'-DNVALGRIND' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=0'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Release := \
	$(gyp_shared_intermediate_dir)/shim_headers/ashmem/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icuuc/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icui18n/target \
	$(LOCAL_PATH)/third_party/khronos \
	$(LOCAL_PATH)/gpu \
	$(LOCAL_PATH) \
	$(LOCAL_PATH)/third_party/WebKit \
	$(LOCAL_PATH)/third_party/WebKit/Source \
	$(gyp_shared_intermediate_dir)/blink \
	$(gyp_shared_intermediate_dir)/blink/bindings \
	$(LOCAL_PATH)/third_party/angle_dx11/include \
	$(PWD)/external/icu4c/common \
	$(PWD)/external/icu4c/i18n \
	$(LOCAL_PATH)/third_party/skia/src/core \
	$(LOCAL_PATH)/skia/config \
	$(LOCAL_PATH)/third_party/skia/include/config \
	$(LOCAL_PATH)/third_party/skia/include/core \
	$(LOCAL_PATH)/third_party/skia/include/effects \
	$(LOCAL_PATH)/third_party/skia/include/pdf \
	$(LOCAL_PATH)/third_party/skia/include/gpu \
	$(LOCAL_PATH)/third_party/skia/include/lazy \
	$(LOCAL_PATH)/third_party/skia/include/pathops \
	$(LOCAL_PATH)/third_party/skia/include/pipe \
	$(LOCAL_PATH)/third_party/skia/include/ports \
	$(LOCAL_PATH)/third_party/skia/include/utils \
	$(LOCAL_PATH)/skia/ext \
	$(LOCAL_PATH)/third_party/iccjpeg \
	$(LOCAL_PATH)/third_party/libpng \
	$(LOCAL_PATH)/third_party/libwebp \
	$(LOCAL_PATH)/third_party/libxml/linux/include \
	$(LOCAL_PATH)/third_party/libxml/src/include \
	$(LOCAL_PATH)/third_party/libxslt \
	$(LOCAL_PATH)/third_party/npapi \
	$(LOCAL_PATH)/third_party/npapi/bindings \
	$(LOCAL_PATH)/third_party/ots/include \
	$(LOCAL_PATH)/third_party/qcms/src \
	$(LOCAL_PATH)/third_party/sqlite \
	$(LOCAL_PATH)/third_party/zlib \
	$(LOCAL_PATH)/v8/include \
	$(PWD)/external/jpeg \
	$(PWD)/frameworks/wilhelm/include \
	$(PWD)/bionic \
	$(PWD)/external/stlport/stlport


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Release := \
	-fno-rtti \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-Wno-c++0x-compat \
	-Wno-deprecated \
	-Wno-abi \
	-Wno-error=c++0x-compat \
	-Wno-non-virtual-dtor \
	-Wno-sign-promo \
	-Wno-non-virtual-dtor


LOCAL_CFLAGS := $(MY_CFLAGS_$(GYP_CONFIGURATION)) $(MY_DEFS_$(GYP_CONFIGURATION))
LOCAL_C_INCLUDES := $(GYP_COPIED_SOURCE_ORIGIN_DIRS) $(LOCAL_C_INCLUDES_$(GYP_CONFIGURATION))
LOCAL_CPPFLAGS := $(LOCAL_CPPFLAGS_$(GYP_CONFIGURATION))
### Rules for final target.

LOCAL_LDFLAGS_Debug := \
	-Wl,-z,now \
	-Wl,-z,relro \
	-Wl,-z,noexecstack \
	-fPIC \
	-Wl,-z,relro \
	-Wl,-z,now \
	-fuse-ld=gold \
	-nostdlib \
	-Wl,--no-undefined \
	-Wl,--exclude-libs=ALL \
	-Wl,--icf=safe \
	-Wl,--fatal-warnings \
	-Wl,--gc-sections \
	-Wl,--warn-shared-textrel \
	-Wl,-O1 \
	-Wl,--as-needed


LOCAL_LDFLAGS_Release := \
	-Wl,-z,now \
	-Wl,-z,relro \
	-Wl,-z,noexecstack \
	-fPIC \
	-Wl,-z,relro \
	-Wl,-z,now \
	-fuse-ld=gold \
	-nostdlib \
	-Wl,--no-undefined \
	-Wl,--exclude-libs=ALL \
	-Wl,--icf=safe \
	-Wl,-O1 \
	-Wl,--as-needed \
	-Wl,--gc-sections \
	-Wl,--fatal-warnings \
	-Wl,--warn-shared-textrel


LOCAL_LDFLAGS := $(LOCAL_LDFLAGS_$(GYP_CONFIGURATION))

LOCAL_STATIC_LIBRARIES := \
	skia_skia_library_gyp

# Enable grouping to fix circular references
LOCAL_GROUP_STATIC_LIBRARIES := true

LOCAL_SHARED_LIBRARIES := \
	libstlport \
	libdl

# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_WebKit_Source_core_webcore_svg_gyp

# Alias gyp target name.
.PHONY: webcore_svg
webcore_svg: third_party_WebKit_Source_core_webcore_svg_gyp

include $(BUILD_STATIC_LIBRARY)
