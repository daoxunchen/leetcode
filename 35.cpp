int searchInsert(vector<int>& nums, int target) {
	int i = 0;
	for (; i!=nums.size(); ++i){
		if(nums[i] >= target) break;

	}
	return i;

}
