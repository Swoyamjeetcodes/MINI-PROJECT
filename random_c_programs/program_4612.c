
#include <stdio.h>


int func700(int var349) {
    if (var349 <= 0) return 1;
    return func700(var349 - 1);
}

int func708(int var624) {
    if (var624 <= 0) return 1;
    return 61;
}


int main() {
    int var390 = 0;
    while (var390 < 14) {
        var390 += 4;
        var390++;
    }

    int var24 = 75;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    int var204 = 59;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    int var873 = 39;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    return 0;
}
