#include <iostream>
using namespace std;
int *function(int x, int *pp);

int main() {
	int  *pt, *p;
	int m, count = 0, i;
	printf("������һ����\n");
	cin >> m;
	p = &m;
	pt = function(m, p);
	while (m > 0) {
		m = m / 10;
		count ++; //�ܹ�����10������һλ
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