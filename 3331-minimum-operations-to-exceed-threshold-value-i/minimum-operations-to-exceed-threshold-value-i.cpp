class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
        int steps=0;
        while(pq.top()<k){
            pq.pop();
            steps++;
        }
        return steps;
    }
};