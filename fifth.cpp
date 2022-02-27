#include <iostream>
//5. 用户输入两个位置，一个一维数组及其长度。设计一个函数将两个位置间的 数组内的逆序后，再输出整个数组。
using namespace std;
int *function(int n, int c[], int o, int p);

int main() {
	int *p, *pt;
	int m, i = 0, a, e;
	printf("请输入长度\n", m);
	cin >> m;
	int b[m] = {0};
	p = b;
	printf("请输入%d个数\n", m);
	for (i = 0; i < m; i++) {
		cin >> *(p + i);
	}
	printf("请输入一维数组中的位置1\n");
	cin >> a;
	printf("请输入一维数组中的位置2\n");
	cin >> e;
	pt = function(m, b, a, e);
	for (i = 0; i < m; i++) {
		cout << *(pt + i) << " ";
	}
	return 0;
}

int *function(int n, int c[], int o, int p) {
	int *pp;
	int i, j;
	pp = c;
	int temp = 0;
	for (int i = o  ; i < p - 1; i++) {
		for (int j = i + 1; j < p - 1; j++) {
			temp = *(pp + i);
			*(pp + i) = *(pp + j);
			*(pp + j) = temp;
		}
	}
	return pp;
}
