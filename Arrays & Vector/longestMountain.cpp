link to leetcode problem - https://leetcode.com/problems/longest-mountain-in-array/

  int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int maxm=0;
        
        if(n<3)
            return 0;
        
        else{
            for(int i=1;i<n-1; ){
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    int count=1;
                    int j=i;
                    
                    //left mountain
                    while(j>=1 && arr[j]>arr[j-1]){
                        j--;
                        count++;
                    }
                    
                    //right mountain
                    while(i<=n-2 && arr[i]>arr[i+1]){
                        i++;
                        count++;
                    }
                    
                    maxm=max(maxm, count);
                }
                
                else
                    i++;
            }
        }
        return maxm;
    }
