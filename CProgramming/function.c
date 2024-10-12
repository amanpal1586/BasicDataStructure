#include <stdio.h>

int power(int base, int n){
    int p, i = 1;
    for(i=1;i<=n;i++){
        p = base * p;
    }
    return p;

}

void triaNum(int n){
    int i,triNum = 0;
    for(i=0;i<=n;++i){
        triNum = triNum + i;
    }
    printf("triangular number of %d is %d", n, triNum);
}

int main(){
    int x = power(2,4);
    printf("%d",x);
    triaNum(5);

    return 0;
}