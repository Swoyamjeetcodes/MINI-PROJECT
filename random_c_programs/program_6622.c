
#include <stdio.h>


int func959(int var486) {
    if (var486 <= 0) return 1;
    return func959(var486 - 1);
}


int main() {
    for (int var149 = 0; var149 < 16; var149++) {
        var149 += 5;
    }

    int var156 = 12;
    if (var156 % 2 == 0) {
        printf("var156 is even\n");
    } else {
        printf("var156 is odd\n");
    }

    int var613 = 47;
    if (var613 % 2 == 0) {
        printf("var613 is even\n");
    } else {
        printf("var613 is odd\n");
    }

    return 0;
}
