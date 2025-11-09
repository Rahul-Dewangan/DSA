class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());

        int n = piles.size();
        int ans = 0;
        // cout<<lo<<" "<<hi;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            long long psum = 0;
            cout << "lo = " << lo << endl;
            cout << "hi = " << hi << endl;
            cout << "mid = " << mid << endl;
            for (int i : piles) {
                // cout<<i<<" "<<" "<<mid<<" "<<ceil((double)i/mid)<<endl;
                psum += ceil((double)i / mid);
            }
            cout << psum << " " << mid << endl;
            if (psum <= h) {
                ans = mid;    // possible answer
                hi = mid - 1; // try smaller speed
            } else {
                lo = mid + 1; // need faster speed
            }
        }
        return ans;
    }
};