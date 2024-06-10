/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : namaHari.c
   Deskripsi    : Mengecek dan menampilkan ke layar dari inputan 1-7 sesuai nama hari
*/


#include <stdio.h>

int main() {
    
    //Kamus
    int H;

    //Algoritma
    printf("Masukkan nomor hari (1-7): ");
    scanf("%d", &H);

    
    if (H >= 1 & H <= 7) {
        switch (H) {
            case 1:
                printf("Hari Minggu\n");
                break;
            case 2:
                printf("Hari Senin\n");
                break;
            case 3:
                printf("Hari Selasa\n");
                break;
            case 4:
                printf("Hari Rabu\n");
                break;
            case 5:
                printf("Hari Kamis\n");
                break;
            case 6:
                printf("Hari Jumat\n");
                break;
            case 7:
                printf("Hari Sabtu\n");
                break;
            
        }
    } else {
        printf("Masukan nomor hari tidak tepat.\n");
    }

    return 0;
}
