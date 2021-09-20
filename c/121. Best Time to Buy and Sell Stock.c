#define max(a, b) ((a>b)?a:b)

int maxProfit(int* prices, int pricesSize){
    int ans = 0, buy = prices[0], sell = 0;
    for (int i = 1; i < pricesSize; i++){
        if (buy < prices[i])  sell = max(sell, prices[i]);
        if (buy > prices[i]) {
            ans = max(ans, sell-buy);
            buy = prices[i];
            sell = 0;
        }
    }
    ans = max(ans, sell-buy);
    return ans;
}