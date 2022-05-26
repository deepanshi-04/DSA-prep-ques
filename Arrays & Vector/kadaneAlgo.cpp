link to leetcode problem - https://leetcode.com/problems/maximum-subarray/

   int maxSubArray(vector<int>& nums) {
         int curSum=0;
        int maxSum=nums[0];
        
        for(int i=0;i<nums.size();i++){
            curSum+=nums[i];
            maxSum=max(maxSum,curSum);
            
            if(curSum<0)
                curSum=0;
        }
        return maxSum;
    }
