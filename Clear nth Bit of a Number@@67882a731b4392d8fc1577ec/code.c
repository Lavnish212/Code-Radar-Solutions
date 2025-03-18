#include<stdio.h>
int main(){
    int i,n,position,m;
    scanf("%d %d",&n,&position);
    m=n;
    int arr[32];
    i=0;
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    int sum=0;
    int multiple=1;
    int j=0;
   while(m>0){
        if(arr[j]!=0){
            if(j==0){
                sum+=multiple;
            }else{
            multiple=multiple+arr[j]*2;
            sum+=multiple;
            }
        }else{
            sum=sum+0;
        }
        m=m/2;
        j++;
    }
    printf("%d",sum);
    return 0;
}