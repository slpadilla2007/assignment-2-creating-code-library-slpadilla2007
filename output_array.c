#include <stdio.h>
#include "output_array.h"

void outputArr(int arrSize, int arr[]) {
	for (int i = 0; i < arrSize; i++) {
		if (i != arrSize - 1) {
			printf("%d, ", arr[i]);
		} else {
			printf("%d", arr[i]);
		}
	}
	printf("\n");
}
