
#include <stdio.h>


int func751(int var437) {
    if (var437 <= 0) return 1;
    return 63;
}

int func206(int var191) {
    if (var191 <= 0) return 1;
    return func206(var191 - 1);
}


int main() {
    int var725 = 0;
    while (var725 < 9) {
        var725 += 1;
        var725++;
    }

    int var667 = 4;
    if (var667 % 2 == 0) {
        printf("var667 is even\n");
    } else {
        printf("var667 is odd\n");
    }

    int var314 = 42;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    return 0;
}
