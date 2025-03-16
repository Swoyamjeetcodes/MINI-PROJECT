
#include <stdio.h>


int func111(int var357) {
    if (var357 <= 0) return 1;
    return func111(var357 - 1);
}

int func44(int var57) {
    if (var57 <= 0) return 1;
    return func44(var57 - 1);
}

int func950(int var283) {
    if (var283 <= 0) return 1;
    return func950(var283 - 1);
}

int func645(int var781) {
    if (var781 <= 0) return 1;
    return 52;
}

int func412(int var918) {
    if (var918 <= 0) return 1;
    return func412(var918 - 1);
}

int func632(int var17) {
    if (var17 <= 0) return 1;
    return func632(var17 - 1);
}


int main() {
    int var253 = 0;
    while (var253 < 11) {
        var253 += 3;
        var253++;
    }

    int var526 = 43;
    if (var526 % 2 == 0) {
        printf("var526 is even\n");
    } else {
        printf("var526 is odd\n");
    }

    int var670 = 18;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    int var113 = 24;
    if (var113 % 2 == 0) {
        printf("var113 is even\n");
    } else {
        printf("var113 is odd\n");
    }

    return 0;
}
