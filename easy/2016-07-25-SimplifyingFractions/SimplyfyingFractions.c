#include <stdio.h>

int NWD(int a, int b){
	int pom;
	while(b!=0){
		pom=b;
		b=a%b;
		a=pom;
	}
	return a;
}

int main(){
	int x, y, nwd;
	while( scanf("%d %d", &x, &y) != EOF){
		nwd = NWD(x,y);
		printf("%d %d\n", x/nwd, y/nwd);
	}
	return 0;
}
