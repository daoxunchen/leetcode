#include <cstdio>
#include <vector>

using namespace std;

vector<int>::iterator findval(vector<int>::iterator begin,
		vector<int>::iterator end, int val)
{
	if(end == begin) return end;
	if(1 == (end - begin)) {
		return val == (*begin) ? begin : end;

	}

	auto it = begin + (end - begin) / 2;
	if((*it) == val) return it;
	else if((*it) < val) {
		return findval(++it, end, val);

	} else {
		auto res = findval(begin, it, val);
		return it == res ? end : res;

	}

}

vector<int> twoSum(vector<int>& numbers, int target)
{
	vector<int> res;
	for( auto index1=numbers.begin(); index1!=numbers.end(); ++index1  ) {
		auto index2 = findval(index1+1, numbers.end(), target-(*index1));
		if(index2 != numbers.end()) {
			res.push_back(index1-numbers.begin()+1);
			res.push_back(index2-numbers.begin()+1);
			break;

		}
		while((*index1)==(*(index1+1))) ++index1;

	}
	return res;

}

int main(int argc, char *argv[])
{
	vector<int> input = {5,25,75};
	int target = 100;

	auto res = twoSum(input, target);

	for(auto i : res)
		printf("%d ", i);

	return 0;

}

