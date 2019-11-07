#include<stdio.h>
#include<algorithm>
int storage[1000006];

int main() {
	int n;
	int  i, index = 0, count = 0;
	long long int hd=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld", &storage[i]);
	}
	std::sort(storage, storage + n );

	hd = storage[0];

	for (i = 0; i < n; i++) {
		if (storage[i] == storage[i + 1]) count++;
		else count = 0;
		if (index < count) {
			index = count;
			hd = storage[i];
		}
	}
	
	printf("%lld", hd);

	return 0;
}