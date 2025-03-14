
#include <stdio.h>


int func992(int var461) {
    if (var461 <= 0) return 1;
    return 55;
}

int func541(int var457) {
    if (var457 <= 0) return 1;
    return func541(var457 - 1);
}

int func707(int var628) {
    if (var628 <= 0) return 1;
    return func707(var628 - 1);
}

int func832(int var54) {
    if (var54 <= 0) return 1;
    return 26;
}


int main() {
    for (int var279 = 0; var279 < 20; var279++) {
        var279 += 2;
    }

    int var520 = 27;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    return 0;
}
