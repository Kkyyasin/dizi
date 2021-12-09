#include <stdio.h>

main(){
	int liste [5];
	int i;
	
	for(i=0;i<5;i++){
		liste[i]=i*3;
	}
	
	for(i=0;i<5;i++){
		printf("%d ",liste[i]);
	}
	return 0;
}
