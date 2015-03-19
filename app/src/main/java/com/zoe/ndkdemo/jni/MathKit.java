package com.zoe.ndkdemo.jni;

/**
 * Created by zhaitao on 15/3/19.
 */
public class MathKit {

    public static native int square(int num);

    static {
        System.loadLibrary("JniDemo");
    }
}
