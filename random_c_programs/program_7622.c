
#include <stdio.h>


int func290(int var264) {
    if (var264 <= 0) return 1;
    return func290(var264 - 1);
}

int func947(int var982) {
    if (var982 <= 0) return 1;
    return 8;
}

int func449(int var505) {
    if (var505 <= 0) return 1;
    return func449(var505 - 1);
}

int func4(int var158) {
    if (var158 <= 0) return 1;
    return func4(var158 - 1);
}


int main() {
    for (int var631 = 0; var631 < 6; var631++) {
        var631 += 3;
    }

    int var371 = 59;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    return 0;
}
