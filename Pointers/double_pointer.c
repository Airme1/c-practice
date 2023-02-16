    #include <stdio.h>

    int main()
    {
        int num = 123;

        int *pr2;

        //A double pointer
        int **pr1;

        pr2 = &num;

        pr1 = &pr2;

        // finding value of num
        printf("\n Value of num is %d", num);
        printf("\n Value of num is %d", *pr2);
        printf("\n Value of num is %d", **pr1);

        // finding address of num
        printf("\n Address of num is %p", &num);
        printf("\n Address of num is %p", pr2);
        printf("\n Address of num is %p", *pr1);

        // find value of pointer
        printf("\n Value of pr2 is %p", pr2);
        printf("\n Value of pr2 is %p", *pr1);
        printf("\n Address of pr2 is %p", &pr2);
        printf("\n Value of pr1 is %p", pr1);

        return 0;
    }
