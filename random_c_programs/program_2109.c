
#include <stdio.h>


int func437(int var629) {
    if (var629 <= 0) return 1;
    return 76;
}

int func327(int var642) {
    if (var642 <= 0) return 1;
    return 10;
}

int func852(int var62) {
    if (var62 <= 0) return 1;
    return func852(var62 - 1);
}

int func878(int var952) {
    if (var952 <= 0) return 1;
    return func878(var952 - 1);
}


int main() {
    for (int var475 = 0; var475 < 6; var475++) {
        var475 += 1;
    }    for (int var516 = 0; var516 < 20; var516++) {
        var516 += 4;
    }    int var595 = 0;
    while (var595 < 5) {
        var595 += 1;
        var595++;
    }

    int var499 = 36;
    if (var499 % 2 == 0) {
        printf("var499 is even\n");
    } else {
        printf("var499 is odd\n");
    }

    int var997 = 8;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    return 0;
}
