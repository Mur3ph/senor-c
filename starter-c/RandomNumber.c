#include <stdio.h> 
#include <stdlib.h> // needed for rand() 
#include <time.h>   // needed for time())

int main(int argc, char** argv) {
	int counter;    srand(time(0)); // seed with current time    
	counter = 1;    
	while (counter < 10) {        
		printf("%d\n", rand()); // call rand and output it        
		counter++;    
	}
	getchar();
	return (0);
}