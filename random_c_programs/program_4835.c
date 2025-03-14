
#include <stdio.h>


int func875(int var564) {
    if (var564 <= 0) return 1;
    return 96;
}

int func278(int var290) {
    if (var290 <= 0) return 1;
    return func278(var290 - 1);
}

int func840(int var380) {
    if (var380 <= 0) return 1;
    return 1;
}

int func595(int var360) {
    if (var360 <= 0) return 1;
    return func595(var360 - 1);
}


int main() {
    int var451 = 0;
    while (var451 < 14) {
        var451 += 1;
        var451++;
    }    for (int var171 = 0; var171 < 11; var171++) {
        var171 += 3;
    }

    int var985 = 100;
    if (var985 % 2 == 0) {
        printf("var985 is even\n");
    } else {
        printf("var985 is odd\n");
    }

    return 0;
}
