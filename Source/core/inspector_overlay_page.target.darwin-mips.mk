# This file is generated by gyp; do not edit.

include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := GYP
LOCAL_MODULE := third_party_WebKit_Source_core_inspector_overlay_page_gyp
LOCAL_MODULE_STEM := inspector_overlay_page
LOCAL_MODULE_SUFFIX := .stamp
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(call local-intermediates-dir)
gyp_shared_intermediate_dir := $(call intermediates-dir-for,GYP,shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES :=

### Rules for action "ConvertFileToHeaderWithCharacterArray":
$(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h: gyp_local_path := $(LOCAL_PATH)
$(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h: gyp_intermediate_dir := $(abspath $(gyp_intermediate_dir))
$(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h: gyp_shared_intermediate_dir := $(abspath $(gyp_shared_intermediate_dir))
$(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h: export PATH := $(subst $(ANDROID_BUILD_PATHS),,$(PATH))
$(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h: $(LOCAL_PATH)/third_party/WebKit/Source/build/scripts/xxd.pl $(LOCAL_PATH)/third_party/WebKit/Source/core/inspector/InspectorOverlayPage.html $(GYP_TARGET_DEPENDENCIES)
	@echo "Gyp action: Generating $(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h from inspector/InspectorOverlayPage.html ($@)"
	$(hide)cd $(gyp_local_path)/third_party/WebKit/Source/core; mkdir -p $(gyp_shared_intermediate_dir)/blink; perl ../build/scripts/xxd.pl InspectorOverlayPage_html inspector/InspectorOverlayPage.html "$(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h"



GYP_GENERATED_OUTPUTS := \
	$(gyp_shared_intermediate_dir)/blink/InspectorOverlayPage.h

# Make sure our deps and generated files are built first.
LOCAL_ADDITIONAL_DEPENDENCIES := $(GYP_TARGET_DEPENDENCIES) $(GYP_GENERATED_OUTPUTS)

### Rules for final target.
# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_WebKit_Source_core_inspector_overlay_page_gyp

# Alias gyp target name.
.PHONY: inspector_overlay_page
inspector_overlay_page: third_party_WebKit_Source_core_inspector_overlay_page_gyp

LOCAL_MODULE_PATH := $(PRODUCT_OUT)/gyp_stamp
LOCAL_UNINSTALLABLE_MODULE := true

include $(BUILD_SYSTEM)/base_rules.mk

$(LOCAL_BUILT_MODULE): $(LOCAL_ADDITIONAL_DEPENDENCIES)
	$(hide) echo "Gyp timestamp: $@"
	$(hide) mkdir -p $(dir $@)
	$(hide) touch $@
