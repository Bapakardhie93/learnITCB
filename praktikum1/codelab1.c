#include <stdio.h>
#define BATAS_KALORI_HARIAN 2000
char header(){
    printf("===== Program Penghitung Kalori Harian =====\n");
    printf("Program ini akan menghitung total kalori harian yang dikonsumsi.\n\n");
}

int main(){
    header();
    int makanan1, makanan2, makanan3, total;

    printf("Masukkan kalori makanan pertama: ");
    scanf("%d", &makanan1);
    printf("Masukkan kalori makanan kedua: ");
    scanf("%d", &makanan2);
    printf("Masukkan kalori makanan ketiga: ");
    scanf("%d", &makanan3);

    total=makanan1+makanan2+makanan3;

    printf("\nTotal kalor: %d\n", total);

    if(total>BATAS_KALORI_HARIAN){
        printf("Total kalori melebihi batas harian.\n");
    }else{
        printf("Total kalori masih dalam batas harian.\n\n");
    }

    return 0;
}