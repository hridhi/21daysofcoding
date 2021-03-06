/*Given two positive integers M and N, after adding M and N if number of digits in M+N and N are same return N otherwise return M+N.*/
int digits_count(int);

int main() {
	//code
	int test_cases, m, n, sum, i, n_digits, sum_digits;
	scanf("%d", &test_cases);
	for(i = 0; i < test_cases; i++)
	{
	    scanf("%d", &m);
	    scanf("%d", &n);
	    sum = m + n;
	    n_digits = digits_count(n);
	    sum_digits = digits_count(sum);
	    if(sum_digits > n_digits)
	    {
	        printf("%d\n", sum);
	    }
	    else
	    {
	        printf("%d\n", n);
	    }
	}
	
	return 0;
}

int digits_count(int num)
{
    int count = 0;
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}