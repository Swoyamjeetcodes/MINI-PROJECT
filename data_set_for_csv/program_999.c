
#include <stdio.h>


int func748(int var122) {
    if (var122 <= 0) return 1;
    return func748(var122 - 1);
}

int func546(int var624) {
    if (var624 <= 0) return 1;
    return 55;
}

int func49(int var370) {
    if (var370 <= 0) return 1;
    return func49(var370 - 1);
}


int main() {
    int var150 = 0;
    while (var150 < 6) {
        var150 += 4;
        var150++;
    }

    int var915 = 62;
    if (var915 % 2 == 0) {
        printf("var915 is even\n");
    } else {
        printf("var915 is odd\n");
    }

    return 0;
}
