class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        int m = operations.size();
        for(int i=0;i<m;i++){
            int l = operations[i][0];
            int r = operations[i][1];

            int idx = mp[l];

            nums[idx] = r;

            mp.erase(l);
            mp[r] = idx;
        }
        return nums;
    }
};