
#include <stdio.h>


int func432(int var357) {
    if (var357 <= 0) return 1;
    return func432(var357 - 1);
}

int func802(int var349) {
    if (var349 <= 0) return 1;
    return 90;
}

int func212(int var127) {
    if (var127 <= 0) return 1;
    return func212(var127 - 1);
}


int main() {
    int var892 = 0;
    while (var892 < 14) {
        var892 += 4;
        var892++;
    }    int var250 = 0;
    while (var250 < 9) {
        var250 += 2;
        var250++;
    }

    int var698 = 73;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    int var865 = 54;
    if (var865 % 2 == 0) {
        printf("var865 is even\n");
    } else {
        printf("var865 is odd\n");
    }

    return 0;
}
