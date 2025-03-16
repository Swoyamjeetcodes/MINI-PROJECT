
#include <stdio.h>


int func719(int var487) {
    if (var487 <= 0) return 1;
    return func719(var487 - 1);
}

int func126(int var37) {
    if (var37 <= 0) return 1;
    return func126(var37 - 1);
}

int func363(int var681) {
    if (var681 <= 0) return 1;
    return 92;
}

int func638(int var938) {
    if (var938 <= 0) return 1;
    return 71;
}


int main() {
    int var945 = 0;
    while (var945 < 20) {
        var945 += 5;
        var945++;
    }    for (int var749 = 0; var749 < 14; var749++) {
        var749 += 4;
    }

    int var190 = 26;
    if (var190 % 2 == 0) {
        printf("var190 is even\n");
    } else {
        printf("var190 is odd\n");
    }

    return 0;
}
