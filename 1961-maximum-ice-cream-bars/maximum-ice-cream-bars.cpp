class Solution {  //by sorting and not optimal
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max_icreams=0;
        sort(costs.begin(),costs.end());
        int index=0;
        for(int i=0;i<costs.size();i++){
            if(coins<costs[i]){
                break;
            }
            else{
                coins-=costs[i];
                max_icreams++;
            }
        }
        return max_icreams;
    }
};


// class Solution {
// public:
//     int maxIceCream(vector<int>& costs, int coins) {
//         int max_icreams=0;
        
//     }
// };

























