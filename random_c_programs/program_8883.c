
#include <stdio.h>


int func865(int var646) {
    if (var646 <= 0) return 1;
    return 44;
}

int func44(int var642) {
    if (var642 <= 0) return 1;
    return 68;
}

int func463(int var191) {
    if (var191 <= 0) return 1;
    return func463(var191 - 1);
}

int func777(int var919) {
    if (var919 <= 0) return 1;
    return 80;
}


int main() {
    int var23 = 0;
    while (var23 < 15) {
        var23 += 3;
        var23++;
    }    for (int var789 = 0; var789 < 12; var789++) {
        var789 += 1;
    }

    int var100 = 82;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
