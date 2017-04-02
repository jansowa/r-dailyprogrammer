#include <stdio.h>
#include <string.h>

int main(){
    char line[100];
    int first = 1;
    while(scanf("%s", line)!=EOF)
    {
        if(first==0){
            printf("+");
        }
        first=0;
        int length = strlen(line);
        int i;
        for(i=0; i<length; i++){
            printf("%c", line[i]);
            if(line[i]=='+'){
                printf("+");
            }
        }
    }

    return 0;
}
