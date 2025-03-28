#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++){
        if(i<=n){
        for(int j=2*n-i-1;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<2*i;j++){
            printf("*");   
        }

        }
        else{
            for(int j=1;j<i-n;j++){
                printf(" ");
            }
            for(j=n-(i-n);i>0;i--){
                printf("*");
            }

        }
        printf("\n");

    }
    return 0;
}