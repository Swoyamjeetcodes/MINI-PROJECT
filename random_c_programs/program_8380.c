
#include <stdio.h>


int func51(int var620) {
    if (var620 <= 0) return 1;
    return func51(var620 - 1);
}

int func101(int var898) {
    if (var898 <= 0) return 1;
    return func101(var898 - 1);
}


int main() {
    int var670 = 0;
    while (var670 < 15) {
        var670 += 5;
        var670++;
    }

    int var248 = 90;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    int var222 = 42;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    int var589 = 44;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    return 0;
}
