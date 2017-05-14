import java.io.*;
import java.util.*;
import java.math.*;

/*
https://www.hackerrank.com/challenges/fibonacci-modified
*/

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t1 = sc.nextInt();
        int t2 = sc.nextInt();
        int n = sc.nextInt();
        BigInteger[] bi = new BigInteger[n+1];
        
        bi[1] = BigInteger.valueOf(t1);
        bi[2] = BigInteger.valueOf(t2);
        for (int i=3;i<=n;i++){
            bi[i] = bi[i-2].add(bi[i-1].multiply(bi[i-1]));
        }
        System.out.println(bi[n]);
    }
}