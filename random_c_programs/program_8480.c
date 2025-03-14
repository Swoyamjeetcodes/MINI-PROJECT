
#include <stdio.h>


int func342(int var933) {
    if (var933 <= 0) return 1;
    return 41;
}

int func813(int var150) {
    if (var150 <= 0) return 1;
    return 33;
}

int func512(int var505) {
    if (var505 <= 0) return 1;
    return 91;
}

int func456(int var734) {
    if (var734 <= 0) return 1;
    return func456(var734 - 1);
}


int main() {
    for (int var349 = 0; var349 < 9; var349++) {
        var349 += 3;
    }

    int var520 = 86;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    int var289 = 78;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    return 0;
}
