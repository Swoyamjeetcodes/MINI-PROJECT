
#include <stdio.h>


int func884(int var737) {
    if (var737 <= 0) return 1;
    return func884(var737 - 1);
}

int func362(int var638) {
    if (var638 <= 0) return 1;
    return func362(var638 - 1);
}

int func400(int var968) {
    if (var968 <= 0) return 1;
    return 52;
}

int func511(int var546) {
    if (var546 <= 0) return 1;
    return func511(var546 - 1);
}

int func418(int var893) {
    if (var893 <= 0) return 1;
    return 9;
}


int main() {
    for (int var300 = 0; var300 < 18; var300++) {
        var300 += 2;
    }

    int var467 = 92;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    return 0;
}
