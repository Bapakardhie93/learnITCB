#include <stdio.h>
#include <string.h>
#include <math.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

enum Film
{
    SPIDERMAN,
    BATMAN,
    SUPERMAN,
    AVENGERS,
    JOKER
};
enum JenisTiket
{
    REGULER,
    VIP,
    VVIP
};

const float hargaFilm[] = {50000, 55000, 60000, 70000, 45000};
const float hargaTiket[] = {30000, 100000, 150000};

void header()
{
    printf("\n----------------------------------- Bioskop -----------------------------------\n");
}

void line()
{
    printf("\n-------------------------------------------------------------------------------\n\n");
}

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int pilihFilm()
{
    int choice;
    while (1)
    {
        printf("Pilih film:\n1. Spiderman - Rp.%.0f\n2. Batman - Rp.%.0f\n3. Superman - Rp.%.0f\n4. Avengers - Rp.%.0f\n5. Joker - Rp.%.0f\n",
               hargaFilm[SPIDERMAN], hargaFilm[BATMAN], hargaFilm[SUPERMAN], hargaFilm[AVENGERS], hargaFilm[JOKER]);
        printf("Masukkan pilihan Anda (1-5): ");

        if (scanf("%d", &choice) != 1)
        {
            printf(RED "Inputan tidak valid. Harap masukkan angka dari 1 sampai 5!!\n" RESET);
            clearInputBuffer();
            continue;
        }

        if (choice < 1 || choice > 5)
        {
            printf(RED "Inputan tidak valid. Harap pilih angka dari 1 sampai 5!!\n" RESET);
        }
        else
        {
            break;
        }
    }
    return choice - 1;
}

int pilihTiket()
{
    int choice;
    while (1)
    {
        printf("Pilih jenis tiket:\n1. Reguler - Rp.%.0f\n2. VIP - Rp.%.0f\n3. VVIP - Rp.%.0f\n",
               hargaTiket[REGULER], hargaTiket[VIP], hargaTiket[VVIP]);
        printf("Masukkan pilihan Anda (1-3): ");

        if (scanf("%d", &choice) != 1)
        {
            printf(RED "Inputan tidak valid. Harap pilih angka dari 1 sampai 3!!\n" RESET);
            clearInputBuffer();
            continue;
        }

        if (choice < 1 || choice > 3)
        {
            printf(RED "Inputan tidak valid. Harap pilih angka dari 1 sampai 3!!\n" RESET);
        }
        else
        {
            break;
        }
    }
    return choice - 1;
}

int pilihHari()
{
    int choice;
    while (1)
    {
        printf("Pilih hari:\n1. Weekday (diskon 15%%)\n2. Weekend (Harga normal)\n");
        printf("Masukkan pilihan Anda (1-2): ");

        if (scanf("%d", &choice) != 1)
        {
            printf(RED "Inputan tidak valid. Harap masukkan angka 1 atau 2!\n" RESET);
            clearInputBuffer();
            continue;
        }

        if (choice != 1 && choice != 2)
        {
            printf(RED "Inputan tidak valid. Harap pilih angka 1 atau 2!\n" RESET);
        }
        else
        {
            break;
        }
    }
    return choice;
}

int pilihMember()
{
    int member;
    while (1)
    {
        printf("Apakah Anda member? (1 untuk Ya, 0 untuk Tidak): ");

        if (scanf("%d", &member) != 1)
        {
            printf(RED "Inputan tidak valid! Harap masukkan 1 (Ya) atau 0 (Tidak).\n" RESET);
            clearInputBuffer();
            continue;
        }

        if (member != 1 && member != 0)
        {
            printf(RED "Inputan tidak valid! Harap masukkan 1 (Ya) atau 0 (Tidak).\n" RESET);
        }
        else
        {
            break;
        }
    }
    return member;
}

float hitungTotalHarga(int pilihanFilm, int pilihanTiket)
{
    return hargaFilm[pilihanFilm] + hargaTiket[pilihanTiket];
}

// Fungsi untuk format rupiah dengan desimal dan pemisah ribuan
void formatRupiah(float harga)
{
    int bagianUtama = (int)harga;                           // Ambil bagian utama (sebelum desimal)
    int bagianDesimal = (int)((harga - bagianUtama) * 100); // Ambil bagian desimal
    char buffer[50], formatted[50] = "";                    // Buffer dan string akhir
    int len, count = 0;

    // Ubah bagian utama ke string
    sprintf(buffer, "%d", bagianUtama);
    len = strlen(buffer);

    // Tambahkan pemisah titik setiap tiga digit
    for (int i = len - 1; i >= 0; i--)
    {
        formatted[count++] = buffer[i];
        if ((len - i) % 3 == 0 && i != 0)
            formatted[count++] = '.';
    }
    formatted[count] = '\0';

    // Balik string agar benar
    for (int i = 0; i < count / 2; i++)
    {
        char temp = formatted[i];
        formatted[i] = formatted[count - i - 1];
        formatted[count - i - 1] = temp;
    }

    // Tambahkan desimal di akhir
    printf(GREEN "Rp%s,%02d" RESET, formatted, bagianDesimal);
}

int main()
{
    int pilihanFilm, pilihanTiket, member, hari;
    float totalHarga, pembayaran, kembalian;
    float diskonMember = 0.10, diskonWeekday = 0.15;

    header();
    pilihanFilm = pilihFilm();
    line();
    pilihanTiket = pilihTiket();
    line();
    hari = pilihHari();
    line();
    member = pilihMember();
    line();

    totalHarga = hitungTotalHarga(pilihanFilm, pilihanTiket);

    // Diskon weekday
    if (hari == 1)
    {
        totalHarga -= totalHarga * diskonWeekday;
        printf(GREEN "Diskon weekday 15%% diterapkan!\n" RESET);
    }

    // Diskon member jika bukan weekend
    if (member == 1 && hari != 2)
    {
        totalHarga -= totalHarga * diskonMember;
        printf(GREEN "Diskon member 10%% diterapkan!\n" RESET);
    }

    printf("Total harga: ");
    formatRupiah(totalHarga);
    printf("\n");

    // Input pembayaran
    do
    {
        printf("Masukkan jumlah uang yang dibayarkan: ");
        if (scanf("%f", &pembayaran) != 1)
        {
            printf(RED "Inputan tidak valid! Harap masukkan jumlah uang yang benar.\n" RESET);
            clearInputBuffer();
            continue;
        }

        if (pembayaran < totalHarga)
        {
            printf(RED "Uang yang Anda masukkan kurang! Silahkan masukkan sesuai nominal" RESET);
            formatRupiah(totalHarga);
            printf("\n");
        }
    } while (pembayaran < totalHarga);
    line();

    if (pembayaran > totalHarga)
    {
        kembalian = pembayaran - totalHarga;
        printf("Kembalian Anda: ");
        formatRupiah(kembalian);
        printf("\n");
    }
    else
    {
        printf(GREEN "Terima kasih, pembayaran Anda sudah pas.\n" RESET);
    }
    line();
    return 0;
}
