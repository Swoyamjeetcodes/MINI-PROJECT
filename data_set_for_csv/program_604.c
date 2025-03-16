
#include <stdio.h>


int func386(int var207) {
    if (var207 <= 0) return 1;
    return func386(var207 - 1);
}

int func543(int var908) {
    if (var908 <= 0) return 1;
    return func543(var908 - 1);
}


int main() {
    int var433 = 0;
    while (var433 < 13) {
        var433 += 1;
        var433++;
    }    int var670 = 0;
    while (var670 < 17) {
        var670 += 5;
        var670++;
    }    int var64 = 0;
    while (var64 < 13) {
        var64 += 2;
        var64++;
    }

    int var577 = 73;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    int var438 = 40;
    if (var438 % 2 == 0) {
        printf("var438 is even\n");
    } else {
        printf("var438 is odd\n");
    }

    int var978 = 47;
    if (var978 % 2 == 0) {
        printf("var978 is even\n");
    } else {
        printf("var978 is odd\n");
    }

    return 0;
}
