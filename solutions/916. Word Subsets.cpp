#include<bits/stdc++.h>
class Solution {
public:
    
    bool checkstrings(string s1,string s2){
        int i=s1.length()-1;
        int j=s2.length()-1;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        for(int k=0;k<=i;k++){
            if(mp.find(s1[k])==mp.end()){
                mp[s1[k]]=1;
            }
            else{
                mp[s1[k]]++;
            }
        }
        for(int k=0;k<=j;k++){
            if(mp2.find(s2[k])==mp.end()){
                mp2[s2[k]]=1;
            }
            else{
                mp2[s2[k]]++;
            }
        }
        while( j>=0){
            int index=s1.find(s2[j]);
            if(index!=-1 && mp[s2[j]]==mp2[s2[j]]){
                
                j--;
            }
            else{
                break;
            }
        }
        if(j==-1){
            return true;
        }
        return false;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> v;
        for(int i=0;i<words1.size();i++){
