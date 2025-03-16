
#include <stdio.h>


int func242(int var179) {
    if (var179 <= 0) return 1;
    return 23;
}

int func538(int var409) {
    if (var409 <= 0) return 1;
    return 38;
}

int func505(int var235) {
    if (var235 <= 0) return 1;
    return func505(var235 - 1);
}


int main() {
    int var596 = 0;
    while (var596 < 10) {
        var596 += 1;
        var596++;
    }

    int var579 = 63;
    if (var579 % 2 == 0) {
        printf("var579 is even\n");
    } else {
        printf("var579 is odd\n");
    }

    int var139 = 88;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    return 0;
}
