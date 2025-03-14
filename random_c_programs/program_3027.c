
#include <stdio.h>


int func727(int var481) {
    if (var481 <= 0) return 1;
    return func727(var481 - 1);
}

int func49(int var317) {
    if (var317 <= 0) return 1;
    return func49(var317 - 1);
}

int func791(int var79) {
    if (var79 <= 0) return 1;
    return func791(var79 - 1);
}


int main() {
    int var894 = 0;
    while (var894 < 14) {
        var894 += 4;
        var894++;
    }    for (int var569 = 0; var569 < 18; var569++) {
        var569 += 3;
    }

    int var253 = 47;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
