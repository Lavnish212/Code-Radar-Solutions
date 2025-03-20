#include<stdio.h>
int main(){
    int n,position,i=0;
    scanf("%d %d",&n,&position);
    int arr[32]={0};
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    int sum=0;
    int multiple=1;
    for(int j=0;j<i;j++){
        if(j==position){
            if(arr[j]==0){
                arr[j]=1;
            }else{
                arr[j]=0;
            }
        }
        sum=sum+multiple*arr[j];
        multiple=multiple*2;
    }
    print("%d",sum);
    return 0;
}