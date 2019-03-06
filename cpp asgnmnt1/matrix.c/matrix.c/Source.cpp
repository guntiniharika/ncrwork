
#include<stdio.h>
#include<iostream>
using namespace std;
class Matrix
{
private:
	int a[3][3];
public:
	void getMatrix();
	void printMatrix();
	friend Matrix Multiply(Matrix a, Matrix b);
};
void Matrix::getMatrix()
{   
	int i, j;
	cout << "enter matrix";
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			cin >> a[3][3];
		}
	}
}
void Matrix::printMatrix()
{
	int i, j;
	cout << "matrix is";
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			cout <<a[i][j]<<"";
		}
		cout << "\n";
	}
}
Matrix Multiply(Matrix A, Matrix B)
{
	Matrix T;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			T.a[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				T.a[i][j] = T.a[i][j] + A.a[i][k] * B.a[k][j];
				return T;
			}
		}
	}
}
			int  main()
			{
				Matrix  P, Q, R;
				P.getMatrix();
				Q.getMatrix();
				R = Multiply(P, Q);
				R.getMatrix();
				system("pause");
				return 0;
			}



