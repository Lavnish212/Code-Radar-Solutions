#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        // int a;
        scanf("%d ",&arr[i]);
    }
    bool main= true;
    for(int j =0;j<n;j++){

        for(int k=0;k<n;k++){
            if(j<=k){
                if(arr[j]<=arr[k]){
                    main;
                }else{
                   main =false ;
                   break;
                }
            }else{
                if(arr[j]>arr[k]){
                    main=false;
                    break;
                }
            }
        }
    }
    if(main){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}