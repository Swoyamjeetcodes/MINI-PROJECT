
#include <stdio.h>


int func600(int var986) {
    if (var986 <= 0) return 1;
    return 46;
}

int func2(int var179) {
    if (var179 <= 0) return 1;
    return 58;
}

int func555(int var445) {
    if (var445 <= 0) return 1;
    return func555(var445 - 1);
}


int main() {
    int var975 = 0;
    while (var975 < 11) {
        var975 += 4;
        var975++;
    }    int var59 = 0;
    while (var59 < 9) {
        var59 += 4;
        var59++;
    }

    int var92 = 58;
    if (var92 % 2 == 0) {
        printf("var92 is even\n");
    } else {
        printf("var92 is odd\n");
    }

    int var187 = 86;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    int var567 = 62;
    if (var567 % 2 == 0) {
        printf("var567 is even\n");
    } else {
        printf("var567 is odd\n");
    }

    return 0;
}
