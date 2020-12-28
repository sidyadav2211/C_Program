#include <stdio.h>

int swap(int * a,int *b){
    int t=*a;
    *a=*b;
    *b=t;

}
int partitions(int arr[],int l,int n){
    int pivot=arr[n];
    int i=l-1;
    

    for(int j=0; j<=n-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[n]);
    return(i+1);
    
}

int quickSort(int arr[],int l,int n){
    if(l<n){
         int pi=partitions(arr,l,n);
         quickSort(arr,l,pi-1);
         quickSort(arr,pi+1,n);
    }
}
int main(){
    int arr[]={ 10,2,5,12,20,30};
    int n=6;
    int l=0;
    quickSort(arr,l,n-1);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}