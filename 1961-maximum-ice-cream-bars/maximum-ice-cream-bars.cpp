// class Solution {  //by sorting and not optimal
// public:
//     int maxIceCream(vector<int>& costs, int coins) {
//         int max_icreams=0;
//         sort(costs.begin(),costs.end());
//         int index=0;
//         for(int i=0;i<costs.size();i++){
//             if(coins<costs[i]){
//                 break;
//             }
//             else{
//                 coins-=costs[i];
//                 max_icreams++;
//             }
//         }
//         return max_icreams;
//     }
// };


// class Solution { //TC=O(NLOGN)
// public:
//     int maxIceCream(vector<int>& costs, int coins) {
//         int max_icreams=0;
//         priority_queue<int,vector<int>,greater<int>> pq(costs.begin(),costs.end());
//         for(int i=0;i<costs.size();i++){
//             if(coins<pq.top()){
//                 break;
//             }
//             else{
//                 coins-=pq.top();
//                 pq.pop();
//                 max_icreams++;
//             }
//         }
//         return max_icreams;
//     }
// };


class Solution { //TC=O(NLOGN)
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);

        for(int c : costs)
            freq[c]++;

        int ans = 0;

        for(int price = 1; price <= 100000; price++){
            while(freq[price] > 0 && coins >= price){
                coins -= price;
                freq[price]--;
                ans++;
            }
        }
        return ans;
    }
};



























