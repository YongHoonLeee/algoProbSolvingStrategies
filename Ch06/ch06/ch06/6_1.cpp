//1 ~ N 까지의 합을 계산하는 반복함수와 재귀함수.

int sum(int n) {
	int ret = 0;
	for (int i = 0; i < 10; i++)
		ret += i;

	return ret;
}

int recursiveSum(int n)
{
	if (n == 1) return 1; //더이상 쪼개지지 않을때
	return n + recursiveSum(n - 1);
}
