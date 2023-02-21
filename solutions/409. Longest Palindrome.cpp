class Solution {
public:
    int longestPalindrome(string s) {
          int Count = 0;
        unordered_map<char, int> mp;
        for(char ch : s) {
            mp[ch]++;
            if (mp[ch] % 2 == 1)
                Count++;
            else    
                Count--;
        }
        if (Count > 1)
            return s.length() - Count + 1;
        return s.length();
​
    }
};
