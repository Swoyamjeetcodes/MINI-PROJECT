
#include <stdio.h>


int func891(int var989) {
    if (var989 <= 0) return 1;
    return 77;
}

int func901(int var544) {
    if (var544 <= 0) return 1;
    return func901(var544 - 1);
}

int func865(int var602) {
    if (var602 <= 0) return 1;
    return 34;
}

int func471(int var606) {
    if (var606 <= 0) return 1;
    return func471(var606 - 1);
}


int main() {
    int var488 = 0;
    while (var488 < 5) {
        var488 += 5;
        var488++;
    }    for (int var249 = 0; var249 < 10; var249++) {
        var249 += 5;
    }    int var543 = 0;
    while (var543 < 10) {
        var543 += 3;
        var543++;
    }

    int var899 = 32;
    if (var899 % 2 == 0) {
        printf("var899 is even\n");
    } else {
        printf("var899 is odd\n");
    }

    return 0;
}
