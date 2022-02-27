#include <iostream>
using namespace std;
int *function(int n, int x, int *o);

int main() {
	int  *pt, *t;
	int m, i, l, j;
	printf("请输入行数\n");
	cin >> m;
	printf("请输入列数\n");
	cin >> l;
	int (*p)[l];
	int b[m][l] = {0};
	printf("请输入%d个数\n", m * l);
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			cin >> *(*(p + i) + j);
		}
	}
	p = b[0][0];
	pt = function(m, l, p);
	for (i = 0; i < m; i++) {
		cout << *(pt + i) << " ";
	}
	return 0;
}

int *function(int n, int x, int *o) {
	int *pp;
	int temp = 0;
//	for (int s = 0; s < n; s++) {
//		for (int i = 0 ; i < x; i++) {
//			for (int j = i + 1; j < x; j++) {
//				if (*((pp + s) + i ) < * ((pp + s) + j) ) {
//					temp = *((pp + s) + i );
//					*((pp + s) + i ) = * ((pp + s) + j);
//					* ((pp + s) + j) = temp;
//				}
//			}
//		}
//	}
	cout << *o << endl;
	return pp;
}