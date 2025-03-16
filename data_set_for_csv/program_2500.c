
#include <stdio.h>


int func908(int var482) {
    if (var482 <= 0) return 1;
    return func908(var482 - 1);
}

int func994(int var71) {
    if (var71 <= 0) return 1;
    return func994(var71 - 1);
}


int main() {
    for (int var118 = 0; var118 < 10; var118++) {
        var118 += 1;
    }    for (int var87 = 0; var87 < 19; var87++) {
        var87 += 4;
    }

    int var769 = 58;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    int var912 = 61;
    if (var912 % 2 == 0) {
        printf("var912 is even\n");
    } else {
        printf("var912 is odd\n");
    }

    return 0;
}
