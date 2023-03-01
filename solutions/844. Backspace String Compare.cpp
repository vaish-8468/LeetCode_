#include<bits/stdc++.h>
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        
        if(s=="" && t==""){
            return true;
            
        }
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(!st1.empty()){
                    st1.pop();
                    
                }
            }
            else
            st1.push(s[i]);
        }
        
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                if(!st2.empty()){
                    st2.pop();
                   
                }
            }
            else
            st2.push(t[i]);
        }
      
        while(!st1.empty() && !st2.empty()){
            if(st1.top()!=st2.top()){
              return false;
            }
            st1.pop();
            st2.pop();
        }
        if(!st1.empty() || !st2.empty()){
            return false;
        }
        return true;
    }
};
