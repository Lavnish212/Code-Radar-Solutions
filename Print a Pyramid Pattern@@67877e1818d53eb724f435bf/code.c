#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf(" ");
        }
        for(int k=0;k<2*n;k=k+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}