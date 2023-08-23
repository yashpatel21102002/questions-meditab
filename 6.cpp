//check valid parenthesis for the input string with parenthessis 
#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<"enter the string"<<endl;
    string s;
    cin>>s;
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        if(s[i] == ')' && st.top() == '('){
            st.pop();
            continue;
        }
        else if(s[i] == '}' && st.top() == '{'){
            st.pop();
        }
        else if(s[i] == ']' && st.top() == '['){
            st.pop();
        }
        else{
            st.push(s[i]);
        }

    }//loop ends

    if(st.size() == 0){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"notvalid"<<endl;
    }


    return 0;
}