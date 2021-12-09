#include<stdio.h>
main()
{ int menu =3,i,j;
int yemek[menu];
char menuu[menu];
char ymk[15][menu][yemek[i]];
	for(i=0;i<menu;i++){
		printf("%d. menu ismini giriniz:",i+1);
	    scanf("%s",menuu[i]);
	    printf("%d. menude kac yemek cesiti olsun giriniz:",i+1);
	    scanf("%d",&yemek[i]);
	  
	    for(j=0;j<yemek[i];j++)
	    {
	    	printf("yemekleri giriniz:");
	    	scanf("%s",ymk[i][j]);
		}
		

	}
	for(i=0;i<menu;i++){
		printf("%d. menu :%s\ncesitleri:",i+1,menuu[i]);
		for(j=0;j<yemek[i];j++){
			printf("%d. yemek:%s    **\n",j+1,ymk[i][j]);
		}
	}
}
