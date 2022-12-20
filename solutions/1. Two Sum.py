class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lis=[]
        for i in range(len(nums)):
            check=0
           
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    check=1
                    lis.append(i)
                    lis.append(j)
                    break
            if check!=0:
                break
        return lis 
        
