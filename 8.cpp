// add 1 to the last element of the array and if it becomes 10 than flow the carry left side and repeat it and make new array

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,9,9,9};
    int carry = 1;
    for(int i = arr.size()-1;i>=0;i--){
        int x = arr[i]+carry;
        if(x == 10){
            arr[i] = 0;
            carry = 1;
        }else{
            arr[i] = x;
            carry = 0;
        }
    }

   vector<int> ans;
   if(carry == 1){
    ans.push_back(1);
   }
   for(auto it:arr){
    ans.push_back(it);
   }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
   }

    return 0;


}