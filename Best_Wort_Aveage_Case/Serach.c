#include<stdio.h>

int Search(int arr[],int size,int FindIndex){
    
    for(int i=0;i<size;i++){
        if(arr[i]==FindIndex)
        return i;
    }
    return -1;
}
int main(){
    int arr[10];
    int FindIndex;
    int size;
    printf("Enter your Number :");
    scanf("%d",&size);
    for (int i=0; i< size;i++){
        printf("Enter your Number List :");
        scanf("%d",&arr[i]);
    }
    printf("Enter your Secarching Number :");
    scanf("%d",&FindIndex);
    
    printf("%d Index of search element is %d",FindIndex,Search(arr,size,FindIndex));
    return 0;
}
