
#include <stdio.h>


int func409(int var648) {
    if (var648 <= 0) return 1;
    return func409(var648 - 1);
}

int func957(int var633) {
    if (var633 <= 0) return 1;
    return func957(var633 - 1);
}

int func746(int var453) {
    if (var453 <= 0) return 1;
    return func746(var453 - 1);
}


int main() {
    int var460 = 0;
    while (var460 < 9) {
        var460 += 2;
        var460++;
    }    for (int var550 = 0; var550 < 11; var550++) {
        var550 += 4;
    }

    int var861 = 97;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
