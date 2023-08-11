#include<stdio.h>
void selectionsort(int arr[],int n){
    
    int indexMin;
    for (int i=0;i<n-1;i++){
        indexMin=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[indexMin]){
                indexMin=j;
            }
            if (indexMin!=1){
                int temp=arr[i];
                arr[i]=arr[indexMin];
                arr[indexMin]=temp;
            }
        }
    }
    

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

