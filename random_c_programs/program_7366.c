
#include <stdio.h>


int func1(int var231) {
    if (var231 <= 0) return 1;
    return func1(var231 - 1);
}


int main() {
    for (int var949 = 0; var949 < 9; var949++) {
        var949 += 1;
    }

    int var233 = 7;
    if (var233 % 2 == 0) {
        printf("var233 is even\n");
    } else {
        printf("var233 is odd\n");
    }

    return 0;
}
