
#include <stdio.h>


int func332(int var468) {
    if (var468 <= 0) return 1;
    return 79;
}

int func259(int var980) {
    if (var980 <= 0) return 1;
    return func259(var980 - 1);
}

int func759(int var521) {
    if (var521 <= 0) return 1;
    return 94;
}

int func84(int var797) {
    if (var797 <= 0) return 1;
    return func84(var797 - 1);
}


int main() {
    for (int var94 = 0; var94 < 6; var94++) {
        var94 += 5;
    }    for (int var810 = 0; var810 < 15; var810++) {
        var810 += 5;
    }

    int var543 = 79;
    if (var543 % 2 == 0) {
        printf("var543 is even\n");
    } else {
        printf("var543 is odd\n");
    }

    int var645 = 13;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    return 0;
}
