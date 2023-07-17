#include <stdio.h>

//pointers are incremented and decremented by the size of the data type they point to
int main()
{
	int a = 22;
	int *p = &a;
// pointer increment and decrement
	printf("p = %u\n", p); // p = 6422288
	p++;
	printf("p++ = %u\n", p); 
	p--;
	printf("p-- = %u\n", p); 
	
// pointer addition
	printf("Pointer p before Addition: ");
    	printf("%p \n", p);
    	p = p + 3;
    	printf("Pointer p after Addition: ");
    	printf("%p \n", p);
	
// pointer subtraction
	printf("Pointer p before Subtraction: ");
    	printf("%p \n", p);
    	p = p - 3;
    	printf("Pointer p after Subtraction: ");
    	printf("%p \n", p);

// pointer comparison
	if (p == 22) {
        	     printf("Equal to inital number");
    	}
    	else {
        	     printf("Equal to inital number");
    	}

	return 0;
}
