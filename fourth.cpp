#include <iostream>
using namespace std;

int main() {
//-----------------------------------------------
//数组指针
	int a[2][3] = {2, 3, 1, 4, 6, 8};
	int i, j;
	int  (*p)[3];
	p = a;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			cout << *(*(p + i) + j) << " ";
		}
		cout << endl;
	}
//-----------------------------------------------
//指针数组
	int (*pp) = new int[6];
	int(*px)[3] = (int(*)[3])pp;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			px[i][j] = a[i][j];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			cout << *(*(px + i) + j) << " ";
		}
		cout << endl;
	}
	delete pp;
	return 0;
}