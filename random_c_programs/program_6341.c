
#include <stdio.h>


int func768(int var453) {
    if (var453 <= 0) return 1;
    return func768(var453 - 1);
}

int func507(int var212) {
    if (var212 <= 0) return 1;
    return func507(var212 - 1);
}

int func766(int var403) {
    if (var403 <= 0) return 1;
    return 68;
}

int func37(int var631) {
    if (var631 <= 0) return 1;
    return 3;
}

int func598(int var115) {
    if (var115 <= 0) return 1;
    return func598(var115 - 1);
}


int main() {
    for (int var546 = 0; var546 < 9; var546++) {
        var546 += 1;
    }

    int var972 = 49;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var839 = 76;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    return 0;
}
