
#include <stdio.h>


int func840(int var386) {
    if (var386 <= 0) return 1;
    return func840(var386 - 1);
}

int func792(int var379) {
    if (var379 <= 0) return 1;
    return func792(var379 - 1);
}

int func344(int var735) {
    if (var735 <= 0) return 1;
    return func344(var735 - 1);
}

int func393(int var135) {
    if (var135 <= 0) return 1;
    return func393(var135 - 1);
}


int main() {
    for (int var903 = 0; var903 < 12; var903++) {
        var903 += 3;
    }

    int var414 = 20;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    int var460 = 1;
    if (var460 % 2 == 0) {
        printf("var460 is even\n");
    } else {
        printf("var460 is odd\n");
    }

    int var717 = 60;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
