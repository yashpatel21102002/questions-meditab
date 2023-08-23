#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"please enter the number"<<endl;
    int n;cin>>n;
    string ans = "";

    while(n > 0){
        
        int k = n%2;
        if(k == 0){
            ans += '0';
        }else if(k == 1){
            ans += '1';
        }
        n = n/2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;


    return 0;
    

}