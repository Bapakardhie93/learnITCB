#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"


void fenitaCantik(int bulan)
{
    switch (bulan)
    {
    case 1:
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;
    default:
        printf("Bulan tidak valid");
        break;
    }
}

bool validasiTanggal(int hari, int bulan, int tahun)
{

    if (bulan < 1 || bulan > 12)
    {
        return false;
    }

    if (hari < 1 || hari > 31)
    {
        return false;
    }

    if ((bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) && hari > 30)
    {
        return false;
    }

    if (bulan == 2)
    {
        if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
        {
            if (hari > 29)
            {
                return false;
            }
        }
        else
        {
            if (hari > 28)
            {
                return false;
            }
        }
    }

    return true;
}

bool validasiJam(int jam, int menit, int detik, const char *period)
{
    if (jam < 0 || jam > 23)
    {
        return false;
    }

    if (menit < 0 || menit > 59)
    {
        return false;
    }

    if (detik < 0 || detik > 59)
    {
        return false;
    }

    if (strcmp(period, "PM") == 0 && jam < 12)
    {
        jam += 12;
    }
    else if (strcmp(period, "AM") == 0 && jam == 12)
    {
        jam = 0;
    }

    if (jam < 0 || jam > 23)
    {
        return false;
    }

    return true;
}

void bersihkanBufferInput()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

// program input tanggal sesuai format (DD-MM-YYYY)
/*int main() {
    int hari, bulan, tahun;
    char input[100];
    char choice;
    bool valid = false;

    do {
        do {
            printf("\nMasukkan tanggal (format DD-MM-YYYY): ");
            fgets(input, sizeof(input), stdin);

            if (sscanf(input, "%d-%d-%d", &hari, &bulan, &tahun) == 3) {
                if (tahun >= 1000 && tahun <= 9999) {
                    if (validasiTanggal(hari, bulan, tahun)) {
                        valid = true;
                    } else {
                        printf(RED "\nTanggal tidak valid!\n" RESET);
                        valid = false;
                    }
                } else {
                    printf(RED "\nTahun harus dalam format YYYY!\n" RESET);
                    valid = false;
                }
            } else {
                printf(RED "\nInput tidak valid! Pastikan menggunakan format DD-MM-YYYY.\n" RESET);
                valid = false;
            }

        } while (!valid);
        printf(BLUE "\n%d ", hari);
        fenitaCantik(bulan);
        printf(" %d\n" RESET, tahun);

        bool pilihanValid = false;
        do {
            printf("\nApakah Anda ingin mengulang program? (y/n): ");
            scanf(" %c", &choice);

            bersihkanBufferInput();

            if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N') {
                pilihanValid = true;
            } else {
                printf(RED "Input tidak valid! Masukkan 'y' untuk ya atau 'n' untuk tidak.\n" RESET);
            }

        } while (!pilihanValid);

    } while (choice == 'y' || choice == 'Y');

    printf(GREEN "Program selesai.\n" RESET);

    return 0;
}*/

// program menentukan kelipatan 4 dan 5
/*int main()
{
    int angka, attempt;
    attempt=0;

    while (1)
    {
        printf("Masukkan 4 digit angka: ");
        scanf("%d", &angka);

        if (angka < 1000 || angka > 9999)
        {
            attempt++;
            if (attempt == 2)
            {
                printf(RED "\nMasukkan 4 Digit Angka!!\n\n" RESET);
            }
            else
            {
                printf(RED "\nAngka tidak valid.\n\n" RESET);
            }
        }
        else
        {
            if (angka % 4 == 0 && angka % 5 == 0)
            {
                printf(GREEN "\nAngka valid.\n\n" RESET);
            }
            else
            {
                printf(RED "\nAngka tidak valid.\n\n");
            }
            break;
        }
    }
    return 0;
}*/

//program input jam sesuai format
int main()
{
    int jam, menit, detik;
    char input[20], period[3], choice;
    bool valid = false;

    do
    {
        do
        {
            printf("Masukkan Jam (format JJ:MM:DD AM/PM): ");
            fgets(input, sizeof(input), stdin);

            if (sscanf(input, "%d:%d:%d %2s", &jam, &menit, &detik, period) == 4)
            {
                if (strcmp(period, "AM") != 0 && strcmp(period, "PM") != 0)
                {
                    printf(RED "\nINPUT TIDAK VALID: Periode harus AM atau PM!\n\n" RESET);
                    valid = false;
                }

                else if (validasiJam(jam, menit, detik, period))
                {
                    valid = true;
                    printf(GREEN "\n%02d:%02d:%02d %s\n" RESET, jam, menit, detik, period);
                }
                else
                {
                    printf(RED "\nINPUT TIDAK VALID: jam, menit, detik, atau periode salah!\n\n" RESET);
                }
            }
            else
            {
                printf(RED "\nPastikan input dalam format JJ:MM:DD AM/PM!\n\n" RESET);
            }
        } while (!valid);

        bool pilihanValid = false;
        do
        {
            printf("\nApakah Anda ingin mengulang program? (y/n): ");
            scanf(" %c", &choice);

            bersihkanBufferInput();

            if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N')
            {
                pilihanValid = true;
            }
            else
            {
                printf(RED "\nInput tidak valid! Masukkan 'y' untuk ya atau 'n' untuk tidak.\n" RESET);
            }

        } while (!pilihanValid);
    } while (choice == 'y' || choice == 'Y');
    printf(GREEN "Program selesai.\n" RESET);
    return 0;
}
