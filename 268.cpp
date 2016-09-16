#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums)
{
    int res = 0;
    for (auto n : nums)
        res += n;
    int ori = (1 + nums.size()) * nums.size() / 2;
    return ori - res;
}

int main(int argc, char* argv[])
{
    vector<int> input = { 0, 1, 3 };
    cout << missingNumber(input) << endl;

    return 0;
}
