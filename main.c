#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    FILE *f;
    f = fopen("degree.txt","a");
    if(f == NULL)
    {
        printf("FILE NOT OPEN");
    }
    printf("Entrer les differentes valeurs\n");
    printf("a:\t");
    scanf("%f",&a);
    printf("b:\t");
    scanf("%f",&b);
    printf("c:\t");
    scanf("%f",&c);
    float d,r;
    fprintf(f,"les valeurs entrees sont : %f %f %f\n",a,b,c);
    d = (b*b)-(4*a*c);
    r = sqrt(d);

    if(d==0)
    {
        float X1;
        printf("%f\n",d);
        printf("nous avons une solution :\n");
        X1 = (-b)/(2*a);
        printf("la solution donne : %f",X1);
        fprintf(f,"nous avons une solution :\t  %f",X1);
    }
    if(d>0)
    {
        printf("%f\n",d);
        float X1,X2;
        X1 = ((-b)-r)/(2*a);
        X2 = ((-b)+r)/(2*a);
        printf("Nous avons deux solutions possible :%f %f\n",X1,X2);
        fprintf(f,"Les deux possibles sont :\t %f %f\n",X1,X2);
    }
    if(d<0)
    {
        printf("%f\n",d);
        printf("nous n'avons pas de solution\n");
    }
    fclose(f);
    return 0;
}
