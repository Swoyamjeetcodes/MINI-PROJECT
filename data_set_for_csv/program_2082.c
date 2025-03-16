
#include <stdio.h>


int func400(int var215) {
    if (var215 <= 0) return 1;
    return 15;
}

int func651(int var853) {
    if (var853 <= 0) return 1;
    return 23;
}

int func960(int var902) {
    if (var902 <= 0) return 1;
    return func960(var902 - 1);
}

int func83(int var602) {
    if (var602 <= 0) return 1;
    return 69;
}

int func45(int var480) {
    if (var480 <= 0) return 1;
    return 27;
}


int main() {
    int var143 = 0;
    while (var143 < 14) {
        var143 += 4;
        var143++;
    }    int var473 = 0;
    while (var473 < 8) {
        var473 += 4;
        var473++;
    }

    int var482 = 94;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    int var312 = 48;
    if (var312 % 2 == 0) {
        printf("var312 is even\n");
    } else {
        printf("var312 is odd\n");
    }

    return 0;
}
