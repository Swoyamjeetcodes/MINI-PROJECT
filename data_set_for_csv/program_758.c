
#include <stdio.h>


int func648(int var462) {
    if (var462 <= 0) return 1;
    return func648(var462 - 1);
}

int func239(int var27) {
    if (var27 <= 0) return 1;
    return 72;
}

int func428(int var587) {
    if (var587 <= 0) return 1;
    return func428(var587 - 1);
}

int func234(int var439) {
    if (var439 <= 0) return 1;
    return func234(var439 - 1);
}


int main() {
    for (int var137 = 0; var137 < 14; var137++) {
        var137 += 5;
    }

    int var43 = 24;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var466 = 58;
    if (var466 % 2 == 0) {
        printf("var466 is even\n");
    } else {
        printf("var466 is odd\n");
    }

    return 0;
}
