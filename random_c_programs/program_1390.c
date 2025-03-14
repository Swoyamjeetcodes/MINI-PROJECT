
#include <stdio.h>


int func277(int var568) {
    if (var568 <= 0) return 1;
    return func277(var568 - 1);
}

int func709(int var591) {
    if (var591 <= 0) return 1;
    return func709(var591 - 1);
}

int func174(int var69) {
    if (var69 <= 0) return 1;
    return 17;
}


int main() {
    for (int var424 = 0; var424 < 13; var424++) {
        var424 += 1;
    }    for (int var170 = 0; var170 < 6; var170++) {
        var170 += 5;
    }    int var583 = 0;
    while (var583 < 17) {
        var583 += 1;
        var583++;
    }

    int var303 = 1;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    int var935 = 17;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    int var705 = 93;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
