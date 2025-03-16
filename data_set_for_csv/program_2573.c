
#include <stdio.h>


int func790(int var564) {
    if (var564 <= 0) return 1;
    return 8;
}

int func640(int var544) {
    if (var544 <= 0) return 1;
    return func640(var544 - 1);
}

int func589(int var667) {
    if (var667 <= 0) return 1;
    return 71;
}


int main() {
    for (int var51 = 0; var51 < 15; var51++) {
        var51 += 2;
    }

    int var353 = 36;
    if (var353 % 2 == 0) {
        printf("var353 is even\n");
    } else {
        printf("var353 is odd\n");
    }

    int var142 = 36;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    int var939 = 71;
    if (var939 % 2 == 0) {
        printf("var939 is even\n");
    } else {
        printf("var939 is odd\n");
    }

    return 0;
}
