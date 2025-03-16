
#include <stdio.h>


int func617(int var619) {
    if (var619 <= 0) return 1;
    return func617(var619 - 1);
}

int func771(int var465) {
    if (var465 <= 0) return 1;
    return func771(var465 - 1);
}

int func420(int var676) {
    if (var676 <= 0) return 1;
    return func420(var676 - 1);
}

int func745(int var307) {
    if (var307 <= 0) return 1;
    return func745(var307 - 1);
}

int func835(int var853) {
    if (var853 <= 0) return 1;
    return 55;
}

int func676(int var114) {
    if (var114 <= 0) return 1;
    return func676(var114 - 1);
}


int main() {
    for (int var916 = 0; var916 < 9; var916++) {
        var916 += 3;
    }    for (int var646 = 0; var646 < 16; var646++) {
        var646 += 4;
    }    for (int var848 = 0; var848 < 6; var848++) {
        var848 += 5;
    }    int var574 = 0;
    while (var574 < 13) {
        var574 += 4;
        var574++;
    }

    int var521 = 73;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    int var733 = 91;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    int var689 = 23;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    int var736 = 57;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    int var822 = 56;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    int var352 = 66;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    return 0;
}
