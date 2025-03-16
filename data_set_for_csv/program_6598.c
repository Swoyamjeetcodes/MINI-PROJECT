
#include <stdio.h>


int func989(int var481) {
    if (var481 <= 0) return 1;
    return 92;
}

int func145(int var235) {
    if (var235 <= 0) return 1;
    return func145(var235 - 1);
}

int func935(int var253) {
    if (var253 <= 0) return 1;
    return func935(var253 - 1);
}

int func393(int var872) {
    if (var872 <= 0) return 1;
    return func393(var872 - 1);
}


int main() {
    for (int var289 = 0; var289 < 13; var289++) {
        var289 += 4;
    }

    int var1 = 73;
    if (var1 % 2 == 0) {
        printf("var1 is even\n");
    } else {
        printf("var1 is odd\n");
    }

    int var366 = 35;
    if (var366 % 2 == 0) {
        printf("var366 is even\n");
    } else {
        printf("var366 is odd\n");
    }

    return 0;
}
