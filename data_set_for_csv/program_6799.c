
#include <stdio.h>


int func743(int var20) {
    if (var20 <= 0) return 1;
    return 39;
}

int func322(int var101) {
    if (var101 <= 0) return 1;
    return func322(var101 - 1);
}

int func159(int var5) {
    if (var5 <= 0) return 1;
    return func159(var5 - 1);
}


int main() {
    for (int var568 = 0; var568 < 16; var568++) {
        var568 += 1;
    }    for (int var976 = 0; var976 < 9; var976++) {
        var976 += 2;
    }

    int var404 = 69;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    int var905 = 39;
    if (var905 % 2 == 0) {
        printf("var905 is even\n");
    } else {
        printf("var905 is odd\n");
    }

    return 0;
}
