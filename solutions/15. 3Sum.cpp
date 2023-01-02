class Solution {
public:
   
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            
            int target=0-nums[i];
            int left=i+1;
            int right=n-1;
            vector<int> t;
            while(left<right)
            {
                if((nums[left]+nums[right])==target){
                    t.push_back(nums[i]);
                    t.push_back(nums[left]);
                    t.push_back(nums[right]);
                    break;
                }
                else if((nums[left]+nums[right])>target)
                    right--;
                else
                    left++;
            }
            if(!t.empty())
            v.push_back(t);
              
            }
            return v;
            
            }
        
        
    
};
