#pragma once

#include <iostream>
using namespace std;
#include <stdlib.h>
// 보통 행렬에 대하여add, sub, mult, transpose 구현하는 코딩
class Matrix {
public:
	Matrix(int row, int col);
	int GetData();
	Matrix Transpose();
	int Display();
	//Matrix Add(Matrix b);
	Matrix Multiply(Matrix b);
	int CompareRowCol(Matrix b);
private:
	int rows, cols;
	//int Term[rows][cols];
	int *Term;//the add 2.6ress of a[i][j] = 0 + i * cols + j => Fig2.6
};
