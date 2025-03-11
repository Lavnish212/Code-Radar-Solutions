#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int k=0;k<2*i;k=k+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}