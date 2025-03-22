#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[]={};
    for(int i=0;i<n;i++){
        int a;
        scanf("%d ",&a);
    }
    bool a= true;
    for(int j =0;j<n;j++){

        for(int k=0;k<n;k++){
            if(j<=k){
                if(arr[j]<=arr[k]){
                    a;
                }else{
                    a=false;
                }
            }else{
                if(arr[j]>arr[k]){
                    a=false;
                }
            }
        }
    }
    if(a==false){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
}