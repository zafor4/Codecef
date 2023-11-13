#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int count1=0,count2=0;
        int size=n-k;
        if (size>k){
            for (int i=0;i<size;i++){
                count2+=arr[i];
            }
        }
        else {
            for (int i=0;i<k;i++){
                count2+=arr[i];
            }
        }
        for (int i=0;i<n;i++){
            count1+=arr[i];
        }
        cout<<count2-(count1-count2)<<endl;
        
    }
}