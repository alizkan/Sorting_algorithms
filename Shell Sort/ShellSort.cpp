#include <stdio.h>

int key_element, number_of_elements_to_sort;
int array_of_elements_to_sort[100];

void shell_sort(int array[], int number)
{

 for(int interval=number_of_elements_to_sort/2; interval>0; interval/=2)
 {
 	
 	for(int i = interval; i<number_of_elements_to_sort; i++)
  {
  	key_element = array[i];
  	int j = i;
  	
  	  while(j>=interval && array[j-interval]>key_element)
  	  {
  	  	array[j] = array[j-interval];
  	  	j = j-interval;
	}
	array[j] = key_element;
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

shell_sort(array_of_elements_to_sort, number_of_elements_to_sort);

printf("New version of the array:\n");

for(int counter = 0; counter<number_of_elements_to_sort; counter++)
{	
	printf("%d  ", array_of_elements_to_sort[counter]);
}

	return 0;
}
