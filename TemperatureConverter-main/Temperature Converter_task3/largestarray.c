#include<stdio.h>
int main(){
    int arr[]={1,2,4,5,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        printf("Largest Element: %d\n",max);
    return 0;
    }

}