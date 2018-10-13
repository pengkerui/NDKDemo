#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_pengkr_ndkdemo_ndk_Native_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO
    std::string hello = "Hello from C++  test";
    return env->NewStringUTF(hello.c_str());
}
