//Exercise 18. Write a function gcd(m,n)//
//that calculates the greatest common divisor of the intergers//
//Call gcd recursively//

int gcd(int i, int j);

int gcd(int i, int j)
{
    int n;
			
    if (i > j){
        int t = i;
        i = j;
        j = t;
    }

		if (i == 0)
			return j;
		else {
        n = j % i;
        j = i;
        i = n;
    		gcd (i, j);
    }
}
