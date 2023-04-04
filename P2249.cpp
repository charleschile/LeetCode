// #include <iostream>
#include <cstdio>
using namespace std;

int n, m, q, a[1000010];

int find(int x) {
	int left = 1, right = n;
	while (left < right) {
		int mid = left + ((right - mid) >> 1);
		if (a[mid] >= x) {
			right = mid;
		} else left = mid + 1;
	}
	if (a[left] == x) return left;
	else return -1;
}

int main () {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &q);
		int ans = find(q);
		printf("%d ", ans);
	}
	return 0;
}