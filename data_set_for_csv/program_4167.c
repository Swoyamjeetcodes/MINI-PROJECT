
#include <stdio.h>


int func885(int var620) {
    if (var620 <= 0) return 1;
    return func885(var620 - 1);
}

int func448(int var904) {
    if (var904 <= 0) return 1;
    return 95;
}

int func742(int var195) {
    if (var195 <= 0) return 1;
    return func742(var195 - 1);
}

int func3(int var823) {
    if (var823 <= 0) return 1;
    return 66;
}


int main() {
    for (int var400 = 0; var400 < 12; var400++) {
        var400 += 2;
    }

    int var979 = 5;
    if (var979 % 2 == 0) {
        printf("var979 is even\n");
    } else {
        printf("var979 is odd\n");
    }

    int var740 = 10;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    int var37 = 96;
    if (var37 % 2 == 0) {
        printf("var37 is even\n");
    } else {
        printf("var37 is odd\n");
    }

    return 0;
}
