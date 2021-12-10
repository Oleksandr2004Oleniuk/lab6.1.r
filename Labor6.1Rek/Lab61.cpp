// < Оленюк Олександр >
// Лабораторна робота 6.1
// рекурсивний спосіб
// Варіант 8


using namespace std;
#include <iostream>
#include <iomanip>

#include <cmath>
#include <math.h>
void CreateArray(int* b, const int size, const int low, const int high, int i) {
	b[i] = low + rand() % (high - low + 1);
	if (i < size - 1) {
		CreateArray(b, size, low, high, i + 1);
	}
}


void PrintArray(int* b, const int size, int i) {

	cout << setw(4) << b[i];
	if (i < size - 1) {
		PrintArray(b, size, i + 1);
	}
	else {
		cout << endl;
	}


}
int Count(int* b, const int size, int i, int coun) {
	if (b[i] % 2 == 0 && b[i] < 0) {
		coun++;
	}
	if (i < size - 1)
		return Count(b, size, i + 1, coun);
	else
		return coun;
}
int Sum(int* b, const int size, int i, int s) {
	if (b[i] % 2 == 0 && b[i] < 0)
		s += b[i];
	if (i < size - 1)
		return Sum(b, size, i + 1, s);
	else
		return s;

}

void Replace(int* b, const int size, int i) {
	if (b[i] % 2 == 0 && b[i] < 0)
		b[i] = 0;
	if (i < size - 1)
		Replace(b, size, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));
	const int  a = 24;
	int b[a];
	int low = -15;
	int high = 75;

	cout << "Array: ";
	CreateArray(b, a, low, high, 0);
	PrintArray(b, a, 0);

	cout << "Numerosity " << Count(b, a, 0, 0) << endl;
	cout << "Sum " << Sum(b, a, 0, 0) << endl;

	Replace(b, a, 0);
	PrintArray(b, a, 0);
	return 0;
}

