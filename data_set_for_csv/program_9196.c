
#include <stdio.h>


int func641(int var439) {
    if (var439 <= 0) return 1;
    return func641(var439 - 1);
}

int func126(int var830) {
    if (var830 <= 0) return 1;
    return func126(var830 - 1);
}

int func375(int var592) {
    if (var592 <= 0) return 1;
    return func375(var592 - 1);
}


int main() {
    int var265 = 0;
    while (var265 < 17) {
        var265 += 1;
        var265++;
    }    int var334 = 0;
    while (var334 < 16) {
        var334 += 2;
        var334++;
    }    int var834 = 0;
    while (var834 < 15) {
        var834 += 2;
        var834++;
    }    int var392 = 0;
    while (var392 < 18) {
        var392 += 2;
        var392++;
    }    int var186 = 0;
    while (var186 < 7) {
        var186 += 2;
        var186++;
    }

    int var496 = 19;
    if (var496 % 2 == 0) {
        printf("var496 is even\n");
    } else {
        printf("var496 is odd\n");
    }

    int var442 = 21;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    int var417 = 35;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    return 0;
}
