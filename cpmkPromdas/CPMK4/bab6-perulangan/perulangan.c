#include <stdio.h>
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

// program menampilkan "Teknik Informatika YESS" 100x
/*int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        printf(RED "Teknik Informatika YESS" RESET);
    }
    return 0;
}*/

// program menampilkan bilangan kelipatan 5 dari 0-100
/*int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}*/

// program
int main()
{
    int nilai, loop, total = 0, countPositif = 0;
    char choice;
    do
    {
        do
        {
            printf("Masukkan jumlah angka yang ingin dimasukkan: ");
            scanf("%d", &loop);
            if (loop <= 1)
            {
                printf(RED "Masukkan minimal 2 angka!\n" RESET);
            }
        } while (loop <= 1);

        printf("\n");

        for (int i = 0; i < loop; i++)
        {
            printf("Masukkan nilai ke %d: ", i + 1);
            scanf("%d", &nilai);

            if (nilai > 0)
            {
                total += nilai;
                countPositif++;
            }
            else
            {
                printf(RED "\nMasukkan nilai positif untuk menjumlahkan." RESET);
            }
        }

        printf(GREEN "\nTotal penjumlahan: %d\n" RESET, total);

        if (countPositif > 0)
        {
            float rataRata = (float)total / countPositif;
            printf(GREEN "Rata-rata nilai positif: %.2f\n", rataRata);
        }
        else
        {
            printf(RED "Tidak ada nilai positif untuk menghitung rata-rata.\n" RESET);
        }
        do
        {
            printf(BLUE "\nApakah ANda ingin Mengulang Program? (y/n): " RESET);

            while ((getchar()) != '\n')
                ;
            scanf("%c", &choice);

            if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
            {
                printf(RED "\nERROR MASUKKAN INPUT DENGAN BENAR!\n" RESET);
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
        /*if (choice != 'y' || choice != 'Y')
        {
            printf("\n");
        }*/
    } while (choice == 'y' || choice == 'Y');
    printf(GREEN "Program selesai.\n\n" RESET);

    return 0;
}
