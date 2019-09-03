#include "iostream"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int* arr; //выделение памяти под динамический массив
	int size; //размер массива
	cout << "Введите размер массива\t";
	cin >> size;
	if (size <= 0)
	{
		cerr << "Неверный размер. Введите положительное число!/n";
		return 1;
	}
	arr = new int[size]; //объявление массива размером size
	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i << " элемент массива\t";
		cin >> arr[i];
	}
	int temp; //переменная для временного хранения значения одного элемента массива
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "\nОтсортированный массив:\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}