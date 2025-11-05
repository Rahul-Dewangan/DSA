class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1 = -1, cnt1 = 0;
        int cand2 = -1, cnt2 = 0;
        int n = nums.size();
        for(int i: nums){
            if(i == cand1) cnt1++;
            else if(i == cand2) cnt2++;
            else if(cnt1 == 0) {
                cand1 = i;
                cnt1++; 
            }
            else if(cnt2 == 0) {
                cand2 = i;
                cnt2++; 
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int c1=0, c2=0;
        for(int i : nums){
            if(i == cand1) c1++;
            else if(i == cand2) c2++;
        }
        vector<int> ans;
        if(c1 > n/3) ans.push_back(cand1);
        if(c2 > n/3) ans.push_back(cand2);
        return ans;
    }
};