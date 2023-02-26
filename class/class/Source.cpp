#include<iostream>
#include"Header.h"
using namespace std;
class KaK
{
public:
	bool tr()
	{
		return ((a + b > c)&&(a + c > b)&&(c+ b > a));
	}
	void znach(double a1, double b1, double c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}
	void show()
	{
		cout << "1 storona:" << a << endl;
		cout << "2 storona:" << b << endl;
		cout << "3 storona:" << c << endl;
	}
	double per()
	{
		double p = a + c + b;
		
		return p;
	}
	double pl()
	{
		double p = (a + b + c) / 2;
		double s = sqrt(p*(p - a)*(p - c)*(p - b));
		
		return s;
	}
private:
	double a, b, c;
};
int main()
{
	KaK mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++)
	{
		cout << " vvedite znachenia storon treugolnika" << i + i << "cherez probel" << endl;
		cin >> a >> b >> c;
		mas[i].znach(a, b, c);
		if (!(mas[i].tr()))
		{
			mas[i].show();
			cout << "ti tupoy, davai po novoi" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		mas[i].show();
		cout << " ploshat" << mas[i].pl() << endl;
		cout << " pirimitr" << mas[i].per() << endl;
	}
	return 0;
}