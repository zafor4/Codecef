#include<bits/stdc++.h>
using namespace std;

long long calculate(long long a[],int n,long long b[],int m,long long h){
    long long count=0;
    long long min_indx=max(n,m);
    for (int i=0;i<min_indx;i++){
        if (i>=n || i>=m){
            continue;
        }
        count+=min(h*b[i],a[i]);
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        long long a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        long long b[m];
        for (int j=0;j<m;j++){
            cin>>b[j];
        }
        sort(b,b+m,greater<int>());
        cout<<calculate(a,n,b,m,h)<<endl;




    }
    

    return 0;
}