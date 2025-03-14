
#include <stdio.h>


int func51(int var66) {
    if (var66 <= 0) return 1;
    return func51(var66 - 1);
}


int main() {
    int var96 = 0;
    while (var96 < 6) {
        var96 += 5;
        var96++;
    }    for (int var676 = 0; var676 < 11; var676++) {
        var676 += 1;
    }    int var640 = 0;
    while (var640 < 17) {
        var640 += 5;
        var640++;
    }    for (int var464 = 0; var464 < 11; var464++) {
        var464 += 3;
    }    for (int var371 = 0; var371 < 13; var371++) {
        var371 += 2;
    }    int var385 = 0;
    while (var385 < 18) {
        var385 += 3;
        var385++;
    }

    int var687 = 84;
    if (var687 % 2 == 0) {
        printf("var687 is even\n");
    } else {
        printf("var687 is odd\n");
    }

    int var129 = 74;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
