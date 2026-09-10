/*public class D3Q2 {
    public int missingNumber(int[] arr) {
        long n = arr.length + 1;
        
        long expectedSum = n * (n + 1) / 2;
        
        long actualSum = 0;
        for (int num : arr) {
            actualSum += num;
        }
        
        return (int) (expectedSum - actualSum);
    }
} */

public class D3Q2{
    public int missingNumberXOR(int[] arr) {
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
}