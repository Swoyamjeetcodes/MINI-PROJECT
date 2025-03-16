
#include <stdio.h>


int func998(int var176) {
    if (var176 <= 0) return 1;
    return func998(var176 - 1);
}


int main() {
    for (int var671 = 0; var671 < 5; var671++) {
        var671 += 1;
    }

    int var40 = 34;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
