class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        int mini=INT_MAX;
        int ans=0;
        vector<int>p;
        vector<int>a{-1,-1};
        
        for(int i=max(left,2);i<=right;i++){
            bool isprime=true;
            for(int j=2;j*j<=i;++j){
                if(i%j==0){
                isprime=false;
                break;
                }
                
            }
            if(isprime==true)
                 p.push_back(i);
        }
         if (p.size() < 2) return {-1, -1};
        for(int i=0;i<p.size()-1;i++){
            int diff = p[i + 1] - p[i];
             if (diff < mini) {
                mini= diff;
                a={p[i], p[i + 1]};
            }
        }
        return a;
    }
};