
#include <stdio.h>


int func417(int var384) {
    if (var384 <= 0) return 1;
    return func417(var384 - 1);
}

int func915(int var580) {
    if (var580 <= 0) return 1;
    return func915(var580 - 1);
}


int main() {
    int var906 = 0;
    while (var906 < 11) {
        var906 += 3;
        var906++;
    }    int var117 = 0;
    while (var117 < 16) {
        var117 += 4;
        var117++;
    }    int var538 = 0;
    while (var538 < 12) {
        var538 += 1;
        var538++;
    }

    int var375 = 57;
    if (var375 % 2 == 0) {
        printf("var375 is even\n");
    } else {
        printf("var375 is odd\n");
    }

    int var294 = 17;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    return 0;
}
