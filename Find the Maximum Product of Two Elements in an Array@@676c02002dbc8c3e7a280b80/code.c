#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max=0,i,j;
    for( i=0;i<n;i++){
        int temp=0;
        for(j=i;j<n;j++){
            if(i!=j){
            temp=arr[i]*arr[j];
            }
        }
        if(temp>=max){
            max=temp;
        }
    }
    printf("%d",max);
    return 0;
}