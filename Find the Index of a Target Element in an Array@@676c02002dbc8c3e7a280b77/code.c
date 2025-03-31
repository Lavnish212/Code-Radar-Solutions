#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int search,index;
    scanf("%d",&search);
     bool nis=true;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            index=i;
            break;
        }else{
            index=-1;
        }
    }
    if(index==-1){
        printf("-1");
    }else{
        printf("%d",index);
    }
}