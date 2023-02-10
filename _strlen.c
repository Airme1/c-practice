    #include <stdio.h>
    //Fxn to return length of string

    int _strlen(char *s);

    int main(void)
    {
        char *str;
        int len;

        str = "My first strlen!";
        len = _strlen(str); // sending the address here
        printf("%d\n", len);
        return (0);
    }

    int _strlen(char *s) // *s is redirection to the string's values
    {
        int len = 0;
        while(*s != '\0') // string count stops at end of string
        {
            s++; // here I am moving the address to the next string
            len++; // this is updating the number of strings counted
        }
        return len;
    }
