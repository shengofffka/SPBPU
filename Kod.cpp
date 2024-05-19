#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n, k;
	k = 0;
	cin >> n;
	vector <int> a(n);
	//считывание
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//обработка и вывод
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] == a[j] and i > j) {
				k++;
			}
		}
	}
	cout << k;
}