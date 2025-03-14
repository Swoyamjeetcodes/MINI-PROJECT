
#include <stdio.h>


int func738(int var650) {
    if (var650 <= 0) return 1;
    return 59;
}

int func709(int var756) {
    if (var756 <= 0) return 1;
    return func709(var756 - 1);
}

int func325(int var353) {
    if (var353 <= 0) return 1;
    return 60;
}

int func374(int var443) {
    if (var443 <= 0) return 1;
    return func374(var443 - 1);
}

int func577(int var377) {
    if (var377 <= 0) return 1;
    return func577(var377 - 1);
}


int main() {
    int var263 = 0;
    while (var263 < 9) {
        var263 += 3;
        var263++;
    }

    int var304 = 98;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    return 0;
}
