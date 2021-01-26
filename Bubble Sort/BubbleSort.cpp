#include <stdio.h>

int temprary_place, number_of_elements_to_sort;
int array_of_elements_to_sort[100];

void swap_elements(int *first_pointer, int *second_pointer)
{
     temprary_place = *first_pointer;
	
	*first_pointer = *second_pointer;
	
	*second_pointer = temprary_place;
}

void bubble_sort(int array[], int number)
{
	for(int counter = 0; counter<number; counter++)
 {
	 for(int counter2 = 0; counter2<number-1-counter; counter2++)
	 {
		if(array[counter2] > array[counter2+1])
		{
			swap_elements(&array[counter2], &array[counter2+1]);
		}
	 }
 }
}

int main()
{	
	
printf("Please enter the number of elements to be sorted:");

scanf("%d", &number_of_elements_to_sort);

printf("Please enter the elements to be listed:\n");

for(int counter = 0; counter<number_of_elements_to_sort; counter++)
{
    printf("%d) Enter a number:", counter+1);
	scanf("%d", &array_of_elements_to_sort[counter]);
}

printf("Old version of the array:\n");

for(int counter = 0; counter<number_of_elements_to_sort; counter++)
{	
	printf("%d  ", array_of_elements_to_sort[counter]);
}

printf("\n\n");

bubble_sort(array_of_elements_to_sort, number_of_elements_to_sort);

printf("New version of the array:\n");

for(int counter = 0; counter<number_of_elements_to_sort; counter++)
{	
	printf("%d  ", array_of_elements_to_sort[counter]);
}

	return 0;
}



