#include <stdio.h>

int main()
{

    double s = 0.0;
    double resultExpo = 1.0;
    int expo = 0;

    for (int i = 1; i <= 39; i = i + 2)
    {
        resultExpo = 1.0;
        for (int j = 0; j < expo; j++)
        {
            resultExpo = resultExpo * 2.0;
        }
        
        s = s + (i / resultExpo);

        expo++;
    }

    printf("%.2lf\n", s);

    return 0;
}