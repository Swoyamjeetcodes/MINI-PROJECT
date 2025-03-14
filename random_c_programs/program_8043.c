
#include <stdio.h>


int func405(int var856) {
    if (var856 <= 0) return 1;
    return 17;
}

int func254(int var543) {
    if (var543 <= 0) return 1;
    return 46;
}

int func275(int var987) {
    if (var987 <= 0) return 1;
    return func275(var987 - 1);
}


int main() {
    int var797 = 0;
    while (var797 < 10) {
        var797 += 3;
        var797++;
    }    int var22 = 0;
    while (var22 < 16) {
        var22 += 4;
        var22++;
    }    for (int var982 = 0; var982 < 17; var982++) {
        var982 += 3;
    }

    int var463 = 2;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var729 = 36;
    if (var729 % 2 == 0) {
        printf("var729 is even\n");
    } else {
        printf("var729 is odd\n");
    }

    return 0;
}
