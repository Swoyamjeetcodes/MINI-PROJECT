
#include <stdio.h>


int func430(int var540) {
    if (var540 <= 0) return 1;
    return func430(var540 - 1);
}

int func477(int var799) {
    if (var799 <= 0) return 1;
    return 25;
}

int func55(int var750) {
    if (var750 <= 0) return 1;
    return func55(var750 - 1);
}


int main() {
    for (int var235 = 0; var235 < 13; var235++) {
        var235 += 3;
    }

    int var397 = 2;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
