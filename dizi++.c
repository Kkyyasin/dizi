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
	float ortalama;
	float not1[sayi][d];
	float not2[sayi][d];
	for(a=0;a<d;a++){
	printf("%d. dersi giriniz:",a+1);
	scanf("%s",&ders[a]);
	}
	
	for(i=0;i<sayi;i++){
		printf("%d. kisinin ismini giriniz:",i+1);
		scanf("%s",kisi[i]);
		printf("%s isimli kisinin notlarini giriniz=\n",kisi[i]);
	for(a=0;a<d;a++){
		printf("%s notlarini giriniz=",ders[a]);
		scanf("%f",&not1[i][a]);
		scanf("%f",&not2[i][a]);
	}
	}
	for(i=0;i<sayi;i++){
		printf("%s isimli kisinin not ortalamasi=\n",kisi[i]);
		for(a=0;a<d;a++){
			ortalama=0;
			ortalama=(not1[i][a]+not2[i][a])/2;
			printf("%s. ortalamasi=%f\n",ders[a],ortalama);
		}
		}
}
