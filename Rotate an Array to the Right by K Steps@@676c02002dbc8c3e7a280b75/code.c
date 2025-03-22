#include<stdio.h>
int main(){
    int n,pos;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&pos);
    for(int i=0;i<pos;i++){
        int arr2[n];
        for(int j=0;j<n;j++){
            if(j+1==n-1){
                arr2[0]=arr[j];
            }else{
            arr2[j+1]=arr[j];
            }
        }
        arr[n]=arr2[n];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}