#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int peak;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        // printf("\n");
    }
    for(int i=0;i<n;i++){
         if(arr[i]<arr[i+1] && arr[i]>arr[i-1]){
            peak=arr[i+1];
            break;
         }
    }
    if(peak){
        printf("%d",peak);
    }else{
        printf("-1");
    }

    return 0;
}