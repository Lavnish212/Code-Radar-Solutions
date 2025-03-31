#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int j=2*n-i-1;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<2*i;j++){
            printf("*");   
        }
        printf("\n");
    }
    for(int i=1;i<n;i++){
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int k=2*(n-i);k>1;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}