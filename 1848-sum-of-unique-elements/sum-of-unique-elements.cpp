class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int sum=0;
        for(auto&m:mp){
            if(m.second>1){
                continue;
            }
            else{
                sum+=m.first;
            }
        }
        return sum;
    }
};