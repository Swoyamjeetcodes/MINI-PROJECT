
#include <stdio.h>


int func851(int var681) {
    if (var681 <= 0) return 1;
    return 15;
}

int func834(int var848) {
    if (var848 <= 0) return 1;
    return 14;
}

int func131(int var641) {
    if (var641 <= 0) return 1;
    return 89;
}

int func414(int var364) {
    if (var364 <= 0) return 1;
    return 61;
}

int func902(int var473) {
    if (var473 <= 0) return 1;
    return func902(var473 - 1);
}


int main() {
    for (int var189 = 0; var189 < 10; var189++) {
        var189 += 5;
    }

    int var963 = 19;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
