#include"Header.h"
#include<iostream>
using namespace std;
class circle
{
public:
	/*circle(float r, float x, float y)
	{
		
	}*/
	void set_circle (float r,float x ,float y)
	{
		rad = r;
		x_cent = x;
		y_cent = y;
	}
	
	void set_treug(float a, float b, float c)
	{
		a_storona = a;
		b_storona = b;
		c_storona = c;
	}
	float s()
	{
		float p;
		p = (a_storona + c_storona + b_storona) / 2;
		float s=sqrt(p*(p- a_storona)*(p- b_storona)*(p- c_storona));
		return s;
	}
	bool triangle_around()
	{
		float p;
		p = (a_storona + c_storona + b_storona) / 2;
		float s = sqrt(p*(p - a_storona)*(p - b_storona)*(p - c_storona));
		float R;
		R = (a_storona*b_storona*c_storona) / 4 * s;
		return (rad == R);
	}
	bool triangle_in()
	{
		float p;
		p = (a_storona + c_storona + b_storona) / 2;
		float s = sqrt(p*(p - a_storona)*(p - b_storona)*(p - c_storona));
		float R;
		R = s / p;
		return (rad == R);
	}
	bool check_circle()
	{
		float l;
		l = sqrt((x_cent - x_cntr)*(x_cent - x_cntr) + (y_cent - y_cntr)*(y_cent - y_cntr));
		return (l < (R + rad));
	}
	void set_circle2(float r1, float x1, float y1)
	{
		R = r1;
		x_cntr = x1;
		y_cntr = y1;
	}
private:
	float R;
	float x_cntr;
	float y_cntr;
	float rad;
	float x_cent;
	float y_cent;
	float a_storona;
	float b_storona;
	float c_storona;
};
int main()
{
	circle mas[3];
	float rad;
	float x_cent;
	float y_cent;
	float R;
	float x_cntr;
	float y_cntr;
	float a_storona;
	float b_storona;
	float c_storona;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите значения rad и x,y для круга и a,b,c для треугольника "  << "через пробел" << endl;
		cin >> rad >> x_cent >> y_cent >> a_storona >> b_storona >> c_storona;
		mas[i].set_circle(rad, x_cent, y_cent);
		mas[i].set_treug(a_storona, b_storona, c_storona);
		
		if (!(mas[i].triangle_around()))
		{
			cout << "нельзя описать окружность вокруг этого трекгольника " << endl;
			
		}
		else
		{
			cout << "можно описать окружность в этот треугольник" << endl;
		}
		if (!(mas[i].triangle_in()))
		{
			cout << "нельзя вписать окружность в этот треугольник  " << endl;
			
		}
		else
		{
			cout << "можно вписать окружность в этот треугольник" << endl;
		}
		cout << "введите значение радиуса и х,у центра окружности через пробел " << endl;
		cin >> R >> x_cntr >> y_cntr;
		mas[i].set_circle2(R, x_cntr, y_cntr);
		if (!(mas[i].check_circle()))
		{
			cout << "не пересекаются" << endl;
		}
		else
		{
			cout << "пересекаются " << endl;
		}
	}
	setlocale(LC_ALL, "Russian");
	return 0;
}