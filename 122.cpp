int maxProfit(vector<int>& prices) {
	int sum=0, dif;
	for(int i=1; i<prices.size(); ++i){
		dif = prices[i] - prices[i-1];
		if(dif > 0) sum += dif;

	}
	return sum;

}
