/* DecimalVersion.h */

#ifndef DECIMAL_VERSION_H
#define DECIMAL_VERSION_H

typedef union {
    struct __attribute__ ((__packed__)) {
        uint8_t     a;
        uint8_t     b;
        uint8_t     c;
        uint8_t     d;
    } 
    uint32_t    value;
} DecimalVersion_t;


#endif # DECIMAL_VERSION_H
