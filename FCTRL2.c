#include<stdio.h>
int main(){
    int test,num,fact=1;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        scanf("%d",&num);
        while(num>1){
            fact*=num;
            num=num-1;
        }
        printf("%d\n",fact);
        fact=1;
    }
    return 0;
}