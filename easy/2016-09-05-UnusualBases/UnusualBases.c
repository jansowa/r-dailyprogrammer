#include <stdio.h>
#include <string.h>

int fibNumbers[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169};

int indexOfFibNumber(int number){
    //return index of largest fibonacci number not larger than number in input
    int index=1;
    while(fibNumbers[index+1]<=number){
        index++;
    }
    return index;
}

void decToFib(int number){
    int firstIndex;
    int secondIndex;
    secondIndex=indexOfFibNumber(number);
    printf("1");
    number=number-fibNumbers[secondIndex];
    while(number>0){
        firstIndex=secondIndex;
        secondIndex=indexOfFibNumber(number);
        int i=firstIndex-secondIndex-1;
        while(i>0){
            printf("0");
            i--;
        }
        printf("1");
        number=number-fibNumbers[secondIndex];
    }
    while(secondIndex>0){
        printf("0");
        secondIndex--;
    }
    printf("\n");
}

void fibToDec(char number[]){
    int result=0;
    int length= strlen(number);
    int i=length-1;
    while(i>=0){
        if(number[i]=='1'){
            result=result+fibNumbers[length-i-1];
        }
        i--;
    }
    printf("%d\n", result);
}

int main(){
    char base[2];
    char charNumber[100];
    int intNumber;
    while(scanf("%s", base)!=EOF){
        if(base[0]=='F'){
            scanf("%s", charNumber);
            fibToDec(charNumber);
        }
        else{
            scanf("%d", &intNumber);
            decToFib(intNumber);
        }
    }
}
