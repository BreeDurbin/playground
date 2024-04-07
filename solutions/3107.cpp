class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = 0;

        for(int i=0; i<=n/2; i++){
            ans += max(0, nums[i] - k);
        }
        for(int i=n/2; i < n; i++){
            ans += max(0, k - nums[i]);
        }
        
        return ans;
    }
};