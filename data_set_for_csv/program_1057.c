
#include <stdio.h>


int func924(int var566) {
    if (var566 <= 0) return 1;
    return func924(var566 - 1);
}

int func644(int var796) {
    if (var796 <= 0) return 1;
    return 45;
}


int main() {
    int var390 = 0;
    while (var390 < 8) {
        var390 += 2;
        var390++;
    }    int var903 = 0;
    while (var903 < 9) {
        var903 += 4;
        var903++;
    }

    int var95 = 49;
    if (var95 % 2 == 0) {
        printf("var95 is even\n");
    } else {
        printf("var95 is odd\n");
    }

    int var889 = 56;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    int var621 = 81;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    return 0;
}
