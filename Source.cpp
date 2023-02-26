#include "Header.h"
#include <iostream>

using namespace std;

int main() {
	Figure mas[8];

	float x1, x2, x3, x4, y1, y2, y3, y4;

	for (int i = 0; i < 3; i++) {
		cout << " кординаты 1 точки  " << i + 1 << "ввод через пробел " << endl;
		cin >> x1 >> y1;

		cout << "кординаты 2 точки" << i + 1 << " ввод через пробел" << endl;
		cin >> x2 >> y2;

		cout << "кординаты 3 точки " << i + 1 << "ввод через пробел " << endl;
		cin >> x3 >> y3;

		cout << "кординаты 4 точки " << i + 1 << "ввод через пробел " << endl;
		cin >> x4 >> y4;

		mas[i].figure(x1, x2, x3, x4, y1, y2, y3, y4);

	}

	for (int i = 0; i < 3; i++) {
		cout << " " << 1 << ": ";
		mas[i].show();

		cout << " " << mas[i].is_prug() << endl;
		cout << "" << mas[i].is_square() << endl;
		cout << " " << mas[i].is_romb() << endl;

		cout << " " << mas[i].is_out_circle() << endl;
		cout << " " << mas[i].is_in_circle() << endl;

	}

}