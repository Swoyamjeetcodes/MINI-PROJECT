
#include <stdio.h>


int func563(int var755) {
    if (var755 <= 0) return 1;
    return 21;
}

int func352(int var762) {
    if (var762 <= 0) return 1;
    return 39;
}

int func249(int var298) {
    if (var298 <= 0) return 1;
    return 51;
}

int func815(int var657) {
    if (var657 <= 0) return 1;
    return func815(var657 - 1);
}


int main() {
    for (int var122 = 0; var122 < 5; var122++) {
        var122 += 2;
    }    int var53 = 0;
    while (var53 < 18) {
        var53 += 4;
        var53++;
    }    for (int var790 = 0; var790 < 20; var790++) {
        var790 += 5;
    }

    int var882 = 58;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
