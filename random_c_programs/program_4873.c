
#include <stdio.h>


int func444(int var152) {
    if (var152 <= 0) return 1;
    return func444(var152 - 1);
}

int func208(int var701) {
    if (var701 <= 0) return 1;
    return 56;
}

int func118(int var458) {
    if (var458 <= 0) return 1;
    return 91;
}

int func518(int var667) {
    if (var667 <= 0) return 1;
    return func518(var667 - 1);
}

int func191(int var671) {
    if (var671 <= 0) return 1;
    return func191(var671 - 1);
}


int main() {
    for (int var236 = 0; var236 < 7; var236++) {
        var236 += 1;
    }

    int var268 = 71;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    int var616 = 43;
    if (var616 % 2 == 0) {
        printf("var616 is even\n");
    } else {
        printf("var616 is odd\n");
    }

    return 0;
}
