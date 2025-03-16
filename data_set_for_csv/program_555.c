
#include <stdio.h>


int func942(int var930) {
    if (var930 <= 0) return 1;
    return 86;
}

int func737(int var274) {
    if (var274 <= 0) return 1;
    return func737(var274 - 1);
}

int func251(int var380) {
    if (var380 <= 0) return 1;
    return 15;
}

int func183(int var576) {
    if (var576 <= 0) return 1;
    return 30;
}


int main() {
    int var584 = 0;
    while (var584 < 9) {
        var584 += 4;
        var584++;
    }

    int var43 = 53;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var370 = 20;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    return 0;
}
