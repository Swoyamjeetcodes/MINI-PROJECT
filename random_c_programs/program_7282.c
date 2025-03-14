
#include <stdio.h>


int func608(int var535) {
    if (var535 <= 0) return 1;
    return func608(var535 - 1);
}

int func404(int var905) {
    if (var905 <= 0) return 1;
    return func404(var905 - 1);
}

int func6(int var956) {
    if (var956 <= 0) return 1;
    return func6(var956 - 1);
}

int func17(int var604) {
    if (var604 <= 0) return 1;
    return 45;
}

int func9(int var700) {
    if (var700 <= 0) return 1;
    return 33;
}


int main() {
    for (int var244 = 0; var244 < 6; var244++) {
        var244 += 1;
    }    for (int var325 = 0; var325 < 16; var325++) {
        var325 += 5;
    }    for (int var898 = 0; var898 < 16; var898++) {
        var898 += 4;
    }

    int var889 = 81;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    int var693 = 89;
    if (var693 % 2 == 0) {
        printf("var693 is even\n");
    } else {
        printf("var693 is odd\n");
    }

    int var77 = 61;
    if (var77 % 2 == 0) {
        printf("var77 is even\n");
    } else {
        printf("var77 is odd\n");
    }

    return 0;
}
