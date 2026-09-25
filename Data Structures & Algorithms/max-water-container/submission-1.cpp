class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();

        int i=0,j=n-1;
        int max_area=INT_MIN;
        while(i<j){
            int height= min(heights[i],heights[j]);
            max_area=max(max_area,(j-i)*height);
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }

        return max_area;
    }
};
