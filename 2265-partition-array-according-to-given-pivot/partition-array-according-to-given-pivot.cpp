class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        int n = nums.size();
        int pivot_count=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }
            if(nums[i]==pivot){
                pivot_count++;
            }
        }
        for(int i=0;i<pivot_count;i++){
            ans.push_back(pivot);
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};