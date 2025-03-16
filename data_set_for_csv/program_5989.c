
#include <stdio.h>


int func793(int var215) {
    if (var215 <= 0) return 1;
    return 50;
}

int func669(int var876) {
    if (var876 <= 0) return 1;
    return func669(var876 - 1);
}

int func627(int var272) {
    if (var272 <= 0) return 1;
    return func627(var272 - 1);
}

int func818(int var333) {
    if (var333 <= 0) return 1;
    return func818(var333 - 1);
}


int main() {
    int var554 = 0;
    while (var554 < 12) {
        var554 += 3;
        var554++;
    }    int var878 = 0;
    while (var878 < 11) {
        var878 += 2;
        var878++;
    }

    int var392 = 50;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    return 0;
}
