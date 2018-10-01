#pragma once
#include <iostream>

using namespace std;

const int MaxTerms = 100;

char compare(int x, int y)
{
	if (x > y) return '>';
	else if (x < y) return '<';
	else return '=';
}

template <class Item> class SparseMatrix;

template <class Item>
class MatrixTerm {
	friend class SparseMatrix<Item>;
private:
	int row, col;
	Item value;
};

template <class Item>
class SparseMatrix
{
public:
	SparseMatrix(int MaxRow = 0, int MaxCol = 0) {};

	SparseMatrix Transpose();
	SparseMatrix FastTranspose();

	SparseMatrix Add(SparseMatrix b);

	SparseMatrix<Item> Multiply(SparseMatrix<Item> b);

	int StoreSum(int, int&, int, int);
	void Output();
	void OutputToMatrice() const;
	void Init(Item*);
	void Init2(Item*);
	void Init3(Item*);
private:
	int Rows, Cols, Terms;
	MatrixTerm<Item> smArray[MaxTerms];

};
