// Copyright (C) 2017 Elviss Strazdins
// This file is part of the Ouzel engine.

package org.ouzelengine;

import android.app.Activity;
import android.view.MotionEvent;
import android.view.Surface;

public class OuzelLibJNIWrapper
{
    static
    {
        System.loadLibrary("sgsouzel");
    }

    public static native void onCreate(Activity mainActivity);
    public static native void setSurface(Surface surface);
    public static native void onSurfaceChanged(Surface surface, int width, int height);

    public static native void onStart();
    public static native void onPause();
    public static native void onResume();

    public static native void onLowMemory();

    public static native void onKeyDown(int keyCode);
    public static native void onKeyUp(int keyCode);

    public static native boolean onTouchEvent(MotionEvent event);
}
