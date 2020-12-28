#include<stdio.h>
int main(){
    int a=2;
    int b=10;
    int c;
    for( int i=0;i<5;i++){
        if(a<b){
        c=a;
        a++;
        printf("%d",a);
    }
    else
    {
        printf("Went wrong");
    }
    printf("%d \n",c);
    }
    
    
    
    return 0;
}