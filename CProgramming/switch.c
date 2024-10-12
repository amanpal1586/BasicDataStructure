#include <stdio.h>

int main(){
    char  c;
    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c)
    {
    case 'R': case  'r': printf("red"); break;
    case 'G': case  'g': printf("green"); break;
    case 'B': case  'b': printf("blue"); break;
    default:printf("enter valid char");break;
        
    }
   return 0;
}