//
//  main.c
//  Hesap Makinesi
//
//  Created by Mete Turan on 26.10.2023.
//

#include <stdio.h>

int main() {
    
    int sayi1,sayi2,istek;
    int toplam,cikarma,carpma,bolme;
    
    printf("1. değeri giriniz: \n");
    scanf("%d",&sayi1);
    
    printf("2. değeri giriniz: \n");
    scanf("%d",&sayi2);
    
    toplam = sayi1+sayi2;
    cikarma = sayi1-sayi2;
    carpma = sayi1*sayi2;
    bolme = sayi1/sayi2;
    
    
    printf("1= Toplama İşlemi\n");
    printf("2= Çıkarma İşlemi\n");
    printf("3= Çarpma İşlemi\n");
    printf("4= Bölme İşlemi\n");
    
    printf("Yapmak istediğiniz işlemi seçiniz: \n");
    scanf("%d", &istek);
    
    if (istek == 1) {
        printf("Toplam= %d\n", toplam);
    }
    if (istek == 2) {
        printf("Cikarma= %d\n", cikarma);
    }
    if (istek == 3) {
        printf("Çarpma= %d\n", carpma);
    }
    if (istek == 4) {
        printf("Bölme= %d\n", bolme);
    }



    
    
    
    
}
