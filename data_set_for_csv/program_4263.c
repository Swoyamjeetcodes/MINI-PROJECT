
#include <stdio.h>


int func339(int var894) {
    if (var894 <= 0) return 1;
    return 44;
}

int func675(int var729) {
    if (var729 <= 0) return 1;
    return func675(var729 - 1);
}

int func233(int var767) {
    if (var767 <= 0) return 1;
    return func233(var767 - 1);
}


int main() {
    for (int var343 = 0; var343 < 10; var343++) {
        var343 += 3;
    }

    int var436 = 28;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    return 0;
}
