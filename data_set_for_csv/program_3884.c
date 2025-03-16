
#include <stdio.h>


int func982(int var571) {
    if (var571 <= 0) return 1;
    return 47;
}

int func25(int var672) {
    if (var672 <= 0) return 1;
    return func25(var672 - 1);
}

int func286(int var338) {
    if (var338 <= 0) return 1;
    return func286(var338 - 1);
}


int main() {
    for (int var288 = 0; var288 < 20; var288++) {
        var288 += 4;
    }

    int var690 = 23;
    if (var690 % 2 == 0) {
        printf("var690 is even\n");
    } else {
        printf("var690 is odd\n");
    }

    int var751 = 50;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    return 0;
}
