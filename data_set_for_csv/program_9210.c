
#include <stdio.h>


int func618(int var394) {
    if (var394 <= 0) return 1;
    return 63;
}

int func912(int var236) {
    if (var236 <= 0) return 1;
    return func912(var236 - 1);
}

int func111(int var707) {
    if (var707 <= 0) return 1;
    return func111(var707 - 1);
}


int main() {
    for (int var370 = 0; var370 < 8; var370++) {
        var370 += 1;
    }    for (int var66 = 0; var66 < 12; var66++) {
        var66 += 3;
    }    for (int var425 = 0; var425 < 10; var425++) {
        var425 += 5;
    }

    int var166 = 65;
    if (var166 % 2 == 0) {
        printf("var166 is even\n");
    } else {
        printf("var166 is odd\n");
    }

    int var943 = 48;
    if (var943 % 2 == 0) {
        printf("var943 is even\n");
    } else {
        printf("var943 is odd\n");
    }

    int var6 = 78;
    if (var6 % 2 == 0) {
        printf("var6 is even\n");
    } else {
        printf("var6 is odd\n");
    }

    return 0;
}
