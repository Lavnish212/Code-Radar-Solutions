#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&i);
    }
    bool nis=true;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[-(i+1)]){
            nis;
        }else{
            nis=false;
            break;
        }
    }
    if(nis){
        printf("YES");
    }else{
        printf("NO");
    }
}