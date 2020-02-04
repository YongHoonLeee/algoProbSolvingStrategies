// 0~ n 중 4개를 고르는 경우를 모두 출력하라.
#include<iostream>
#include<vector>
using namespace std; 
void choose4(int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				for (int l = k + 1; l < n; l++)
					cout << i << " " << j << " " << k << " " << l << endl;
}
void printPicked(vector<int>& picked)
{
	for (auto iter : picked)
		cout << iter << " ";
	cout << endl;
}
// n 전체 원소수 , picked 지금까지 고른 원소들의 번호 , toPick 더 고를 원소수
void pick(int n, vector<int>&picked, int toPick)
{
	if (toPick == 0) {
		printPicked(picked);
		return;
	}
	int smallest = picked.empty() ? 0 : picked.back() + 1;

	for (int next = smallest; next < n; ++next) {
		picked.push_back(next);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}
int main()
{
	vector<int>v;
	choose4(7);
	cout << "-----------------" << endl;
	pick(7, v, 4);

	cout << v.size() << endl;

	getchar(); return 0; 
}