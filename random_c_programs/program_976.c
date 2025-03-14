
#include <stdio.h>


int func693(int var123) {
    if (var123 <= 0) return 1;
    return 16;
}

int func759(int var964) {
    if (var964 <= 0) return 1;
    return func759(var964 - 1);
}

int func536(int var196) {
    if (var196 <= 0) return 1;
    return 100;
}


int main() {
    int var912 = 0;
    while (var912 < 11) {
        var912 += 2;
        var912++;
    }    int var713 = 0;
    while (var713 < 8) {
        var713 += 1;
        var713++;
    }

    int var582 = 94;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    int var549 = 20;
    if (var549 % 2 == 0) {
        printf("var549 is even\n");
    } else {
        printf("var549 is odd\n");
    }

    int var320 = 52;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    return 0;
}
