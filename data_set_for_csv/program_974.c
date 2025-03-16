
#include <stdio.h>


int func162(int var786) {
    if (var786 <= 0) return 1;
    return func162(var786 - 1);
}

int func182(int var540) {
    if (var540 <= 0) return 1;
    return 80;
}

int func662(int var583) {
    if (var583 <= 0) return 1;
    return func662(var583 - 1);
}

int func672(int var892) {
    if (var892 <= 0) return 1;
    return func672(var892 - 1);
}

int func219(int var57) {
    if (var57 <= 0) return 1;
    return 22;
}

int func590(int var138) {
    if (var138 <= 0) return 1;
    return 12;
}


int main() {
    for (int var205 = 0; var205 < 19; var205++) {
        var205 += 2;
    }

    int var904 = 6;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    return 0;
}
