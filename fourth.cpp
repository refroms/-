//4. 分别用指针数组和数组指针来存储一个二维数组，并输出其内容。
#include <iostream>
using namespace std;

int main() {
//-----------------------------------------------
//Êý×éÖ¸Õë
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
//Ö¸ÕëÊý×é
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
