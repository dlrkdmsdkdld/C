#include <iostream>
using namespace std;
void game(char a, char b) {
	if (a == b)
		cout << "비겼습니다." << endl;
	else if (a == 'r' && b == 's')
		cout << "a가 이겼습니다." << endl;
	else if (a == 'r' && b == 'p')
		cout << "b가 이겼습니다." << endl;
	else if (a == 's' && b == 'r')
		cout << "b가 이겼습니다." << endl;
	else if (a == 's' && b == 'p')
		cout << "a가 이겼습니다." << endl;
	else if (a == 'p' && b == 's')
		cout << "b가 이겼습니다." << endl;
	else if (a == 'p' && b == 'r')
		cout << "a가 이겼습니다." << endl;
}
int main()
{
	char a, b, c = 'y';
	while (c != 'n') {
		cout << "player a>> 가위 : s, 바위 : r, 보 : p\n";
		cin >> a;
		cout << "player b>> 가위 : s, 바위 : r, 보 : p\n";
		cin >> b;

		game(a, b);

		cout << "again? : y  or n " << endl;
		cin >> c;
	}
	return 0; 
}