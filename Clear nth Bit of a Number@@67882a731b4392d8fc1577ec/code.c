#include<stdio.h>
int main(){
    int i,n,position;
    scanf("%d %d",&n,&position);
    int arr[32];
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    int sum=0;
    int multiple=1;
    for(int j=0;j<position;j++){
        if(binary[j]!=0){
            multiple=binary*2;
            sum+=multiple;
        }else{
            multiple=0;
        }

    }
    printf("%d",sum);
    return 0;
}