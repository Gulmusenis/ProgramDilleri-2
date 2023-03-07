#include<stdio.h>
#include<stdlib.h>

int hesapla(int,int);

int main(){
    int ogr_sayisi;
    int gecme_notu;

    printf("Ogrenci Sayisini Giriniz:");
    scanf("%d",&ogr_sayisi);
    printf("Gecme Notunu Giriniz:");
    scanf("%d",&gecme_notu);

    int kalan = hesapla(ogr_sayisi,gecme_notu);
    printf("Gecen ogrenci sayisi:%d",ogr_sayisi-kalan);
    printf("Kalan ogrenci sayisi:%d",kalan);

    return 0;
}

int hesapla(int os,int gn){
    int notlar[100];
    int toplam=0;
    int kalan=0;
    for(int i=0;i<os;i++){
        printf("%d. ogrencinin notu:",i+1);
        scanf("%d",&notlar[i]);
        if(notlar[i]<gn)
            kalan++;
        toplam+=notlar[i];
    }
    printf("Not ortalamasi:%d\n",toplam/os);
    return kalan;
}