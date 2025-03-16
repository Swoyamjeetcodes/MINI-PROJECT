
#include <stdio.h>


int func735(int var587) {
    if (var587 <= 0) return 1;
    return func735(var587 - 1);
}

int func333(int var319) {
    if (var319 <= 0) return 1;
    return func333(var319 - 1);
}

int func900(int var774) {
    if (var774 <= 0) return 1;
    return func900(var774 - 1);
}

int func906(int var583) {
    if (var583 <= 0) return 1;
    return func906(var583 - 1);
}

int func84(int var735) {
    if (var735 <= 0) return 1;
    return func84(var735 - 1);
}


int main() {
    int var91 = 0;
    while (var91 < 13) {
        var91 += 5;
        var91++;
    }

    int var637 = 8;
    if (var637 % 2 == 0) {
        printf("var637 is even\n");
    } else {
        printf("var637 is odd\n");
    }

    return 0;
}
