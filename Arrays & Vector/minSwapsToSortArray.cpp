link to gfg problem - https://practice.geeksforgeeks.org/problems/minimum-swaps/1#

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int n=nums.size();
	    vector<pair<int,int>>v(n);
	    
	    for(int i=0;i<n;i++){
	        v[i].first=nums[i];
	        v[i].second=i;
	    }
	    
	    sort(v.begin(), v.end());
	    int count=0;
	    
	    for( int j=0;j<n;j++){
	        if(v[j].second==j)
	        continue;
	        
	        else{
	            count++;
	            swap(v[j], v[v[j].second]);
	            j--;
	        }
	    }
	    // Code here
	    return count;
	}
};
