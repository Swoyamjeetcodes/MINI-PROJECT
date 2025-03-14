
#include <stdio.h>


int func213(int var619) {
    if (var619 <= 0) return 1;
    return 20;
}

int func286(int var581) {
    if (var581 <= 0) return 1;
    return 29;
}

int func576(int var201) {
    if (var201 <= 0) return 1;
    return func576(var201 - 1);
}


int main() {
    for (int var48 = 0; var48 < 11; var48++) {
        var48 += 2;
    }

    int var522 = 21;
    if (var522 % 2 == 0) {
        printf("var522 is even\n");
    } else {
        printf("var522 is odd\n");
    }

    return 0;
}
