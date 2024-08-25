#include <stdio.h>
#include <stdbool.h> // library fpr type boolean

/*
 * Data types
 *
 * int
 * char
 * float
 * bool
 * double
 * short
 * long
 * long double
 *
 */
int main(void) {
    int a = 5; // 2 bytes range -32768 to 32767
    char b='z'; // 1 byte range 0 to 255
    float c=1.5; // 4 bytes
    bool d=true;
    double e=1.424242424; // b bytes
    short f=1; // 2 bytes range -128 to 127
    long g=123456789; // 4 bytes
    long double h=31313131.3131313;
    unsigned int i=123; // 2 bytes range 0 to 65535

    printf("Integer a: %i\n", a);
    printf("Character b: %c\n", b);
    printf("Float c: %f\n", c);
    printf("Boolean d (prints 1): %d\n", d);
    printf("Double e: %lf\n", e);
    printf("Short f: %i\n", f);
    printf("Long g: %li\n", g);
    printf("Long Double h: %Lf\n", h);
    printf("Unsigned int i: %i\n", i);

    return 0;
}
