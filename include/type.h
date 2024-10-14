#pragma once

#define TRUE  1
#define FALSE 0

#define ASSERT(COND, MSG) \
    do { \
        if (!(COND)) { \
            fprintf(stderr, \
                "Assertion failed: (%s), function %s, file %s, line %d.\n" \
                "Message: %s\n", \
                #COND, __func__, __FILE__, __LINE__, MSG); \
            exit(EXIT_FAILURE); \
        } \
    } while (0)

#define DEF_ALLOC_ERRMSG \
	"Fail to allocate memory"
#define DEF_OVERFLOW_ERRMSG \
	"Buffer overflow"

#include <stdio.h>
#include <stdint.h>

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef int64_t i64;
typedef int32_t i32;
typedef int16_t i16;
typedef int8_t  i8;

typedef float f32;

typedef uint8_t bool;
