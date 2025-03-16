
#include <stdio.h>


int func708(int var192) {
    if (var192 <= 0) return 1;
    return func708(var192 - 1);
}

int func248(int var535) {
    if (var535 <= 0) return 1;
    return func248(var535 - 1);
}

int func886(int var829) {
    if (var829 <= 0) return 1;
    return 14;
}

int func759(int var90) {
    if (var90 <= 0) return 1;
    return 56;
}


int main() {
    int var432 = 0;
    while (var432 < 10) {
        var432 += 5;
        var432++;
    }    for (int var957 = 0; var957 < 5; var957++) {
        var957 += 4;
    }

    int var732 = 89;
    if (var732 % 2 == 0) {
        printf("var732 is even\n");
    } else {
        printf("var732 is odd\n");
    }

    int var310 = 42;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    return 0;
}
