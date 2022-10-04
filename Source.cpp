#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Case1.ƒано целое число в диапазоне 1Ц7.¬ывести строку Ч название дн€ недели, соответствующее данному числу(1 Ч Ђпонедельникї, 2
	//Ч Ђвторник и тд
	//int day;
	//cin >> day;
	//switch (day) {
	//	case 1: cout << "понедельник" << endl; break;
	//    case 2: cout << "вторник" << endl; break;
	//    case 3: cout << "среда" << endl; break;
	//    case 4: cout << "четверг" << endl; break;
	//    case 5: cout << "п€тница" << endl; break;
	//    case 6: cout << "суббота" << endl; break;
	//    case 7: cout << "воскресенье" << endl; break;
	//    default: cout << "ќшибочный номер дн€" << endl;
 //   }
	//return 0;
	////Case2.ƒано целое число K.¬ывести строку - описание оценки, соответствующей числу K(1 Ч Ђплохої, 2 Ч Ђнеудовлетворительної, 
	//	//3 Ч Ђудовлетворительної, 4 Ч Ђхорошої, 5 Ч Ђотличної).≈сли K не лежит в диапазоне 1Ц5,
	//	//то вывести строку Ђошибкаї.
	//int k;
	//cin >> k;
 //   switch (k) {
	//	case 1: cout << "плохо" << endl; break;
	//    case 2: cout << "неудовлетворительно" << endl; break;
	//    case 3: cout << "удовлетворительно" << endl; break;
	//   case 4: cout << "хорошо" << endl; break;
	//   case 5: cout << "отлично" << endl; break;
	//   default: cout << "ќшибка" << endl;
	//}
	//return 0;
	//Case4.ƒан номер мес€ца Ч целое число в диапазоне 1Ц12(1 Ч €нварь, 2 Ч февраль и т.д.)
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
	default: cout << "ќшибка" << endl;
	}
	return 0;*/
	//задача 1
	int a;
	cin >> a;
	if (a == 0) {
		cout << "верно" << endl; 
    }
    else if (a < 0) {
		cout << "неверно" << endl;
	}
	//задача 2
	int b;
	cin >> b;
	if (a > 0) {
		cout << "верно" << endl;
	}
    else if (a <= 0){
		cout << "неверно"<< endl;
    }
	// задача 3
	int a;
	cin >> a;
	if (a < 0) {
		cout << "верно" << endl;
	}
	else if (a > 0) {
		cout << "неверно" << endl;
	}
	// задача 4
	int a;
	cin >> a;
	if (a >= 0) {
		cout << "верно" << endl;
	}
	else if (a <= 0) {
		cout << "неверно" << endl;
	}
	//задача 5
	int a;
	cin >> a;
	if (a <= 0) {
		cout << "верно" << endl;
	}
	else if (a >= 0) {
		cout << "неверно" << endl;
	}
	//задача 6
	int a;
	cin >> a;
	if (a != 0) {
		cout << "верно" << endl;
	}
	else {
		cout << "неверно" << endl;
	}
	//задача 9
	int test;
	cin >> test;
	if (test = true) {
		cout << "верно" << endl;
	}
	else {
		cout << "неверно" << endl;
	}











	}



	


}