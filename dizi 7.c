#include<stdio.h>
main(){
	int ogrnot[3][2],i,j,ortalama,ogrenci,sinav;
	printf("kac ogrenci hesaplamak istiyorsaniz giriniz:");
	scanf("%d",&ogrenci);
	printf("kac sinav hesaplamak istiyorsaniz giriniz:");
	scanf("%d",&sinav);
	for(i=0;i<ogrenci;i++){
		for(j=0;j<sinav;j++){
			printf("%d. ogrencinin %d sinavini giriniz:",i+1,j+1);
			scanf("%d",&ogrnot[i][j]);
		}
	}
	int cikti=ogrnot[0][0]+ogrnot[1][1]+ogrnot[2][2];
	printf("cikti=%d\n",cikti);
	for(i=0;i<ogrenci;i++){
		ortalama=0;
		for(j=0;j<sinav;j++){
		ortalama+=ogrnot[i][j];	
		}
		printf("%d .ogrencinin ortalamasi=%d\n",i+1,ortalama/sinav);
	}
	return 0;
}
