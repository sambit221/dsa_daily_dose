// WAP using array of union to print coordinates of 3 points

#include <stdio.h>
union POINT{
int x, y;
};
int main(){
int i;
	union POINT points[3];
	points[0].x = 2;
	points[0].y = 3;
	points[1].x = 4;
	points[1].y = 5;
    points[2].x = 6;
	points[2].y = 7;
	for(i=0;i<3;i++)
		printf("\n Coordinates of Point[%d] are %d and %d", i, points[i].x, 	 	
	points[i].y);
	return 0;
}

/*--------output-------------

Coordinates of Point[0] are 3 and 3
Coordinates of Point[1] are 5 and 5
Coordinates of Point[2] are 7 and 7
*/