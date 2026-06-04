class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;   // IMPORTANT FIX

        long long product = 1; // FIX overflow
        int start = 0, end = 0;
        int n = nums.size();
        int count = 0;

        while(end < n){

            product *= nums[end];

            while(product >= k && start <= end){

                product /= nums[start];
                start++;
            }

            count += (end - start) + 1;

            end++;
        }

        return count;
    }
};