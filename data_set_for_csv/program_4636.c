
#include <stdio.h>


int func719(int var648) {
    if (var648 <= 0) return 1;
    return 79;
}

int func886(int var609) {
    if (var609 <= 0) return 1;
    return 73;
}

int func852(int var592) {
    if (var592 <= 0) return 1;
    return func852(var592 - 1);
}


int main() {
    for (int var922 = 0; var922 < 18; var922++) {
        var922 += 5;
    }

    int var98 = 45;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    int var713 = 78;
    if (var713 % 2 == 0) {
        printf("var713 is even\n");
    } else {
        printf("var713 is odd\n");
    }

    return 0;
}
