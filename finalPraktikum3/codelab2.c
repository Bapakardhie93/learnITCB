#include <stdio.h>

#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

enum kategori
{
    economy = 250,
    business = 500,
    firstClass = 550
};

void bersihkanBufferInput()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{
    int choice=0, harga=0;

    printf("Pilih kategori kelas: ");
    printf("\n1. Economy\n");
    printf("2. Business\n");
    printf("3. First Class\n");
    do
    {
        printf("Masukkan pilihan: ");
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 3)
        {
            bersihkanBufferInput();
            printf(RED "Inputan tidak valid. Masukkan (1-3)!\n" RESET);
        }
    } while (choice < 1 || choice > 3);

    switch (choice)
    {
    case 1:
        harga = economy;
        printf(BLUE "Anda memilih kategori: Economy\n" RESET);
        break;
    case 2:
        harga = business;
        printf(BLUE "Anda memilih kategori: Business\n" RESET);
        break;
    case 3:
        harga = firstClass;
        printf(BLUE "Anda memilih kategori: First Class\n" RESET);
        break;
    }

    printf(GREEN "Harga: $%d\n" RESET, harga);
}