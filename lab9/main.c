#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
#define max(x, y) ( (x) > (y) ? (x) : (y) )
#define min(x, y) ( (x) < (y) ? (x) : (y) )

const int64_t I0 = 13;
const int64_t J0 = -9;
const int64_t L0 = -4;


int64_t mod(int64_t a, int64_t b) {
	return (a % b + b) % b;
}


int64_t compute_i(int64_t i, int64_t j, int64_t l) {
	return mod((i + j), 30) / (mod(abs(l), 5) + 1) + mod(i + l, 30) / (mod(abs(j), 5) + 1);
	// return ((i + j) % 30) / (abs(l) % 5 + 1) + ((i + l) % 30) / (abs(j) % 5 + 1);
}


int64_t compute_j(int64_t i, int64_t j, int64_t l, int64_t k) {
	return mod(max(k * i, (k + 1) * j), 25) - abs(j - l) / 10;
	// return max(k * i, (k + 1) * j) % 25 - abs(j - l) / 10;
}


int64_t compute_l(int64_t i, int64_t j, int64_t l, int64_t k) {
	return abs(j - l) / 10 + min(mod(i + l, 20), mod(j * k, 20)) - 10;
	// return abs(j - l) / 10 + min((i + l) % 20, j * k % 20) - 10;
}


int64_t square(int64_t num) {
	return num * num;
}


bool in_area(int64_t i, int64_t j) {
	return ((square(i + 10) + square(j + 10) <= 100) && (square(i + 20) + square(j + 20) <= 100));
}


void print_data(int64_t i, int64_t j, int64_t l, int64_t k, bool in_area) {
	printf("%sside: \n", in_area ? "In" : "Out");
	printf("i = %ld, j = %ld\n", i, j);
	printf("l = %ld, k = %ld\n", l, k);
}

int main(void) {
	int64_t k;

	int64_t i = I0, j = J0, l = L0;
	for (k = 1; k <= 50; ++k) {
		int64_t i_new = compute_i(i, j, l);
		int64_t j_new = compute_j(i, j, l, k);
		int64_t l_new = compute_l(i, j, l, k);
		i = i_new;
		j = j_new;
		l = l_new;
		if (in_area(i, j)) {
			print_data(i, j, l, k, true);
			return 0;
		}
	}
	print_data(i, j, l, k - 1, false);
	return 0;

