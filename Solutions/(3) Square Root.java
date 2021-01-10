/* 
UVA 10023 Square Root
Ben Sutherland
*/
import java.util.Scanner;
import java.math.BigInteger;

public class Main{

		/*
		 * Find the squareRoot of a BigInteger
		 * Perfom binary search on number from 1 to num - 1
		 * search for a number such that n*n = num, n is thus the squareRoot
		 */
        public static BigInteger squareRoot(BigInteger num){
            BigInteger start = BigInteger.ZERO;
            BigInteger end = num.subtract(BigInteger.ONE);
            BigInteger mid = null;

            while(start.compareTo(end) <= 0)
            {
                mid = start.add(end).divide(BigInteger.valueOf(2)); // get middle
                int compare = mid.multiply(mid).compareTo(num); // compare middle*middle to num
                if (compare == 0) break; // middle*middle = num, return middle
                if (compare > 0) end = mid.subtract((BigInteger.ONE)); // middle*middle > num, end is now mid
                else start = mid.add(BigInteger.ONE); // middle*middle < num, start is now mid

            }

            return mid; //return square root
        }
        public static void main(String[] args)
        {
            Scanner scan = new Scanner(System.in);
            int testCase = scan.nextInt();
            BigInteger in; // use big integer class to handle very large numbers

            for (int i = 0; i < testCase; i++)
            {
                if (i > 0) System.out.println();
                in = scan.nextBigInteger();
				// method does not work with 1, just print 1 */
                if (in.equals(BigInteger.valueOf(1))) System.out.println("1");
                else System.out.println(squareRoot(in)); // print the squareRoot of in
            }
        }

    }
