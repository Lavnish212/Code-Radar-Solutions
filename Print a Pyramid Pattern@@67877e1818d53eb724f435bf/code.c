#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            printf(" ");
        }
        for(int k=1;k<2*i;k=k+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}