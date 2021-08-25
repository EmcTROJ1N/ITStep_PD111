#include <iostream>
#include <time.h>

using namespace std;

void func()
{
	cout << "end." << endl;
}

// ввод массива
void enter_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
}

int sum_array(int a[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += a[i];
	}
	return result;
}

// печать массива
void print_array(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// ввод массива
void enter_dyn_array2D(int** a, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			cin >> a[i][k];
		}
	}
}
// вывод массива
void print_dyn_array2D(int** a, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			cout << a[i][k] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

// ввод массива
void enter_array2D(int a[][4], int rows, int cols)
{
	for (int i = 0; i < rows; i++){
		for (int k = 0; k < cols; k++){
			cin >> a[i][k];
		}
	}
}
// вывод массива
void print_array2D(int a[][4], int rows, int cols)
{
	for (int i = 0; i < rows; i++){
		for (int k = 0; k < cols; k++){
			cout << a[i][k] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void shake_array2D(int a[][4], int rows, int cols)
{
	for (int i = 0; i < rows; i++){
		for (int k = 0; k < cols; k++){
			int x = rand() % cols;
			int y = rand() % rows;
			int temp = a[i][k];
			a[i][k] = a[y][x];
			a[y][x] = temp;
		}
	}
}

int stepen(int n, int p)
{
	int result = 1;
	for (int i = 0; i < p; i++)
	{
		result *= n;
	}
	return result;
}

int get_max(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	if (b >= a && b >= c)
		return b;
	return c;
}

int get_min(int a[], int size)
{
	if (size > 0)
	{
		int res = a[0];
		for (int i = 0; i < size; i++)
		{
			if (res > a[i])
				res = a[i];
		}
		return res;
	}
	return 0;
}

int calc_array(int* a, int size)
{
	int res = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 3 == 0 && a[i] % 5 == 0)
			res++;
	}
	return res;
}

void main()
{
	srand(time(0));

	// Написать функцию, которая принимает массив и его размер и возвращает минимальный элемент массива
	// int a[] = { 1, 2, 3, 4, -5 };
	// cout << get_min(a, 5) << endl;

	// Написать функцию, которая принимает 3 числа и возвращает максимальное из них
	/*cout << get_max(1, 2, 3) << endl;
	cout << get_max(3, 2, 1) << endl;
	cout << get_max(3, 2, 3) << endl;
	cout << get_max(-3, -2, -3) << endl;*/

	// Написать функцию, которая принимает число и степень, в которую его нужно возвести
	/*int n, p;
	cin >> n >> p;
	//cout << pow(n, p) << endl;
	cout << stepen(n, p) << endl;*/

	// Пользователь вводит 2-мерный массив 3х4 (3 строки и 4 столбца), программа находит элемент матрицы,
	// который одновременно является минимальным элементом в соответствующей строке матрицы и максимальным элементом в 
	// соответствующем столбце матриц

	// Пользователь вводит 2-мерный массив 3х4 (3 строки и 4 столбца), программа случайно перемешивает элементы
	// массива и выводит его на экран
	/*int a[3][4];
	enter_array2D(a, 3, 4);
	print_array2D(a, 3, 4);
	cout << endl;
	shake_array2D(a, 3, 4);
	print_array2D(a, 3, 4);*/

	// Пользователь вводит 2 - мерный массив 3х4(3 строки и 4 столбца), программа прибавляет к каждому отрицательному
	//	элементу случайное значение в диапазоне[1..9] и выводит массив на экран
	/*int a[3][4];
	enter_array2D(a, 3, 4);
	print_array2D(a, 3, 4);

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			if (a[i][k] < 0)
				a[i][k] += rand() % 9 + 1;
		}
	}

	print_array2D(a, 3, 4);*/

	//cout << "Hello" << endl;
	//func();

	/*const int size = 5;
	int arr[size];

	enter_array(arr, size);

	print_array(arr, size);

	int sum = sum_array(arr, size);
	cout << "Sum = " << sum << endl;

	cout << endl;

	const int size2 = 7;
	int arr2[size2];

	enter_array(arr2, size2);

	print_array(arr2, size2);

	sum = sum_array(arr2, size2);
	cout << "Sum = " << sum << endl;*/

	// получение адреса существующей переменной
	/*int a = 3;
	int* p = &a;
	cout << p << endl;
	cout << *p << endl;*/

	// создание новой динамической переменной на куче (heap)

	// выделение памяти для хранения числа типа int и помещение адреса ячейки в указатель
	/* int* p = new int;

	// поместить в ячейку по адресу через указатель значение 3
	*p = 3;

	// показать адрес ячейки
	cout << p << endl;

	// показать содержимое ячейки через указатель
	cout << *p << endl;

	// удалить ячейку из памяти
	delete p;*/

	// создание динамических массивов
	/*int size;
	cout << "Enter size of array: ";

	// получение размера массива
	cin >> size;

	// выделение памяти под массив
	int* p = new int[size];

	for (int i = 0; i < size; i++)
	{
		p[i] = rand() % 100;
	}

	print_array(p, size);

	// очистка памяти от массива
	delete[] p;*/

	// Пользователь вводит размер массива и сам массив, программа копирует во второй массив только нечётные элементы
	// первого

	// размер первого массива
	/*int size;
	cout << "Enter array size, please: ";
	cin >> size;
	// выделение памяти под первый массив
	int* a = new int[size];
	// ввод первого масива
	enter_array(a, size);
	// количество нечётных элементов массива (размер второго массива)
	int odd_size = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 1)
			odd_size++;
	}
	// выделение памяти под второй массив
	int* b = new int[odd_size];
	// копирование из первого массива во второй нечётных элементов
	for (int i = 0, k = 0; i < size; i++)
	{
		if (a[i] % 2 == 1)
		{
			b[k] = a[i];
			k++;
		}
	}
	print_array(b, odd_size);
	delete[] b;
	delete[] a;*/

	// Пользователь вводит размер массива и сам массив, программа копирует во второй массив только положительные
	// элементы первого массива, а отрицательные элементы копирует в третий массив.
	
	// размер первого массива
	/*int size;
	cout << "Enter array size, please: ";
	cin >> size;
	// выделение памяти под первый массив
	int* a = new int[size];
	// ввод первого масива
	enter_array(a, size);
	// количество положительных элементов массива (размер второго массива)
	int positive_size = 0;
	// количество положительных элементов массива (размер второго массива)
	int negative_size = 0;
	for (int i = 0; i < size; i++) {
		if (a[i]  < 0)
			negative_size++;
		if (a[i] > 0)
			positive_size++;
	}
	// выделение памяти под второй массив
	int* b = new int[positive_size];
	// выделение памяти под второй массив
	int* c = new int[negative_size];
	// копирование из первого массива во второй нечётных элементов
	for (int i = 0, k = 0, j = 0; i < size; i++) {
		if (a[i] < 0) {
			c[j] = a[i];
			j++;
		}
		if (a[i] > 0) {
			b[k] = a[i];
			k++;
		}
	}
	print_array(b, positive_size);
	cout << endl;
	print_array(c, negative_size);
	delete[] b;
	delete[] c;
	delete[] a;*/

	// функция принимает массив и его размер и возвращает количество элементов, которые делятся одновременно на
	// 3 на 2 и на 5
	/*int calc_array(int* a, int size);

	int a[] = { 1, 2, 6, 3, 4, 5, 30 };
	cout << calc_array(a, 7) << endl;*/

	// Пользователь вводит 2 - мерный массив 3х4(3 строки и 4 столбца), программа находит элемент матрицы,
	// который одновременно является минимальным элементом в соответствующей строке матрицы и максимальным элементом в
	// соответствующем столбце матриц
	
	/*const int cols = 4;
	const int rows = 3;
	int a[rows][cols] = { {2, 3, 5, 2}, {2, 4, 6, 2}, {-2, 7, 2, 0} };

	//enter_array2D(a, 3, 4);
	print_array2D(a, 3, 4);

	// перебор всех строк матрицы
	for (int i = 0; i < rows; i++) {
		// поиск минимального элемента в строке
		int min = a[i][0];
		for (int k = 0; k < cols; k++) {
			if (min > a[i][k])
				min = a[i][k];
		}
		// цикл для поиска седлового элемента
		for (int k = 0; k < cols; k++) {
			if (a[i][k] == min) {
				int max = a[0][k];
				for (int j = 0; j < rows; j++) {
					if (max < a[j][k])
						max = a[j][k];
				}
				if (min == max)
				{
					cout << "Sedlo: " << a[i][k] << ", row: " << i << ", col: " << k << endl;
				}
			}
		}
	}*/

	/*int rows, cols;
	cout << "Enter row count: ";
	cin >> rows;
	cout << "Enter cols count: ";
	cin >> cols;

	// объявление двумерного динамического массива
	int** a = new int* [rows];

	// выделение памяти под каждую строку двумерного динамического массива с числами
	for (int i = 0; i < rows; i++)
	{
		a[i] = new int[cols];
	}

	// ввод массива с клавиатуры
	enter_dyn_array2D(a, rows, cols);

	// вывод массива в консоль
	print_dyn_array2D(a, rows, cols);

	// удаление каждой строки массива
	for (int i = 0; i < rows; i++)
	{
		delete[] a[i];
	}

	// удаление двумерного массива
	delete[] a;*/

	// пользователь вводит размеры и сам двумерный динамический массив, программа подсчитывает количество положительных и
	// отрицательных элементов
	/*int rows, cols;
	cout << "Enter row count: ";
	cin >> rows;
	cout << "Enter cols count: ";
	cin >> cols;

	// объявление двумерного динамического массива
	int** a = new int* [rows];

	// выделение памяти под каждую строку двумерного динамического массива с числами
	for (int i = 0; i < rows; i++)
	{
		a[i] = new int[cols];
	}

	// ввод массива с клавиатуры
	enter_dyn_array2D(a, rows, cols);

	// вывод массива в консоль
	print_dyn_array2D(a, rows, cols);

	int negative = 0, positive = 0;

	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			if (a[i][k] < 0)
				negative++;
			if (a[i][k] > 0)
				positive++;
		}
	}

	cout << "Positives: " << positive << endl;
	cout << "Negatives: " << negative << endl;

	// удаление каждой строки массива
	for (int i = 0; i < rows; i++)
	{
		delete[] a[i];
	}

	// удаление двумерного массива
	delete[] a;*/

	// пользователь вводит размеры и сам двумерный динамический массив, программа копирует в одномерный динамический массив только нечётные элементы из
	// исходного массива
	int rows, cols;
	cout << "Enter row count: ";
	cin >> rows;
	cout << "Enter cols count: ";
	cin >> cols;

	// объявление двумерного динамического массива
	int** a = new int* [rows];

	// выделение памяти под каждую строку двумерного динамического массива с числами
	for (int i = 0; i < rows; i++)
	{
		a[i] = new int[cols];
	}

	// ввод массива с клавиатуры
	enter_dyn_array2D(a, rows, cols);

	// вывод массива в консоль
	print_dyn_array2D(a, rows, cols);

	// подсчёт нечётных элементов
	int odd_count = 0;

	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			if (a[i][k] % 2 == 1)
				odd_count++;
		}
	}

	// выделение памяти под результат
	int* result = new int[odd_count];

	// копирование нечётных элементов
	int n = 0;
	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			if (a[i][k] % 2 == 1)
			{
				result[n] = a[i][k];
				n++;
			}
		}
	}

	// вывод результата
	cout << "Results:" << endl;
	print_array(result, odd_count);

	delete[] result;

	// удаление каждой строки массива
	for (int i = 0; i < rows; i++)
	{
		delete[] a[i];
	}

	// удаление двумерного массива
	delete[] a;
}
