import java.math.BigInteger;
​
class Solution {
    public String addBinary(String a, String b) {
        BigInteger bigIntegerA = new BigInteger(a,2);
        BigInteger bigIntegerB = new BigInteger(b,2);
        BigInteger bigIntegerSum = bigIntegerA.add(bigIntegerB);
        return bigIntegerSum.toString(2);
    }
}
