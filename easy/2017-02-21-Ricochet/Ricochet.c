#include <stdio.h>

int main(){
	int gcd(int a, int b){
		//greatest common divisor
		int t;
		while(b!=0){
			t = b;
			b = a%b;
			a = t;
		}
		return a;
	}
	
	int lcm(int a, int b){
		//lowest common multiple
		return a*b/gcd(a,b);
	}
	
	int h, w, v;
	int length; //lenght of particle's road
	int ricochets; //how many times particle ricochets
	char corner[2];
	while(scanf("%d %d %d", &h, &w, &v)!=EOF){
		length = lcm(h, w);
		ricochets = length/h - 1 + length/w - 1;
		if((length/h-1)%2==0){
			corner[0]='L';
		}
		else{
			corner[0]='U';
		}
		if((length/w-1)%2==0){
			corner[1]='R';
			
		}
		else{
			corner[1]='L';
		}
		printf("%c%c %d %d\n", corner[0], corner[1], ricochets, length/v);
	}
	
	return 0;
}
