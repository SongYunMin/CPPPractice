#include <iostream>

using namespace std;

class Time
{
private:
	int hh;
	int mm;
	int ss;
	int DataSecond;
public:
	Time(int HH,int MM,int SS)
		: hh(HH),mm(MM),ss(SS) { }

	int getSeconds(void) { return DataSecond; }

	void display1(void)
	{
		
	}
};

int main(void)
{
	int hh, mm, ss;

	cout << "시간 입력.(0~9input)" << endl;
	cin >> hh;
	if (hh > 9) { exit(0); }
	cin >> mm;
	cin >> ss;
	if (mm > 59 || ss > 59) { exit(0); }

	return 0;
}