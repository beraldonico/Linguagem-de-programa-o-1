#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(){
    printf("\t\t Using <limits.h> library definitions...\n");

    printf("\nCHAR\n");
    printf("Storage size (bytes): %lu \n", sizeof(char));
    printf("Signed char min: %d\n", SCHAR_MIN);
    printf("Signed char MAX: %d\n", SCHAR_MAX);
    printf("Unsigned char MAX: %u\n", UCHAR_MAX);

    printf("\nSHORT\n");
    printf("Storage size (bytes): %lu \n", sizeof(short));
    printf("Signed short min: %d\n", SHRT_MIN);
    printf("Signed short MAX: %d\n", SHRT_MAX);
    printf("Unsigned short MAX: %u\n", USHRT_MAX);

    printf("\nINT\n");
    printf("Storage size (bytes): %lu \n", sizeof(int));
    printf("Signed int min: %d\n", INT_MIN);
    printf("Signed int MAX: %d\n", INT_MAX);
    printf("Unsigned int MAX: %u\n", UINT_MAX);

    printf("\nLONG\n");
    printf("Storage size (bytes): %lu \n", sizeof(long));
    printf("Signed long min: %d\n", LONG_MIN);
    printf("Signed long MAX: %d\n", LONG_MAX);
    printf("Unsigned long MAX: %u\n", ULONG_MAX);

    printf("\nFLOAT\n");
    printf("Storage size (bytes): %lu \n", sizeof(float));
    printf("Signed float min: %d\n", FLT_MIN);
    printf("Signed float MAX: %d\n", FLT_MAX);

    printf("\nDOUBLE\n");
    printf("Storage size (bytes): %lu \n", sizeof(double));
    printf("Signed double min: %d\n", DBL_MIN);
    printf("Signed double MAX: %d\n", DBL_MAX);

    return 0;
}
