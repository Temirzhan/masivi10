#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;
char f;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do {
		int N;
		cout << "Выберите задание для проверки" << endl;
		cin >> N;
		if (N == 1)
		{
			/*Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. Составить программу перевода этого числа в восьмеричную систему счисления.
			*/
			int dvoyka;
			cout << "Введите в двоичной системе счисления  число" << endl;
			cin >> dvoyka;
			int l = dvoyka;
			int zap;
			int vosmer = 0;
			int cof = 1;
			while ((dvoyka % 1000) != 0)
			{
				zap = dvoyka % 1000;
				dvoyka /= 1000;
				vosmer += (((zap / 100) * 4) + (((zap / 10) % 10) * 2) + (zap % 10))*cof;
				cof *= 10;

			}
			cout << "Число " << l << " из двочной системы в восмеричной = " << vosmer << endl;
		}
		else if (N == 2)
		{
			/*Ввести два массива действительных чисел, состоящих из 7 и  9 элементов. Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.
			*/
			int A[7], B[9];
			int tretiy[7 + 9];
			int temp;
			for (int i = 0; i < 9; i++)
			{
				if (i < 7)
				{
					A[i] = 1 + rand() % 100;
					cout << "A[" << i << "]=" << A[i];
				}
				B[i] = 1 + rand() % 100;
				cout << "\t B[" << i << "]=" << B[i] << endl;
			}
			for (int i = 0; i < 9; i++)
			{
				if (i < 7)
					tretiy[i] = A[i];
				tretiy[i + 7] = B[i];
			}
			for (int i = 0; i < 15; i++)
				for (int j = 15; j < i; j--)
				{
					if (tretiy[j - 1] > tretiy[j])
					{
						temp = tretiy[j - 1];
						tretiy[j - 1] = tretiy[j];
						tretiy[j] = temp;
					}
				}
			cout << "=======================================" << endl;
			cout << "Третий элемен" << endl;
			for (int i = 0; i < 16; i++)
			{
				cout << "T[" << i << "] " << tretiy[i] << endl;
			}
		}
		else if (N == 3)
		{
			/*Ввести массив, в котором только два одинаковых элемента. Определить их местоположение.
			*/
			int A[5] = { 11,15,17,22,33 },
				B[5] = { 22,27,12,144,2 };
			int flag = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j< 5; j++)
				{
					if (A[i] == B[j])
					{
						cout << "Найдено  повторение A[" << i << "] и B[" << j << "]" << "массивов =" << A[i] << endl;
						flag = 1;
						break;
					}
				}
			}
			if (flag = 0)
			{
				cout << "повторений не найдено" << endl;
			}
		}
		else if (N == 4)
		{
			/*Задан целочисленный массив. Определить, образуют ли значения его элементов геометрическую прогрессию. Если «да» – вывести знаменатель прогрессии, если «нет» – ответ «не образуют». */
			int A[8] = { 2,4,8,16,32,64,128,256 };
			int gem = A[1] / A[0];
			int i;
			for (i = 1; i < 7; i++)
			{
				if ((A[i + 1] / A[i]) != gem)
				{
					cout << "не образует" << endl;
					i--;
					break;
				}
			}
			if (i == 7)
				cout << "да знаменатель прогресии = " << gem << endl;
		}
		else if (N == 5)
		{
			/*Отсортировать по убыванию элементов последнего столбца целочисленный двухмерный массив 5×4
*/
			int A[5][4];
			int temp;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					A[i][j] = 1 + rand() % 1000;
					cout << "A[" << i << "][" << j << "]=" << A[i][j]<<"\t";
				}
				cout<< endl;
			}
			for(int i=0;i<3;i++)
				for (int j = 3; j > i; j--)
				{
					if (A[4][j - 1] < A[4][j])
					{
						temp = A[4][j - 1];
						A[4][j - 1] = A[4][j];
						A[4][j] = temp;
					}
				}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << "A[" << i << "][" << j << "]=" << A[i][j] << "\t";
				}
				cout << endl;
			}
		}
		else if (N == 6)
		{
			/*В матрице А(3-строки,4-столбца) поменять местами наименьшие элементы в первой и третей строке.
*/
			int A[3][4];
			int temp;
        for (int i = 0; i < 3; i++)
          { 
			for (int j = 0; j < 4; j++)
			{
				A[i][j] = 1 + rand() % 1000;
				cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
			}
			cout << endl;
           }
		for(int i=0;i<3;i++)
			for (int j =3; j > i; j--)
			{
				if (A[0][j - 1] > A[0][j])
				{
					temp = A[0][j - 1];
					A[0][j - 1]= A[0][j];
					A[0][j] = temp;
			    }
				if (A[2][j - 1] > A[2][j])
				{
					temp = A[2][j - 1];
					A[2][j - 1] = A[2][j];
					A[2][j] = temp;
				}

			}
		temp = A[0][0];
		A[0][0] = A[2][0];
		A[2][0] = temp;
		cout << "-----------------------------------" << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j]<<"\t";
			}
			cout << endl;
		}

		}
		else if (N == 7)
		{
			/*Дан двухмерный массив 5×6. Определить среднее арифметическое каждого столбца,  определить максимум и минимум каждой строки.
*/
			int A[5][6];
			int srednee=0;
			int max=0;
			int min = 5000;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					A[i][j] = 1 + rand() % 487;
					cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "------------------" << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					srednee += A[i][j];
					if (max < A[i][j])
						max = A[i][j];
					if (min > A[i][j])
						min = A[i][j];
				}
				cout << "Srednee arifmeticheskoe "<<i+1<<" строки = "<<srednee/6<<endl;
				cout << "Мин =" << min << endl;
				cout << "Макс=" << max << endl;
				srednee = 0;
				max = 0;
				min = 4000;
			} 

		}
		else if (N == 8)
		{
			/*Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве.
*/int A[5][6];
int kolchetl = 0;
int kolnechet=0;
			for (int i = 0; i < 5; i++)
           {
             	for (int j = 0; j < 6; j++)
	            {
	          	A[i][j] = 1 + rand() % 487;
		        cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
				if (((A[i][j]) % 2) == 0)
					kolchetl++;
				else
					kolnechet++;
	            }
				cout << endl;
                }
			cout << "Нечетных = " << kolchetl << endl;
			cout << "Четные= " << kolnechet << endl;	
		    }
		else if (N == 9)
		{
			/*Дан двухмерный массив n ×m элементов. Определить, сколько раз встречается число 7 среди элементов массива.
*/
			int A[4][5];
			int chet = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					A[i][j] = 1 + rand() % 10;
					cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
					if (A[i][j] == 7)
						chet++;
				}
				cout << endl;
			}
			cout << "количество 7 = " << chet << endl;
		}
		else if (N == 10)
		{
			/*Дан массив из n × m элементов. Найти индексы первого наименьшего  элемента массива*/
			int A[7][8];
			int chet = 0;
			int min = 4000;
			int index1;
			int index2;
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					A[i][j] = 1 + rand() % 1000;
					cout << "A[" << i << "]" << "[" << j << "]= " << A[i][j] << "\t";
					if (min > A[i][j])
					{
						min = A[i][j];
						index1 = i;
						index2 = j;
					}
				}
				cout << endl;
			}
			cout << "первый наименьший элемент A[" << index1 << "][" << index2 << "]= " << A[index1][index2] << endl;
		}
		cout << "Хотите продолжить" << endl;
		cout << "y-da   n-net" << endl;
		cin >> f;
	} while (f = 'y');
	system("cls");
}
