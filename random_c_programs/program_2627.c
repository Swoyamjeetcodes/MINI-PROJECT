
#include <stdio.h>


int func146(int var564) {
    if (var564 <= 0) return 1;
    return func146(var564 - 1);
}

int func974(int var438) {
    if (var438 <= 0) return 1;
    return 48;
}

int func11(int var802) {
    if (var802 <= 0) return 1;
    return func11(var802 - 1);
}


int main() {
    int var961 = 0;
    while (var961 < 17) {
        var961 += 3;
        var961++;
    }

    int var509 = 31;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    int var659 = 16;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    return 0;
}
