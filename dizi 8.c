#include<stdio.h>
main(){
	int kisi,sinav,i,j;
	printf("kac kisi hesaplamak istiyorsaniz giriniz:");
	scanf("%d",&kisi);
	printf("kac sinav hesaplamak istiyorsaniz giriniz:");
	scanf("%d",&sinav);
	char isim[15][kisi];
	int ogr[kisi][sinav],ortalama[kisi];
	for(i=0;i<kisi;i++){
		printf("%d.kisinin ismini giriniz:",i+1);
		scanf("%s",isim[i]);
		ortalama[i]=0;
		for(j=0;j<sinav;j++){
			printf("%d sinavi giriniz:\n",j+1);
			scanf("%d",&ogr[i][j]);
			ortalama[i]+=ogr[i][j];
		}
	}
	for(i=0;i<kisi;i++){
		printf("%d. kisi olan %s sinav ortalmasi=%d\n",i+1,isim[i],ortalama[i]/sinav);
	}

}
