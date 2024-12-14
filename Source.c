#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int rand10(int nmax) {
	return rand() % nmax + 1;
}
double rand_double(double dmin, double dmax) {
	double range = dmax - dmin;
	return dmin + ((double)rand() / RAND_MAX) * range;
}
int* rand10_array(int n, int nmax) {
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arr[i] = rand10(nmax);
	}
	return arr;
}
double* rand_double1(double* b, int q, double dm) {
	double* arr = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n; ++i) {
		arr[i] = rand_double(-dm, dm);
	}
	return arr;
}
void right_neg(double* arr, int n) {
	int neg_count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			neg_count++;
		}
	}
	if (neg_count < 2) {
		return;
	}
	double temp = arr[0];
	int neg_index = -1;

	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			neg_index = i;
		}
	}
	for (int i = neg_index; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}

int main() {
	setlocale(LC_ALL, "RUS");
	srand((unsigned int)time(0));
	int n, nmax;
	printf("¬ведите кол-в целых чисел (n) и максимальное значение nmax")
}