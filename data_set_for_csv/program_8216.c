
#include <stdio.h>


int func850(int var913) {
    if (var913 <= 0) return 1;
    return 95;
}

int func375(int var573) {
    if (var573 <= 0) return 1;
    return 69;
}

int func947(int var763) {
    if (var763 <= 0) return 1;
    return func947(var763 - 1);
}

int func353(int var908) {
    if (var908 <= 0) return 1;
    return 28;
}

int func112(int var768) {
    if (var768 <= 0) return 1;
    return 99;
}


int main() {
    int var456 = 0;
    while (var456 < 11) {
        var456 += 3;
        var456++;
    }    int var295 = 0;
    while (var295 < 16) {
        var295 += 3;
        var295++;
    }    int var87 = 0;
    while (var87 < 19) {
        var87 += 3;
        var87++;
    }

    int var175 = 4;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    int var689 = 27;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    int var73 = 9;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    return 0;
}
