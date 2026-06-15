// class Solution { //brute force
// public:
//     int countKDifference(vector<int>& nums, int k) {
//         int count=0;
//         int n = nums.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(abs(nums[i]-nums[j])==k){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

class Solution { 
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int x : nums){
            count += mp[x-k];
            count += mp[x+k];
            mp[x]++;
        }
        return count;
    }
};