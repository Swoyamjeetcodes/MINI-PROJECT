
#include <stdio.h>


int func108(int var421) {
    if (var421 <= 0) return 1;
    return func108(var421 - 1);
}

int func882(int var351) {
    if (var351 <= 0) return 1;
    return 47;
}

int func148(int var454) {
    if (var454 <= 0) return 1;
    return 16;
}

int func944(int var381) {
    if (var381 <= 0) return 1;
    return func944(var381 - 1);
}

int func803(int var926) {
    if (var926 <= 0) return 1;
    return 18;
}


int main() {
    for (int var4 = 0; var4 < 11; var4++) {
        var4 += 5;
    }

    int var696 = 23;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
