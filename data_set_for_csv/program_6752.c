
#include <stdio.h>


int func337(int var840) {
    if (var840 <= 0) return 1;
    return func337(var840 - 1);
}

int func332(int var679) {
    if (var679 <= 0) return 1;
    return 53;
}

int func777(int var925) {
    if (var925 <= 0) return 1;
    return func777(var925 - 1);
}


int main() {
    for (int var455 = 0; var455 < 12; var455++) {
        var455 += 4;
    }    for (int var760 = 0; var760 < 18; var760++) {
        var760 += 1;
    }

    int var904 = 52;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    return 0;
}
