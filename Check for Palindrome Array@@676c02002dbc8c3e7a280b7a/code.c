#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&i);
    }
    int nis=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[-(i+1)]){
            nis;
        }else{
            nis=0;
        }
    }
    if(nis){
        printf("YES");
    }else{
        printf("NO");
    }
}