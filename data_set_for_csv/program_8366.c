
#include <stdio.h>


int func387(int var728) {
    if (var728 <= 0) return 1;
    return func387(var728 - 1);
}

int func935(int var550) {
    if (var550 <= 0) return 1;
    return func935(var550 - 1);
}

int func405(int var821) {
    if (var821 <= 0) return 1;
    return 11;
}

int func471(int var568) {
    if (var568 <= 0) return 1;
    return func471(var568 - 1);
}


int main() {
    for (int var563 = 0; var563 < 7; var563++) {
        var563 += 3;
    }    int var29 = 0;
    while (var29 < 5) {
        var29 += 4;
        var29++;
    }

    int var686 = 42;
    if (var686 % 2 == 0) {
        printf("var686 is even\n");
    } else {
        printf("var686 is odd\n");
    }

    return 0;
}
