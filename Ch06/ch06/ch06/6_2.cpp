// 0~ n �� 4���� ���� ��츦 ��� ����϶�.
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
// n ��ü ���Ҽ� , picked ���ݱ��� �� ���ҵ��� ��ȣ , toPick �� �� ���Ҽ�
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