
#include <stdio.h>


int func751(int var658) {
    if (var658 <= 0) return 1;
    return func751(var658 - 1);
}

int func728(int var53) {
    if (var53 <= 0) return 1;
    return func728(var53 - 1);
}


int main() {
    for (int var93 = 0; var93 < 6; var93++) {
        var93 += 4;
    }    for (int var457 = 0; var457 < 9; var457++) {
        var457 += 5;
    }    for (int var866 = 0; var866 < 20; var866++) {
        var866 += 2;
    }

    int var476 = 78;
    if (var476 % 2 == 0) {
        printf("var476 is even\n");
    } else {
        printf("var476 is odd\n");
    }

    int var783 = 3;
    if (var783 % 2 == 0) {
        printf("var783 is even\n");
    } else {
        printf("var783 is odd\n");
    }

    return 0;
}
