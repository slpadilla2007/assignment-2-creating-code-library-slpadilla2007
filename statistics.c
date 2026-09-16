#include <stdio.h>
#include <math.h>
#include "statistics.h"

float avgOfArr(int arrSize, int arr[]) {
	//Creates sum variable
	int sum = 0;
	
	//Adds each member of array to the sum
	for (int i = 0; i < arrSize; i++) {
		sum += arr[i];
	}
	
	//Calculates the avg (typecasting arrSize to float to return a float)
	float avg = sum/(float)arrSize;
	
	//Returns the avg
	return avg;
}

float stdOfArr(int arrSize, int arr[]) {
	//Creates two sum variables for different uses
	int meanSum = 0;
	float stdSum = 0;
	
	//Adds each member of array to the meanSum
	for (int i = 0; i < arrSize; i++) {
		meanSum += arr[i];
	}
	
	//Calculates mean (typecasting arrSize to float to return a float)
	float mean = meanSum/(float)arrSize;
	
	//Adds (arrmember - mean)^2 to the stdSum for every array member
	for (int i = 0; i < arrSize; i++) {
		stdSum += ((float)arr[i] - mean)*((float)arr[i] - mean);
	}
	
	//Creates std variable equal to the square root of stdSum/arrSize
	float std = sqrt(stdSum/arrSize);
	
	//Returns the standard deviation
	return std;
}

int sumOfArr(int arrSize, int arr[]) {
	//Creates finalSum variable
	int finalSum = 0;
	
	//Adds each member of array to the sum
	for (int i = 0; i < arrSize; i++) {
		finalSum += arr[i];
	}
	
	//Returns the sum
	return finalSum;
}

int minArr(int arrSize, int arr[]) {
	//Creates minArr variable equal to the first array value
	int minArr = arr[0];
	
	//Compares each value to the minArr value
	for (int i = 0; i < arrSize; i++) {
		//If smaller than, sets minArr to equal it
		if (arr[i] < minArr) {
			minArr = arr[i];
		}
	}
	
	//Returns the minimum value
	return minArr;
}

int maxArr(int arrSize, int arr[]) {
	//Creats maxArr variable equal to the first array value
	int maxArr = arr[0];
	
	//Compares each value to the maxArr value
	for (int i = 0; i < arrSize; i++) {
		//If greater than, sets maxArr to equal it
		if (arr[i] > maxArr) {
			maxArr = arr[i];
		}
	}
	
	//Returns the maximum value
	return maxArr;
}

int absValMinMaxDiffArr(int arrSize, int arr[]) {
	//Creates min/maxArr variables both equal to the first array value
	int minArr = arr[0];
	int maxArr = arr[0];
	
	//Does same comparisons as min/maxArr functions, but in one for loop
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] < minArr) {
			minArr = arr[i];
		}
		if (arr[i] > maxArr) {
			maxArr = arr[i];
		}
	}
	
	//Calculates the difference between maxArr and minArr
	int diffCalc = maxArr - minArr;
	
	//If the diffCalc value is negative, returns difference times -1 to make it positive
	if (diffCalc < 0) {
		return diffCalc * -1;
	} else {
		//Else it just returns the diffCalc value
		return diffCalc;
	}
}
