#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[]={};
    int m=0;
    for(int i=0;i<n;i++){
    bool a=true;
        for(int j=0;j<i;j++){
            if(arr2[j]!=arr[i]){
                a   ;
            }else{
                a=false;
            }
        }
        if(a){
            arr2[m]=arr[i];
            m++;
        }
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(arr2[i]==arr[j]){
                sum++;
            }
        }
        printf("%d %d\n",arr2[i],sum);
    }
    return 0;
}