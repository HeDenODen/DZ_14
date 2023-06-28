#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	//1	
	const int size = 100;
	int ar[size] = {};
	for (int i = 0; i < size; i++) {
		ar[i] = rand();
	}
	int min1 = ar[0], max1 = ar[0];
	for (int j = 0; j < size; j++) {
		if (ar[j] < min1)
			min1 = ar[j];
		if (ar[j] > max1)
			max1 = ar[j];
	}
	cout << "Min = " << min1 << "\nMax = " << max1 << "\n\n";


	//2
	int minNum1;
	cout << "Enter min random number: ";
	cin >> minNum1;
	int maxNum1;
	cout << "Enter max random namber: ";
	cin >> maxNum1;
	int pMin;
	cout << "Enter min number: ";
	cin >> pMin;
	const int size1 = 100;
	int nums[size1] = {};
	int sum = 0;
	for (int i = 0; i < size1; i++) {
		nums[i] = minNum1 + rand() % (maxNum1 - minNum1 + 1);
	}
	for (int j = 0; j < size1; j++) {
		if (nums[j] < pMin)
			sum += nums[j];
	}
	cout << "Sum = " << sum << "\n\n";
	

	//3
	const int size2 = 12;
	int months[size2] = {};
	int prise;
	for (int i = 0; i < size2; i++) {
		cout << "Enter prise for " << i+1 << " month: ";
		cin >> prise;
		months[i] = prise;
	}
	int mMin;
	cout << "Enter min month: ";
	cin >> mMin;
	int mMax;
	cout << "Enter max month: ";
	cin >> mMax;
	int minM = months[mMin - 1], minMonth = 0;
	int maxM = months[mMax - 1], maxMonth = 0;
	for (int j = mMin-1; j <= mMax-1; j++) {
		if (months[j] < minM) {
			minM = months[j];
			minMonth = j + 1;
		}
		if (months[j] > maxM) {
			maxM = months[j];
			maxMonth = j + 1;
		}
	}
	cout << "Min in " << minMonth << " month" << "\n";
	cout << "Max in " << maxMonth << " month" << "\n\n";
	

	//4
	const int size3 = 100;
	int numbers[size3] = {};
	int sumN = 0, sumP = 1;
	int minE;
	cout << "Enter min element: ";
	cin >> minE;
	int maxE;
	cout << "Enter max element: ";
	cin >> maxE;
	int multE = 1;
	for (int i = 0; i < size3; i++) {
		numbers[i] = -50 + rand() % 101;
	}
	for (int j = 0; j < size3; j++) {
		if (numbers[j] < 0) 
			sumN += numbers[j];
		if (j % 2 == 0)
			sumP *= numbers[j];
		if (j > minE && j < maxE)
			multE *= numbers[j];
	}
	int fNegative = 0;
	int lNegative = 0;
	int sumE = 0;
	for (int n = 0; n < size3; n++) {
		if (numbers[n] < 0) {
			fNegative = n;
			break;
		}
	}
	for (int m = size3-1; m >= 0; m--) {
		if (numbers[m] < 0) {
			lNegative = m;
			break;
		}
	}
	for (int k = fNegative; k < lNegative; k++) {
		sumE += numbers[k];
	}
	cout << "1. Sum = " << sumN << "\n";
	cout << "2. Product = " << multE << "\n";
	cout << "3. Product = " << sumP << "\n";
	cout << "4. Sum = " << sumE << "\n\n";
}
