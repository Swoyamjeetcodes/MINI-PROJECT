
#include <stdio.h>


int func618(int var58) {
    if (var58 <= 0) return 1;
    return 39;
}

int func145(int var544) {
    if (var544 <= 0) return 1;
    return func145(var544 - 1);
}

int func434(int var258) {
    if (var258 <= 0) return 1;
    return func434(var258 - 1);
}

int func779(int var912) {
    if (var912 <= 0) return 1;
    return func779(var912 - 1);
}

int func958(int var221) {
    if (var221 <= 0) return 1;
    return func958(var221 - 1);
}


int main() {
    for (int var783 = 0; var783 < 11; var783++) {
        var783 += 1;
    }

    int var485 = 62;
    if (var485 % 2 == 0) {
        printf("var485 is even\n");
    } else {
        printf("var485 is odd\n");
    }

    int var923 = 96;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    return 0;
}
