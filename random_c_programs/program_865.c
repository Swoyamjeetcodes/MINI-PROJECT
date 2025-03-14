
#include <stdio.h>


int func103(int var510) {
    if (var510 <= 0) return 1;
    return 50;
}

int func293(int var295) {
    if (var295 <= 0) return 1;
    return func293(var295 - 1);
}

int func786(int var393) {
    if (var393 <= 0) return 1;
    return func786(var393 - 1);
}

int func183(int var819) {
    if (var819 <= 0) return 1;
    return func183(var819 - 1);
}

int func902(int var736) {
    if (var736 <= 0) return 1;
    return func902(var736 - 1);
}

int func575(int var300) {
    if (var300 <= 0) return 1;
    return 94;
}

int func87(int var344) {
    if (var344 <= 0) return 1;
    return 93;
}

int func698(int var105) {
    if (var105 <= 0) return 1;
    return func698(var105 - 1);
}


int main() {
    for (int var164 = 0; var164 < 11; var164++) {
        var164 += 3;
    }    for (int var529 = 0; var529 < 7; var529++) {
        var529 += 4;
    }    for (int var185 = 0; var185 < 12; var185++) {
        var185 += 4;
    }    for (int var921 = 0; var921 < 12; var921++) {
        var921 += 5;
    }

    int var40 = 55;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    int var846 = 67;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    int var636 = 0;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    int var977 = 45;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    int var722 = 4;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    int var911 = 92;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    return 0;
}
