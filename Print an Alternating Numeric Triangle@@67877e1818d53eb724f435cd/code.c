#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=0;
        for(int j=1;j<=i;j++){
            if(a==0){
                printf("1");
                a=1;
            }else{
                printf("0");
                a=0;
            }
        }
        printf("\n");
    }
}