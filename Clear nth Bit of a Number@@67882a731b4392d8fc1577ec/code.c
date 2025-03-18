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
        if(arr[j]!=0){
            if(j=0){
                sum+=multiple;
            }else{
            multiple=multiple+arr[j]*2;
            sum+=multiple;
            }
        }else{
            sum=sum+0;
        }

    }
    printf("%d",sum);
    return 0;
}