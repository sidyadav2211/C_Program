#include<stdio.h>

int binarysearch(int arr[],int l,int r,int s){
    if(l<=r){
        int m=l+r/2;
        if(arr[m]==s){
            return m;
        }
        if (arr[m]<s)
        {
            return binarysearch(arr,l+1,r,s);
        }
        else
        {
            return binarysearch(arr,l,r-1,s);
        }
        
    }
    return -1;
}
int main(){
    int arr[]={5, 6,7,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=10;
    int result=binarysearch(arr,0,n-1,s);
    printf("Index of array is %d:",result);

    return 0;
}