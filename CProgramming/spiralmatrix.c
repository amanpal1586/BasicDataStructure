#include <stdio.h>

int main(){
    int A[5][5];
    int B[25];
    int cnt = 0;
    int M,N;
    int i,j;
    int top, bot, right, left;
    scanf("%d %d", &M, &N);
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&A[i][j]);
        }
    }
    top = 0;
    right = N-1;
    bot = M-1;
    left = 0;

    for(int cnt1 = 1; cnt1<=M/2 && cnt1<=N/2; cnt1++){

    for(i=left;i<=right;i++){
        B[cnt++] = A[top][i];
    }
    
    for(i=top+1;i<=bot;i++){
        B[cnt++] = A[i][right];
    }

    for(i=right-1;i>=left;i--){
        B[cnt++] = A[bot][i];
    }

    for(i=bot;i>=right;i--){
        B[cnt++] = A[i][left];
    }
    top++;left++;
    bot--;right--;

    }

    if(top==bot && left==right){
        B[cnt++] = A[top][left];
    }
    else if(top<bot){
        for(i=top;i<=bot;i++){
            B[cnt++] = A[i][left];
        }
    }
    else if(left<right){
        for(i=left;i<=right;i++){
            B[cnt++] = A[top][i];
        }
    }

    for(i=0;i<M*N-1;i++){
        printf("%d ", B[i]);
    }
    printf("%d", B[i]);

    return 0;

}