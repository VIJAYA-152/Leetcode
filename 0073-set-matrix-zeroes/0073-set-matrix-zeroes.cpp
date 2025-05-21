class Solution {
public:
    void markrow(vector<vector<int>>& matrix,int i){
        int m=matrix[0].size();
        //int n=matrix[0].size();
        for(int j=0;j<m;j++){
          if(matrix[i][j]!=0){
            matrix[i][j]='*';
          }
        }
    }
    void markcol(vector<vector<int>>& matrix,int j){
        //int m=matrix.size();
        int n=matrix.size();
        for(int i=0;i<n;i++){
          if(matrix[i][j]!=0){
            matrix[i][j]='*';
          }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                markrow(matrix,i);
                markcol(matrix,j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='*')
                matrix[i][j]=0;
            }
        }
    }
        
};
