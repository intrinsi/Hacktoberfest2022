// Author: Siddharth Verma
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,x=0;
    char s[10000];
    do{
        printf("Enter the number to check for even or odd: ");
        gets(s);
        for(int i=0;i<strlen(s);i++)
        {
            if(!((int)s[i]>=48 && (int)s[i]<=57))
            {
                printf("Please enter an integer\n\n");
                x=1;
                break;
            }
            else
                x=0;
        }
    }while(x);
    n=atoi(s);
    if(n%2)
        printf("The number %d is odd",n);
    else
        printf("The number %d is even",n);
	return 0;
}
