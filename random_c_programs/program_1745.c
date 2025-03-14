
#include <stdio.h>


int func506(int var905) {
    if (var905 <= 0) return 1;
    return func506(var905 - 1);
}

int func32(int var658) {
    if (var658 <= 0) return 1;
    return func32(var658 - 1);
}

int func807(int var629) {
    if (var629 <= 0) return 1;
    return func807(var629 - 1);
}

int func7(int var6) {
    if (var6 <= 0) return 1;
    return 3;
}


int main() {
    for (int var710 = 0; var710 < 5; var710++) {
        var710 += 1;
    }

    int var769 = 36;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    int var27 = 50;
    if (var27 % 2 == 0) {
        printf("var27 is even\n");
    } else {
        printf("var27 is odd\n");
    }

    return 0;
}
