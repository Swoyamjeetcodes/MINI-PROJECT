
#include <stdio.h>


int func915(int var579) {
    if (var579 <= 0) return 1;
    return func915(var579 - 1);
}


int main() {
    for (int var734 = 0; var734 < 7; var734++) {
        var734 += 3;
    }

    int var101 = 49;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    return 0;
}
