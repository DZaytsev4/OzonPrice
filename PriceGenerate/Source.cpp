#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	bool program = true;
	int l;
	while (program == true) {
		double price, k, it_price, fee, pr, flag = 0;
		cout << "������� ���� �������������� �������: ";
		cin >> price;
		cout << "������� ���� �������� �� ��������� � �������������� �����: ";
		cin >> k;
		it_price = price * (k + 1) + 170;
		while (flag == 0) {
			fee = it_price / 100 * 18 + it_price / 100 * 1.5 + 25 + 70 + it_price / 100 * 5.5;
			pr = it_price - fee - price;
			if (pr / (price * k) < 1.1 && pr / (price * k) >= 1) flag = 1;
			else if (pr / (price * k) < 1) it_price += 1;
			else it_price -= 1;
		}
		cout << "*******************************" << endl;
		cout << "�������� ��������: " << fee << endl;
		cout << "���� �� ������� ����� ����������: " << it_price << endl;
		cout << "*******************************" << endl;
		cout << "������� ����������? 1 - �� 2 - ���: ";
		cin >> l;
		if (l == 2) program = false;
	}
	return 0;
}