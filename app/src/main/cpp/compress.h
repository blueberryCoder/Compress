//
// Created by Administrator on 12/21/2016.
//

#ifndef COMPRESS_COMPRESS_H_H
#define COMPRESS_COMPRESS_H_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jint JNICALL
Java_com_blueberry_compress_ImageCompress_nativeCompressBitmap(JNIEnv *env, jclass type,
                                                               jobject bitmap, jint quality,
                                                               jstring dstFile_,
                                                               jboolean optimize);

#ifdef __cplusplus
}
#endif
#endif //COMPRESS_COMPRESS_H_H
