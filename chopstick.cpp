#include<bits/stdc++.h>
using namespace std;

int calculate(int arr[],int n,int diff){
    int res=0;
    int i=0;
    while (i<n-1){
        if (((arr[i+1]-arr[i]))<=diff){
            res++;
            i+=1;
        }
        i++;

    }
    return res;
}


int main(){
    int n,ml;
    cin>>n>>ml;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<calculate(arr,n,ml)<<endl;


    return 0;
}