#include <stdio.h>

int main(){
    int myArr[] = {1,22,35,41,52,66}, *ptr, i;
    ptr = &myArr[0];
    for ( i = 0; i < 6; i++)
    {
        printf("myArr[%d]=%d",i,myArr[i]);
        printf("\n");
        printf("adderess of ptr + %d = %d\n",i,*(++ptr));
        
    }
    
}