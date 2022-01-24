//code of Smallest Numbers of Notes
#include<stdio.h>
int main()
{
    int Testcases;//number of test Testcases
    scanf("%d",&Testcases);
    int array[6]={100,50,10,5,2,1};//function to print array element
    
    while(Testcases)
    {
        int number,count,currentnotes;//declaration of variables
        count=0;
        scanf("%d",&number);
        for( int i=0;i<6;i++)//using for loop
        {
            currentnotes=array[i];
            while(number>=currentnotes)//using while loop
            {
              number=number-currentnotes;
              count++;
            }
        }
              printf("%d\n",count);
              Testcases--;
    }
    return 0;
}
//Code By Bhumika Nayak
        