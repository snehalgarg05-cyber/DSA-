// class Solution {  //brute force accepted
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             long long product=1;
//             for(int j=i;j<n;j++){
//                 product*=nums[j];
//                 if(product<k){
//                     count++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
        int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k <= 1) return 0;

        int start = 0;
        long long product = 1;
        int count = 0;

        for(int end = 0; end < nums.size(); end++) {

            product *= nums[end];

            while(product >= k) {
                product /= nums[start];
                start++;
            }

            count += (end - start + 1);
        }

        return count;
    }
};






















