#include<stdio.h>
main(){
	int i,j,satir,sutun;
	printf("satir sayisini giriniz:");
	scanf("%d",&satir);
	printf("sutun sayisini giriniz:");
	scanf("%d",&sutun);
	int m1[satir][sutun],m2[satir][sutun],top[satir][sutun];
	printf("birinci matrisi giriniz:\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("ikinci matris giriniz:\n");
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			scanf("%d",&m2[i][j]);
		}
	}printf("m1:\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}printf("m2:\n");
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
}
