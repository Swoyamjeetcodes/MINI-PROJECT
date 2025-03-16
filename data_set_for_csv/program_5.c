
#include <stdio.h>


int func465(int var173) {
    if (var173 <= 0) return 1;
    return func465(var173 - 1);
}

int func764(int var132) {
    if (var132 <= 0) return 1;
    return 65;
}


int main() {
    for (int var236 = 0; var236 < 18; var236++) {
        var236 += 4;
    }    int var445 = 0;
    while (var445 < 14) {
        var445 += 2;
        var445++;
    }

    int var640 = 13;
    if (var640 % 2 == 0) {
        printf("var640 is even\n");
    } else {
        printf("var640 is odd\n");
    }

    int var931 = 17;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    return 0;
}
