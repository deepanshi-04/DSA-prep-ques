link to leetcode problem - https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

class Solution {
    
public:
        bool outOfOrder(vector<int>&arr, int i){
        int x=arr[i];
        if(i==0)
            return x>arr[1]; 
        
    
    if(i==arr.size()-1)
        return x<arr[i-1];
        
     return (x>arr[i+1] || x<arr[i-1]);   
    }   

    
    int findUnsortedSubarray(vector<int>& arr) {
        
        if(arr.size()==1)
            return 0;
        
        int smallest=INT_MAX;
        int largest=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            int x=arr[i];
            
            if(outOfOrder(arr,i)){
                smallest=min(smallest,x);
                largest=max(largest,x);
            }
        }
        
        if(smallest==INT_MAX)
            return 0;
        
        int left=0;
        while(smallest>=arr[left])
            left++;
        
        int right=arr.size()-1;
        while(largest<=arr[right])
            right--;
        
        return right-left+1;
    }
};
