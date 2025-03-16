
#include <stdio.h>


int func611(int var671) {
    if (var671 <= 0) return 1;
    return func611(var671 - 1);
}

int func306(int var459) {
    if (var459 <= 0) return 1;
    return 22;
}

int func703(int var695) {
    if (var695 <= 0) return 1;
    return func703(var695 - 1);
}


int main() {
    for (int var734 = 0; var734 < 18; var734++) {
        var734 += 1;
    }    int var184 = 0;
    while (var184 < 12) {
        var184 += 3;
        var184++;
    }

    int var829 = 28;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    int var904 = 18;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    return 0;
}
