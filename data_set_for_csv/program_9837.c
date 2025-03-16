
#include <stdio.h>


int func23(int var560) {
    if (var560 <= 0) return 1;
    return 27;
}

int func693(int var683) {
    if (var683 <= 0) return 1;
    return func693(var683 - 1);
}

int func746(int var661) {
    if (var661 <= 0) return 1;
    return func746(var661 - 1);
}

int func329(int var643) {
    if (var643 <= 0) return 1;
    return func329(var643 - 1);
}

int func559(int var461) {
    if (var461 <= 0) return 1;
    return func559(var461 - 1);
}


int main() {
    int var303 = 0;
    while (var303 < 13) {
        var303 += 5;
        var303++;
    }    int var705 = 0;
    while (var705 < 17) {
        var705 += 1;
        var705++;
    }

    int var611 = 92;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    int var180 = 33;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    return 0;
}
