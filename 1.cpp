#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 1;
    int n = 100;
    for( i = 1;i<=n;i++){
        if(i%3 == 0 && i%5 == 0){
            cout<<"WowAmazing"<<endl;
            continue;
        }else if(i%3 == 0){
            cout<<"Wow"<<endl;
            continue;
        }
        else if(i%5 == 0){
            cout<<"Amazing"<<endl;

        }else{
            cout<<i<<endl;
        }
    }
    return 0;

}