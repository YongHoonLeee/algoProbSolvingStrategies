#include<iostream>
#include<vector>
using namespace std; 
//�ʼ����� : A�� ������������ ���ĵǾ� �ִ�.
//���  : A[i-1] <x <=A[i]�� i �� ��ȯ�Ѵ�.
//�̶� A[-1] �� ���� ���Ѵ� , A[n]�� ���� ���Ѵ�� ����.
int binsearch(const vector<int>&A, int x) {
	int n = A.size();
	int lo = -1, hi = n;
	//�ݺ��� �Һ��� 1 : lo <hi
	//		 �Һ��� 2 : A[io] < x < A[hi]

	while (lo + 1 < hi)
	{
		int mid = (lo + hi) / 2;
		if (A[mid] < x)
			lo = mid;
		else
			hi = mid;
	}
	return hi;
}