#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class MAT
{
	int _row;
	int _col;
	int**_mat;

	static int count;

	public:
	MAT():_row(0), _col(0), _mat(NULL){}
	MAT(int row, int col):_row(row), _col(col)
	{
		_mat=new int*[_row];

		for(int i=0; i<_row; i++)
			_mat[i]=new int[_col];
	}

	~MAT()
	{
		if(count<2)
		{
			cout<<"\nDestructor called!!\n\n";
			if(_mat!=NULL)
				delete _mat;
			count++;
		}

		else if(count==2)
		{
			count=0;
		}

	}

	
	friend ostream&operator<<(ostream&, MAT&);
	friend istream&operator>>(istream&, MAT&);
	MAT&operator+(MAT&);
	MAT&operator-(MAT&);
	MAT&operator/(MAT&);
	void operator*(MAT&);

};

int MAT::count;

ostream&operator<<(ostream&out, MAT&m)
{
	for(int i=0; i<m._row; i++)
	{
		for(int j=0; j<m._col; j++)
			out<<m._mat[i][j]<<" ";
		cout<<"\n";
	}

	return out;
}

istream&operator>>(istream&in, MAT&m)
{
	for(int i=0; i<m._row; i++)
		for(int j=0; j<m._col; j++)
			in>>m._mat[i][j];
	return in;
}

MAT& MAT::operator+(MAT&m)
{
	for(int i=0; i<_row; i++)
		for(int j=0; j<_col; j++)
			_mat[i][j]=_mat[i][j]+m._mat[i][j];
	return *this;
}

MAT& MAT::operator-(MAT&m)
{
	for(int i=0; i<_row; i++)
		for(int j=0; j<_col; j++)
			_mat[i][j]=_mat[i][j]-m._mat[i][j];
	return *this;
}

MAT& MAT::operator/(MAT&m)
{
	for(int i=0; i<_row; i++)
		for(int j=0; j<_col; j++)
			_mat[i][j]=_mat[i][j]/m._mat[i][j];
	return *this;
}

void MAT::operator*(MAT&m)
{
	int product[_row][m._col];

	for(int i=0; i<_row; i++)
	{
		for(int j=0; j<m._col; j++)
		{
			product[i][j]=0;
			for(int k=0; k<_col; k++)
				product[i][j]+=_mat[i][k]*m._mat[k][j];
		}
	}

	cout<<"\nResultant matrix:\n";

	for(int i=0; i<_row; i++)
	{
		for(int j=0; j<m._col; j++)
			cout<<product[i][j]<<" ";
		cout<<"\n";
	}
}


int main(void)
{
	int row1, col1, row2, col2, opt;

	while(1)
	{
		cout<<"\n\nMATRIX OPERATIONS\n\n";
		cout<<"1. Add two matrices.\n";
		cout<<"2. Subtract two matrices.\n";
		cout<<"3. Divide two matrices.\n";
		cout<<"4. Multiply two matrices.\n";
		cout<<"5. Exit.\n";
		cout<<"[Select one option] ";
		cin>>opt;

		switch(opt)
		{
			case 1:
				cout<<"\nMatrix-1\n";
				cout<<"enter number of rows: ";
				cin>>row1;
				cout<<"enter number of columns: ";
				cin>>col1;

				cout<<"\nMatrix-2\n";
				cout<<"enter number of rows: ";
				cin>>row2;
				cout<<"enter number of columns: ";
				cin>>col2;

				if(row1==row2 && col1==col2)
				{
					MAT m1(row1, col1), m2(row2, col2), m3;

					cout<<"enter elements into matrix-1:\n";
					cin>>m1;

					cout<<"enter elements into matrix-2:\n";
					cin>>m2;

					cout<<"\nMatrix-1:\n";
					cout<<m1;
					cout<<"\nMatrix-2:\n";
					cout<<m2;
					m3=m1+m2;
					cout<<"\nResultant matrix:\n";
					cout<<m3<<"\n";
				}

				else
				{
					cout<<"\nUnequal rows and columns!!\n\n";
				}

				break;

			case 2:
				cout<<"\nMatrix-1:\n";
				cout<<"enter number of rows: ";
				cin>>row1;
				cout<<"enter number of columns: ";
				cin>>col1;

				cout<<"\nMatrix-2:\n";
				cout<<"enter number of rows: ";
				cin>>row2;
				cout<<"enter number of columns: ";
				cin>>col2;

				if(row1==row2 && col1==col2)
				{
					MAT m1(row1, col1), m2(row2, col2), m3;

					cout<<"enter elements into matrix-1:\n";
					cin>>m1;

					cout<<"enter elements into matrix-2:\n";
					cin>>m2;

					cout<<"\nMatrix-1:\n";
					cout<<m1;
					cout<<"\nMatrix-2:\n";
					cout<<m2;
					m3=m1-m2;
					cout<<"\nResultant matrix:\n";
					cout<<m3<<"\n";
				}

				else
				{
					cout<<"\nUnequal rows and columns!!\n\n";
				}

				break;

			case 3:
				cout<<"\nMatrix-1:\n";
				cout<<"enter number of rows: ";
				cin>>row1;
				cout<<"enter number of columns: ";
				cin>>col1;

				cout<<"\nMatrix-2:\n";
				cout<<"enter number of rows: ";
				cin>>row2;
				cout<<"enter number of columns: ";
				cin>>col2;

				if(row1==row2 && col1==col2)
				{
					MAT m1(row1, col1), m2(row2, col2), m3;

					cout<<"enter elements into matrix-1:\n";
					cin>>m1;

					cout<<"enter elements into matrix-2:\n";
					cin>>m2;

					cout<<"\nMatrix-1:\n";
					cout<<m1;
					cout<<"\nMatrix-2:\n";
					cout<<m2;
					m3=m1/m2;
					cout<<"\nResultant matrix:\n";
					cout<<m3<<"\n";
				}

				else
				{
					cout<<"\nUnequal rows and columns!!\n\n";
				}

				break;

			case 4:
				cout<<"\nMatrix-1:\n";
				cout<<"enter number of rows: ";
				cin>>row1;
				cout<<"enter number of columns: ";
				cin>>col1;

				cout<<"\nMatrix-2:\n";
				cout<<"enter number of rows: ";
				cin>>row2;
				cout<<"enter number of columns: ";
				cin>>col2;

				if(col1==row2)
				{
					MAT m1(row1, col1), m2(row2, col2);
					cout<<"\nMatrix-1:\n";
					cout<<"enter elements:\n";
					cin>>m1;

					cout<<"\nMatrix-2:\n";
					cout<<"enter elements:\n";
					cin>>m2;

					m1*m2;
				}

				else
				{
					cout<<"\nCannot multiply matrices!!\n\n";
				}

				break;

			case 5:
				cout<<"\n\nquitting!!\n\n";
				return 0;

			default:
				cout<<"\ninvalid option!!\n\n";


		}
	}
	return 0;
}
