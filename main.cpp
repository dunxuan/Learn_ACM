#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
	static int pivotIndex(vector<int> &nums)
	{
		int total = 0;
		for (int i = 0; i < nums.size(); i++) {
			total += nums[i];
		}
		int left = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (left == total - left) {
				return i;
			}
		}
		return -1;
	}
};

int main(void)
{
	vector<int> nums;

	int size = 0;
	scanf("%d", &size);
	for (int i = 0; i < size; ++i) {
		scanf("%d", nums.data() + i);
	}
	int output = 0;
	output = Solution::pivotIndex(nums);

	printf("%d", output);

	return 0;
}