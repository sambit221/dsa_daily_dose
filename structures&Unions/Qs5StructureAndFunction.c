// Write a program to read, display, add, and subtract two distances. 
// Distance must be defined using kms and meters.

#include<stdio.h>
#include<string.h>

// declaring structure
typedef struct Dist{
    int kms;
    int meters;
}distance;
distance d1, d2, d3, d4;

distance add_distance (distance, distance);
distance subtract_distance (distance, distance);
int main(){
	int option;
	// taking user input
	do{
	 	printf("\n ******** MAIN MENU *********");
	 	printf("\n 1. Read the distances ");
	 	printf("\n 2. Display the distances");
	 	printf("\n 3. Add the distances");
	 	printf("\n 4. Subtract the distances");
	 	printf("\n 5. EXIT");
	 	printf("\n Enter your option : ");
	 	scanf("%d", &option);
	    switch(option){
	 	 	case 1:
	 	 	 	printf("\n Enter the first distance in kms and meters: ");
	 	 	 	scanf("%d %d", &d1.kms, &d1.meters);
	 	 	    printf("\n Enter the second distance in kms and meters: ");
	 	 	 	scanf("%d %d", &d2.kms, &d2.meters);
	 	 	 	break;
	 	 	case 2:
	 	 	 	printf("\n The first distance is : %d kms %d meters",d1.kms, d1.meters);
	 	 	 	printf("\n The second distance is : %d kms %d meters",d2.kms, d2.meters);
	 	 	 	break;
	        case 3:
	 	 	 	d3 = add_distance(d1, d2);
	 	 	 	printf("\n The sum of two distances is : %d kms %d meters", d3.kms, d3.meters);
	 	 	 	break;
	 	 	case 4:
	 	 	 	d4 = subtract_distance(d1, d2);
	 	 	 	printf("\n The difference between two distances is : %d kms %d meters", d4.kms, d4.meters);
	 	 	 	break;
	    }
	}while(option != 5);
	return 0;
}

distance add_distance (distance d1, distance d2)
{
    distance sum;
    sum.meters = d1.meters + d2.meters;
    sum.kms = d1.kms + d2.kms;
    while (sum.meters >= 1000){
     	sum.meters = sum.meters % 1000;
     	sum.kms += 1;
    }
    return sum;
} 

distance subtract_distance(distance d1, distance d2){
    distance sub;
    if(d1.kms > d2.kms){
        sub.meters = d1.meters - d2.meters;
 	    sub.kms = d1.kms - d2.kms;
    }
    else{
        sub.meters = d2.meters - d1.meters;
 	    sub.kms = d2.kms - d1.kms;
    }
    if(sub.meters < 0){
 	    sub.kms = sub.kms - 1;
 	    sub.meters = sub.meters + 1000;
    }
    return sub;
}

/*----------output----------------

 ******** MAIN MENU *********
 1. Read the distances   
 2. Display the distances
 3. Add the distances
 4. Subtract the distances
 5. EXIT
 Enter your option : 1

 Enter the first distanceΓÇë in kms and meters: 12 12000

 Enter the second distanceΓÇë in kms and meters: 10 10000

 ******** MAIN MENU *********
 1. Read the distances
 2. Display the distances
 3. Add the distances
 4. Subtract the distances
 5. EXIT
 Enter your option : 2

 The first distance is : 12 kms 12000 meters
 The second distance is : 10 kms 10000 meters
 ******** MAIN MENU *********
 1. Read the distances
 2. Display the distances
 3. Add the distances
 4. Subtract the distances
 5. EXIT
 Enter your option : 2

 The first distance is : 12 kms 12000 meters
 The second distance is : 10 kms 10000 meters
 ******** MAIN MENU *********
 1. Read the distances
 2. Display the distances
 3. Add the distances
 4. Subtract the distances
 5. EXIT
 Enter your option : 3

 The sum of two distances is : 23 kms 0 meters
 ******** MAIN MENU *********
 1. Read the distances
 2. Display the distances
 3. Add the distances
 4. Subtract the distances
 5. EXIT
 Enter your option : 4

 The difference between two distances is : 2 kms 2000 meters
 ******** MAIN MENU *********
 1. Read the distances
 2. Display the distances
 3. Add the distances
 4. Subtract the distances
 5. EXIT
 Enter your option : 5
*/