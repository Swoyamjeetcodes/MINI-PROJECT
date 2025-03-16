
#include <stdio.h>


int func834(int var246) {
    if (var246 <= 0) return 1;
    return 58;
}

int func651(int var966) {
    if (var966 <= 0) return 1;
    return func651(var966 - 1);
}

int func310(int var854) {
    if (var854 <= 0) return 1;
    return func310(var854 - 1);
}


int main() {
    int var391 = 0;
    while (var391 < 5) {
        var391 += 4;
        var391++;
    }    for (int var99 = 0; var99 < 5; var99++) {
        var99 += 3;
    }

    int var491 = 34;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    int var428 = 56;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    return 0;
}
