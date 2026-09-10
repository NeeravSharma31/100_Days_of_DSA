/**
 * Day: Day 03
 * Question: Missing Number in Array (LeetCode #268)
 * Approaches:
 *   1. Arithmetic Sum Formula: expectedSum - actualSum
 *   2. Bit Manipulation (XOR): cancels duplicate numbers
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
public class D3Q2 {
    // Approach 1: Sum Formula
    public static int missingNumberSum(int[] arr) {
        long n = arr.length + 1;
        long expectedSum = n * (n + 1) / 2;
        long actualSum = 0;
        for (int num : arr) {
            actualSum += num;
        }
        return (int) (expectedSum - actualSum);
    }

    // Approach 2: XOR Bit Manipulation
    public static int missingNumberXOR(int[] arr) {
        int xorSum = 0;
        int n = arr.length + 1;
        for (int i = 1; i <= n; i++) {
            xorSum ^= i;
        }
        for (int num : arr) {
            xorSum ^= num;
        }
        return xorSum;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 4, 5, 6}; // 1 to 6 with 3 missing
        System.out.println("Array: [1, 2, 4, 5, 6]");
        System.out.println("Missing Number (Sum approach): " + missingNumberSum(arr));
        System.out.println("Missing Number (XOR approach): " + missingNumberXOR(arr));
    }
}