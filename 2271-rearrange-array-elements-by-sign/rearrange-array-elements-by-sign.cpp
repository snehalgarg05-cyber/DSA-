// class Solution {//SC(O(n))
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> positive,negative;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]>0){
//                 positive.push_back(nums[i]);
//             }
//             else{
//                 negative.push_back(nums[i]);
//             }
//         }
//         int start1=0,start2=0;
//         int m = positive.size();
//         vector<int> result;
//         for(int i=0;i<m;i++){
//             result.push_back(positive[i]);
//             result.push_back(negative[i]);
//         }
//         return result;
//     }
// };


class Solution { //sc:-O(1)
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive,negative;
        int n = nums.size();

        vector<int> ans(n);

        int pos = 0;
        int neg = 1;

        for(int x : nums){
            if(x > 0){
                ans[pos] = x;
                pos += 2;
            }
            else{
                ans[neg] = x;
                neg += 2;
            }
        }

        return ans;
    }
};