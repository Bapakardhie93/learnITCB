// main.c
#include <stdio.h>
#include "bioskop.h"

int main()
{
    header();                                         // Memanggil header
    printf("Program simulasi pemesanan tiket bioskop dengan diskon member dan validasi tanggal.\n");                                       
    line();                                           // Menampilkan garis
    int film = pilihFilm();                           // Memilih film
    int tiket = pilihTiket();                         // Memilih jenis tiket
    float totalHarga = hitungTotalHarga(film, tiket); // Menghitung total harga
    int member = pilihMember();                       // Memilih member
    int hari = 0, bulan = 0, tahun = 0;

    // Input tanggal
    inputTanggal(&hari, &bulan, &tahun); // Mengambil input tanggal
    line();

    // Menghitung diskon
    totalHarga = applyDiscounts(totalHarga, member, hari, bulan, tahun);

    // Menampilkan total harga
    printTotalHarga(totalHarga);

    // Input pembayaran
    float pembayaran = inputPembayaran(totalHarga);

    // Menghitung kembalian
    calculateKembalian(totalHarga, pembayaran);

    return 0;
}
