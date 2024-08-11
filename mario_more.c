#include <stdio.h>

int main(void){
	
	int i,j,k,n;
	
	n=7;
	
	for(i=1; i<=n; i++){
		for(j=0; j < (n-i); j++){
			printf(" ");
			}
		for(k=0; k<i; k++){
			printf("#");
			}
			
			printf("  ");
			
			
		for(k=0; k<i; k++){
			printf("#");
			}
		for(j=0; j < (n-i); j++){
			printf(" ");
			}
			
			printf("\n");
		}
	
}
