
#include <stdio.h>


int func500(int var498) {
    if (var498 <= 0) return 1;
    return 17;
}

int func731(int var878) {
    if (var878 <= 0) return 1;
    return func731(var878 - 1);
}

int func45(int var275) {
    if (var275 <= 0) return 1;
    return 91;
}


int main() {
    int var674 = 0;
    while (var674 < 10) {
        var674 += 4;
        var674++;
    }    for (int var266 = 0; var266 < 11; var266++) {
        var266 += 5;
    }    int var767 = 0;
    while (var767 < 19) {
        var767 += 2;
        var767++;
    }

    int var593 = 63;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    return 0;
}
