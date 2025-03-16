
#include <stdio.h>


int func92(int var914) {
    if (var914 <= 0) return 1;
    return func92(var914 - 1);
}


int main() {
    int var961 = 0;
    while (var961 < 7) {
        var961 += 2;
        var961++;
    }

    int var931 = 4;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    int var496 = 1;
    if (var496 % 2 == 0) {
        printf("var496 is even\n");
    } else {
        printf("var496 is odd\n");
    }

    int var485 = 94;
    if (var485 % 2 == 0) {
        printf("var485 is even\n");
    } else {
        printf("var485 is odd\n");
    }

    return 0;
}
