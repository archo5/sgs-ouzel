
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := sgsouzel
LOCAL_ARM_MODE := arm
LOCAL_CFLAGS := -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers
LOCAL_CPPFLAGS += -std=c++11 -fexceptions
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../ouzel/ouzel $(LOCAL_PATH)/../../../sgscript/src
LOCAL_SRC_FILES := \
	../../../src/sgs_ouzel.cpp \
	../../../src/cppbc_sgs_ouzel.cpp \
	../../../src/sgscript.c
LOCAL_WHOLE_STATIC_LIBRARIES := ouzel
LOCAL_LDLIBS := -lGLESv1_CM -lGLESv2 -lEGL -llog -landroid -lOpenSLES -latomic

include $(BUILD_SHARED_LIBRARY)

include $(LOCAL_PATH)/../../../ouzel/build/jni/Android.mk
