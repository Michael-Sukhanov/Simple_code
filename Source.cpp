#include<iostream>
#include<string>
#include<time.h>
#include"Matrix.h"

using namespace std;

int main()
{
	Matrix m;
	m.Set_Matrix(2, 2, "M1");
	m.ShowMatrix();
	m.Get_det();
	system("pause");
	return 0;
}

