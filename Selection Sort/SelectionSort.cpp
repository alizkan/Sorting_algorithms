#include <stdio.h>

int temprary_place, number_of_elements_to_sort, minimum_element;
int array_of_elements_to_sort[100];
int counter = 0, counter2 = 0;

void swap_elements(int *first_pointer, int *second_pointer)
{
     temprary_place = *first_pointer;
	
	*first_pointer = *second_pointer;
	
	*second_pointer = temprary_place;
}

void selection_sort(int array[], int number)
{
 for(counter = 0; counter<number-1; counter++)
 {
 	minimum_element = counter;
 	
	 for(counter2 = counter; counter2<number; counter2++)
	 {
		if(array[minimum_element] > array[counter2])
		{
			minimum_element = counter2;
		}
	 }
	 swap_elements(&array[minimum_element], &array[counter]);
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

selection_sort(array_of_elements_to_sort, number_of_elements_to_sort);

printf("New version of the array:\n");

for(int counter = 0; counter<number_of_elements_to_sort; counter++)
{	
	printf("%d  ", array_of_elements_to_sort[counter]);
}

	return 0;
}

