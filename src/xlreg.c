/* xlreg/src/xlreg.c */

#include <openssl/rsa.h>

#include "xlreg.h"

#define MSG_LEN (60)

/**
 * Caller allocates a buffer cipherTextof MSG_LEN bytes and passes a pointer
 * to it (*cipherText).  Caller also passes the proposed version number.
 *
 * Should return -1 on failure, or more informativ etive error code.
 */

int
clientEncryptHello(RSA * pubKey, uint32_t version, uint8_t * cipherText)
{

    unsigned char msg[MSG_LEN];

    // Fill the first 56 bytes of the buffer  with random numbers.
    // XXX STUB

    // The uint32_t version number is added to the msg.
    // XXX STUB

    const unsigned char *p = &msg;

    // RSA-OAEP the message.  PKCS1_OAEP is PKCS#1 v2.0 which includes
    // both types of padding, PKCS#1 v1.5 and OAEP
    int status;
    status =
	RSA_public_encrypt(MSG_LEN, p, cipherText, pubKey,
			   RSA_PKCS1_OAEP_PADDING);
    return status;
}
