
#include <stdio.h>


int func249(int var715) {
    if (var715 <= 0) return 1;
    return 72;
}

int func486(int var416) {
    if (var416 <= 0) return 1;
    return 90;
}

int func380(int var663) {
    if (var663 <= 0) return 1;
    return func380(var663 - 1);
}

int func118(int var821) {
    if (var821 <= 0) return 1;
    return 88;
}


int main() {
    for (int var275 = 0; var275 < 10; var275++) {
        var275 += 1;
    }

    int var566 = 81;
    if (var566 % 2 == 0) {
        printf("var566 is even\n");
    } else {
        printf("var566 is odd\n");
    }

    return 0;
}
