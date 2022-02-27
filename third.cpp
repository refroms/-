//3. 编写一个函数，输入参数为一个整数（位数未知）和一个指针。要求实现把 这个整数的各个位数存储在指针所指的内存中，并在主函数中输出指针内容。
#include <iostream>
using namespace std;
int *function(int x, int *pp);

int main() {
	int  *pt, *p;
	int m, count = 0, i;
	printf("请输入一个数\n");
	cin >> m;
	p = &m;
	pt = function(m, p);
	while (m > 0) {
		m = m / 10;
		count ++; //能够除以10就增加一位
	}
	for (i = 1; i < count + 1; i++) {
		cout << *(pt + i) << " ";
	}
	return 0;
}

int *function( int x, int *pp) {
	int i = 1;
	int *u;
	u = pp;
	while (x != 0) {
		*(u + i) = x % 10;
		x = x / 10;
		i++;
	}
	return u;
}
