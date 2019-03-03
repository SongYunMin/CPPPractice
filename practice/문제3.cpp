//#include <iostream>
//
//using namespace std;
//
//void GetData(int &val1, int &val2, int &val3)
//{
//	cin >> val1;
//	cin >> val2;
//	cin >> val3;
//}
//
//void calcAvgNVar(int &val1, int &val2, int &val3, float &avg, float &var)
//{
//	avg = (val1 + val2 + val3) / 3;
//	var = ((float)(val1*val1) + (val2*val2) + (val3*val3)) / 3 - avg * avg;
//}
//
//int main(void)
//{
//	int val1;
//	int val2;
//	int val3;
//	float avg=0;
//	float var=0;
//
//	GetData(val1, val2, val3);
//	calcAvgNVar(val1, val2, val3, avg, var);
//
//	cout << "avg : " << avg << endl;
//	cout << "var : " << var << endl;
//
//	return 0;
//}