
#include <stdio.h>


int func973(int var682) {
    if (var682 <= 0) return 1;
    return func973(var682 - 1);
}

int func426(int var181) {
    if (var181 <= 0) return 1;
    return 97;
}

int func630(int var215) {
    if (var215 <= 0) return 1;
    return func630(var215 - 1);
}

int func522(int var749) {
    if (var749 <= 0) return 1;
    return 83;
}

int func874(int var66) {
    if (var66 <= 0) return 1;
    return func874(var66 - 1);
}


int main() {
    for (int var165 = 0; var165 < 19; var165++) {
        var165 += 5;
    }    for (int var971 = 0; var971 < 17; var971++) {
        var971 += 2;
    }    int var513 = 0;
    while (var513 < 19) {
        var513 += 4;
        var513++;
    }

    int var118 = 77;
    if (var118 % 2 == 0) {
        printf("var118 is even\n");
    } else {
        printf("var118 is odd\n");
    }

    return 0;
}
