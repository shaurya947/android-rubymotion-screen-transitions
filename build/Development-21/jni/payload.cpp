// This file has been generated. Do not modify by hands.
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <jni.h>
#include <assert.h>
#include <android/log.h>
extern "C" {
    void rb_vm_register_native_methods(void);
    bool rb_vm_init(const char *app_package, const char *rm_env, const char *rm_version, JNIEnv *env);
    void *rb_vm_top_self(void);
    void rb_rb2oc_exc_handler(void);
    void *MREP_426690f39dff264611ba47af8d284e2f5fc5fb4f(void *rcv, void *sel);
    void *MREP_99aa03e9698d0ea0d2a3b0153cb70168a13edfed(void *rcv, void *sel);
}
extern bool ruby_vm_debug_logs;
extern "C"
jint
JNI_OnLoad(JavaVM *vm, void *reserved)
{
    __android_log_write(ANDROID_LOG_DEBUG, "com/yourcompany/helloworld", "Loading payload");
    JNIEnv *env = NULL;
    if (vm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
	return -1;
    }
    assert(env != NULL);
    
    rb_vm_init("com/yourcompany/helloworld", "development", "3.5", env);
    void *top_self = rb_vm_top_self();
    try {
	env->PushLocalFrame(32);
	MREP_426690f39dff264611ba47af8d284e2f5fc5fb4f(top_self, NULL);
	env->PopLocalFrame(NULL);
    }
    catch (...) {
	__android_log_write(ANDROID_LOG_ERROR, "com/yourcompany/helloworld", "Uncaught exception when initializing `main_activity.rb' scope -- aborting");
	return -1;
    }
    try {
	env->PushLocalFrame(32);
	MREP_99aa03e9698d0ea0d2a3b0153cb70168a13edfed(top_self, NULL);
	env->PopLocalFrame(NULL);
    }
    catch (...) {
	__android_log_write(ANDROID_LOG_ERROR, "com/yourcompany/helloworld", "Uncaught exception when initializing `second_activity.rb' scope -- aborting");
	return -1;
    }
    rb_vm_register_native_methods();
    __android_log_write(ANDROID_LOG_DEBUG, "com/yourcompany/helloworld", "Loaded payload");
    return JNI_VERSION_1_6;
}
