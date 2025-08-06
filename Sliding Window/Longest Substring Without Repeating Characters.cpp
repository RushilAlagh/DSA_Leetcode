class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> mpp(256, -1);
        int left = 0, right = 0;
        int n = s.size();
        int len = 0;
        while (right < n) {
            if (mpp[s[right]] != -1)
            left = max(mpp[s[right]] + 1, left);  // makes sure we move left to the right of the last occurence and we use max to ensure left doesnt move backwards

            mpp[s[right]] = right;

            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};
