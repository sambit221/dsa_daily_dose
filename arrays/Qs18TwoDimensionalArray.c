// In a small company there are five salesmen. 
// Each salesman is supposed to sell three products. 
// WAP using a 2D array to print 
// (i) the total sales by each salesman and 
// (ii) total sales of each item.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr[5][3], sum=0, sum2=0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the sales of 3 items sold by the businessman %d : = \n",i+1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }        
    }

    printf ("\n Answer of qstn 1 \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[0][j];
        }
        printf("the total sales by salesman %d is = %d\n",i+1,sum);
        sum = 0;
    }   
    printf ("\n Answer of qstn 2 \n");
    for (int l = 0; l < 3; l++)
    {
        for (int k = 0; k < 5; k++)
        {
            sum2 = sum2 + arr[k][l];
        }
        printf("\n total sales of item %d is = %d",l+1, sum2);
        sum2 = 0;
    }
    return 0;
}

// output

/*
Enter the sales of 3 items sold by the businessman 1 : =
1
2
3

Enter the sales of 3 items sold by the businessman 2 : =
1
2
3

Enter the sales of 3 items sold by the businessman 3 : =
1
2
3

Enter the sales of 3 items sold by the businessman 4 : =
1
2
3

Enter the sales of 3 items sold by the businessman 5 : =
1
2
3

 Answer of qstn 1
the total sales by salesman 1 is = 6
the total sales by salesman 2 is = 6
the total sales by salesman 3 is = 6
the total sales by salesman 4 is = 6
the total sales by salesman 5 is = 6

 Answer of qstn 2

 total sales of item 1 is = 5
 total sales of item 2 is = 10
 total sales of item 3 is = 15
*/