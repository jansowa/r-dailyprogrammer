#include <stdio.h>
#include <string.h>

int charToDecimal(char number){
    int result;
    int intSign = (int) number;
    if(intSign>47 && intSign<58){
        return intSign-48;
    }
    else{
        return intSign-87;
    }
}

int smallestBase(char number[]){
    int length = strlen(number);
    int result = 1;
    int i=0;
    while(i<length){
        int decimalDigit=charToDecimal(number[i]);
        if(decimalDigit>=result){
            result=decimalDigit+1;
        }
        i++;
    }
    return result;
}

int stringToDec(char number[], int base){
    int length=strlen(number);
    int result=0;
    int i=length-1;
    int multiplier=1;
    while(i>=0){
        result=result+charToDecimal(number[i])*multiplier;
        multiplier=multiplier*base;
        i--;
    }
    return result;
}

int main(){
    char number[100];
    scanf("%s", number);
    int base=smallestBase(number);
    while(base<=16){
        printf("base %d => %d\n", base, stringToDec(number, base));
        base++;
    }
}
