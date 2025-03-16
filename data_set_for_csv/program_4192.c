
#include <stdio.h>


int func233(int var177) {
    if (var177 <= 0) return 1;
    return 2;
}

int func488(int var34) {
    if (var34 <= 0) return 1;
    return func488(var34 - 1);
}


int main() {
    for (int var21 = 0; var21 < 18; var21++) {
        var21 += 3;
    }

    int var99 = 57;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    return 0;
}
