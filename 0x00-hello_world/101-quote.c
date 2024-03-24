#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char name[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(1, name, strlen(name));
    exit(1);
}
