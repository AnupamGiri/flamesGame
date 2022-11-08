#include <stdio.h>

#include <string.h>

void main()

{

    int i, j, k, l = 1, n, m, sc = 0, tc, rc = 0, fc = 5;

    char a[25], b[25], q[25], w[25], c;

    char f[] = "flames";


    printf("Enter your name : ");

    scanf("%s", a);

    printf("Enter your partner's name : ");

    scanf("%s", b);

    strcpy(q, a);

    strcpy(w, b);

    n = strlen(a);

    m = strlen(b);

    tc = n + m;

    for (i = 0; i < n; i++)

    {

        c = a[i];

        for (j = 0; j < m; j++)

        {

            if (c == b[j])

            {

                a[i] = -1;

                b[j] = -1;

                sc = sc + 2;

                break;
            }
        }
    }

    rc = tc - sc;

    for (i = 0;; i++)

    {

        if (l == (rc))

        {

            for (k = i; f[k] != '\0'; k++)

            {

                f[k] = f[k + 1];
            }

            f[k + 1] = '\0';

            fc = fc - 1;

            i = i - 1;

            l = 0;
        }

        if (i == fc)

        {

            i = -1;
        }

        if (fc == 0)

        {

            break;
        }

        l++;
    }

    if (f[0] == 'e'){
        printf("%s is ENEMY to %s ", q, w);
        printf("Pehli fursat me nikal");
    }

    else if (f[0] == 'f'){
        printf("!!!! FRIENDZONED !!!! ");
        printf("%s is FRIEND to %s ", q, w);
    }

    else if (f[0] == 'm'){
        printf("Plan your honeymoon ");
        printf("you are gonna MARRY %s" ,w);
    }

    else if (f[0] == 'l'){
        printf("Go get %s ", w);
        printf("Your are in LOVE with %s ", w);
    }

    else if (f[0] == 'a'){
        printf("Move on bruhh, try somewhere else.\n");
        printf("You have AFFECTION on %s ", w);
    }

    else{
        printf("Wish each other on Rakshabandhan, ");
        printf("%s and %s are SISTERS/BROTHERS ", q, w);
    }

}
