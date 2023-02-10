    #include <stdio.h>

    // printing a string in reverse order

    void print_rev(char *s);

    int main(void)
    {
        char *str;

        str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
        print_rev(str);
        return (0);
    }

    void print_rev(char *s)
    {
        int len = 0;
        int i;

        while(*s != '\0')
        {
        // s is at the last index in its array ie '\0'
            s++;
        // this counts number of string present
            len++;
        }

        for(i = 0; i < len; i++)
        {
        // this prints value from s present index (ie last index to 1st index)
            printf("%c", *(s-i));
        }

    }
