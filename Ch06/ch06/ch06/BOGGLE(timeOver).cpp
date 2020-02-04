// 5*5 ���ĺ� ���ڸ� ������ �ϴ� ����. 
//�����¿� /�밢������ ������ ĭ���� ���ڵ��� �̾ �ܾ ã�Ƴ��� ����.
//hasWord(y,x,word)==y,x���� �����ϴ� word �� ���翩�θ� ��ȯ. �Ϳ�.
#include<string>
#include<iostream>
using namespace std;
char board[5][5];
const int dx[8] = { -1,-1,-1,1,1,1,0,0 };
const int dy[8] = { -1,0,1,-1,0,1,-1,1 };
bool inRange(int y, int x) {
	if (y >= 0 && y < 5 && x >= 0 && x < 5)
		return true;
	else
		return false;
}
bool hasWord(int y, int x, const string& word)
{
	//base_case 1 
	if (!inRange(y, x)) return false;
	//base_case 2
	if (board[y][x] != word[0]) return false;
	if (word.size() == 1)
		return true;
	// search 8
	for (int direction = 0; direction < 8; ++direction)
	{
		int nextY = y + dy[direction];
		int nextX = x + dx[direction];
		if (hasWord(nextY, nextX, word.substr(1)))
			return true;
	}
	return false;
}
int main() {
	int test_case;
	cin >> test_case;
	for (int i = 0; i < test_case; i++)
	{
		char temp;
		for(int i=0;i<5;i++)
			for (int j = 0; j < 5; j++) {
				cin >> temp;
				board[i][j] = temp;
			}
		int n;
		cin >> n;
		int yesOrNo = 0;
		for (int i = 0; i < n; i++)
		{
			string tempstring;
			cin >> tempstring;
			for (int i = 0; i < 5; i++)
				for (int j = 0; j < 5; j++)
				{
					bool result;
					result = hasWord(i, j, tempstring);
					if (result == true) {
						yesOrNo++;
					}
				}
			if (yesOrNo != 0)
				cout << tempstring << " YES" << endl;
			else
				cout << tempstring << " NO" << endl;
			yesOrNo = 0;
		}
	}
	return 0;
}