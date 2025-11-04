class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = INT_MIN;
        int l = 0, r = n-1;
        while(l<r){
            int h = min(height[l], height[r]);
            int w = r-l;
            ans = max(ans, h*w);
            height[l] < height[r] ? l++ : r--;
        }
        return ans;
    }
};