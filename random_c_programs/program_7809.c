
#include <stdio.h>


int func933(int var201) {
    if (var201 <= 0) return 1;
    return func933(var201 - 1);
}

int func477(int var389) {
    if (var389 <= 0) return 1;
    return func477(var389 - 1);
}

int func846(int var359) {
    if (var359 <= 0) return 1;
    return func846(var359 - 1);
}


int main() {
    for (int var888 = 0; var888 < 13; var888++) {
        var888 += 1;
    }    int var26 = 0;
    while (var26 < 9) {
        var26 += 1;
        var26++;
    }    int var356 = 0;
    while (var356 < 6) {
        var356 += 1;
        var356++;
    }

    int var273 = 17;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    return 0;
}
