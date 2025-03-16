
#include <stdio.h>


int func184(int var168) {
    if (var168 <= 0) return 1;
    return 59;
}

int func805(int var142) {
    if (var142 <= 0) return 1;
    return 84;
}

int func7(int var828) {
    if (var828 <= 0) return 1;
    return func7(var828 - 1);
}

int func168(int var530) {
    if (var530 <= 0) return 1;
    return 26;
}

int func802(int var369) {
    if (var369 <= 0) return 1;
    return func802(var369 - 1);
}


int main() {
    for (int var302 = 0; var302 < 6; var302++) {
        var302 += 3;
    }    for (int var8 = 0; var8 < 20; var8++) {
        var8 += 1;
    }    int var935 = 0;
    while (var935 < 8) {
        var935 += 1;
        var935++;
    }

    int var59 = 41;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    return 0;
}
