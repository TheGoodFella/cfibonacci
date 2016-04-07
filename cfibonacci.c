#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
unsigned long* Fibonacci(unsigned long n);

int main(int argc, char *argv[]) {
	unsigned long n=5;
	if(argc>1)
	{
		n=0;
		unsigned long len = strlen(argv[1]);
	
		//convert number passed in argument from string to integer
		int i;
		for(i=0;i<len;i++)
		{
			n=n*10+(argv[1][i]-'0');
		}
	}
 	printf("\nexecuting code...");
 	unsigned long* list=Fibonacci(n);
   	printf("\nFirst %d terms of Fibonacci series are :\n",n);
   	
   	unsigned long l;
   	for(l=0;l<n;l++)
   		printf("\n%d) %d",l,list[l]);
 
}

unsigned long* Fibonacci(unsigned long n)
{
	unsigned long first = 0, second = 1, next, c;
	unsigned long *list = (unsigned long *)malloc (sizeof (unsigned long) * n);
   	for ( c = 0 ; c < n ; c++ )
   	{
    	if ( c <= 1 )
    		next = c;
    	else
    	{
        	next = first + second;
        	first = second;
        	second = next;
      	}
      	list[c]=next;
   	}
   	return (unsigned long *)list;
}
