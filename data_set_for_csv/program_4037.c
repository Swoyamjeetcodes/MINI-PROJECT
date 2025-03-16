
#include <stdio.h>


int func159(int var312) {
    if (var312 <= 0) return 1;
    return func159(var312 - 1);
}

int func643(int var251) {
    if (var251 <= 0) return 1;
    return 15;
}

int func183(int var404) {
    if (var404 <= 0) return 1;
    return func183(var404 - 1);
}

int func390(int var915) {
    if (var915 <= 0) return 1;
    return 22;
}


int main() {
    for (int var61 = 0; var61 < 18; var61++) {
        var61 += 3;
    }

    int var775 = 34;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
