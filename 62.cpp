#include <iostream>

using namespace std;

int uniquePaths(int m, int n)
{
    int min = m < n ? m : n;
    
	long res = 1;// use long
    for (auto i = 0; i < min - 1; ++i) {
        res *= m + n - 2 - i;
        res /= i + 1;
    }
    return res;
}

int main(int argc, char* argv[])
{
    //cout << uniquePaths(3, 7) << endl;
    cout << uniquePaths(51, 9) << endl;
    return 0;
}
