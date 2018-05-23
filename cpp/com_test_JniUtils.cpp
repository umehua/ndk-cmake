#include "include/com_test_JniUtils.h"
#include <android/log.h>

#define TAG "jni-tester"

JNIEXPORT void JNICALL void Java_com_test_JniUtils_sendPoint
  (JNIEnv *env, jobject jobj, jfloat x, jfloat y) {

}

jint JNI_OnLoad(JavaVM *jvm, void *reserved) {
    JNIEnv *e;
    int status;

    __android_log_print(ANDROID_LOG_DEBUG, TAG, "loading JNI...\n");

    if (jvm->GetEnv((void **) &e, JNI_VERSION_1_4)) {
        __android_log_print(ANDROID_LOG_DEBUG, TAG, "JNI version isn't 1.4 !");
        return JNI_ERR;
    } else {
        return JNI_VERSION_1_4;
    }
}

