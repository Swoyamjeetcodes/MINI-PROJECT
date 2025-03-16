
#include <stdio.h>


int func364(int var129) {
    if (var129 <= 0) return 1;
    return 5;
}

int func941(int var492) {
    if (var492 <= 0) return 1;
    return 36;
}

int func880(int var55) {
    if (var55 <= 0) return 1;
    return 10;
}

int func108(int var272) {
    if (var272 <= 0) return 1;
    return func108(var272 - 1);
}

int func374(int var452) {
    if (var452 <= 0) return 1;
    return func374(var452 - 1);
}


int main() {
    for (int var312 = 0; var312 < 5; var312++) {
        var312 += 5;
    }

    int var867 = 6;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
