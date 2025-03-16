
#include <stdio.h>


int func622(int var667) {
    if (var667 <= 0) return 1;
    return func622(var667 - 1);
}

int func922(int var913) {
    if (var913 <= 0) return 1;
    return func922(var913 - 1);
}

int func10(int var551) {
    if (var551 <= 0) return 1;
    return func10(var551 - 1);
}

int func546(int var881) {
    if (var881 <= 0) return 1;
    return func546(var881 - 1);
}

int func951(int var615) {
    if (var615 <= 0) return 1;
    return 34;
}


int main() {
    int var883 = 0;
    while (var883 < 9) {
        var883 += 3;
        var883++;
    }

    int var986 = 52;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    int var271 = 89;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    int var103 = 79;
    if (var103 % 2 == 0) {
        printf("var103 is even\n");
    } else {
        printf("var103 is odd\n");
    }

    return 0;
}
