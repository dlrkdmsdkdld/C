#include <iostream>
using namespace std;
void game(char a, char b) {
	if (a == b)
		cout << "�����ϴ�." << endl;
	else if (a == 'r' && b == 's')
		cout << "a�� �̰���ϴ�." << endl;
	else if (a == 'r' && b == 'p')
		cout << "b�� �̰���ϴ�." << endl;
	else if (a == 's' && b == 'r')
		cout << "b�� �̰���ϴ�." << endl;
	else if (a == 's' && b == 'p')
		cout << "a�� �̰���ϴ�." << endl;
	else if (a == 'p' && b == 's')
		cout << "b�� �̰���ϴ�." << endl;
	else if (a == 'p' && b == 'r')
		cout << "a�� �̰���ϴ�." << endl;
}
int main()
{
	char a, b, c = 'y';
	while (c != 'n') {
		cout << "player a>> ���� : s, ���� : r, �� : p\n";
		cin >> a;
		cout << "player b>> ���� : s, ���� : r, �� : p\n";
		cin >> b;

		game(a, b);

		cout << "again? : y  or n " << endl;
		cin >> c;
	}
	return 0; 
}