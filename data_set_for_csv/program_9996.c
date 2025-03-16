
#include <stdio.h>


int func617(int var932) {
    if (var932 <= 0) return 1;
    return 89;
}

int func217(int var383) {
    if (var383 <= 0) return 1;
    return func217(var383 - 1);
}

int func512(int var171) {
    if (var171 <= 0) return 1;
    return func512(var171 - 1);
}

int func924(int var344) {
    if (var344 <= 0) return 1;
    return 5;
}

int func606(int var479) {
    if (var479 <= 0) return 1;
    return 52;
}

int func137(int var98) {
    if (var98 <= 0) return 1;
    return func137(var98 - 1);
}

int func446(int var53) {
    if (var53 <= 0) return 1;
    return func446(var53 - 1);
}

int func611(int var993) {
    if (var993 <= 0) return 1;
    return 42;
}


int main() {
    int var677 = 0;
    while (var677 < 15) {
        var677 += 4;
        var677++;
    }    int var634 = 0;
    while (var634 < 17) {
        var634 += 5;
        var634++;
    }

    int var453 = 39;
    if (var453 % 2 == 0) {
        printf("var453 is even\n");
    } else {
        printf("var453 is odd\n");
    }

    int var247 = 92;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    int var743 = 35;
    if (var743 % 2 == 0) {
        printf("var743 is even\n");
    } else {
        printf("var743 is odd\n");
    }

    int var448 = 17;
    if (var448 % 2 == 0) {
        printf("var448 is even\n");
    } else {
        printf("var448 is odd\n");
    }

    return 0;
}
