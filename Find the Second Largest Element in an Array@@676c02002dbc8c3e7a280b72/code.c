#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d ",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    int second=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=second && max!=arr[i]){
            second=arr[i];
        }
    }
    printf("%d",second);
}