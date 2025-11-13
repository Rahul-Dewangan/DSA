class Solution {
public:
    // int countFreq(string s) {
    //     int n = s.size();
    //     if (n == 1)
    //         return 0;

    //     vector<int> freq(26, 0);
    //     for(auto c: s){
    //         freq[c - 'a']++;
    //     }
    //     int maxF = 0;
    //     int minF = INT_MAX;

    //     for (int f : freq) {
    //         if (f > 0) {              // skip characters not in substring
    //             maxF = max(maxF, f);
    //             minF = min(minF, f);
    //         }
    //     }

    //     return maxF - minF;
    // }
    int beautySum(string s) {
        // int n = s.size();
        // vector<string> temp;

        // for (int i = 0; i < n; i++) {
        //     string res = ""; // use string
        //     for (int j = i; j < n; j++) {
        //         res.push_back(s[j]); // build substring
        //         if(res.size() > 1)
        //         temp.push_back(res);
        //     }
        // }

        // // print
        // int ans = 0;
        // for (auto t : temp) {
        //     ans += countFreq(t);
        // }

        // return ans;

        int n = s.size();
        int ans = 0;

        // iterate over all possible starting indices
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);

            // expand the substring ending at j
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int maxF = 0;
                int minF = INT_MAX;

                // find maxF and minF among non-zero frequencies
                for (int f : freq) {
                    if (f > 0) {
                        maxF = max(maxF, f);
                        minF = min(minF, f);
                    }
                }

                ans += (maxF - minF);
            }
        }

        return ans;
    }
};