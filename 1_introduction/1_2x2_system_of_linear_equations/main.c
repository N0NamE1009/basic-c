#include <stdio.h>

int main() {
    float a,b,c,d,m,n,dx,dy,det,x,y;
    printf("Solve a linear system 2x2\n");
    printf("ax+by=m\ncx+dy=n\n");
    printf("===== Inputs =====\n");
    printf("a= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);
    printf("d= ");
    scanf("%f",&d);
    printf("m= ");
    scanf("%f",&m);
    printf("n= ");
    scanf("%f",&n);


    det= a*d-b*c;
    dx=m*d-b*n;
    dy=a*n-m*c;

    x= dx/det;
    y=dy/det;

    printf("\n===== Results: =====\n");
    printf("Your equations:\n");
    printf("%fx+%fy=%f\n%fx+%fy=%f\n",a,b,m,c,d,n);

    printf("x= %f\n", x);
    printf("y= %f\n", y);

    return 0;
}