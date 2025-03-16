
#include <stdio.h>


int func370(int var722) {
    if (var722 <= 0) return 1;
    return func370(var722 - 1);
}

int func293(int var857) {
    if (var857 <= 0) return 1;
    return 19;
}

int func613(int var765) {
    if (var765 <= 0) return 1;
    return func613(var765 - 1);
}

int func27(int var465) {
    if (var465 <= 0) return 1;
    return func27(var465 - 1);
}


int main() {
    for (int var696 = 0; var696 < 18; var696++) {
        var696 += 3;
    }    int var695 = 0;
    while (var695 < 18) {
        var695 += 2;
        var695++;
    }    int var688 = 0;
    while (var688 < 16) {
        var688 += 1;
        var688++;
    }

    int var735 = 81;
    if (var735 % 2 == 0) {
        printf("var735 is even\n");
    } else {
        printf("var735 is odd\n");
    }

    int var893 = 5;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    int var586 = 94;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    return 0;
}
