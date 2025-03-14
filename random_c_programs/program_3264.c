
#include <stdio.h>


int func368(int var301) {
    if (var301 <= 0) return 1;
    return func368(var301 - 1);
}

int func408(int var703) {
    if (var703 <= 0) return 1;
    return func408(var703 - 1);
}

int func491(int var814) {
    if (var814 <= 0) return 1;
    return 1;
}


int main() {
    for (int var860 = 0; var860 < 19; var860++) {
        var860 += 4;
    }

    int var119 = 98;
    if (var119 % 2 == 0) {
        printf("var119 is even\n");
    } else {
        printf("var119 is odd\n");
    }

    return 0;
}
