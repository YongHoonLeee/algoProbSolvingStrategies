//1 ~ N ������ ���� ����ϴ� �ݺ��Լ��� ����Լ�.

int sum(int n) {
	int ret = 0;
	for (int i = 0; i < 10; i++)
		ret += i;

	return ret;
}

int recursiveSum(int n)
{
	if (n == 1) return 1; //���̻� �ɰ����� ������
	return n + recursiveSum(n - 1);
}
