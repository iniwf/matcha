// +build matcha,android

#ifndef MOCHIFOREIGN_JAVA_H
#define MOCHIFOREIGN_JAVA_H

#include <jni.h>

extern JavaVM *sJavaVM;
extern JNIEnv *sEnv;
extern jint sJavaVersion;
extern jobject sTracker;

ObjcRef MatchaTrackObjc(jobject v);
void MatchaUntrackObjc(ObjcRef key);

CGoBuffer MatchaStringToCGoBuffer(JNIEnv *env, jstring v); // return buffer needs to be released.
jstring MatchaCGoBufferToString(JNIEnv *env, CGoBuffer buf); // releases buf, jstring needs to be released.
CGoBuffer MatchaByteArrayToCGoBuffer(JNIEnv *env, jbyteArray v); // returned buffer needs to be released.
jbyteArray MatchaCGoBufferToByteArray(JNIEnv *env, CGoBuffer buf); // releases buf

#endif //MOCHIFOREIGN_JAVA_H