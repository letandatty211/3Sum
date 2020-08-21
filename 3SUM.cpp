#include<bits/stdc++.h>
using namespace std;
#define pb push_back

class Solution {
	public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> arr;
		sort(nums.begin(), nums.end());
		int n = nums.size();
		for (int i=0; i<n; i++) {
			if (i>0 && nums[i] == nums[i-1]) continue;
			for (int j=i+1; j<n; j++) {
				if (j!=i+1 && nums[j] == nums[j-1]) continue;
				for (int k=j+1; k<n; k++) {
					if (k!=j+1 && nums[k]==nums[k-1]) continue;
					int sum = nums[i]+nums[j]+nums[k];
					//cout << sum;
					if (sum == 0) {
						cout << nums[i] << " " << nums[j] << " " << nums[k];
						cout << "\n";
					}
				}
			}
		}
		return arr;
	}
};
int main () {
	Solution ans;
	vector<int> a = {0, 0, 0, 0};
	vector<vector<int> > res;
	res = ans.threeSum(a);
	return 0;
}
