#include <iostream>
#include <vector>

using namespace std;

int minJumps(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return 0;

    int jumps = 0, maxReach = 0, currentEnd = 0;

    for (int i = 0; i < n - 1; i++) {
        maxReach = max(maxReach, i + nums[i]);
        
        if (i == currentEnd) {
            jumps++;
            currentEnd = maxReach;

            if (currentEnd >= n - 1) break;
        }
    }
    return jumps;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << minJumps(nums) << endl;
    return 0;
}