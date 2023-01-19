class Solution {
public:
   template <class T> static bool funComparator(T x1, T x2)
{ // return type is bool
    return x1[0] <= x2[0];
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        stack<vector<int>> st;
        sort(intervals.begin(),intervals.end(),funComparator<vector<int>>);
        st.push(intervals[0]);
        for(int i=0;i<intervals.size();i++){
            vector<int> top=st.top();
            if(top[1]<intervals[i][0]){
                st.push(intervals[i]);
            }
            else if(top[1]<intervals[i][1]){
                top[1]=intervals[i][1];
                st.pop();
                st.push(top);
                
            }
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        return v;
        
        
    }
};
