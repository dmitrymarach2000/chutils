#include <stdlib.h>
#include <stdio.h>



int main(){
	char* a = (char*)malloc(0);
	a = (char*)realloc(a, 1 * sizeof(char));
	printf("ok");
	for (int i = 0; i < 100; ++i){
		for(int j = 0; j < 10; j++)
			a[i*10 + j] = i*10 + j;
	}
	for (int i = 0; i < 60; ++i){
		for(int j = 0; j < 10; j++)
			printf("%d ", a[i*10 + j]);
		printf("\n");
	}
}
