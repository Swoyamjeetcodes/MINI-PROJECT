
#include <stdio.h>


int func332(int var904) {
    if (var904 <= 0) return 1;
    return func332(var904 - 1);
}

int func818(int var729) {
    if (var729 <= 0) return 1;
    return func818(var729 - 1);
}

int func68(int var930) {
    if (var930 <= 0) return 1;
    return func68(var930 - 1);
}

int func306(int var715) {
    if (var715 <= 0) return 1;
    return 34;
}

int func73(int var891) {
    if (var891 <= 0) return 1;
    return 85;
}


int main() {
    for (int var208 = 0; var208 < 8; var208++) {
        var208 += 2;
    }    int var867 = 0;
    while (var867 < 20) {
        var867 += 2;
        var867++;
    }

    int var775 = 51;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    int var920 = 64;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    return 0;
}
