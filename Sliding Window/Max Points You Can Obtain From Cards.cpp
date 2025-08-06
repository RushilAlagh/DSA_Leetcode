class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0;
        int rsum = 0;
        int n = cardPoints.size();
        
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }

        int maxsum = lsum;

        for (int i = 1; i <= k; i++) {
            lsum -= cardPoints[k - i];         
            rsum += cardPoints[n - i];         
            maxsum = max(maxsum, lsum + rsum); 
        }

        return maxsum;
    }
};
