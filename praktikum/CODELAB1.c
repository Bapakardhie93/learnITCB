#include <stdio.h>
int main()
{
    int a, b, sum, difference, product;
    float division;
    //memanggil satu persatu variabel agar jelas mana a mana b
    printf("Masukkan Nilai a: ");
    scanf("%d", &a); 
    printf("Masukkan Nilai b: ");
    scanf("%d", &b);

    //membuat operasi matematika
    sum=a+b;
    printf("Penjumlahan: %d\n", sum);
    difference=a-b;
    printf("Pengurangan: %d\n", difference);
    product=a*b;
    printf("Perkalian: %d\n", product);

    //membuat fungsi pembagian
    if (b !=0){
        division = (float) a/b;//menambahkan float agar nilai a atau b berubah ke desimal
        printf("Pembagian: %.2f\n", division);
    }else{
        printf("Error: Pembagian dengan nol\n");
    }

    return 0;
}