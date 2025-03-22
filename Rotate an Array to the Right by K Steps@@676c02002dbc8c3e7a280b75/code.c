#include<stdio.h>
int main(){
    int n,pos;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&pos);
    pos=pos%n;
     int arr2[n];
        for(int j=0;j<n;j++){
            arr2[(j+pos)%n]=arr[j];
        }
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}