class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> um;
        for (int i : bills) {
            if (i == 5)
                um[i]++;
            else if (i == 10) {
                if (um[5] > 0) {
                    um[i]++;
                    um[5]--;
                } else
                    return false;
            } else if (i == 20) {
                if (um[10] > 0 && um[5] > 0) {
                    // um[i]++;
                    um[10]--;
                    um[5]--;
                } 
                else if (um[5] > 2) {
                    // um[i]++;
                    // um[10]--;
                    um[5]--;
                    um[5]--;
                    um[5]--;
                } 
                else
                    return false;
            }
        }
        // for(auto i:um){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        return true;
    }
};