//Write the following function: //
//double inner_product (double a[], double b[], int n);//
// a[0]*b[0] + a[1]*b[1] + ... + a[n-1] * b[n-1] //

double inner_product (double a[], double b[], int n)
{
	double total;
	int i;
	
	for (i = 0; i < n; i++)
		total += a[i] * b [i];
	
	return total;
}
