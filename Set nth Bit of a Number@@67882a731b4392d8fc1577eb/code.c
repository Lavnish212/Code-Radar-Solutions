#include<stdio.h>
int main(){
    int n,position,i=0;
    scanf("%d %d",&n,&position);
    int arr[32];
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    int sum=0;
    int multiple=1;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<len;j++){
        if(j==position){
            arr[j]=1;
        }
        sum=sum+multiple*arr[j];
        multiple=multiple*2;
    }
    printf("%d",sum);
    return 0;
}