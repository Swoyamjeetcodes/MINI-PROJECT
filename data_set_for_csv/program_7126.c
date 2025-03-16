
#include <stdio.h>


int func283(int var592) {
    if (var592 <= 0) return 1;
    return func283(var592 - 1);
}

int func896(int var727) {
    if (var727 <= 0) return 1;
    return func896(var727 - 1);
}

int func874(int var599) {
    if (var599 <= 0) return 1;
    return func874(var599 - 1);
}

int func406(int var944) {
    if (var944 <= 0) return 1;
    return func406(var944 - 1);
}

int func648(int var140) {
    if (var140 <= 0) return 1;
    return 9;
}


int main() {
    for (int var305 = 0; var305 < 11; var305++) {
        var305 += 5;
    }    for (int var623 = 0; var623 < 10; var623++) {
        var623 += 4;
    }

    int var512 = 64;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    int var680 = 89;
    if (var680 % 2 == 0) {
        printf("var680 is even\n");
    } else {
        printf("var680 is odd\n");
    }

    return 0;
}
