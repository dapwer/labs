#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    double inp_temp;
    char temp_si;
    if (argc >= 2)
        inp_temp = atof(argv[1]);
    if (argc >= 3)
        temp_si = argv[2][0];
    switch (temp_si)
    {
    case 'C':
    {
        if (inp_temp>=-273.15)
        {
            printf("%.2f F\n",(inp_temp*9/5)+32);
            printf("%.2f K\n",inp_temp+273.15);
        }
        else printf("Error. Temp < 0 K");
    }
    break;
    case 'С':
    {
        if (inp_temp>=-273.15)
        {
            printf("%.2f F\n",(inp_temp*9/5)+32);
            printf("%.2f K\n",inp_temp+273.15);
        }
        else printf("Error. Temp < 0 K");
    }
    break;
    case 'F':
    {
        if ((inp_temp-32)*5/9>=0)
        {
            printf("%.2f C\n",(inp_temp-32)*5/9);
            printf("%.2f K\n",((inp_temp-32)*5/9)+273.15);
        }
        else printf("Error. Temp < 0 K");
    }
    break;
    case 'K':
    {
        if (inp_temp>=0)
        {
            printf("%.2f C\n",inp_temp-273.15);
            printf("%.2f F\n",((inp_temp-273.15)*9/5)+32);
        }
        else printf("Error. Temp < 0 K");
    }
    break;
    default:
    {
        if (argc >= 2)
        {
            if (inp_temp>=-273.15)
            {
                printf("%.2f C\n",inp_temp);
                printf("%.2f F\n",(inp_temp*9/5)+32);
                printf("%.2f K\n",inp_temp+273.15);
            }
            else printf("Error. Temp < 0 K");
        }
    }
    break;
    }
    return 0;
}
