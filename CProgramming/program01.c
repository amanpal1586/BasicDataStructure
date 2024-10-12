#include <stdio.h>

int main(){
    int A, B, C;
    printf("enter the 3 number");
    scanf("%d%d%d",&A,&B,&C);
    if(A>B && A>C){
        printf("%d is the largest number",A);   
    }
    if(A<B &&  B>C){
        printf("%d is the largest  number",B);
    }
    else{
        printf("%d is the largest number",C);
    }
    return 0;
}