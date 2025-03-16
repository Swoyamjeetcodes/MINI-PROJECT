
#include <stdio.h>


int func856(int var138) {
    if (var138 <= 0) return 1;
    return func856(var138 - 1);
}

int func477(int var108) {
    if (var108 <= 0) return 1;
    return 83;
}


int main() {
    int var861 = 0;
    while (var861 < 15) {
        var861 += 2;
        var861++;
    }    for (int var335 = 0; var335 < 20; var335++) {
        var335 += 2;
    }    for (int var414 = 0; var414 < 10; var414++) {
        var414 += 2;
    }

    int var412 = 84;
    if (var412 % 2 == 0) {
        printf("var412 is even\n");
    } else {
        printf("var412 is odd\n");
    }

    int var415 = 40;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    return 0;
}
