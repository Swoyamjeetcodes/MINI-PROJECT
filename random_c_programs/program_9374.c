
#include <stdio.h>


int func618(int var305) {
    if (var305 <= 0) return 1;
    return func618(var305 - 1);
}

int func607(int var853) {
    if (var853 <= 0) return 1;
    return 7;
}

int func927(int var220) {
    if (var220 <= 0) return 1;
    return func927(var220 - 1);
}

int func914(int var814) {
    if (var814 <= 0) return 1;
    return func914(var814 - 1);
}

int func995(int var348) {
    if (var348 <= 0) return 1;
    return 24;
}


int main() {
    int var631 = 0;
    while (var631 < 10) {
        var631 += 5;
        var631++;
    }    int var548 = 0;
    while (var548 < 16) {
        var548 += 3;
        var548++;
    }

    int var623 = 14;
    if (var623 % 2 == 0) {
        printf("var623 is even\n");
    } else {
        printf("var623 is odd\n");
    }

    int var969 = 21;
    if (var969 % 2 == 0) {
        printf("var969 is even\n");
    } else {
        printf("var969 is odd\n");
    }

    return 0;
}
