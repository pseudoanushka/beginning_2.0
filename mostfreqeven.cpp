class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency of only even numbers
        for (int x : nums) {
            if (x % 2 == 0) {
                freq[x]++;
            }
        }

        int maxCount = 0;
        int result = -1;

        // Find most frequent even number
        for (auto &[element, count] : freq) {
            if (count > maxCount || 
               (count == maxCount && element < result)) {
                maxCount = count;
                result = element;
            }
        }

        return result;
    }
};
