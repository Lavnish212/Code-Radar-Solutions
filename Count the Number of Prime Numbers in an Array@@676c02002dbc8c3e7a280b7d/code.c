#include<stdio.h>
#include<stdbool.h>
void prime(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        bool nis=true;
        int num=arr[i];
        if(num<=1){
            continue;
        }
        for(int j=2;j<arr[i];j++){
                if(arr[i]%j!=0){
                     nis;
            }else{
                nis=false;
            }
        }
        if(nis){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    prime( arr, n);
}