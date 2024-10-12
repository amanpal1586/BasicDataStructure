#include <stdio.h>
//digital root of a number
int main(){
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 9){
        sum = 0;
    while(num != 0){
        sum += num % 10;
        num =  num / 10;
    }
    num = sum;
}
printf("Digital root of the number is: %d", num);
}