class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0;
        int num2=0;
        vector<int>a,b;
        for(int i=1;i<=n;i++){
            if(i%m ==0)
            a.push_back(i);
            else
            b.push_back(i);
        }
        for(auto it:a){
            num1+=it;
        }
        for(auto it:b){
            num2+=it;
        }
        return num2-num1;
    }
};