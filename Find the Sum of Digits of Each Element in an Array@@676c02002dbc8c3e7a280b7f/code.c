#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int temp =arr[i];
        int j=0,sum=0;
        while(temp!=0){
            sum=temp%10;
            temp=temp/10;
            j++;
        }
        printf("%d ",sum);
    }
}