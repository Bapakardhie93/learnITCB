 #include <stdio.h>

int main() {
    //header
    printf("<======Program Menghitung Nilai Akhir Mahasiswa======>\n\n");

    char nama[50], nim[20];
    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    //membuat inputan untuk user
    printf("Masukkan Nama Mahasiswa: ");
    fgets(nama, 50, stdin); 
    printf("Masukkan NIM Mahasiswa: ");
    fgets(nim, 20, stdin);
    printf("Masukkan Nilai Tugas (0-100): ");
    scanf("%f", &nilai_tugas);  
    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    //garis pemisah
    printf("\n----------------------------------------------------\n\n");

    //oprasi hitung nilai akhir
    nilai_akhir = (nilai_tugas*0.2)+(nilai_uts*0.35)+(nilai_uas*0.45);

    //menampilkan hasil oprasi
    printf("Nama Mahasiswa: %s", nama);
    printf("NIM Mahasiswa: %s", nim);
    printf("Nilai Tugas: %.2f\n", nilai_tugas);
    printf("Nilai UTS: %.2f\n", nilai_uts);
    printf("Nilai UAS: %.2f\n", nilai_uas);
    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    //footer
    printf("\n----------------------------------------------------\n\n<=========== Code Execution Successful ============>\n\n");

    return 0;
}