#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Case1.���� ����� ����� � ��������� 1�7.������� ������ � �������� ��� ������, ��������������� ������� �����(1 � ������������, 2
	//� �������� � ��
	//int day;
	//cin >> day;
	//switch (day) {
	//	case 1: cout << "�����������" << endl; break;
	//    case 2: cout << "�������" << endl; break;
	//    case 3: cout << "�����" << endl; break;
	//    case 4: cout << "�������" << endl; break;
	//    case 5: cout << "�������" << endl; break;
	//    case 6: cout << "�������" << endl; break;
	//    case 7: cout << "�����������" << endl; break;
	//    default: cout << "��������� ����� ���" << endl;
 //   }
	//return 0;
	////Case2.���� ����� ����� K.������� ������ - �������� ������, ��������������� ����� K(1 � ������, 2 � ��������������������, 
	//	//3 � ������������������, 4 � �������, 5 � ��������).���� K �� ����� � ��������� 1�5,
	//	//�� ������� ������ �������.
	//int k;
	//cin >> k;
 //   switch (k) {
	//	case 1: cout << "�����" << endl; break;
	//    case 2: cout << "�������������������" << endl; break;
	//    case 3: cout << "�����������������" << endl; break;
	//   case 4: cout << "������" << endl; break;
	//   case 5: cout << "�������" << endl; break;
	//   default: cout << "������" << endl;
	//}
	//return 0;
	//Case4.��� ����� ������ � ����� ����� � ��������� 1�12(1 � ������, 2 � ������� � �.�.)
	/*int month;
	cin >> month;
	switch (month) {
		case 1: cout << "31" << endl; break;
	    case 2: cout << "28" << endl; break;
	    case 3: cout << "31" << endl; break;
	    case 4: cout << "30" << endl; break;
	    case 5: cout << "31" << endl; break;
	    case 6: cout << "30" << endl; break;
	    case 7: cout << "31" << endl; break;
	    case 8: cout << "31" << endl; break;
	    case 9: cout << "30" << endl; break;
	    case 10: cout << "31" << endl; break;
	    case 11: cout << "30" << endl; break;
	    case 12: cout << "31" << endl; break;
	default: cout << "������" << endl;
	}
	return 0;*/
	//������ 1
	int a;
	cin >> a;
	if (a == 0) {
		cout << "�����" << endl; 
    }
    else if (a < 0) {
		cout << "�������" << endl;
	}
	//������ 2
	int b;
	cin >> b;
	if (a > 0) {
		cout << "�����" << endl;
	}
    else if (a <= 0){
		cout << "�������"<< endl;
    }
	// ������ 3
	int a;
	cin >> a;
	if (a < 0) {
		cout << "�����" << endl;
	}
	else if (a > 0) {
		cout << "�������" << endl;
	}
	// ������ 4
	int a;
	cin >> a;
	if (a >= 0) {
		cout << "�����" << endl;
	}
	else if (a <= 0) {
		cout << "�������" << endl;
	}
	//������ 5
	int a;
	cin >> a;
	if (a <= 0) {
		cout << "�����" << endl;
	}
	else if (a >= 0) {
		cout << "�������" << endl;
	}
	//������ 6
	int a;
	cin >> a;
	if (a != 0) {
		cout << "�����" << endl;
	}
	else {
		cout << "�������" << endl;
	}
	//������ 9
	int test;
	cin >> test;
	if (test = true) {
		cout << "�����" << endl;
	}
	else {
		cout << "�������" << endl;
	}











	}



	


}