#include<iostream>
#include<vector>
using namespace std; 
//필수조건 : A는 오름차순으로 정렬되어 있다.
//결과  : A[i-1] <x <=A[i]인 i 를 반환한다.
//이때 A[-1] 은 음의 무한대 , A[n]은 양의 무한대로 가정.
int binsearch(const vector<int>&A, int x) {
	int n = A.size();
	int lo = -1, hi = n;
	//반복문 불변식 1 : lo <hi
	//		 불변식 2 : A[io] < x < A[hi]

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