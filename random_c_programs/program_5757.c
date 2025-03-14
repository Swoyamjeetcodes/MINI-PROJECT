
#include <stdio.h>


int func834(int var840) {
    if (var840 <= 0) return 1;
    return func834(var840 - 1);
}

int func331(int var646) {
    if (var646 <= 0) return 1;
    return 48;
}

int func639(int var861) {
    if (var861 <= 0) return 1;
    return 83;
}

int func185(int var712) {
    if (var712 <= 0) return 1;
    return 70;
}


int main() {
    int var601 = 0;
    while (var601 < 7) {
        var601 += 5;
        var601++;
    }

    int var277 = 28;
    if (var277 % 2 == 0) {
        printf("var277 is even\n");
    } else {
        printf("var277 is odd\n");
    }

    int var989 = 33;
    if (var989 % 2 == 0) {
        printf("var989 is even\n");
    } else {
        printf("var989 is odd\n");
    }

    int var519 = 25;
    if (var519 % 2 == 0) {
        printf("var519 is even\n");
    } else {
        printf("var519 is odd\n");
    }

    int var999 = 41;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    return 0;
}
