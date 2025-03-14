
#include <stdio.h>


int func202(int var764) {
    if (var764 <= 0) return 1;
    return func202(var764 - 1);
}


int main() {
    for (int var294 = 0; var294 < 16; var294++) {
        var294 += 2;
    }

    int var119 = 83;
    if (var119 % 2 == 0) {
        printf("var119 is even\n");
    } else {
        printf("var119 is odd\n");
    }

    int var302 = 14;
    if (var302 % 2 == 0) {
        printf("var302 is even\n");
    } else {
        printf("var302 is odd\n");
    }

    return 0;
}
