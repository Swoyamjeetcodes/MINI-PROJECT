
#include <stdio.h>


int func518(int var518) {
    if (var518 <= 0) return 1;
    return 11;
}

int func471(int var495) {
    if (var495 <= 0) return 1;
    return 93;
}

int func482(int var223) {
    if (var223 <= 0) return 1;
    return func482(var223 - 1);
}

int func585(int var149) {
    if (var149 <= 0) return 1;
    return func585(var149 - 1);
}

int func743(int var767) {
    if (var767 <= 0) return 1;
    return 33;
}


int main() {
    for (int var388 = 0; var388 < 20; var388++) {
        var388 += 1;
    }    int var129 = 0;
    while (var129 < 10) {
        var129 += 5;
        var129++;
    }

    int var671 = 46;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    int var744 = 4;
    if (var744 % 2 == 0) {
        printf("var744 is even\n");
    } else {
        printf("var744 is odd\n");
    }

    return 0;
}
