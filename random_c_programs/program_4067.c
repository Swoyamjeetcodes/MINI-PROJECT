
#include <stdio.h>


int func899(int var542) {
    if (var542 <= 0) return 1;
    return func899(var542 - 1);
}

int func480(int var675) {
    if (var675 <= 0) return 1;
    return func480(var675 - 1);
}

int func855(int var993) {
    if (var993 <= 0) return 1;
    return 8;
}

int func962(int var676) {
    if (var676 <= 0) return 1;
    return 39;
}


int main() {
    int var315 = 0;
    while (var315 < 12) {
        var315 += 2;
        var315++;
    }    for (int var865 = 0; var865 < 19; var865++) {
        var865 += 1;
    }    for (int var837 = 0; var837 < 10; var837++) {
        var837 += 3;
    }

    int var328 = 63;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    int var508 = 89;
    if (var508 % 2 == 0) {
        printf("var508 is even\n");
    } else {
        printf("var508 is odd\n");
    }

    return 0;
}
