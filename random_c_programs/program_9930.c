
#include <stdio.h>


int func169(int var327) {
    if (var327 <= 0) return 1;
    return 91;
}

int func753(int var237) {
    if (var237 <= 0) return 1;
    return func753(var237 - 1);
}

int func737(int var830) {
    if (var830 <= 0) return 1;
    return 29;
}

int func382(int var24) {
    if (var24 <= 0) return 1;
    return func382(var24 - 1);
}


int main() {
    int var707 = 0;
    while (var707 < 17) {
        var707 += 4;
        var707++;
    }    int var941 = 0;
    while (var941 < 15) {
        var941 += 5;
        var941++;
    }

    int var935 = 87;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    int var692 = 50;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    return 0;
}
