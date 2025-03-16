
#include <stdio.h>


int func431(int var109) {
    if (var109 <= 0) return 1;
    return 53;
}

int func638(int var115) {
    if (var115 <= 0) return 1;
    return func638(var115 - 1);
}

int func225(int var733) {
    if (var733 <= 0) return 1;
    return 32;
}


int main() {
    int var538 = 0;
    while (var538 < 18) {
        var538 += 3;
        var538++;
    }    int var397 = 0;
    while (var397 < 14) {
        var397 += 4;
        var397++;
    }

    int var836 = 50;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    int var746 = 32;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
