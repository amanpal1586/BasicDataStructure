//reverse of a +ve number using the whileloop

#include <stdio.h>

int main(){
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        rev = rev * 10 + num % 10;
        num = num/10;
    }
    printf("%d is the reverse of number", rev);
    return 0;
}