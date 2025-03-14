
#include <stdio.h>


int func26(int var220) {
    if (var220 <= 0) return 1;
    return 63;
}

int func557(int var653) {
    if (var653 <= 0) return 1;
    return func557(var653 - 1);
}

int func296(int var372) {
    if (var372 <= 0) return 1;
    return func296(var372 - 1);
}


int main() {
    int var892 = 0;
    while (var892 < 8) {
        var892 += 2;
        var892++;
    }    int var726 = 0;
    while (var726 < 8) {
        var726 += 4;
        var726++;
    }    int var72 = 0;
    while (var72 < 16) {
        var72 += 3;
        var72++;
    }

    int var497 = 14;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    int var473 = 46;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    return 0;
}
