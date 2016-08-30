#include <cstdio>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
	int zeroNum = 0;

	for(auto i=0; i!=nums.size(); ++i){
		if(nums[i] == 0){
			++zeroNum;
		}else{
			if(zeroNum)
				nums[i-zeroNum] = nums[i];
		}
	}

	auto it = nums.end();
	while(zeroNum--) *--it = 0;
}

int main(int argc, char *argv[])
{
	vector<int> input = {0, 1, 0, 3, 12};

	moveZeroes(input);

	for(auto i : input)
		printf("%d ", i);

	return 0;

}

