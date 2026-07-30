class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0 , j=height.size()-1, max=0;
        while(i<=j){
            if(height[i]>height[j]){
                if((j-i)*height[j]>max){
                max=(j-i)*height[j];
                }
                j--;
            }
            else{
                if((j-i)*height[i]>max){
                max=(j-i)*height[i];
                }
                i++;
            }
        }
        return max;
    }
};