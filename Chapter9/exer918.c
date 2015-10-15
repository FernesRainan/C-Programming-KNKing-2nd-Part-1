//Exercise 18. Write a function gcd(m,n)//
//that calculates the greatest common divisor of the intergers//
//Call gcd recursively//

int gcd (int m, int n)
{
	if (n > m) {
		int t = m;
		m = n;
		n = t;
	}
	
	if (n == 0) return m;
	
	return gcd (n, m % n);
}

