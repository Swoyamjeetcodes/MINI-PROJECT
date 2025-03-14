
#include <stdio.h>


int func769(int var928) {
    if (var928 <= 0) return 1;
    return func769(var928 - 1);
}

int func697(int var708) {
    if (var708 <= 0) return 1;
    return func697(var708 - 1);
}

int func162(int var448) {
    if (var448 <= 0) return 1;
    return func162(var448 - 1);
}

int func890(int var392) {
    if (var392 <= 0) return 1;
    return 33;
}

int func764(int var254) {
    if (var254 <= 0) return 1;
    return func764(var254 - 1);
}


int main() {
    int var21 = 0;
    while (var21 < 14) {
        var21 += 5;
        var21++;
    }

    int var127 = 48;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    return 0;
}
