class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low, high = 0, 1
        profit = 0
        while(high < len(prices)):
            if(prices[low] < prices[high]):
                cur_profit = prices[high] - prices[low]
                profit = max(cur_profit, profit)
            else:
                low = high
            print(profit)
            high += 1

        return profit

        