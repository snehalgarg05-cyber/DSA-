class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int>p;
        for(int i=0;i<n;i++){
            p.push(nums[i]);
        }
        k=k-1;
        while(k--){
            p.pop();
        }
        return p.top();
    }
};