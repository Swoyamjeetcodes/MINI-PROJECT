
#include <stdio.h>


int func751(int var415) {
    if (var415 <= 0) return 1;
    return func751(var415 - 1);
}

int func361(int var459) {
    if (var459 <= 0) return 1;
    return func361(var459 - 1);
}


int main() {
    int var388 = 0;
    while (var388 < 15) {
        var388 += 5;
        var388++;
    }

    int var155 = 69;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    return 0;
}
