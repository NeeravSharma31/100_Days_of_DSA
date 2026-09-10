/**
 * Day: Day 02
 * Question: Best Time to Buy and Sell Stock (LeetCode #121)
 * Approach: One-pass tracking minimum price and maximum profit
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
public class D2Q2 {
    public static int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;
        
        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }
        }
        
        return maxProfit;
    }

    public static void main(String[] args) {
        int[] prices = {7, 1, 5, 3, 6, 4};
        System.out.println("Prices: [7, 1, 5, 3, 6, 4]");
        System.out.println("Maximum Profit: " + maxProfit(prices));
    }
}