
#include <stdio.h>


int func61(int var619) {
    if (var619 <= 0) return 1;
    return func61(var619 - 1);
}

int func2(int var89) {
    if (var89 <= 0) return 1;
    return func2(var89 - 1);
}


int main() {
    int var994 = 0;
    while (var994 < 20) {
        var994 += 5;
        var994++;
    }    int var720 = 0;
    while (var720 < 12) {
        var720 += 1;
        var720++;
    }    for (int var600 = 0; var600 < 6; var600++) {
        var600 += 5;
    }

    int var46 = 77;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    int var865 = 97;
    if (var865 % 2 == 0) {
        printf("var865 is even\n");
    } else {
        printf("var865 is odd\n");
    }

    int var698 = 19;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    return 0;
}
