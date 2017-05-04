#include <stdio.h>

#define nStates     3
#define nIndexes    2

typedef void (*fp)(int);

typedef enum
{
	state1 = 0,
	state2 = 1,
	state3 = 2
} state;



void f_index0_state1(int input) {
	
}

void f_index0_state2(int input) {
	
}

void f_index0_state3(int input) {
	
}

void f_index1_state1(int input) {
	
}

void f_index1_state2(int input) {
	printf("index: 1\nstate: 2\ninput entered: %d\n", input);
}

void f_index1_state3(int input) {
	
}



static fp function_array[nIndexes][nStates] = {
	{ f_index0_state1, f_index0_state2, f_index0_state3 },
	{ f_index1_state1, f_index1_state2, f_index1_state3 }
};



int main(int argc, char *argv[]) {
	function_array[1][state2](99);
	return 0;
}