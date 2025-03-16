
#include <stdio.h>


int func629(int var972) {
    if (var972 <= 0) return 1;
    return func629(var972 - 1);
}

int func18(int var741) {
    if (var741 <= 0) return 1;
    return 77;
}

int func512(int var135) {
    if (var135 <= 0) return 1;
    return func512(var135 - 1);
}


int main() {
    int var411 = 0;
    while (var411 < 19) {
        var411 += 4;
        var411++;
    }    for (int var365 = 0; var365 < 17; var365++) {
        var365 += 1;
    }

    int var595 = 94;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    return 0;
}
