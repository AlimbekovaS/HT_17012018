#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <iomanip>
using namespace std;
short int nz;

void rand(int a[][5], const int row, const int col);

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, ".1251");
	while (true)
	{

		cout << "\nВведите номер задания ";
		cin >> nz;
		if (nz == 0)
		{
			break;
		}
		if (nz == 1)
		{
			//1.	Дан целочисленный квадратный массив 10×10. Найти сумму элементов  каждой строки.
			const int row = 10, col = 10;
			int a[row][col], sum=0;
			for (int i = 0;i < 10;i++) 
			{
				sum = 0;
				for (int j = 0;j < 10;j++)
				{
					a[i][j] = rand() % 50;
					cout << a[i][j] << " ";
					sum += a[i][j];
				}
				
				cout << "\t sum= " << sum << endl;
			}
		}
		if (nz == 2)
		{
			//2.	Дан целочисленный квадратный массив 4×4. Найти строку с наименьшей суммой элементов
			int a[4][4], sum[4] = {};
			for (int i = 0;i < 4;i++)
			{
				for (int j = 0;j < 4;j++)
				{
					a[i][j] = rand() % 50;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
		
			for (int i = 0;i < 4;i++)
			{
				for (int j = 0;j < 4;j++)
				{
					sum[i] +=a[i][j];
				}
			}
			for (int i = 0;i < 4;i++)
			{
				cout <<i+1<<" строка " <<sum[i] << endl;
			}
			int min = 0;
			for (int i = 1;i < 4;i++)
			{
				if (sum[i] < sum[min])
					min = i;
			}
			cout << "строкa с наименьшей суммой элементов= " << min+1<<endl;

		}
		if (nz == 3)
		{
			//3.	Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.
			const int row = 6, col = 8;
			int a[row][col], pr = 1;
			for (int i = 0;i < row;i++)
			{
				for (int j = 0;j < col;j++)
				{
					a[i][j] = rand() % 50-25;
					cout << setw(4)<< a[i][j] << " ";
				}
				cout <<endl;
			}
			for (int i = 0;i < row;i++)
			{
				for (int j = 0;j < 1;j++)
				{
					if(a[i][j]>0)
					pr *= a[i][j];
				}
			}
			cout << "произведение положительных элементов первого столбца " << pr<<endl;
		}
		if (nz == 4)
		{
			//4.	Составить программу, которая заполняет квадратную матрицу порядка n натуральными числами 1, 2, 3, .. ., n2, записывая их в нее "по спирали" по часовой стрелке.

		}
		if (nz == 5)
		{
			//5.	Дан двухмерный целочисленный массив A(M,N). Составить  одномерный массив B из номеров строк этого массива
			const int row = 6, col = 8;
			int A[row][col];
			int B[row] = {};
			for (int i = 0;i < row;i++) {
				for (int j = 0;j < col;j++)
				{
					A[i][j] = rand() % 50 - 25;
					cout << setw(4) << A[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0;i < row;i++) {
				B[i] = i;
			}

			for (int i = 0;i < row;i++) {
				cout<<B[i]<<" ";
			}
			cout << endl;
		}
		if (nz == 6)
		{
			//6.Написать программу, которая в матрице чисел A(N,M) находит все элементы, превышающие по абсолютной величине заданное число B. Подсчитать число таких элементов и записать их в массив C. 
			const int row = 5, col = 5;
			int A[row][col], B, count = 0, C[25], shet = 0;
			rand(A, row, col);
			cout << "Введите число В= ";
			cin >> B;
			for (int i = 0;i < row;i++)
			{
				for (int j = 0;j < col;j++)
				{
					if (A[i][j] > B)
					{
						count += 1;
						C[shet] = A[i][j];
						shet++;
					}
				}
			}
			cout << "число элементов превышающие по абсолютной величине заданное число B= " << count << endl;

			for (int i = 0;i < count;i++)
			{
				cout << C[i] << " ";
			}
		}
		if (nz == 7)
		{
			//7.	Дана целочисленная матрица размера 8х5. Определить: 
			/*a.сумму всех элементов второго столбца массива;
			b.сумму всех элементов 3 - й строки массива.*/
			int mat[8][5], sum2 = 0, sum3 = 0;
			for (int i = 0;i < 8;i++)
			{
				for (int j = 0;j < 5;j++)
				{
					mat[i][j] = rand() % 100;
					cout <<setw(4)<< mat[i][j];
				}
				cout << endl;
			}
			for (int i = 0;i < 8;i++)
			{
				for (int j = 1;j < 2;j++)
				{
					sum2 += mat[i][j];
				}
			}
			for (int i = 2;i < 3;i++)
			{
				for (int j = 0;j < 5;j++)
				{
					sum3 += mat[i][j];
				}
			}
			cout << "суммa всех элементов второго столбца массива= " << sum2
				<< "\nсуммa всех элементов 3 - й строки массива= " << sum3;
		}
		else if (nz == 8)
		{
			//8.Дана целочисленная прямоугольная матрица размера M·N. Сформировать одномерный массив, состоящий из элементов, лежащих в интервале [1,10]. Найти произведение елементов полученного одномерного массив
			const int row = 8,col = 5;
			int arr[row][col], mas[11], count=0, ch=0;
			rand(arr, row, col);

			for (int i = 0;i < row;i++)
			{
				for (int j = 0;j < col;j++)
				{
					if (count <= 10)
					{
						mas[ch] = arr[i][j];
						count++;
						ch++;
					}
				}

			}
			for (int i = 0;i < count;i++)
			{
				cout << mas[i] << " ";
			}
		}
		else if (nz == 9)
		{
			//9.	Дана целочисленная квадратная матрица. Указать столбец (назвать его номер), где минимальное количество элементов, кратных сумме индексов

		}
		else if (nz == 10)
		{
			//10.	Дана целочисленная квадратная матрица. Найти сумму элементов матрицы, лежащих выше главной диагонали
			const int row = 5, col = 5;
			int mat[row][col], sum=0;
			rand(mat, row, col);
			cout << endl;
			for (int i = 0;i < row;i++)
			{
				for (int j = i;j <col; j++)
				{
					sum+=mat[i][j];
				}
			}
			cout << "суммa элементов матрицы, лежащих выше главной диагонали= "<<sum << endl;
		}
		
	}
	system("pause");
}

void rand(int a[][5],const int row, const int col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			a[i][j] = rand() % 50;
			cout <<setw(4)<< a[i][j];
		}
		cout << endl;
	}
}