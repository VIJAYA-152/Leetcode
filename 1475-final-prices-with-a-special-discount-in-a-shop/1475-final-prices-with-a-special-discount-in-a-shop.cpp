class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>a;
        int n=prices.size();
        for(int i=0;i<n;i++){
            int num=prices[i];
            for(int j=i+1;j<n;j++){
                if(prices[i]>=prices[j]){
                num=prices[i]-prices[j];
                break;
            }
            }
            a.push_back(num);
            
        }
        return a;
            }
};