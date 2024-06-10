/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : KalkSS.c
   Deskripsi    : Menghitung sebuah kalkulator dengan inputan 2 bilangan int dan menampilkannya ke layar 
*/


#include <stdio.h>

    //Kamus
    int main() {
        char pil;
        int iA, iB, hasil2;
        float hasil1;
  
    //Algoritma
    printf("Pilih operasi bilangan : ");
    scanf("%c", &pil); //(%c jangan lupa gunakan untuk jenis tipe data char)
  
    printf("Masukan nilai ke-1 : ");
    scanf("%d", &iA);
  
    printf("Masukan nilai ke-2 : ");
    scanf("%d", &iB);
  
    if (pil != 'a' && pil != 'b' && pil != 'c' && pil != 'd' && pil != 'e' && pil != 'f') { //!= (untuk menyatakan bukan anggota)
        printf("Bukan pilihan menu yang benar\n");
    } else {
        if (pil == 'a') {
        hasil1 = iA + iB;
        printf("Total: %f\n", hasil1); //(%f jangan lupa gunakan untuk tipe data float)
        } else if (pil == 'b') {
        hasil1 = iA - iB;
        printf("Total: %f\n", hasil1);
        } else if (pil == 'c'){
            hasil1 =iA * iB;
            printf("Total: %f\n", hasil1);
        } else if (pil == 'd'){
            hasil1 = iA / iB;
            printf("Total: %f\n", hasil1);
        } else if (pil == 'e'){
            hasil2 = iA / iB;
            printf("Total: %d\n", hasil2);
        } else if (pil == 'f'){
            hasil1 = iA % iB;
            printf("Total: %f\n", hasil1);
        }
    }

  return 0;
}




