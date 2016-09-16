int findMin(vector<int>::iterator a, vector<int>::iterator b)
{
    if (b - a == 1)
        return *a;
    if (b - a == 2)
        return *a < *(a + 1) ? *a : *(a + 1);
    auto it = a + (b - a) / 2;
    if (*it < *(b - 1)) {
        return findMin(a, it + 1);

    } else {
        return findMin(it, b);
    }
}

int findMin(vector<int>& nums)
{
    return findMin(nums.begin(), nums.end());
}
