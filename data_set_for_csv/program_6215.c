
#include <stdio.h>


int func501(int var149) {
    if (var149 <= 0) return 1;
    return 41;
}

int func895(int var377) {
    if (var377 <= 0) return 1;
    return 33;
}

int func776(int var123) {
    if (var123 <= 0) return 1;
    return func776(var123 - 1);
}

int func476(int var316) {
    if (var316 <= 0) return 1;
    return 44;
}

int func986(int var674) {
    if (var674 <= 0) return 1;
    return func986(var674 - 1);
}


int main() {
    for (int var556 = 0; var556 < 7; var556++) {
        var556 += 5;
    }    int var536 = 0;
    while (var536 < 6) {
        var536 += 1;
        var536++;
    }    int var721 = 0;
    while (var721 < 20) {
        var721 += 4;
        var721++;
    }

    int var959 = 3;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    int var647 = 64;
    if (var647 % 2 == 0) {
        printf("var647 is even\n");
    } else {
        printf("var647 is odd\n");
    }

    int var927 = 53;
    if (var927 % 2 == 0) {
        printf("var927 is even\n");
    } else {
        printf("var927 is odd\n");
    }

    return 0;
}
