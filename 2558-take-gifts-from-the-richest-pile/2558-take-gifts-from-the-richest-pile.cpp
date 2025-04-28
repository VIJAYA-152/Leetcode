class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       
        long long sum=0;
        while(k--){
           long long maxi=0;
            for(int i=0;i<gifts.size();i++){
                if(gifts[i]>gifts[maxi])
                maxi=i;
            }
            gifts[maxi]=sqrt(gifts[maxi]);
        }
        for(int i=0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;
    }
};