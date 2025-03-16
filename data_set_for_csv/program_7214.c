
#include <stdio.h>


int func553(int var580) {
    if (var580 <= 0) return 1;
    return 64;
}

int func546(int var525) {
    if (var525 <= 0) return 1;
    return 65;
}

int func249(int var404) {
    if (var404 <= 0) return 1;
    return func249(var404 - 1);
}

int func718(int var633) {
    if (var633 <= 0) return 1;
    return 21;
}


int main() {
    int var877 = 0;
    while (var877 < 8) {
        var877 += 4;
        var877++;
    }

    int var426 = 84;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
