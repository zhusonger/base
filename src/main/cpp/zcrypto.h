//
// Created by 朱凇 on 2021/8/18.
//

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_com_lasong_utils_ZCrypto */

#ifndef _Included_cn_com_lasong_utils_ZCrypto
#define _Included_cn_com_lasong_utils_ZCrypto
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_com_lasong_utils_ZCrypto
 * Method:    validateClientKey
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT int JNICALL Java_cn_com_lasong_utils_ZCrypto_validateClientKey
        (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     cn_com_lasong_utils_ZCrypto
 * Method:    encryptRSA
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_com_lasong_utils_ZCrypto_encryptRSA
        (JNIEnv *env, jclass clazz, jstring content);


/*
 * Class:     cn_com_lasong_utils_ZCrypto
 * Method:    decryptRSA
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_cn_com_lasong_utils_ZCrypto_decryptRSA(JNIEnv *, jclass, jstring);

/*
 * Class:     cn_com_lasong_utils_ZCrypto
 * Method:    encryptAES
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_com_lasong_utils_ZCrypto_encryptAES
        (JNIEnv *, jclass, jstring);

/*
 * Class:     cn_com_lasong_utils_ZCrypto
 * Method:    decryptAES
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_com_lasong_utils_ZCrypto_decryptAES
        (JNIEnv *, jclass, jstring);

/*
 * Class:     cn_com_lasong_utils_ZCrypto
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_cn_com_lasong_utils_ZCrypto_release(JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif


