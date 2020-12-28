#include<stdio.h>

int Search(int arr[],int n, int x){
    int i;
    for (i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
        else
        {
            printf(" Not Correct answer ");
        }
               
    }
    return -1;
}   
int main(){
    int arr[]={20,30,40,50,60};
    int x=40;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d index of %d",x,Search(arr,n,x));
    return 0;
}