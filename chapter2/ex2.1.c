#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

/* it is really important to select the appropriate format specifiers */
int main() {
    printf("####################### limits.h ########################\n");
    printf("CHAR_BIT:\t%d\t%d\n", CHAR_BIT, 8);                                 // 8 bits
    printf("CHAR_MAX:\t%d\t%.0f\n", CHAR_MAX, pow(2, CHAR_BIT) / 2 - 1);        // 8 bits
    printf("CHAR_MIN:\t%d\t%.0f\n", CHAR_MIN, -1 * pow(2, CHAR_BIT) / 2);       // 8 bits
    printf("INT_MAX:\t%d\n", INT_MAX);                                          // 32 bits
    printf("INT_MIN:\t%d\n", INT_MIN);                                          // 32 bits
    printf("LONG_MAX:\t%ld\n", LONG_MAX);       // 32 bits (64 on my linux machine)
    printf("LONG_MIN:\t%ld\n", LONG_MIN);       // 32 bits (64 on my linux machine)
    printf("SCHAR_MAX:\t%d\n", SCHAR_MAX);      // 8 bits
    printf("SCHAR_MIN:\t%d\n", SCHAR_MIN);      // 8 bits
    printf("SHRT_MAX:\t%d\n", SHRT_MAX);        // 16 bits
    printf("SHRT_MIN:\t%d\n", SHRT_MIN);        // 16 bits
    printf("UCHAR_MAX:\t%d\n", UCHAR_MAX);      // 8 bits
    printf("UINT_MAX:\t%u\n", UINT_MAX);        // 32 bits
    printf("ULONG_MAX:\t%lu\n", ULONG_MAX);     // 32 bits
    printf("USHRT_MAX:\t%u\t%u\n", USHRT_MAX, (unsigned short int)pow(2, 16) - 1);                  // 16 bits
    printf("LLONG_MAX:\t%lld\t%lld\n", LLONG_MAX, (signed long long int)(pow(2, 64) / 2 - 1));      // 64 bits
    printf("LLONG_MIN:\t%lld\t%lld\n", LLONG_MIN, (signed long long int)(-1 * pow(2, 64) / 2));     // 64 bits
    printf("ULLONG_MAX:\t%llu\t%llu\n", ULLONG_MAX, (unsigned long long int)pow(2, 64));            // 64 bits
    printf("\n");
    printf("####################### float.h ########################\n");

    /*        floating-point = ( S ) p x b**e            
               S = sign
               p = precision
               b = base or radix
               e = e_min or e_max
    */

    printf("FLT_RADIX:\t%d\n", FLT_RADIX);          // base radix representation (b)
    printf("FLT_ROUNDS:\t%d\n", FLT_ROUNDS);        // rounding mode (1 = nearest)
    printf("FLT_DIG:\t%d\n", FLT_DIG);              // maximum number of decimal digits that can be represented without change after rounding
    printf("FLT_EPSILON:\t%5.e\n", FLT_EPSILON);    // least significant digit representable (p)
    printf("FLT_MANT_DIG:\t%d\n", FLT_MANT_DIG);    // number of digits in FLT_RADIX
    printf("FLT_MAX:\t%5.e\n", FLT_MAX);            // maximum finite floating-point value
    printf("FLT_MIN:\t%5.e\n", FLT_MIN);            // minimum floating-point values
    printf("FLT_MAX_EXP:\t%d\n", FLT_MAX_EXP);      // maximum integer value for an exponent in base FLT_RADIX (e)
    printf("FLT_MIN_EXP:\t%d\n", FLT_MIN_EXP);      // minimum integer value for an exponent in base FLT_RADIX (e)
    printf("DBL_DIG:\t%d\n", DBL_DIG);              // see FLT_DIG
    printf("DBL_EPSILON:\t%5.e\n", DBL_EPSILON);    // see FLT_EPSILON (p)
    printf("DBL_MANT_DIG:\t%d\n", DBL_MANT_DIG);    // see FLT_MANT_DIG
    printf("DBL_MAX:\t%5.e\n", DBL_MAX);            // see FLT_MAX
    printf("DBL_EXP_MAX:\t%d\n", DBL_MAX_EXP);      // see FLT_MAX_EXP (e)
    printf("DBL_MIN:\t%5.e\n", DBL_MIN);            // see FLT_MIN
    printf("DBL_MIN_EXP:\t%d\n", DBL_MIN_EXP);      // see FLT_MIN_EXP (e)

}
