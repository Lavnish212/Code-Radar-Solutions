#include<stdio.h>
int main(){
    int n,position;
    scanf("%d %d",&n,&position);
    int a=(n>>position)&1;
    printf("%d",a);
    return 0;
}