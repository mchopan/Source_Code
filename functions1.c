#include <stdio.h>

add()
{
    int x, y, z, output;
    printf("enter the number: ");
    scanf("%d", &x);

    printf("enter the  2nd number to add: ");
    scanf("%d", &y);

    printf("enter the another number to add: ");
    scanf("%d", &z);

    output = x + y + z;
    printf("the addtion of %d + %d + %d = %d\n", x, y, z, output);
}
sub()
{
    int x, y, z, output;
    printf("enter the number: ");
    scanf("%d", &x);

    printf("enter the  2nd number to Subtract: ");
    scanf("%d", &y);

    output = x - y;
    printf("the Subtraction of %d - %d = %d\n", x, y, output);
}
div()
{
    int a, b, c;
    printf("enter a numbers:\n");
    scanf("%d", &a);
    printf("enter the second numbers:\n");
    scanf("%d", &b);
    c = a / b;
    printf("the devision of %d and  %d is %d\n", a, b, c);
}
max()
{
    int x, y;
    printf("enter the first number: ");
    scanf("%d", &x);
    printf("enter the Second number: ");
    scanf("%d", &y);
    if (x > y)
    {
        printf("%d is the maximun number between %d and %d\n", x, x, y);
    }
    else if (x == y)
    {
        printf("you have entered the same numbers, Non Sense!\n");
    }
    else
    {
        printf("%d is the maximun number between %d and %d\n", y, y, x);
    }
}

min()
{
    int x, y;
    printf("enter your number:");
    scanf("%d", &x);
    printf("enter the second number: ");
    scanf("%d", &y);
    if (x < y)
    {
        printf("the smaller number between %d and %d is %d\n", y, x, x);
    }
    else if (x == y)
    {
        printf("A blind man can say those are same numbers, you dump\n");
    }
    else
    {
        printf("the samller number between %d and %d is %d\n", y, x, y);
    }
}

watch()
{
    int h, m, s;
    h = 0;
    m = 0;
    s = 0;
    while (h <= 23)
    {
        while (m <= 59)
        {
            while (s <= 59)
            {
                printf("%d,%d,%d\n", h, m, s);
                s++;
            }
            s = 0;
            m++;
        }
        m = 0;
        h++;
    }
    h = 0;
}

fac()
{
    int n, y, r;
    printf("enter the number: ");
    scanf("%d", &n);
    y = n;
    if (n == 0)
        printf("The factoral of your input is 1\n");
    else
    {
        while (y > 1)
        {
            y--;
            r = n * y;
            n = r;
        }
        printf("The factoral of your input is %d\n", r);
    }
}

fib()
{
    int x, y, z, a;
    y = 0;
    z = 1;
    printf("To know the febnocci serice between 0 and any input you give\n");
    scanf("%d", &x);
    while (y <= x)
    {
        printf("%d ", y);
        a = y + z;
        y = z;
        z = a;
    }
    printf("\n");
}

main()
{
    int number, x = 1;
    while (x == 1)
    {
        printf("Enter 1 for Addition\n");
        printf("Enter 2 for Subtraction\n");
        printf("Enter 3 for Devision\n");
        printf("Enter 4 for Maximum\n");
        printf("Enter 5 for Minimum\n");
        printf("Enter 6 for digital Watch, to stop the watch use ctrl+c\n");
        printf("Enter 7 for Factoral\n");
        printf("Enter 8 for fibnocci\n");
        printf("Enter 9 for exit\n");
        scanf("%d", &number);
        switch (number)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            div();
            break;
        case 4:
            max();
            break;
        case 5:
            min();
            break;
        case 6:
            watch();
            break;
        case 7:
            fac();
            break;
        case 8:
            fib();
            break;
        case 9:
            return 0;
        default:
            printf("Opps! you have entered a wrong input\n");
            break;
        }
    }
}