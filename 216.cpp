#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > combinationSum3(int k, int n, int b, int e)
{
    vector<vector<int> > res;

    switch (k) {
    case 1:
        if (n >= b && n <= e)
            res.push_back(vector<int>(n));
        break;
    case 2:
        if (n > 2 * b && n < 2 * e)
            for (auto i = b; i < (n + 1) / 2; ++i) {
                if (n - i <= e)
                    res.push_back(vector<int>{ i, n - i });
            }
        break;
    default:
        if (n > k * b && n < k * e)
            for (auto i = b; i < e; ++i) {
                cout << k - 1 << " " << n - i << " " << i + 1 << " " << e << endl;
                auto tmp = combinationSum3(k - 1, n - i, i + 1, e);
                for (const auto& t : tmp) {
                    vector<int> r1;
                    r1.push_back(i);
                    r1.insert(r1.end(), t.begin(), t.end());
                    res.push_back(r1);
                }
            }
        break;
    }
    return res;
}

vector<vector<int> > combinationSum3(int k, int n)
{
    return combinationSum3(k, n, 1, 9);
}

int main(int argc, char* argv[])
{
    auto res1 = combinationSum3(3, 7);

    for (const auto& v1 : res1) {
        cout << "[";
        for (const auto& v2 : v1) {
            cout << v2 << ",";
        }
        cout << "],";
    }
    cout << endl;
    auto res2 = combinationSum3(3, 9);
    for (const auto& v1 : res2) {
        cout << "[";
        for (const auto& v2 : v1) {
            cout << v2 << ",";
        }
        cout << "],";
    }
    cout << endl;
    auto res3 = combinationSum3(3, 15);
    for (const auto& v1 : res3) {
        cout << "[";
        for (const auto& v2 : v1) {
            cout << v2 << ",";
        }
        cout << "],";
    }
    cout << endl;
    auto res4 = combinationSum3(6, 30);
    for (const auto& v1 : res4) {
        cout << "[";
        for (const auto& v2 : v1) {
            cout << v2 << ",";
        }
        cout << "],";
    }

    return 0;
}
