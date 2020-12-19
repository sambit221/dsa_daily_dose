//WAP using struct and union both to print coordinates of a point

#include <stdio.h>
typedef struct {
	int x, y;
}point1;
typedef union {
	int x;
	int y;
}point2;
int main(){
	point1 p1 = {2,3};
	point2 p2;
	printf("\n The coordinates of P1 are %d and %d", p1.x, p1.y);
	p2. x = 4;
	printf("\n The x coordinate of P2 is %d", p2.x);
	p2.y = 5;
	printf("\n The y coordinate of P2 is %d", p2.y);
	return 0;
}

/*--------output-------------

 The coordinates of P1 are 2 and 3
 The x coordinate of P2 is 4
*/