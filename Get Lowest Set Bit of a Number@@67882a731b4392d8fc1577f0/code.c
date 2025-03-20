#include<stdio.h>
int main(){
    int n,i=0;
    int arr[32]={0};
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    printf("%d",arr[i]);
    return 0;
}