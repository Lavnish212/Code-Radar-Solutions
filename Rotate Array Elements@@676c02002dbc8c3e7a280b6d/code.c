#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        arr[i]=m;
    }
    int a;
    scanf("%d",&a);
    int arr1[n];
    if(a>n){
        a=a%n;
    }
    for(int i=0;i<n;i++){
        arr1[(i+a)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    return 0;
}