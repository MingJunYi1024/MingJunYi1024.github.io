#include<bits/stdc++.h>
using namespace std;

int rd() {
	int x = 0, w = 1;
	char ch = 0;
	while (ch < '0' || ch > '9') {
		if (ch == '-') w = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = x * 10 + (ch - '0');
		ch = getchar();
	}
	return x * w;
}

void wt(int x) {
	static int sta[35];
	int f = 1;
	if(x < 0) f = -1,x *= f;
	int top = 0;
	do {
		sta[top++] = x % 10, x /= 10;
	} while (x);
	if(f == -1) putchar('-');
	while (top) putchar(sta[--top] + 48);
}

signed main() {
	

	return 0;
}