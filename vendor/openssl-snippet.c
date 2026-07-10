/*
 * Copyright (c) 1998-2024 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/* Simulated OpenSSL-style vendor snippet */
int CRYPTO_memcmp(const void *a, const void *b, size_t len) {
    const unsigned char *p1 = a, *p2 = b;
    int result = 0;
    for (size_t i = 0; i < len; i++) {
        result |= p1[i] ^ p2[i];
    }
    return result != 0;
}
