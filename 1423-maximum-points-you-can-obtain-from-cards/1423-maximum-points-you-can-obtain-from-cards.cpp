class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=0,maxi=0;
        for(int i=0;i<k;i++){
            l+=cardPoints[i];}
            maxi=l;
            int rin=cardPoints.size()-1;
            for(int i=k-1;i>=0;i--){
                l-=cardPoints[i];
                r+=cardPoints[rin--];
               
                maxi=max(maxi,l+r);
            
        }
        return maxi;

    }
};