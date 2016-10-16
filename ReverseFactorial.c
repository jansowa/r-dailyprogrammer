#include <stdio.h>
int reverseFactorial(int x){
	if(x<1)
		return 0;
	if(x==1)
		return 1;
	int result=1;
	while(x>1){
		if(x%result==0){
            x=x/result;
			result++;
			}
        else
            return 0;
	}
	return result-1;
}

int main(){
    int number;
    while(scanf("%d", &number)){
        int temp = reverseFactorial(number);
        if(temp==0){
            printf("NONE");
        }
        else{
            printf("%d", temp);
        }
    }
}
