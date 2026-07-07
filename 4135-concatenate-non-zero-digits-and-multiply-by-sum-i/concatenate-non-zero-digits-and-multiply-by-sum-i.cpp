class Solution {
public:
    long long sumAndMultiply(int n) {
        long long result=0;
        int sum=0;
        while(n>0){
            int digit=n%10;
            if(digit==0){
                n/=10;
                continue;
            }
            sum+=digit;
            result=result*10+digit;
            n=n/10;
        }
        long long rev=0;
        while(result>0){
            int dig=result%10;
            rev=rev*10+dig;
            result=result/10;
        }
        long long ans= rev*sum;
        return ans;
    }
};