#include<stdio.h>
int main(){
    int test,n,a,count=0;
    scanf("%d",&test);
    for (int i=0;i<test;i++){
        scanf("%d",&n);
        for (int j=0;j<n;j++){
            scanf("%d",&a);
            if (a>=1000){
                count+=1;
            }
        }
        printf("%d\n",count);
        count=0;
    }

    return 0;
}