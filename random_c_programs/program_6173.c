
#include <stdio.h>


int func594(int var63) {
    if (var63 <= 0) return 1;
    return func594(var63 - 1);
}

int func607(int var512) {
    if (var512 <= 0) return 1;
    return 30;
}

int func548(int var168) {
    if (var168 <= 0) return 1;
    return 30;
}

int func223(int var72) {
    if (var72 <= 0) return 1;
    return 84;
}


int main() {
    int var425 = 0;
    while (var425 < 15) {
        var425 += 2;
        var425++;
    }    int var598 = 0;
    while (var598 < 18) {
        var598 += 1;
        var598++;
    }    int var182 = 0;
    while (var182 < 16) {
        var182 += 3;
        var182++;
    }

    int var195 = 10;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    int var181 = 51;
    if (var181 % 2 == 0) {
        printf("var181 is even\n");
    } else {
        printf("var181 is odd\n");
    }

    return 0;
}
