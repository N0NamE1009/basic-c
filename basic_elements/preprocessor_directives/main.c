#include <stdio.h> //Libreries

#define PI 3.14159265 //MACRO

int y= 5; // global variable

int main(void) {
    int x = 10; //local variable

    int sum = 0;
    float sum2 = 0;
    sum = x + y;
    sum2 = x + PI;

    printf("sum = %d\n", sum);
    printf("sum2 = %.3f\n", sum2);

    return 0;
}
