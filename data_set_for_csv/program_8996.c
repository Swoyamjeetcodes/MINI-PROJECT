
#include <stdio.h>


int func670(int var40) {
    if (var40 <= 0) return 1;
    return 72;
}

int func623(int var261) {
    if (var261 <= 0) return 1;
    return func623(var261 - 1);
}

int func620(int var353) {
    if (var353 <= 0) return 1;
    return func620(var353 - 1);
}

int func577(int var163) {
    if (var163 <= 0) return 1;
    return func577(var163 - 1);
}

int func796(int var732) {
    if (var732 <= 0) return 1;
    return func796(var732 - 1);
}


int main() {
    int var736 = 0;
    while (var736 < 14) {
        var736 += 2;
        var736++;
    }    for (int var934 = 0; var934 < 7; var934++) {
        var934 += 1;
    }    int var129 = 0;
    while (var129 < 6) {
        var129 += 2;
        var129++;
    }    int var755 = 0;
    while (var755 < 16) {
        var755 += 2;
        var755++;
    }

    int var572 = 93;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    int var143 = 86;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    int var766 = 60;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    return 0;
}
