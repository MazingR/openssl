/* crypto/fips_err.h */
/* ====================================================================
 * Copyright (c) 1999-2010 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/fips.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

#define ERR_FUNC(func) ERR_PACK(ERR_LIB_FIPS,func,0)
#define ERR_REASON(reason) ERR_PACK(ERR_LIB_FIPS,0,reason)

static ERR_STRING_DATA FIPS_str_functs[]=
	{
{ERR_FUNC(FIPS_F_DH_BUILTIN_GENPARAMS),	"DH_BUILTIN_GENPARAMS"},
{ERR_FUNC(FIPS_F_DSA_BUILTIN_PARAMGEN),	"DSA_BUILTIN_PARAMGEN"},
{ERR_FUNC(FIPS_F_DSA_BUILTIN_PARAMGEN2),	"DSA_BUILTIN_PARAMGEN2"},
{ERR_FUNC(FIPS_F_DSA_DO_SIGN),	"DSA_do_sign"},
{ERR_FUNC(FIPS_F_DSA_DO_VERIFY),	"DSA_do_verify"},
{ERR_FUNC(FIPS_F_FIPS_CHECK_DSA),	"FIPS_CHECK_DSA"},
{ERR_FUNC(FIPS_F_FIPS_CHECK_EC),	"FIPS_CHECK_EC"},
{ERR_FUNC(FIPS_F_FIPS_CHECK_INCORE_FINGERPRINT),	"FIPS_check_incore_fingerprint"},
{ERR_FUNC(FIPS_F_FIPS_CHECK_RSA),	"fips_check_rsa"},
{ERR_FUNC(FIPS_F_FIPS_CIPHERINIT),	"FIPS_CIPHERINIT"},
{ERR_FUNC(FIPS_F_FIPS_DIGESTINIT),	"FIPS_DIGESTINIT"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_BYTES),	"FIPS_DRBG_BYTES"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_CHECK),	"FIPS_DRBG_CHECK"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_CPRNG_TEST),	"FIPS_DRBG_CPRNG_TEST"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_GENERATE),	"FIPS_drbg_generate"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_HEALTH_CHECK),	"FIPS_DRBG_HEALTH_CHECK"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_INIT),	"FIPS_drbg_init"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_INSTANTIATE),	"FIPS_drbg_instantiate"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_NEW),	"FIPS_drbg_new"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_RESEED),	"FIPS_drbg_reseed"},
{ERR_FUNC(FIPS_F_FIPS_DRBG_SINGLE_KAT),	"FIPS_DRBG_SINGLE_KAT"},
{ERR_FUNC(FIPS_F_FIPS_GET_ENTROPY),	"FIPS_GET_ENTROPY"},
{ERR_FUNC(FIPS_F_FIPS_MODE_SET),	"FIPS_mode_set"},
{ERR_FUNC(FIPS_F_FIPS_PKEY_SIGNATURE_TEST),	"fips_pkey_signature_test"},
{ERR_FUNC(FIPS_F_FIPS_RAND_ADD),	"FIPS_rand_add"},
{ERR_FUNC(FIPS_F_FIPS_RAND_BYTES),	"FIPS_rand_bytes"},
{ERR_FUNC(FIPS_F_FIPS_RAND_PSEUDO_BYTES),	"FIPS_rand_pseudo_bytes"},
{ERR_FUNC(FIPS_F_FIPS_RAND_SEED),	"FIPS_rand_seed"},
{ERR_FUNC(FIPS_F_FIPS_RAND_SET_METHOD),	"FIPS_rand_set_method"},
{ERR_FUNC(FIPS_F_FIPS_RAND_STATUS),	"FIPS_rand_status"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_AES),	"FIPS_selftest_aes"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_AES_CCM),	"FIPS_selftest_aes_ccm"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_AES_GCM),	"FIPS_selftest_aes_gcm"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_AES_XTS),	"FIPS_selftest_aes_xts"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_CMAC),	"FIPS_selftest_cmac"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_DES),	"FIPS_selftest_des"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_DSA),	"FIPS_selftest_dsa"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_ECDSA),	"FIPS_selftest_ecdsa"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_HMAC),	"FIPS_selftest_hmac"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_SHA1),	"FIPS_selftest_sha1"},
{ERR_FUNC(FIPS_F_FIPS_SELFTEST_X931),	"FIPS_selftest_x931"},
{ERR_FUNC(FIPS_F_HASH_FINAL),	"HASH_FINAL"},
{ERR_FUNC(FIPS_F_RSA_BUILTIN_KEYGEN),	"RSA_BUILTIN_KEYGEN"},
{ERR_FUNC(FIPS_F_RSA_EAY_PRIVATE_DECRYPT),	"RSA_EAY_PRIVATE_DECRYPT"},
{ERR_FUNC(FIPS_F_RSA_EAY_PRIVATE_ENCRYPT),	"RSA_EAY_PRIVATE_ENCRYPT"},
{ERR_FUNC(FIPS_F_RSA_EAY_PUBLIC_DECRYPT),	"RSA_EAY_PUBLIC_DECRYPT"},
{ERR_FUNC(FIPS_F_RSA_EAY_PUBLIC_ENCRYPT),	"RSA_EAY_PUBLIC_ENCRYPT"},
{ERR_FUNC(FIPS_F_RSA_X931_GENERATE_KEY_EX),	"RSA_X931_generate_key_ex"},
{0,NULL}
	};

static ERR_STRING_DATA FIPS_str_reasons[]=
	{
{ERR_REASON(FIPS_R_ADDITIONAL_INPUT_TOO_LONG),"additional input too long"},
{ERR_REASON(FIPS_R_ALREADY_INSTANTIATED) ,"already instantiated"},
{ERR_REASON(FIPS_R_CONTRADICTING_EVIDENCE),"contradicting evidence"},
{ERR_REASON(FIPS_R_DRBG_STUCK)           ,"drbg stuck"},
{ERR_REASON(FIPS_R_ENTROPY_ERROR_UNDETECTED),"entropy error undetected"},
{ERR_REASON(FIPS_R_ENTROPY_NOT_REQUESTED_FOR_RESEED),"entropy not requested for reseed"},
{ERR_REASON(FIPS_R_ENTROPY_SOURCE_STUCK) ,"entropy source stuck"},
{ERR_REASON(FIPS_R_ERROR_INITIALISING_DRBG),"error initialising drbg"},
{ERR_REASON(FIPS_R_ERROR_INSTANTIATING_DRBG),"error instantiating drbg"},
{ERR_REASON(FIPS_R_ERROR_RETRIEVING_ADDITIONAL_INPUT),"error retrieving additional input"},
{ERR_REASON(FIPS_R_ERROR_RETRIEVING_ENTROPY),"error retrieving entropy"},
{ERR_REASON(FIPS_R_ERROR_RETRIEVING_NONCE),"error retrieving nonce"},
{ERR_REASON(FIPS_R_FINGERPRINT_DOES_NOT_MATCH),"fingerprint does not match"},
{ERR_REASON(FIPS_R_FINGERPRINT_DOES_NOT_MATCH_NONPIC_RELOCATED),"fingerprint does not match nonpic relocated"},
{ERR_REASON(FIPS_R_FINGERPRINT_DOES_NOT_MATCH_SEGMENT_ALIASING),"fingerprint does not match segment aliasing"},
{ERR_REASON(FIPS_R_FIPS_MODE_ALREADY_SET),"fips mode already set"},
{ERR_REASON(FIPS_R_FIPS_SELFTEST_FAILED) ,"fips selftest failed"},
{ERR_REASON(FIPS_R_FUNCTION_ERROR)       ,"function error"},
{ERR_REASON(FIPS_R_GENERATE_ERROR)       ,"generate error"},
{ERR_REASON(FIPS_R_GENERATE_ERROR_UNDETECTED),"generate error undetected"},
{ERR_REASON(FIPS_R_INSTANTIATE_ERROR)    ,"instantiate error"},
{ERR_REASON(FIPS_R_INSUFFICIENT_SECURITY_STRENGTH),"insufficient security strength"},
{ERR_REASON(FIPS_R_INTERNAL_ERROR)       ,"internal error"},
{ERR_REASON(FIPS_R_INVALID_KEY_LENGTH)   ,"invalid key length"},
{ERR_REASON(FIPS_R_IN_ERROR_STATE)       ,"in error state"},
{ERR_REASON(FIPS_R_KEY_TOO_SHORT)        ,"key too short"},
{ERR_REASON(FIPS_R_NON_FIPS_METHOD)      ,"non fips method"},
{ERR_REASON(FIPS_R_NOT_INSTANTIATED)     ,"not instantiated"},
{ERR_REASON(FIPS_R_PAIRWISE_TEST_FAILED) ,"pairwise test failed"},
{ERR_REASON(FIPS_R_PERSONALISATION_ERROR_UNDETECTED),"personalisation error undetected"},
{ERR_REASON(FIPS_R_PERSONALISATION_STRING_TOO_LONG),"personalisation string too long"},
{ERR_REASON(FIPS_R_REQUEST_LENGTH_ERROR_UNDETECTED),"request length error undetected"},
{ERR_REASON(FIPS_R_REQUEST_TOO_LARGE_FOR_DRBG),"request too large for drbg"},
{ERR_REASON(FIPS_R_RESEED_COUNTER_ERROR) ,"reseed counter error"},
{ERR_REASON(FIPS_R_RESEED_ERROR)         ,"reseed error"},
{ERR_REASON(FIPS_R_SELFTEST_FAILED)      ,"selftest failed"},
{ERR_REASON(FIPS_R_SELFTEST_FAILURE)     ,"selftest failure"},
{ERR_REASON(FIPS_R_STRENGTH_ERROR_UNDETECTED),"strength error undetected"},
{ERR_REASON(FIPS_R_TEST_FAILURE)         ,"test failure"},
{ERR_REASON(FIPS_R_UNINSTANTIATE_ERROR)  ,"uninstantiate error"},
{ERR_REASON(FIPS_R_UNINSTANTIATE_ZEROISE_ERROR),"uninstantiate zeroise error"},
{ERR_REASON(FIPS_R_UNSUPPORTED_DRBG_TYPE),"unsupported drbg type"},
{ERR_REASON(FIPS_R_UNSUPPORTED_PLATFORM) ,"unsupported platform"},
{0,NULL}
	};

#endif

void ERR_load_FIPS_strings(void)
	{
#ifndef OPENSSL_NO_ERR

	if (ERR_func_error_string(FIPS_str_functs[0].error) == NULL)
		{
		ERR_load_strings(0,FIPS_str_functs);
		ERR_load_strings(0,FIPS_str_reasons);
		}
#endif
	}
