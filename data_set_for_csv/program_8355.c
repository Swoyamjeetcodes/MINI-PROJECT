
#include <stdio.h>


int func575(int var86) {
    if (var86 <= 0) return 1;
    return 75;
}

int func81(int var141) {
    if (var141 <= 0) return 1;
    return func81(var141 - 1);
}

int func666(int var689) {
    if (var689 <= 0) return 1;
    return func666(var689 - 1);
}

int func779(int var152) {
    if (var152 <= 0) return 1;
    return func779(var152 - 1);
}

int func121(int var953) {
    if (var953 <= 0) return 1;
    return 46;
}


int main() {
    for (int var2 = 0; var2 < 16; var2++) {
        var2 += 4;
    }

    int var771 = 48;
    if (var771 % 2 == 0) {
        printf("var771 is even\n");
    } else {
        printf("var771 is odd\n");
    }

    int var213 = 4;
    if (var213 % 2 == 0) {
        printf("var213 is even\n");
    } else {
        printf("var213 is odd\n");
    }

    return 0;
}
