#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

#define size8 8

void main()
{
Start:
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int zadanie;
	cout << "Введите номер задания: ";
	cin >> zadanie;
	switch (zadanie)
	{

	case 1:
	{
		system("cls");
		cout << "Задание 1" << endl;
		cout << "Создайте одномерный массив целого типа заданного размера M. Задайте значения элементов с помощью генератора случайных чисел. Распечатайте массив." << endl;
		const int M = 10;
		int a[M];
		for (int i = 0; i < M; i++)
		{
			a[i] = 1 + rand() % 100;
			cout << i + 1 << " = " << a[i] << endl;
		}
		goto Start;
		break;
	}
	case 2:
	{
		system("cls");
		cout << "Задание 2" << endl;
		cout << "Массив предназначен для хранения значений весов двадцати человек. С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно" << endl;
		int a[20];
		for (int i = 0; i < 20; i++)
		{
			a[i] = 50 + rand() % 51;
			cout << i + 1 << " = " << a[i] << endl;
		}
		goto Start;
		break;
	}
	case 3:
	{
		system("cls");
		cout << "3адание 3" << endl;
		cout << "Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали:  " << endl;
		cout << "a.Убывающую последовательность;" << endl;
		cout << "b.Возрастающую последовательность." << endl;
		int a[10];
		for (int i = 0; i < 10; i++)
		{
			a[i] = 1 + rand() % 100;
			cout << a[i] << " ";
		}
		int a1[10];
		for (int i = 0; i<10; i++)
		{
			a1[i] = a[i];
		}
		cout << endl << "a:" << endl;
		int tmp1, tmp2;
		for (int i = 0; i < 10; i++)          
		{                                     
			for (int j = 0; j < 10 - i; j++)    
			{                                 
				if (a1[j] < a1[j + 1])          
				{                             
					tmp1 = a1[j];             
					a1[j] = a1[j + 1];          
					a1[j + 1] = tmp1;           
				}                             
			}                                 
			cout << a1[i] << " ";             
		}
		cout << endl << "b:" << endl;
		int a2[10];
		for (int i = 0; i<10; i++)
		{
			a2[i] = a[i];
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 9; j >= 0; j--)
			{
				if (a2[j - 1] > a2[j])
				{
					tmp2 = a2[j - 1];
					a2[j - 1] = a2[j];
					a2[j] = tmp2;
				}
			}
			cout << a2[i] << " ";
		}
		cout << endl;
		goto Start;
		break;
	}
	case 4:
	{
		system("cls");
		cout << "Задание 4" << endl;
		cout << "Дан массив целых чисел. Выяснить:" << endl;
		cout << "a.Является ли s-й элемент массива положительным числом" << endl;
		cout << "b.Является ли k-й элемент массива четным числом" << endl;
		cout << "c.Какой элемент массива больше: k-й или s-й." << endl;
		int a[20];
		int k, s;
		for (int i = 0; i < 20; i++)
		{
			a[i] = -20 + rand() % 40;
			cout << i + 1 << " = " << a[i] << endl;
		}
		cout << "-----------------------------" << endl;
		cout << "s: ";
		cin >> s;
		if (s >= 0 && s <= 19)
		{
			if (a[s] > 0)
				cout << s << " является положительным" << endl;
			else if (a[s] < 0)
				cout << s << " является отрицательным" << endl;
		}
		cout << "k: ";
		cin >> k;
		if (k >= 0 && k <= 19)
		{
			if (a[k] % 2 == 0)
				cout << k << " является четным" << endl;
			else if (a[k] % 2 != 0)
				cout << k << " является нечетным" << endl;
		}
		if (a[k] > a[s])
			cout << k << " больше " << s << endl;
		else if (a[k] < a[s])
			cout << k << " меньше " << s << endl;
		goto Start;
		break;
	}
	case 5:
	{
		system("cls");
		cout << "Задание 5" << endl;
		cout << "Дан массив. Все его элементы:" << endl;
		cout << "a.Уменьшить на 20" << endl;
		cout << "b.Умножить на последний элемент" << endl;
		cout << "c.Увеличить на число B." << endl;
		srand(time(0));
		int a[10];
		for (int i = 0; i < 10; i++)
		{
			a[i] = 20 + rand() % 30;
			cout << a[i] << endl;
		}
		cout << "a)---------------------------" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << a[i] - 20 << endl;
		}
		cout << "b)---------------------------" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << a[i] * a[9] << endl;
		}
		cout << "c)---------------------------" << endl;
		int B;
		cin >> B;
		for (int i = 0; i < 10; i++)
		{
			cout << a[i] + B << endl;
		}
		goto Start;
		break;
	}
	break;
	}
}