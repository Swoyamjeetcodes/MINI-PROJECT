
#include <stdio.h>


int func776(int var231) {
    if (var231 <= 0) return 1;
    return func776(var231 - 1);
}


int main() {
    for (int var192 = 0; var192 < 6; var192++) {
        var192 += 5;
    }

    int var427 = 21;
    if (var427 % 2 == 0) {
        printf("var427 is even\n");
    } else {
        printf("var427 is odd\n");
    }

    return 0;
}
