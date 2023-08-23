#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return func(n-1)+func(n-2);
}


//func(5)
//func(4) + func(3)
//func(3) + func(2)
//func(2) + func(1)
// 1 + 1
// func(3) = 2
//2+1
//func(4) = 3
// func(5) = func(4)
 

int main(){
    int t;cin>>t;
    while(t--){

    int n;cin>>n;
    int ans = func(n);
    cout<<ans<<endl;
    }

    
    return 0;
}


//1 1 2 3 5 8 13 21 ... 