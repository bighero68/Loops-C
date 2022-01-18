#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i,j,lim;

	printf("Enter the limit: ");
	scanf("%d",&lim);

	for(i=1;i<lim;i++){
		for(j=1;j<=i;j++){
				printf("**");
				printf("\n");
			}
		for(j=0;j<(i*3);j++){
				printf("*");
		}
				printf("\n");
	}
	return EXIT_SUCCESS;
}
