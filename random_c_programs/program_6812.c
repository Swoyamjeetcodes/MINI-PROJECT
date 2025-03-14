
#include <stdio.h>


int func906(int var197) {
    if (var197 <= 0) return 1;
    return func906(var197 - 1);
}

int func230(int var345) {
    if (var345 <= 0) return 1;
    return 40;
}


int main() {
    for (int var77 = 0; var77 < 7; var77++) {
        var77 += 2;
    }    int var801 = 0;
    while (var801 < 12) {
        var801 += 4;
        var801++;
    }

    int var143 = 5;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    return 0;
}
