#include<stdio.h>
int main(){
    int test,n,m;
    scanf("%d",&test);
    for (int i=0;i<test;i++){
        scanf("%d%d",&n,&m);
        if (n>=m){
            printf("%d\n",m);
        }
        else {
            printf("%d\n",n);
        }
    }
    return 0;
}