
#include <stdio.h>


int func624(int var503) {
    if (var503 <= 0) return 1;
    return func624(var503 - 1);
}

int func7(int var461) {
    if (var461 <= 0) return 1;
    return 39;
}

int func998(int var807) {
    if (var807 <= 0) return 1;
    return func998(var807 - 1);
}


int main() {
    for (int var901 = 0; var901 < 6; var901++) {
        var901 += 2;
    }    for (int var764 = 0; var764 < 14; var764++) {
        var764 += 1;
    }

    int var46 = 86;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    int var633 = 49;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    int var930 = 69;
    if (var930 % 2 == 0) {
        printf("var930 is even\n");
    } else {
        printf("var930 is odd\n");
    }

    return 0;
}
