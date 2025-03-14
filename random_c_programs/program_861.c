
#include <stdio.h>


int func233(int var916) {
    if (var916 <= 0) return 1;
    return 83;
}

int func649(int var756) {
    if (var756 <= 0) return 1;
    return func649(var756 - 1);
}

int func989(int var600) {
    if (var600 <= 0) return 1;
    return func989(var600 - 1);
}

int func669(int var368) {
    if (var368 <= 0) return 1;
    return 44;
}


int main() {
    int var462 = 0;
    while (var462 < 17) {
        var462 += 2;
        var462++;
    }

    int var388 = 81;
    if (var388 % 2 == 0) {
        printf("var388 is even\n");
    } else {
        printf("var388 is odd\n");
    }

    return 0;
}
