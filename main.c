#include <stdio.h>
#include <math.h>
#include "statistics.h"
#include "output_array.h"

int main() {
	//All three arrays
	int array1[5] = {20,16,27,24,19};
	int array2[8] = {29,20,12,3,27,9,26,14};
	int array3[3] = {15,2,16};
	
	//All sizes of arrays
	int sizeArr1 = 5;
	int sizeArr2 = 8;
	int sizeArr3 = 3;
	
	//Prints for all arrays, calling funcs inside printf's
	printf("Array #1:\n");
	outputArr(sizeArr1, array1);
	printf("average: %.2f\n", avgOfArr(sizeArr1,array1));
	printf("standard deviation: %.2f\n", stdOfArr(sizeArr1, array1));
	printf("sum: %d\n", sumOfArr(sizeArr1, array1));
	printf("minimum array value: %d\n", minArr(sizeArr1, array1));
	printf("maximum array value: %d\n", maxArr(sizeArr1, array1));	
	printf("absolute value of difference between max and min: %d\n", absValMinMaxDiffArr(sizeArr1, array1));

	printf("\nArray #2:\n");
	outputArr(sizeArr2, array2);
	printf("average: %.2f\n", avgOfArr(sizeArr2, array2));
	printf("standard deviation: %.2f\n", stdOfArr(sizeArr2, array2));
	printf("sum: %d\n", sumOfArr(sizeArr2, array2));
	printf("minimum array value: %d\n", minArr(sizeArr2, array2));
	printf("maximum array value: %d\n", maxArr(sizeArr2, array2));
	printf("absolute value of difference between max and min: %d\n", absValMinMaxDiffArr(sizeArr2, array2));

	printf("\nArray #3:\n");
	outputArr(sizeArr3, array3);
	printf("average: %.2f\n", avgOfArr(sizeArr3, array3));
	printf("standard deviation: %.2f\n", stdOfArr(sizeArr3, array3));
	printf("sum: %d\n", sumOfArr(sizeArr3, array3));
	printf("minimum array value: %d\n", minArr(sizeArr3, array3));
	printf("maximum array value: %d\n", maxArr(sizeArr3, array3));
	printf("absolute value of the difference between max and min: %d\n", absValMinMaxDiffArr(sizeArr3, array3));
	
	//End of code yippee!!
	return 0;
}
