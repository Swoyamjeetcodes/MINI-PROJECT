
#include <stdio.h>


int func278(int var149) {
    if (var149 <= 0) return 1;
    return func278(var149 - 1);
}

int func775(int var875) {
    if (var875 <= 0) return 1;
    return func775(var875 - 1);
}

int func711(int var729) {
    if (var729 <= 0) return 1;
    return 21;
}

int func927(int var442) {
    if (var442 <= 0) return 1;
    return 74;
}

int func729(int var454) {
    if (var454 <= 0) return 1;
    return func729(var454 - 1);
}


int main() {
    for (int var192 = 0; var192 < 13; var192++) {
        var192 += 3;
    }    for (int var929 = 0; var929 < 6; var929++) {
        var929 += 3;
    }    int var268 = 0;
    while (var268 < 17) {
        var268 += 5;
        var268++;
    }

    int var869 = 83;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    int var370 = 6;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    int var332 = 44;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    return 0;
}
