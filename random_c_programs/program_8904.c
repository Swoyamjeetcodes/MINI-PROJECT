
#include <stdio.h>


int func170(int var339) {
    if (var339 <= 0) return 1;
    return 10;
}

int func33(int var556) {
    if (var556 <= 0) return 1;
    return 26;
}

int func799(int var78) {
    if (var78 <= 0) return 1;
    return func799(var78 - 1);
}


int main() {
    int var680 = 0;
    while (var680 < 16) {
        var680 += 4;
        var680++;
    }

    int var405 = 44;
    if (var405 % 2 == 0) {
        printf("var405 is even\n");
    } else {
        printf("var405 is odd\n");
    }

    int var216 = 25;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
