#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> m;
    string ans="";
    for(auto it:s){
        m[it]++;
    }
    for(auto it:s){
        if(m[it] > 1){
            continue;
        }
        else{
            ans += it;

        }
    }
    cout<<ans<<endl;


    return 0;
}