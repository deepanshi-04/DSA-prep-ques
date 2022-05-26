link to leetcode problem - https://leetcode.com/problems/longest-consecutive-sequence/  

int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x: nums){
            s.insert(x);
        }
        
        int maxm=0;
        for(int i=0;i<nums.size();i++){
            int prev=nums[i]-1;
            if(s.find(prev)==s.end()){ //prev is not present in the set
                int count=1;
                int curr=nums[i]+1;
                while(s.find(curr)!=s.end()){   //curr is present in the set
                    count++;
                    curr++;
                }
                maxm=max(maxm,count);
            }
        }
        return maxm;
    }
