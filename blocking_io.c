#include <stdio.h>
#include <string.h>

long count_evens_from_1_to_5billion()
{
    long count = 0;
    for (long i = 0; i < 5e9; i++)
    {
        if (count % 2 == 0)
            ++count;
    }
    return count;
}

int main()
{
    char name[100];

    printf("What's your name?\n");
    printf("> ");
    fgets(name, sizeof(name), stdin);

    // remove newline character that fgets adds
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    long res = count_evens_from_1_to_5billion();
    printf("Hello, %s!\n Did you know that there are %ld even numbers from 1 to 1,000,000,000?\n", name, res);
}