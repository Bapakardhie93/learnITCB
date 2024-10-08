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
    //const float pi=3.14159;
    printf("Masukkan nilai jari-jari: ");
    scanf("%f", &radius);

    luas=luasLingkaran(radius);
    keliling=kelilingLingkaran(radius);

    printf("\nLuas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n\n", keliling);

    printf("");
    return 0;
}
