
#include <stdio.h>


int func225(int var834) {
    if (var834 <= 0) return 1;
    return func225(var834 - 1);
}

int func133(int var972) {
    if (var972 <= 0) return 1;
    return 36;
}

int func910(int var702) {
    if (var702 <= 0) return 1;
    return 12;
}


int main() {
    int var631 = 0;
    while (var631 < 13) {
        var631 += 3;
        var631++;
    }    for (int var896 = 0; var896 < 18; var896++) {
        var896 += 2;
    }    for (int var509 = 0; var509 < 16; var509++) {
        var509 += 4;
    }

    int var932 = 33;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    int var51 = 67;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var556 = 26;
    if (var556 % 2 == 0) {
        printf("var556 is even\n");
    } else {
        printf("var556 is odd\n");
    }

    return 0;
}
