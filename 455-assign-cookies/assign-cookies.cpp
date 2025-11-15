class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for(int i: g) cout<<i<<" ";
        cout<<endl;
        for(int i: s) cout<<i<<" ";

        int ans = 0;
        int n = g.size();
        int m = s.size();
        int i=0, j=0; 
        while(i < n && j < m){
            if(g[i] <= s[j]) {
                ans++;
                i++; j++;
            }
            else j++;
        }
        return ans;
    }
};