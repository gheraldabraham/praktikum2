/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : hitungTahanan.c
   Deskripsi    : Menghitung dan menampilkan ke layar hasil dari 3 inputan atau masukan int tahanan
*/


#include <stdio.h>

int main() {
    
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan bilangan integer: ");
    scanf("%d", &i);

    if (i > 0) {
        printf("%d adalah bilangan bulat positif.\n", i);
    } else if (i < 0) {
        printf("%d adalah bilangan bulat negatif.\n", i);
    } else {
        printf("%d adalah nol.\n", i);
    }

    return 0;
}
