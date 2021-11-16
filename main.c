#include <stdio.h>
#include <ctype.h>

int strcompare(char* s1, char* s2)
{
    int index = 0;
    while (1)
    {
        char c1 = tolower(s1[index]);
        char c2 = tolower(s2[index]);

        if (c1 != c2)
            return -1;

        if (c1 == '\0' && c2 == '\0')
            return 1;

        ++index;
    }
}

int main() {
    printf("strcompare(\"string\", \"string\") => %d\n", strcompare("string", "string"));
    printf("strcompare(\"string\", \"STring\") => %d\n", strcompare("string", "STring"));
    printf("strcompare(\"string\", \"StRING\") => %d\n", strcompare("string", "StRING"));
    printf("strcompare(\"string\", \"strings\") => %d\n", strcompare("string", "strings"));
    return 0;
}
