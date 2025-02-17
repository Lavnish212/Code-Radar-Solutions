#include<stdio.h>
int main(){
    char c;
    scanf("%d",&c);
    if(c >64 && c<95){
        printf("Uppercase");
    }
    else if (c>94){
        printf("Lowercase");
    }
    return 0;
}