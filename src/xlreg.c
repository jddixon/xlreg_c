## xlreg/src/xlreg.c

#include <openssl/rsa.h>

#define MSG_LEN 60

/**
 * Caller allocates a buffer cipherTextof MSG_LEN bytes and passes a pointer
 * to it (*cipherText).  Caller also passes the proposed version number.
 *
 * Should return -1 on failure, or more informativ etive error code.
 */

int clientEncryptHello(pubKey *RSA, version uint32_t, cipherText *uint8_t) {

    msg uint8_t[MSG_LEN]

    // Fill the first 56 bytes of the buffer  with random numbers.
    // XXX STUB

    // The uint32_t version number is added to the msg.  
    // XXX STUB

    // RSA-OAEP the message
    return RSA_public_encrypt(MSG_LEN, &msg, cipherText, RSA, 
        RSA_PKCS1_OAEP_PADDING)
}
