
#include <stdio.h>


int func1000(int var529) {
    if (var529 <= 0) return 1;
    return 97;
}

int func647(int var437) {
    if (var437 <= 0) return 1;
    return func647(var437 - 1);
}

int func770(int var201) {
    if (var201 <= 0) return 1;
    return 22;
}


int main() {
    for (int var871 = 0; var871 < 6; var871++) {
        var871 += 3;
    }    for (int var867 = 0; var867 < 11; var867++) {
        var867 += 2;
    }    int var424 = 0;
    while (var424 < 17) {
        var424 += 2;
        var424++;
    }

    int var178 = 16;
    if (var178 % 2 == 0) {
        printf("var178 is even\n");
    } else {
        printf("var178 is odd\n");
    }

    int var445 = 81;
    if (var445 % 2 == 0) {
        printf("var445 is even\n");
    } else {
        printf("var445 is odd\n");
    }

    return 0;
}
