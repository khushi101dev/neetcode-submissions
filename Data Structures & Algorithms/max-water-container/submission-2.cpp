class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n -1 ;
        int ans = 0;

        while(left < right ){
            int length = min(heights[left] , heights[right]);
            int width = right - left ;
            int area = length * width ;
            ans = max(area, ans);

            heights[left]  < heights[right] ? left++ : right--;
        }
        return ans;
        
    }
};
