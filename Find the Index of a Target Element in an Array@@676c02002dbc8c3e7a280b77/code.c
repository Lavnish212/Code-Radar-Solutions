#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int search;
    scanf("%d",&search);
     bool nis=true;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            printf("%d",i);
            break;
        }else{
            nis=false;
        }
    }
    if(!nis){
        printf("-1");
    }
}