class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>a;
        int sum=0;
        map<int,int>mp;
        int n=grid.size();
        int n1=n*n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;

            }
        }
        for(auto it:mp){
            if(it.second==2) a.push_back(it.first);
            sum+=it.first;
            
        }
       int ans1=(n1*(n1+1))/2;
       a.push_back(ans1-sum);
       return a;


    }
};