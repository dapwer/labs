#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    float temp_value;
    if (argc >= 2)
        temp_value = atoi(argv[1]);
    if (argc == 2)
    {
        printf("%.2f C\n",temp_value);
        printf("%.2f F\n",(temp_value*9/5)+32);
        printf("%.2f K\n",temp_value+273.15);
    }
    if (argc == 3)
    {
        if (argv[2][0]=='C')
        {
            printf("%.2f F\n",(temp_value*9/5)+32);
            printf("%.2f K\n",temp_value+273.15);
        }
        if (argv[2][0]=='F')
        {
            printf("%.2f C\n",(temp_value-32)*5/9);
            printf("%.2f K\n",((temp_value-32)*5/9)+273.15);
        }
        if (argv[2][0]=='K')
        {
            printf("%.2f C\n",temp_value-273.15);
            printf("%.2f F\n",((temp_value-273.15)*9/5)+32);
        }
    }
    return 0;
}
