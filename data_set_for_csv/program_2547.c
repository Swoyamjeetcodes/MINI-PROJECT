
#include <stdio.h>


int func918(int var20) {
    if (var20 <= 0) return 1;
    return func918(var20 - 1);
}

int func966(int var558) {
    if (var558 <= 0) return 1;
    return 49;
}

int func258(int var229) {
    if (var229 <= 0) return 1;
    return func258(var229 - 1);
}


int main() {
    int var381 = 0;
    while (var381 < 10) {
        var381 += 4;
        var381++;
    }    for (int var807 = 0; var807 < 5; var807++) {
        var807 += 2;
    }

    int var683 = 83;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    int var158 = 36;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    int var899 = 99;
    if (var899 % 2 == 0) {
        printf("var899 is even\n");
    } else {
        printf("var899 is odd\n");
    }

    return 0;
}
