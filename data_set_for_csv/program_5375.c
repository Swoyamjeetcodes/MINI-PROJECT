
#include <stdio.h>


int func478(int var689) {
    if (var689 <= 0) return 1;
    return 1;
}

int func705(int var900) {
    if (var900 <= 0) return 1;
    return func705(var900 - 1);
}


int main() {
    for (int var403 = 0; var403 < 5; var403++) {
        var403 += 4;
    }

    int var684 = 0;
    if (var684 % 2 == 0) {
        printf("var684 is even\n");
    } else {
        printf("var684 is odd\n");
    }

    int var24 = 0;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    int var702 = 30;
    if (var702 % 2 == 0) {
        printf("var702 is even\n");
    } else {
        printf("var702 is odd\n");
    }

    int var440 = 66;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    return 0;
}
