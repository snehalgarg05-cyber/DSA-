class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> pq(nums.begin(),nums.end());
        int steps=0;
        int n = nums.size();
        if(nums.size()<2){
            return 0;
        }
        while(pq.top()<k){
            long long first=pq.top();
            pq.pop();
            long long second=pq.top();
            pq.pop();
            pq.push(min(first,second)*2+max(first,second));
            steps++;
        }
        return steps;
    }
};