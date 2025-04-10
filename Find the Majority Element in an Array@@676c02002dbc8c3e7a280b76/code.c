#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[n]);
    }
    int arr2[n];
    int m=0;
    for(int i=0;i<n;i++){
        bool a=true;
        for(int j=0;j<i;j++){
            if(arr2[j]==arr[i]){
                a;
            }else{
                a=false;
            }
        }
        if(a){
            arr2[m]=arr[m];
            m++;
        }
    }
    int arr3[m];
    for(int i=0;i<m;i++){
        int temp=0;
        for(int j=0;j<n;j++){
            if(arr2[i]==arr[j]){
                temp++;
            }
        }
        arr3[i]=temp;
    }
    int large=arr3[0];
    int num=arr2[0];
    for(int i=0;i<m;i++){
        if(arr3[i]>=large){
            large=arr3[i];
            num=arr2[i];
        }
    }
    if(num){
        printf("%d",num);
    }else{
        printf("-1");
    }

    return 0;
}