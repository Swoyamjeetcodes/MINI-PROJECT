
#include <stdio.h>


int func695(int var568) {
    if (var568 <= 0) return 1;
    return func695(var568 - 1);
}

int func58(int var670) {
    if (var670 <= 0) return 1;
    return 25;
}

int func994(int var237) {
    if (var237 <= 0) return 1;
    return func994(var237 - 1);
}

int func170(int var955) {
    if (var955 <= 0) return 1;
    return func170(var955 - 1);
}


int main() {
    int var15 = 0;
    while (var15 < 7) {
        var15 += 1;
        var15++;
    }

    int var103 = 37;
    if (var103 % 2 == 0) {
        printf("var103 is even\n");
    } else {
        printf("var103 is odd\n");
    }

    int var253 = 65;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    int var648 = 85;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    return 0;
}
