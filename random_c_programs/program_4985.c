
#include <stdio.h>


int func527(int var482) {
    if (var482 <= 0) return 1;
    return 9;
}

int func576(int var538) {
    if (var538 <= 0) return 1;
    return 38;
}

int func329(int var400) {
    if (var400 <= 0) return 1;
    return 46;
}

int func495(int var628) {
    if (var628 <= 0) return 1;
    return func495(var628 - 1);
}


int main() {
    int var949 = 0;
    while (var949 < 7) {
        var949 += 1;
        var949++;
    }

    int var351 = 59;
    if (var351 % 2 == 0) {
        printf("var351 is even\n");
    } else {
        printf("var351 is odd\n");
    }

    return 0;
}
