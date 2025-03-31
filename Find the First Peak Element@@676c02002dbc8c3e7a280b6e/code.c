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
         if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            peak=arr[i];
            break;
         }else if(arr[i+1]>arr[i]){
            if(i+1>n-1){
                peak=arr[i];
                break;
            }
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