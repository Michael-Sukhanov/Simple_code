#include<string>

using namespace std;
class Matrix
{
	string Name;
	double** matrix;
	int N1, M1;
	double det2();
public:
	void Set_Matrix(int, int, string);
	void Set_Matrix(int, int);
	string Get_name();
	void Get_det();
	~Matrix();
	virtual void ShowMatrix();
	//Operators:
	
};

