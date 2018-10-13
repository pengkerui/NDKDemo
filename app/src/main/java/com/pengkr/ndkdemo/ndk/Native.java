package com.pengkr.ndkdemo.ndk;

/**
 * Created by pengkr  on 2018/10/13.
 */
public class Native {

    static {
        System.loadLibrary("native-lib");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public static native String stringFromJNI();

}
