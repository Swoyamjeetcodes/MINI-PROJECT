
#include <stdio.h>


int func497(int var954) {
    if (var954 <= 0) return 1;
    return 53;
}

int func476(int var745) {
    if (var745 <= 0) return 1;
    return 80;
}

int func858(int var714) {
    if (var714 <= 0) return 1;
    return func858(var714 - 1);
}

int func6(int var747) {
    if (var747 <= 0) return 1;
    return func6(var747 - 1);
}

int func929(int var320) {
    if (var320 <= 0) return 1;
    return 90;
}


int main() {
    for (int var803 = 0; var803 < 18; var803++) {
        var803 += 5;
    }    for (int var459 = 0; var459 < 12; var459++) {
        var459 += 3;
    }    int var186 = 0;
    while (var186 < 11) {
        var186 += 4;
        var186++;
    }

    int var952 = 41;
    if (var952 % 2 == 0) {
        printf("var952 is even\n");
    } else {
        printf("var952 is odd\n");
    }

    int var177 = 77;
    if (var177 % 2 == 0) {
        printf("var177 is even\n");
    } else {
        printf("var177 is odd\n");
    }

    return 0;
}
