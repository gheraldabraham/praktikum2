/* Nama         : Gherald Abraham
   NIM          : 24060123140210
   Kelas        : A
   Nama Program : CekSegitiga.c
   Deskripsi    : Mengecek dan menampilkan ke layar inputan atau masukan 3 bilangan int positif tersebut termasuk segitiga sama sisi, kaki, atau sembarang
*/


#include <stdio.h>

int main() {
  
    //Kamus
    int a, b, c;
    
    //Algoritma
    printf("Masukan sisi segitiga ke -1 :");
    scanf("%d", &a);
    printf("Masukan sisi segitiga ke -2 :");
    scanf("%d", &b);
    printf("Masukan sisi segitiga ke -3 :");
    scanf("%d", &c);
  
    if (a > 0 && b > 0 && c > 0) {
         if (a == b && b == c) 
             printf("Segitiga Sama Sisi");
        else if (a == b || b == c || a == c) 
             printf("Segitiga Sama Kaki");
        else 
             printf("Segitiga Sembarang");
    } else {
        printf("Terdapat nilai yang bukan sisi segitiga");
    }

  return 0;
}




