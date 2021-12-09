#include<stdio.h>
main(){
	char isim[6][5];
	int i;
	for(i=0;i<5;i++){
		scanf("%c",isim[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%s\n",isim[i]);
	}
	return 0;
}
