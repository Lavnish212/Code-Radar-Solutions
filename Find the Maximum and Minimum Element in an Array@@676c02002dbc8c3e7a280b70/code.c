#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&m);
       arr[i]=m; 
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;

}