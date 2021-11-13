#include<stdio.h>
#include<stdlib.h>
main(){	
	int i,sayi,a,d;
    printf("kac kisinin not ortalamasi hesaplamak istiyorsaniz giriniz:");	
	scanf("%d",&sayi);
	printf("kac dersin not ortalamasi hesaplamak istiyorsaniz giriniz=");
	scanf("%d",&d);
	char ders[d][30];
	char kisi[sayi][20];
	float ortalama,ortalama1;
	float not1[sayi][d];
	float not2[sayi][d];
	for(a=0;a<d;a++){
	printf("%d. dersi giriniz:",a+1);
	scanf("%s",&ders[a]);
	}
	printf("\n");
	for(i=0;i<sayi;i++){
		printf("%d. kisinin ismini giriniz:",i+1);
		scanf("%s",kisi[i]);
		printf("%s isimli kisinin notlarini giriniz=\n\n",kisi[i]);
	for(a=0;a<d;a++){
		printf("%s notlarini giriniz=",ders[a]);
		scanf("%f",&not1[i][a]);
		scanf("%f",&not2[i][a]);
	}
		printf("\n");
	}
	for(i=0;i<sayi;i++){
		ortalama1=0;
		printf("%s isimli kisinin not ortalamasi=\n\n",kisi[i]);
		for(a=0;a<d;a++){
		ortalama=0;
		ortalama=(not1[i][a]+not2[i][a])/2;
		ortalama1=ortalama1+ortalama;
		printf("%s. ortalamasi=%f\n",ders[a],ortalama);
		}
		printf("genel ortalamasi=");
		ortalama1=ortalama1/d;
		printf("%f",ortalama1);
			printf("\n\n");
		}
}
