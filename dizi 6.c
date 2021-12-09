#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	int i,toplam=0,ortalama=0,max1,max2,min1,min2;
	int rasgele[20];
	srand(time(NULL));
	for(i=0;i<20;i++){
		rasgele[i]=rand()%100;
		toplam+=rasgele[i];
	}
	max1=rasgele[0];
	max2=rasgele[0];
	min1=rasgele[0];
	min1=rasgele[0];
	for(i=0;i<20;i++){
		if(rasgele[i]>max1){
			max1=rasgele[i];
		}
	 if(max1!=rasgele[i]){
	 	if(rasgele[i]>max2){
	 		max2=rasgele[i];
		 }}
		 if(min1>rasgele[i]){
		 	min1=rasgele[i];
		 }
		 if(min1!=rasgele[i]){
		 	if(min2>rasgele[i]){
		 		min2=rasgele[i];
			 }
		 }
	 }
	ortalama=toplam/20;
	printf("min1=%d\n",min1);
	printf("min2=%d\n",min2);
	printf("max1=%d\n",max1);
	printf("max2=%d\n",max2);
	printf("toplam=%d\n",toplam);
	printf("ortalama=%d",ortalama);
	 return 0;
		
	}
