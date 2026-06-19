class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n-2;i++){
            int sum=0;
            sum+=nums[i]+nums[i+2];
            if((double)nums[i+1]/2==sum){
                count++;
            }
        }
        return count;
    }
};