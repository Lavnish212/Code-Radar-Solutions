#include<stdio.h>
int main(){
    int n,i=0;
    int arr[32]={0};
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    int least=0;
    for(int j=0;j<i;j++){
        if(arr[j]==1&&j>0){
            return printf("%d",j);
        }
    }
    return 0;
}