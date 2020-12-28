#include <stdio.h>

int Fact(int n){
    if(n==0){
        return 1;

    }
    else
    {
        return n*Fact(n-1);
    }
    
}
int main(){
    int n=4;
    int RecFac=Fact(n);
    printf("%d",RecFac);
    return 0;
    



}