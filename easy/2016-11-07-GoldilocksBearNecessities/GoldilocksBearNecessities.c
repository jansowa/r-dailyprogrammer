#include <stdio.h>

int main(){
    int weight;
    int temperature;
    scanf("%d %d", &weight, &temperature);
    int chairWeight;
    int chairTemperature;
    int counter=1;
    while(scanf("%d %d", &chairWeight, &chairTemperature)!=EOF){
        if(weight<chairWeight && temperature>chairTemperature){
            printf("%d ", counter);
        }
        counter++;
    }
}
