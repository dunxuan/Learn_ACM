#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
	int pivotIndex(vector<int> &nums)
	{
		int total = 0;
		for (int num : nums) {
			total += num;
		}
		int left = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (left == total - left - nums[i]) {
				return i;
			}
			left += nums[i];
		}
		return -1;
	}
};

int main()
{
	int size = 0;
	printf("Please input the size of the array: ");
	scanf("%d", &size);
	vector<int> nums(size);
	for (int i = 0; i < size; ++i) {
		scanf("%d", &nums[i]);
	}
	int output = Solution().pivotIndex(nums);

	printf("%d", output);

	return 0;
}