
#include <stdio.h>


int func488(int var905) {
    if (var905 <= 0) return 1;
    return 99;
}

int func472(int var429) {
    if (var429 <= 0) return 1;
    return func472(var429 - 1);
}


int main() {
    for (int var375 = 0; var375 < 20; var375++) {
        var375 += 5;
    }    int var648 = 0;
    while (var648 < 15) {
        var648 += 1;
        var648++;
    }

    int var872 = 84;
    if (var872 % 2 == 0) {
        printf("var872 is even\n");
    } else {
        printf("var872 is odd\n");
    }

    return 0;
}
