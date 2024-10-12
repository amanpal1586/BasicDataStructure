#include <stdio.h>

int fact(int n){
    int i,res;
    res = 1;
    for(i=1;i<=n;i++){
        res = res * i;
        }
        return res;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,fact(n));
    return 0;
    }