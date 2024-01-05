#include<stdio.h>
int main ()
{
    int number,N,n = 0;
    N = 10000;
    double temperature[N];
    char choice;
    double temp[10];
    double tempy[5]= {33, 15.5, 10.4, 40.00, 80.5},max;
    do{
        printf("\n======= BD Meteorological System =========\n\n");
        printf("#Enter \'x\' to take a temperature of a city into \'temperatures\'  array of size N.\n");
        printf("#Enter \'y\' to find and display the highest temperature among all the cities.\n");
        printf("#Enter \'z\' to display the temperatures that are less than half of the highest temperature.\n");
        printf("#Enter \'q\' to quit/exit the menu system.\n");
        scanf (" %c",&choice);
        if (choice == 'q')
        {
          printf("Thank  you\nProgram End\n");
          return 0;
        }
        switch(choice)
        {
            case 'x' :
                //printf("How many cities temperatures you will input :");
                //scanf(" %d",&N);
                // double temp[N];
                printf("Enter a temperature of a city: \n");
                scanf("%lf",&temperature[n]);
                n++;
                break;

            case 'y' :
                if (n == 0)
                {
                    printf("No temperature information is found. Please populate your temperature information first. \n");
                }
                else
                {
                    max = temperature[0];
                    for(int j=1; j<n; j++)
                    {
                        if(max < temperature[j])
                            max=temperature[j];
                    }
                    printf("Highest temperature among all the cities : %.2lf\n", max);
                }
                break;

            case 'z' :
                if (n == 0)
                {
                    printf("No temperature information is found. Please populate your temperature information first. \n");
                }
                else
                {
                    max = temperature[0];
                    for(int j=1; j<n; j++)
                    {
                        if(max < temperature[j])
                            max = temperature[j];
                    }
                    printf("The temperatures that are less than half of the highest temperature.\n");
                    double less = max / 2 ;
                    for (int k=0; k<n; k++)
                    {
                        if(temperature[k] < less)
                            printf("%.2lf ", temperature[k]);
                    }
                }
                break;

            default :
                printf("Invalid Input\n");
                break;

        }

    }
    while(1);
    printf("Thank  you\nProgram End\n");
    return 0;
}
