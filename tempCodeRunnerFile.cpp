#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int count1=0,count2=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='x'){
                count1++;
            }
            else if (s[i]=='y'){
                count2++;
            }
        }

        if (count1<count2){
            cout<<count1<<endl;
        }
        else {
            cout<<count2<<endl;
        }
    }


    return 0;
}