
#include <stdio.h>


int func960(int var381) {
    if (var381 <= 0) return 1;
    return func960(var381 - 1);
}

int func676(int var667) {
    if (var667 <= 0) return 1;
    return func676(var667 - 1);
}

int func412(int var354) {
    if (var354 <= 0) return 1;
    return 57;
}

int func225(int var873) {
    if (var873 <= 0) return 1;
    return func225(var873 - 1);
}


int main() {
    int var384 = 0;
    while (var384 < 15) {
        var384 += 3;
        var384++;
    }    for (int var577 = 0; var577 < 7; var577++) {
        var577 += 2;
    }    int var573 = 0;
    while (var573 < 20) {
        var573 += 3;
        var573++;
    }

    int var560 = 43;
    if (var560 % 2 == 0) {
        printf("var560 is even\n");
    } else {
        printf("var560 is odd\n");
    }

    int var557 = 27;
    if (var557 % 2 == 0) {
        printf("var557 is even\n");
    } else {
        printf("var557 is odd\n");
    }

    int var183 = 31;
    if (var183 % 2 == 0) {
        printf("var183 is even\n");
    } else {
        printf("var183 is odd\n");
    }

    return 0;
}
