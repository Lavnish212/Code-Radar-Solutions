#include<stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int arr[32]={0};
    if(n==0){
        printf("%d",0);
       return 0; 
    }
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%d",arr[i-j-1]);
    }
    return 0;
}