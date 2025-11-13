class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s="";
        int n = strs.size();
        string s1 = strs[0];
        string s2 = strs[n-1];
        for(int i=0; i<min(s1.size(), s2.size()); i++){
            // cout<<s<<endl;
            if(s1[i] == s2[i]) s.push_back(s1[i]);
            else break;
        }
        return s;
    }
};