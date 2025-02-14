class Solution {
public:
    int maxArea(vector<int>& height) {
    //brute force
   // int h;
    //int w;
    //int area;
   // int maxi=INT_MIN;
    //for(int i=0;i<height.size();i++){
     //   for(int j=i+1;j<height.size();j++){
        //    w=j-i;
        //    h=min(height[i],height[j]);
        //    area=w*h;
        //    maxi=max(maxi,area);
       // }
   // }
   //    return maxi; 

        int left=0,right=height.size()-1;
        int w,h,maxi=INT_MIN,area;
        while(left<right){
            w=right-left;
            h=min(height[left],height[right]);
            area=w*h;
            maxi=max(maxi,area);
            height[left]<height[right]?left++:right--;

        }
       return maxi;

    }
};