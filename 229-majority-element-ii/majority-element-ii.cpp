class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> um;
        for(int i: nums){
            um[i]++;
        }
        for(auto i: um){
            // cout<<i.first<<" "<<i.second<<endl;
            if(i.second > (nums.size()/3)){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};