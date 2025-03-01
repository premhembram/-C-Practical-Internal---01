#include<stdio.h>
int main(){
    int arr[]={5,50,90,3,500};
    int min=arr[0];
    for(int i=0;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}