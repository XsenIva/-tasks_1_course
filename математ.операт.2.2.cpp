#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  n; float s, a;
	cout << "������� n= ";
	cin >> n;
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			s += 1. / n;

		}
		cout << "s =" << s << endl;

	}
	else cout << " ������ ���������� ";
	return 0;

}