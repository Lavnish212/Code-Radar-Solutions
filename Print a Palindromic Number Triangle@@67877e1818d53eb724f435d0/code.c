#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=n-i-1;k>=0;k--){
            printf(" ");
        }
        for(int j=1;j<2*i;j++){
            if(j<=i){
                printf("%d",j);
            }
            else{
                printf("%d",--j);
            }
        }
        printf("\n");
    }
}