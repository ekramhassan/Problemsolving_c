#include <stdio.h>

int main() {
    int value;

    printf("Enter an integer value with a percentage sign: ");
    scanf("%d%%", &value);

    printf("You entered: %d\n", value);

    return 0;
}
