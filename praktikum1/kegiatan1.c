#include <stdio.h>
#define pi 3.14159

float luasLingkaran(float radius){
    return pi*radius*radius;
}

float kelilingLingkaran(float radius){
    return 2*pi*radius;
}

int main(){
    float radius, luas, keliling;
    printf("\033[1;34m");
    printf("Masukkan nilai jari-jari: ");
    scanf("%f", &radius);

    luas=luasLingkaran(radius);
    keliling=kelilingLingkaran(radius);

    printf("\033[1;32m");
    printf("\nLuas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n\n", keliling);

    printf("");
    return 0;
}