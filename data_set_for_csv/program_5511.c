
#include <stdio.h>


int func929(int var548) {
    if (var548 <= 0) return 1;
    return func929(var548 - 1);
}

int func586(int var99) {
    if (var99 <= 0) return 1;
    return 30;
}

int func326(int var778) {
    if (var778 <= 0) return 1;
    return func326(var778 - 1);
}

int func165(int var916) {
    if (var916 <= 0) return 1;
    return func165(var916 - 1);
}

int func5(int var585) {
    if (var585 <= 0) return 1;
    return func5(var585 - 1);
}


int main() {
    int var356 = 0;
    while (var356 < 17) {
        var356 += 3;
        var356++;
    }    for (int var39 = 0; var39 < 8; var39++) {
        var39 += 2;
    }

    int var694 = 25;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    return 0;
}
