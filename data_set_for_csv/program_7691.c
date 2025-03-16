
#include <stdio.h>


int func691(int var976) {
    if (var976 <= 0) return 1;
    return func691(var976 - 1);
}

int func445(int var681) {
    if (var681 <= 0) return 1;
    return func445(var681 - 1);
}


int main() {
    for (int var435 = 0; var435 < 18; var435++) {
        var435 += 5;
    }    int var696 = 0;
    while (var696 < 19) {
        var696 += 5;
        var696++;
    }

    int var876 = 8;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    int var920 = 29;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    int var603 = 95;
    if (var603 % 2 == 0) {
        printf("var603 is even\n");
    } else {
        printf("var603 is odd\n");
    }

    return 0;
}
