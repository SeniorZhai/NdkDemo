#include <com_zoe_ndkdemo_jni_MathKit.h>

JNIEXPORT jint JNICALL Java_com_zoe_ndkdemo_jni_MathKit_square
  (JNIEnv * env, jclass cls, jint num)
  {
    return num * num;
  }