#include <stdio.h>

int main() {
    float a,b,c,j; // coefficients of first equation
    float d,e,f,k; // coefficients of second equation
    float g,h,i,l; // coefficients of third equation
    float det,dx,dy,dz; // determinants
    float x,y,z;

    printf("Solve a linear system 3x3\n");
    printf("ax+by+cz=j\ndx+ey+fz=k\ngx+hy+iz=l\n");
    printf("===== Inputs =====\n");

    printf("First equation\n");
    printf("a= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);
    printf("j= ");
    scanf("%f",&j);

    printf("Second equation\n");
    printf("d= ");
    scanf("%f",&d);
    printf("e= ");
    scanf("%f",&e);
    printf("f= ");
    scanf("%f",&f);
    printf("k= ");
    scanf("%f",&k);

    printf("third equation\n");
    printf("g= ");
    scanf("%f",&g);
    printf("h= ");
    scanf("%f",&h);
    printf("i= ");
    scanf("%f",&i);
    printf("l= ");
    scanf("%f",&l);

    det=a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g);
    
    // Calcular los determinantes auxiliares
    dx = j * (e * i - f * h) - b * (k * i - f * l) + c * (k * h - e * l);
    dy = a * (k * i - f * l) - j * (d * i - f * g) + c * (d * l - k * g);
    dz = a * (e * l - k * h) - b * (d * l - k * g) + j * (d * h - e * g);



    x=dx/det;
    y=dy/det;
    z=dz/det;

    printf("\n===== Results: =====\n");

    printf("x= %f\n", x);
    printf("y= %f\n", y);
    printf("z= %f\n", z);

    return 0;
}