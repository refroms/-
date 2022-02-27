//2. 在用户输入一个二维数组的长度之后，再输入数组的内容。利用指针和函数 来实现对输入的二维数组进行排序。
#include <iostream>
using namespace std;
int *function(int n, int x, int *pp);

int main() {
	int  *pt;
	int m, i = 0, l, j;
	int temp = 0;
	printf("请输入行数\n");
	cin >> m;
	printf("请输入列数\n");
	cin >> l;
	int (*p)[l];
	int b[m][l] = {0};
	printf("请输入%d个数\n", m * l);
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}
	p = b;

//	pt = function(m, l, p);
	for (int s = 0; s < m; s++) {
		for (int t = 0; t < l; t++) {
			for ( i = 0 ; i < m; i++) {
				for ( j = 0; j < l; j++) {
					if (*(*(p + s) + t ) < * (*(p + i) + j) ) {
						temp = *(*(p + s) + t );
						*(*(p + s) + t ) = * (*(p + i) + j);
						* (*(p + i) + j) = temp;
					}
				}
			}
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			cout << *(*(p + i) + j) << " ";
		}
	}
	return 0;
}
//函数部分未完成请指教
//int *function(int n, int x, int *pp) {
//	int temp = 0;
//	int i, j;
//	for (int s = 0; s < n; s++) {
//		for (int t = 0; t < x; t++) {
//			for ( i = 0 ; i < n; i++) {
//				for ( j = 0; j < x; j++) {
//					if (*(*(pp + s) + t ) < * (*(pp + i) + j) ) {
//						temp = *(*(pp + s) + t );
//						*(*(pp + s) + t ) = * (*(pp + i) + j);
//						* (*(pp + i) + j) = temp;
//					}
//				}
//			}
//		}
//	}
//	return pp;
//}
