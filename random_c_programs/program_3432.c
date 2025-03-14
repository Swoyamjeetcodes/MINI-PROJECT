
#include <stdio.h>


int func329(int var578) {
    if (var578 <= 0) return 1;
    return func329(var578 - 1);
}

int func793(int var802) {
    if (var802 <= 0) return 1;
    return func793(var802 - 1);
}

int func607(int var135) {
    if (var135 <= 0) return 1;
    return 23;
}

int func760(int var85) {
    if (var85 <= 0) return 1;
    return 14;
}


int main() {
    for (int var115 = 0; var115 < 7; var115++) {
        var115 += 3;
    }    int var740 = 0;
    while (var740 < 19) {
        var740 += 3;
        var740++;
    }    for (int var472 = 0; var472 < 5; var472++) {
        var472 += 4;
    }

    int var937 = 14;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    return 0;
}
