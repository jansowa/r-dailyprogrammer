#include <stdio.h>
#include <string.h>

int main(){
	char str1[100];
	char str2[100];

	gets(str1);
	gets(str2);

	int length = strlen(str1);

	for(int i=0; i<length; i++){
		printf("%c", str1[i]);
	}

	for(int i=0; i<length; i++){
		if(str1[i]!=str2[i]){
			printf("\n");
			for(int j=0; j<=i; j++){
				printf("%c", str2[j]);
			}
			for(int j=i+1; j<length; j++){
				printf("%c", str1[j]);
			}
		}
	}

	return 0;
}
