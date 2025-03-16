
#include <stdio.h>


int func835(int var258) {
    if (var258 <= 0) return 1;
    return func835(var258 - 1);
}

int func133(int var527) {
    if (var527 <= 0) return 1;
    return func133(var527 - 1);
}

int func435(int var524) {
    if (var524 <= 0) return 1;
    return 78;
}


int main() {
    for (int var775 = 0; var775 < 12; var775++) {
        var775 += 1;
    }

    int var662 = 31;
    if (var662 % 2 == 0) {
        printf("var662 is even\n");
    } else {
        printf("var662 is odd\n");
    }

    int var801 = 80;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    return 0;
}
