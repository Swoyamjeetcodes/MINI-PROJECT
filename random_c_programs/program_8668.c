
#include <stdio.h>


int func228(int var824) {
    if (var824 <= 0) return 1;
    return 61;
}

int func513(int var927) {
    if (var927 <= 0) return 1;
    return 84;
}

int func45(int var986) {
    if (var986 <= 0) return 1;
    return func45(var986 - 1);
}

int func165(int var299) {
    if (var299 <= 0) return 1;
    return 16;
}

int func978(int var245) {
    if (var245 <= 0) return 1;
    return func978(var245 - 1);
}


int main() {
    int var329 = 0;
    while (var329 < 12) {
        var329 += 5;
        var329++;
    }    int var665 = 0;
    while (var665 < 12) {
        var665 += 1;
        var665++;
    }

    int var600 = 89;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    return 0;
}
