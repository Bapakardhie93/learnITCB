#include <stdio.h>


float luasLingkaran (float radius)
{
    float phi=3.14159;

    return phi*radius*radius;
}

float kelilingLingkaran(float radius)
{
   float phi=3.14159;

   return 2*phi*radius;
}

int main()
{ 
    float radius, hasilLuas, hasilKeliling;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    hasilLuas=luasLingkaran (radius);
    hasilKeliling=kelilingLingkaran (radius);

    printf("\nLuas lingkaran: %.2f\n", luasLingkaran(radius));
    printf("Keliling lingkaran: %.2f\n", kelilingLingkaran(radius));

    return 0;
}