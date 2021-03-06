/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class javax_microedition_m3g_KeyframeSequence */

#ifndef _Included_javax_microedition_m3g_KeyframeSequence
#define _Included_javax_microedition_m3g_KeyframeSequence
#ifdef __cplusplus
extern "C" {
#endif
#undef javax_microedition_m3g_KeyframeSequence_LINEAR
#define javax_microedition_m3g_KeyframeSequence_LINEAR 176L
#undef javax_microedition_m3g_KeyframeSequence_SLERP
#define javax_microedition_m3g_KeyframeSequence_SLERP 177L
#undef javax_microedition_m3g_KeyframeSequence_SPLINE
#define javax_microedition_m3g_KeyframeSequence_SPLINE 178L
#undef javax_microedition_m3g_KeyframeSequence_SQUAD
#define javax_microedition_m3g_KeyframeSequence_SQUAD 179L
#undef javax_microedition_m3g_KeyframeSequence_STEP
#define javax_microedition_m3g_KeyframeSequence_STEP 180L
#undef javax_microedition_m3g_KeyframeSequence_CONSTANT
#define javax_microedition_m3g_KeyframeSequence_CONSTANT 192L
#undef javax_microedition_m3g_KeyframeSequence_LOOP
#define javax_microedition_m3g_KeyframeSequence_LOOP 193L
/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _ctor
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1ctor
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _setValidRange
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_KeyframeSequence__1setValidRange
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _setKeyframe
 * Signature: (III[F)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_KeyframeSequence__1setKeyframe
  (JNIEnv *, jclass, jint, jint, jint, jfloatArray);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _setDuration
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_KeyframeSequence__1setDuration
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getDuration
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getDuration
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _setRepeatMode
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_KeyframeSequence__1setRepeatMode
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getRepeatMode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getRepeatMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getComponentCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getComponentCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getInterpolationType
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getInterpolationType
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getKeyframe
 * Signature: (II[F)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getKeyframe
  (JNIEnv *, jclass, jint, jint, jfloatArray);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getKeyframeCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getKeyframeCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getValidRangeFirst
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getValidRangeFirst
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_KeyframeSequence
 * Method:    _getValidRangeLast
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_KeyframeSequence__1getValidRangeLast
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
