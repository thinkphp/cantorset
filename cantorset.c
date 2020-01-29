#include <stdio.h>
#define W 81
#define H 5

typedef unsigned int uint;
char matrix[100][100];

void init() {

     for(uint i = 0; i < H; ++i) {

     	 for(uint j = 0; j < W; ++j) {

     	 	 matrix[i][j] = '*';
     	 }
     }
}

void cantor(int start, int width, int index) {

     int segment = width / 3;

     if(segment == 0) return;

     for(uint i = index; i < H; ++i) {

     	 for(uint j = start + segment; j < start + 2 * segment; ++j) {

     	 	 matrix[i][j] = ' ';
     	 }
     }

     cantor(start, segment, index + 1);   
     cantor(start + 2 * segment, segment, index + 1);
       
}

void display() {

 for(uint i = 0; i <= H; ++i) {

     	 for(uint j = 0; j <= W; ++j) {

     	 	 printf("%c", matrix[i][j]);
     	 }
        	 printf("\n");
     } 	
}

int main(int argc, char const *argv[])
{
	init(); 
	cantor(0, W, 1);		
	display();
	return 0;
}
