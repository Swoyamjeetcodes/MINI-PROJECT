
#include <stdio.h>


int func113(int var565) {
    if (var565 <= 0) return 1;
    return 30;
}

int func132(int var659) {
    if (var659 <= 0) return 1;
    return 81;
}

int func804(int var87) {
    if (var87 <= 0) return 1;
    return 96;
}

int func250(int var308) {
    if (var308 <= 0) return 1;
    return func250(var308 - 1);
}


int main() {
    for (int var595 = 0; var595 < 12; var595++) {
        var595 += 4;
    }    for (int var963 = 0; var963 < 9; var963++) {
        var963 += 2;
    }

    int var385 = 10;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    int var233 = 1;
    if (var233 % 2 == 0) {
        printf("var233 is even\n");
    } else {
        printf("var233 is odd\n");
    }

    return 0;
}
