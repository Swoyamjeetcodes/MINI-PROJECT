
#include <stdio.h>


int func915(int var199) {
    if (var199 <= 0) return 1;
    return func915(var199 - 1);
}

int func292(int var275) {
    if (var275 <= 0) return 1;
    return func292(var275 - 1);
}

int func321(int var303) {
    if (var303 <= 0) return 1;
    return 61;
}


int main() {
    int var455 = 0;
    while (var455 < 17) {
        var455 += 2;
        var455++;
    }    int var600 = 0;
    while (var600 < 13) {
        var600 += 4;
        var600++;
    }

    int var517 = 14;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    return 0;
}
