#include<stdio.h>
int main(){
    int n,test;
    scanf("%d",&test);
    for (int i=0;i<test;i++){
        scanf("%d",&n);
        if (n==6){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}