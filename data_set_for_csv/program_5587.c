
#include <stdio.h>


int func43(int var752) {
    if (var752 <= 0) return 1;
    return func43(var752 - 1);
}

int func138(int var259) {
    if (var259 <= 0) return 1;
    return 19;
}

int func215(int var644) {
    if (var644 <= 0) return 1;
    return func215(var644 - 1);
}

int func55(int var828) {
    if (var828 <= 0) return 1;
    return func55(var828 - 1);
}


int main() {
    for (int var331 = 0; var331 < 8; var331++) {
        var331 += 4;
    }    for (int var130 = 0; var130 < 15; var130++) {
        var130 += 3;
    }

    int var35 = 21;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
