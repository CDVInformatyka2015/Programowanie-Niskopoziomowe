void selectSort(int arr[], int n)
{
	int min=666, temp;
	for (int i=0; i<n; i++){
		for (int j=i; j<n; j++)
			if (arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	}
}

int minimum (int array[], int size){
	int min=666;
	for (int i=0; i<size; i++){
		if (array[i]<min)
			min=array[i];
	}
	return min;
}

void printArray(int arr[], char message){
	printf("%s\n", message);
	for (int i=0; i<5; i++)
		printf("%d) %d\n", i, arr[i]);
}

int main(){
	
	int array[5];
	array[0] = 5;
	array[1] = 8;
	array[2] = 4;
	array[3] = 3;
	array[4] = 55;
	
	printf("Najmniejsze: %d\n", minimum(array,5));
	
	selectSort(&array, 5);
	
	printArray(array, "Posortowana tablica");
	
	return 0;
}
