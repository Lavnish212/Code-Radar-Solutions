#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int k=n-i-1;k>=0;k--){
            printf(" ");
        }
        for(int j=1;j<2*i;j++){
            if(j<=i){
                printf("%d",a);
                a++;
            }
            else{
                --a;
                printf("%d",a);
                a--;
            }
        }
        printf("\n");
    }
}