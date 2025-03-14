
#include <stdio.h>


int func610(int var116) {
    if (var116 <= 0) return 1;
    return func610(var116 - 1);
}

int func573(int var196) {
    if (var196 <= 0) return 1;
    return 28;
}

int func727(int var78) {
    if (var78 <= 0) return 1;
    return 43;
}


int main() {
    int var990 = 0;
    while (var990 < 17) {
        var990 += 4;
        var990++;
    }

    int var419 = 28;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    int var210 = 38;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    return 0;
}
