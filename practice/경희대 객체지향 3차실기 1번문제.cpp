#include <iostream>

using namespace std;

int getNumarray(void)
{
	int len;
	cin >> len;
	return len;
}

int * getElemArray(int iNum)
{
	int * arr;
	
	arr = new int[iNum + 1];
	
	for (int i = 0; i < iNum; i++)
	{
		cin >> arr[i];
	}
	
	return arr;
}

bool checkSymmetry(int * iArray, int iNum)
{
	for (int i = 0; i < iNum / 2; i++){
		if (iArray[i] == iArray[iNum - i - 1]) {
			cout << "��Ī �迭�Դϴ�." << endl;
			return true; break;
		}
		else {
			cout << "��Ī �迭�� �ƴմϴ�." << endl;
			return false; break;
		}
	}
}

void free_iArray(int * iArray) 
{
	delete[] iArray;
}

int main(void)
{
	int len;
	int * arr;
	len = getNumarray();
	arr = getElemArray(len);
	
	checkSymmetry(arr, len);

	free_iArray(arr);


}