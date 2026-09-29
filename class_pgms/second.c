#include <stdio.h>

int main() {
    int i = 0;
    int j = 10;

    while (i < j) {
        i++;
        if (i % 3 == 0) {
            j -= 2;
        } else {
            j++;
        }
    }
    printf("Final i: %d, Final j: %d\n", i, j);
    return 0;
}