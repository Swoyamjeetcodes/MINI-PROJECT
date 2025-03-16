
#include <stdio.h>


int func886(int var537) {
    if (var537 <= 0) return 1;
    return func886(var537 - 1);
}

int func245(int var531) {
    if (var531 <= 0) return 1;
    return func245(var531 - 1);
}

int func440(int var458) {
    if (var458 <= 0) return 1;
    return func440(var458 - 1);
}

int func194(int var717) {
    if (var717 <= 0) return 1;
    return 79;
}


int main() {
    for (int var411 = 0; var411 < 11; var411++) {
        var411 += 1;
    }    for (int var198 = 0; var198 < 13; var198++) {
        var198 += 4;
    }

    int var768 = 5;
    if (var768 % 2 == 0) {
        printf("var768 is even\n");
    } else {
        printf("var768 is odd\n");
    }

    int var604 = 1;
    if (var604 % 2 == 0) {
        printf("var604 is even\n");
    } else {
        printf("var604 is odd\n");
    }

    return 0;
}
