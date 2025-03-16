
#include <stdio.h>


int func578(int var272) {
    if (var272 <= 0) return 1;
    return func578(var272 - 1);
}

int func691(int var855) {
    if (var855 <= 0) return 1;
    return func691(var855 - 1);
}

int func693(int var235) {
    if (var235 <= 0) return 1;
    return 35;
}


int main() {
    for (int var435 = 0; var435 < 19; var435++) {
        var435 += 4;
    }

    int var195 = 65;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    int var163 = 78;
    if (var163 % 2 == 0) {
        printf("var163 is even\n");
    } else {
        printf("var163 is odd\n");
    }

    return 0;
}
