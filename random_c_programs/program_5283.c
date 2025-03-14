
#include <stdio.h>


int func414(int var575) {
    if (var575 <= 0) return 1;
    return func414(var575 - 1);
}

int func948(int var582) {
    if (var582 <= 0) return 1;
    return 5;
}

int func120(int var958) {
    if (var958 <= 0) return 1;
    return func120(var958 - 1);
}

int func380(int var920) {
    if (var920 <= 0) return 1;
    return func380(var920 - 1);
}


int main() {
    int var199 = 0;
    while (var199 < 18) {
        var199 += 4;
        var199++;
    }    for (int var568 = 0; var568 < 5; var568++) {
        var568 += 5;
    }    int var408 = 0;
    while (var408 < 6) {
        var408 += 3;
        var408++;
    }

    int var90 = 62;
    if (var90 % 2 == 0) {
        printf("var90 is even\n");
    } else {
        printf("var90 is odd\n");
    }

    int var146 = 84;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    return 0;
}
