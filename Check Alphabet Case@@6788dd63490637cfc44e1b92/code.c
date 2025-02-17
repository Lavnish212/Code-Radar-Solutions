#include<stdio.h>
int main(){
    char c;
    scanf("%d",&c);
    if(c >64 && c<=94){
        printf("Uppercase");
    }
    else if (c>94){
        printf("Lowercase");
    }
    return 0;
}