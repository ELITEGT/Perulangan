#include<stdio.h>

int main()
{
    int a, b, i, j, k, l, m, n;
    int Tinggi;
    int Arah;

    do{
        printf("1. RUMAH\n");
        printf("2. ARAH JALAN\n");
        printf("3. KELUAR\n");
        printf("Masukan pilihan :   ");
        scanf ("%i" , &a);
        switch (a)
        {
        case 1:
                printf("===== MENU RUMAH =====\n");
                printf("MASUKAN TINGGI RUMAH :   ");
                scanf("%i" , &a);
//cerobong
        for(i=0; i<=a+1; i++)
        {
            for(j=0; j<a; j++ )
            {
                printf(" ");
            }
            for(k=0; k<=a+1; k++)
                {
                    printf("|");
                }
                    printf("\n");
                }
//atap

    for(i=0; i<=a; i++)
        {
            for(j=0; j<a-i; j++)
            {
                printf(" ");
            }
            for(k=0; k<(a*4)+1; k++)
                {
                    printf("E");
                }
            for (l=a; l<=2*a+a; l++)

        {
            if (l>= a && l<= a+(i*2))
        {
            printf("^");
        }

            else

        {
             printf(" ");
        }

        }
        printf("\n");
    }
//pondasi

                for (m=0; m<a+1; m++)
                {
                    for(b=0; b<(4*a)+1; b++)
                        {
                            printf("L");
                        }
                    for(n=0; n<(2*a)+1; n++)
                        {
                            printf("L");
                        }
                            printf("\n");
                        }

//balik

    printf("===== DIBALIK =====\n");
    printf("===== 1.YES =====");
    printf("===== 2.NO =====");
    scanf("%i", &l);

            switch (l)
            {
              case 1:
                printf("===== RUMAH BALIK =====\n");

            for(i=0; i<=a+1; i++)
            {
                for(j=0; j<=(4*a)+1; j++ )
                {
                printf(" ");
                }
            for(k=0; k<=a+1; k++)
            {
            printf("|");
            }
            printf("\n");
            }
                for(i=0; i<=a; i++)
                    {
                        for(j=0; j<=a-i; j++)
                    {
                printf(" ");
            }
            for (l=a; l<=2*a+a; l++)
            {
                if (l>= a && l<= a+(i*2))
                {
                    printf("^");
                }
            }
            for(k=0; k<=(a*4)+1; k++)
            {
            printf("E");
            }
            printf("\n");
            }
                for (m=0; m<=a+1; m++)
                    {
                    for(n=0; n<=(2*a)+1; n++)
                    {
                        printf("L");
                    }
                for(b=0; b<=(4*a)+1; b++)
                    {
                        printf("L");
                    }
                        printf("\n");
                    }

            break;
            case 2:
                printf("\n ULANGI \n");
                break;
            default :
                printf("\n ULANGI \n");

            }
            break;
        case 2:
            printf("\n===== MENU ARAH JALAN =====\n");
            printf("1. JALAN LURUS\n");
            printf("2. JALAN MIRING KANAN\n");
            printf("3. JALAN MIRING KEKIRI\n");
            printf("MASUKAN JALAN NOMER BERAPA:   ");
            scanf("%i" , &Arah);

            switch (Arah)
            {
            case 1:
                printf("\n===== JALAN LURUS =====\n");

                for(i=0; i<=5; i++)
                    {
                        for(j=0; j<=5; j++)
                        {
                            printf(" ");
                        }
                        for(k=0; k<=0; k++)
                        {
                            printf("|");
                        }
                        for(l=0; l<=2; l++)
                        {
                            printf(" ");
                        }
            if(i % 2==0)
                        {
                        printf("|");
                        }
                        else
                        printf(" ");

                    for(m=0; m<=2; m++)
                    {
                        printf(" ");
                    }
                        for(k=0; k<=0; k++)
                        {
                            printf("|");
                        }
                            printf("\n");
                        }
            break;
            case 2:
                printf("\n===== JALAN kekanannn =====\n");
                    for(i=0; i<=5; i++)
                    {
                        for(j=0; j<=5-i; j++)
                        {
                            printf(" ");
                        }

                        for(k=0; k<=0; k++)

                        {
                            printf("/");
                        }

                        for(l=0; l<=2; l++)
                                {
                                    printf(" ");
                                }
                    if(i % 2==0)
                        {
                            printf("/");
                        }
                else
                            printf(" ");

                        for(m=0; m<=2; m++)
                            {
                                printf(" ");
                            }
                                for(k=0; k<=0; k++)
                                {
                                    printf("/");
                                }
                                    printf("\n");
                                }
            break;
            case 3:
                printf("\n===== JALAN kekiri =====\n");
                for(i=0; i<=5; i++)
                    {
                        for(j=0; j<=5+(i-5); j++)
                        {
                            printf(" ");
                        }
                        for(k=0; k<=0; k++)
                        {
                            printf("\\");
                        }
                        for(l=0; l<=2; l++)
                        {
                            printf(" ");
                        }
                if(i % 2==0)
                        {
                            printf("\\");
                        }
                        else

                            printf(" ");
                for(m=0; m<=2; m++)
                {
                    printf(" ");
                }
                        for(k=0; k<=0; k++)
                {
                        printf("\\");
                }
                        printf("\n");
                }

        }
            break;
            default :
                printf("\n===== ULANGI  =====\n");
       }

    }while(a != 0);

}
