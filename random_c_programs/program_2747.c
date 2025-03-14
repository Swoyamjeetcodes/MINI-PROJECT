
#include <stdio.h>


int func390(int var220) {
    if (var220 <= 0) return 1;
    return func390(var220 - 1);
}

int func381(int var893) {
    if (var893 <= 0) return 1;
    return func381(var893 - 1);
}

int func637(int var522) {
    if (var522 <= 0) return 1;
    return 55;
}

int func730(int var456) {
    if (var456 <= 0) return 1;
    return 93;
}


int main() {
    for (int var884 = 0; var884 < 16; var884++) {
        var884 += 5;
    }

    int var641 = 0;
    if (var641 % 2 == 0) {
        printf("var641 is even\n");
    } else {
        printf("var641 is odd\n");
    }

    int var656 = 59;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var35 = 59;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
