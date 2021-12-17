int sum (int a,int b)
{
	return a+ b;
}

// 需要传入指针
int sum2 (int *a,int *b)
{
	return *a + *b;
}
void main()
{
	int res = sum(1,2);
	printf("%d",res);
	int a = 1;
	int b = 2;
	res = sum2(&a,&b);
	printf("%d",res);
}