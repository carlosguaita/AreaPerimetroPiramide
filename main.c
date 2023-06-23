#include <stdio.h>
#include <math.h>

float calcularDistancias(float x1, float y1, float x2, float y2);
float calcularPerimetro(float puntos[3][2], float *a, float *b, float *c);
float calcularArea(float a, float b, float c);

int main(int argc, char *argv[])
{

    float puntos[3][2]={{3,0},{0,3},{0,0}};
    float a, b, c;
   
    float perimetro = calcularPerimetro(puntos,&a,&b,&c);
    printf("El perimetro del triangulo es %f\n", perimetro);
    float area = calcularArea(a,b,c);
    printf("El area del triangulo es %f\n", area);


    return 0;
}

float calcularDistancias(float x1, float y1, float x2, float y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

float calcularPerimetro(float puntos[3][2], float *a, float *b, float *c){
    *a = calcularDistancias(puntos[0][0],puntos[0][1],puntos[1][0],puntos[1][1]);
    *b = calcularDistancias(puntos[1][0],puntos[1][1],puntos[2][0],puntos[2][1]);
    *c = calcularDistancias(puntos[0][0],puntos[0][1],puntos[2][0],puntos[2][1]);
    float per=*a+*b+*c;
    return per;
}

float calcularArea(float a, float b, float c){
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
