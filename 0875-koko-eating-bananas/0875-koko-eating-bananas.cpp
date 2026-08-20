class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {

            int speed = low + (high - low) / 2;

            long long hours = 0;

            // YOUR original calculation
            for (int pile : piles) {
                hours += (pile + speed - 1) / speed;
            }

            if (hours <= h) {
                // This speed works.
                // Try a smaller speed.
                high = speed - 1;
            }
            else {
                // This speed is too slow.
                // Need a bigger speed.
                low = speed + 1;
            }
        }

        return low;
    }
};