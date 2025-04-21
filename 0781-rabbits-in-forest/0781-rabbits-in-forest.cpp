class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int>mp;
        int c=0;
        for(auto it:answers){
            mp[it]++;
        }
        for(auto it:mp){
            int size=it.first+1;
            int t= (it.second + size- 1) /size; 
            c+= t* size;
        }
        return c;
    }
};