
#include <stdio.h>


int func863(int var46) {
    if (var46 <= 0) return 1;
    return func863(var46 - 1);
}

int func784(int var305) {
    if (var305 <= 0) return 1;
    return 23;
}

int func535(int var900) {
    if (var900 <= 0) return 1;
    return 42;
}


int main() {
    int var454 = 0;
    while (var454 < 10) {
        var454 += 1;
        var454++;
    }

    int var530 = 38;
    if (var530 % 2 == 0) {
        printf("var530 is even\n");
    } else {
        printf("var530 is odd\n");
    }

    return 0;
}
