#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        // int a;
        scanf("%d ",&arr[i]);
    }
    bool main = true;
    for(int j =1;j<=n;j++){

        if(arr[j]<arr[j-1]){
            main=false;
            break;
        }else if(arr[j]==arr[j-1]){
            main;
        }
        
    }
    if(main){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}