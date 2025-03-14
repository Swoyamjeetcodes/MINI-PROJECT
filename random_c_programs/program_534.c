
#include <stdio.h>


int func205(int var533) {
    if (var533 <= 0) return 1;
    return func205(var533 - 1);
}

int func307(int var944) {
    if (var944 <= 0) return 1;
    return 56;
}

int func652(int var439) {
    if (var439 <= 0) return 1;
    return 91;
}

int func612(int var636) {
    if (var636 <= 0) return 1;
    return func612(var636 - 1);
}


int main() {
    for (int var503 = 0; var503 < 8; var503++) {
        var503 += 2;
    }    for (int var37 = 0; var37 < 13; var37++) {
        var37 += 5;
    }    int var442 = 0;
    while (var442 < 11) {
        var442 += 2;
        var442++;
    }

    int var391 = 41;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    int var351 = 82;
    if (var351 % 2 == 0) {
        printf("var351 is even\n");
    } else {
        printf("var351 is odd\n");
    }

    return 0;
}
