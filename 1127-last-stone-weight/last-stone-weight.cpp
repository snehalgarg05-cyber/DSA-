// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
//         priority_queue<int>p;
//         int n = stones.size();
//         for(int i=0;i<n;i++){
//             p.push(stones[i]);
//         }
//         while(p.size()>1){
//             int a= p.top();
//             p.pop();
//             int b = p.top();
//             p.pop();
//             if(a==b){
//                 continue;
//             }
//             else{
//                 p.push(abs(b-a));
//             }
//         }
//         if(!p.empty()){
//             return p.top();
//         }
//         return 0;
//     }
// };



class Solution {//mpre cleaner veesion of code
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p;
        int n = stones.size();
        for(int i=0;i<n;i++){
            p.push(stones[i]);
        }
        while(p.size()>1){
            int weight=p.top();
            p.pop();
            weight-=p.top();
            p.pop();
            if(weight)
            p.push(weight);
        }
        return p.empty()? 0: p.top();
    }
};




