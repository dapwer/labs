#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    double inp_temp;
    if (argc >= 2)
        inp_temp = atoi(argv[1]);
    if (argc == 2)
    {
        printf("%.2f C\n",inp_temp);
        printf("%.2f F\n",(inp_temp*9/5)+32);
        printf("%.2f K\n",inp_temp+273.15);
    }
    if (argc == 3)
    {
        if (argv[2][0]=='C')
        {
            printf("%.2f F\n",(inp_temp*9/5)+32);
            printf("%.2f K\n",inp_temp+273.15);
        }
        if (argv[2][0]=='F')
        {
            printf("%.2f C\n",(inp_temp-32)*5/9);
            printf("%.2f K\n",((inp_temp-32)*5/9)+273.15);
        }
        if (argv[2][0]=='K')
        {
            printf("%.2f C\n",inp_temp-273.15);
            printf("%.2f F\n",((inp_temp-273.15)*9/5)+32);
        }
    }
    return 0;
}
