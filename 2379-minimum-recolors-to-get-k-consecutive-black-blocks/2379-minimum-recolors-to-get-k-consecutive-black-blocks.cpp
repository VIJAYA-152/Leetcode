class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini=INT_MAX;
        for(int i=0;i<=blocks.length()-k;i++){
            int count=0;
            for(int j=i;j<i+k;j++){
                if(blocks[j]=='B')
                count++;
            }
            mini=min(mini,k-count);
        }
        return mini;
    }
};