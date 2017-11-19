int selectSort(int arr[], int n)
{
	int pos_min, temp; //TEMPY

	for (int i=0; i<n-1; i++)
	{
	    pos_min = i;
		
		for (int j=i+1; j<n; j++)
			if (arr[j]<arr[pos_min])
	            pos_min=j;
        if (pos_min != i){
             temp = arr[i];
             arr[i] = arr[pos_min];
             arr[pos_min] = temp;
        }
	}
	return arr;
}

int minimum (int array[], int size){
	int min=666;
	for (int i=0; i<size; i++){
		if (array[i]<min)
			min=array[i];
	}
	return min;
}

int main(){
	
	int array[5];
	array[0] = 5;
	array[1] = 8;
	array[2] = 4;
	array[3] = 3;
	array[4] = 55;
	
	printf("%d", minimum(array,5));
	int elos[5];
	elos = selectSort(array, 5);
	
	for (int i=0; i<5; i++)
		print("%d\n", elos);
	return 0;
}
