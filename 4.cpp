#include<bits/stdc++.h>
using namespace std;

int main(){
    int ok = 5;
    char notOk = 'D';
    int freq = 7;
    int spaces = 0;
    for(int i = 4;i>=0;i--){
        
        for(int i=0;i<freq;i++){
            cout<<notOk;
        }cout<<endl;freq--;
        for(int i = 0;i<freq;i++){
            cout<<ok;
        }cout<<endl;freq--;
        notOk -= 1;
        ok -= 1;


        for(int i=0;i<spaces;i++){
            cout<<" "; 
        }


        for(int i = 0;i<freq+1;i++){
            notOk -= 1;
            cout<<notOk;
        }cout<<endl;
        
        
    }

    return 0;
}

