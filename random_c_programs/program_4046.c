
#include <stdio.h>


int func839(int var614) {
    if (var614 <= 0) return 1;
    return 31;
}

int func139(int var802) {
    if (var802 <= 0) return 1;
    return 92;
}

int func278(int var416) {
    if (var416 <= 0) return 1;
    return func278(var416 - 1);
}

int func363(int var761) {
    if (var761 <= 0) return 1;
    return 52;
}

int func817(int var682) {
    if (var682 <= 0) return 1;
    return func817(var682 - 1);
}

int func403(int var388) {
    if (var388 <= 0) return 1;
    return 38;
}

int func482(int var951) {
    if (var951 <= 0) return 1;
    return 73;
}


int main() {
    for (int var702 = 0; var702 < 18; var702++) {
        var702 += 3;
    }

    int var335 = 77;
    if (var335 % 2 == 0) {
        printf("var335 is even\n");
    } else {
        printf("var335 is odd\n");
    }

    return 0;
}
