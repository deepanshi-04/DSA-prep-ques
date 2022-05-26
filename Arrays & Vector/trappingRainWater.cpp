link to leetcode problem - https://leetcode.com/problems/trapping-rain-water/

    int trap(vector<int>& height) {
        
        int n=height.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        left[0]=height[0];
        right[n-1]=height[n-1];
        
        for(int i=1; i<n; i++){
            left[i]=max(left[i-1], height[i]);
            right[n-1-i]=max(right[n-i], height[n-i-1]);
        }
        
        int tot_water=0;
        
        for(int i=0; i<n; i++){
            tot_water+=min(left[i], right[i])-height[i];
        }
        return tot_water;
    
    }
