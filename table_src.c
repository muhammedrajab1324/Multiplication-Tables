
/*
=======================================
The code goes here  ----->>>
=======================================
*/
#include <stdio.h>
//Declaring Function
void table(int,int);

int main()
{
    int in1,in2;
    //Taking user input
    printf("Which Multiplication table you want: ");
    scanf("%d",&in1);
    printf("\nEnter Maximum Limit: ");
    scanf("%d",&in2);
    table(in1,in2);

}

void table(int table_num, int limit)
{
    int j = 1;

    printf("Multiplication table of %d\n",table_num);

    while(j<101)
    {
        if(limit>101)
        {
        printf("Enter The Limit less Than 100\n");
        break;
        }

        printf("%d x %d = %d\n",table_num,j,table_num*j);
        j++;

        if(j>limit)
        {
            printf("Maximum limit Reached!\n");
            break;
        }
        else
        {
            continue;
        }

    }
}
