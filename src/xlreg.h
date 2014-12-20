/* xlreg/src/xlreg.h */

#ifndef XLREG_H
#define XLREG_H

#include <stdio.h>		// for FILE
#include <stdint.h>

#include <openssl/rsa.h>
#include <openssl/engine.h>	// probably not needed

// Length must be constrained to 20 or 32
typedef struct _nodeID {
    int len;
    uint8_t *bytes[];
} nodeID_t;

typedef struct _dv {
    uint32_t version;
} decimalVersion_t;

typedef struct _ep {
    unsigned char *protocol;
    uint32_t address;
    uint16_t port;
} endPoint_t;

typedef struct _regCred {
    char *name;
    nodeID_t *id;
    RSA *ck;
    RSA *sk;
    decimalVersion_t version;
    int epCount;
    endPoint_t *endPoints[];
} regCred_t;

#endif				/* XLREG_H */
