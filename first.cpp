//1. 在用户输入一个一维数组的长度之后，再输入数组的内容。利用指针和函数 来实现对输入的一维数组进行排序。
#include <iostream>
using namespace std;
int *function(int n, int c[]);

int main() {
	int *p, *pt;
	int m, i = 0;
	printf("请输入一个数\n", m);
	cin >> m;
	int b[m] = {0};
	p = b;
	printf("请输入%d个数\n", m);
	for (i = 0; i < m; i++) {
		cin >> *(p + i);
	}
	pt = function(m, b);
	for (i = 0; i < m; i++) {
		cout << *(pt + i) << " ";
	}
	return 0;
}

int *function(int n, int c[]) {
	int *pp;
	int i, j;
	pp = c;
	int temp = 0;
	for (int i = 0 ; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(pp + i) < * (pp + j)) {
				temp = *(pp + i);
				*(pp + i) = *(pp + j);
				*(pp + j) = temp;
			}
		}
	}
	return pp;
}
//结果：
//请输入一个数
//5
//请输入5个数
//6 4 5 2 3
//6 5 4 3 2
