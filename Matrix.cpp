#include "Matrix.h"
#include <iostream>
#include <time.h>
#include <string>

using namespace std;



void Matrix::Set_Matrix(int N, int M,string nam)
{
	Name = nam;
	N1 = N;
	M1 = M;
	int p;
	matrix = new double*[N];
	for (int i = 0; i < N; i++)
	{
		*(matrix + i) = new double[M];
	}
	cout << "Gonna enter elements? (1-yes)"<<endl;
	cin >> p;
	if (p == 1)
	{
		cout << "Enter matrix elements:" << endl;
		cout <<"____________________________________ "<< endl;
		for (int n = 0; n < N; n++)
		{
			for (int m = 0; m < M; m++)
			{
				if(m==M-1)
				{
					cout << "Element [" << n << "][" << m << "]=";
					cin >> *(n + *(m + matrix));
					//cout << endl;
				}
				else
				{
					cout << "Element ["<<n<<"]["<<m<<"]=";
					cin >> *(n + *(m + matrix));
					
				}
			}
		}
	}
	else
	{
		srand(time(0));
		for (int n = 0; n < N; n++)
		{
			for (int m = 0; m < M; m++)
			{
				if (m == M - 1)
				{
					*(n + *(m + matrix))=rand();
					cout << endl;
				}
				else
				{
					*(n + *(m + matrix))=rand();
					cout << "\t";
				}
			}
		}
	}
}


Matrix::~Matrix()
{

	for (int i = 0; i < N1; i++)
	{
		delete[] * (matrix + i);
	}
}

void Matrix::ShowMatrix()
{
	cout << "____________________________________ " << endl;
	cout  << Name << ":" << endl;
	cout << "____________________________________ " << endl;
	for (int n = 0; n < N1; n++)
	{
		for (int m = 0; m < M1; m++)
		{
			if (m == M1 - 1)
			{
				
				cout << *(n + *(m + matrix));
				cout << endl<< endl;
				
			}
			else
			{   
				cout << *(n + *(m + matrix));
				cout << "\t";
			}
		}
	}
}

void Matrix::Set_Matrix(int N, int M)
{
	Name = "Zero matrix";
	N1 = N;
	M1 = M;
	//int p;
	matrix = new double*[N];
	for (int i = 0; i < N; i++)
	{
		*(matrix + i) = new double[M];
	}
	for (int n = 0; n < N; n++)
	{
		for (int m = 0; m < M; m++)
		{
			 *(n + *(m + matrix))=0;
				
		}
	}
}

double Matrix::det2()
{
	if (N1 == M1)
		return (**matrix)*(*(1+*(matrix+1)))-*(1+*matrix)*(**(matrix+1));
}

string Matrix::Get_name()
{
	return Name;
}

void Matrix::Get_det()
{
	cout << "Det(" << this->Get_name() << ")=" <<this->det2() << endl;
}