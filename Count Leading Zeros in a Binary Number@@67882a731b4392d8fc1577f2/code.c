#include<stdio.h>
int main(){
    int n;
    int i=0;
    int arr[32]={0};
    if(n==0){
        printf("%d",32);
    }
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    printf("%d",32-i);
    return 0;
}