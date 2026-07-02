class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), start=0,end=0,zero_count=0;
        int maxLen=0;
        while(end<n){
            if(nums[end]==0){
                zero_count++;
            }
            
            if(zero_count<=k){
                maxLen=max(maxLen,end-start+1);
            }
            end++;
            while(zero_count>k){
                if(nums[start]==0){
                    zero_count--;
                    
                }
                start++;
            }
            
        }
        return maxLen;
        
    }
};