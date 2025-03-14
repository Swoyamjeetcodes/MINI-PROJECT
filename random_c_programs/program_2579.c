
#include <stdio.h>


int func511(int var700) {
    if (var700 <= 0) return 1;
    return func511(var700 - 1);
}


int main() {
    int var806 = 0;
    while (var806 < 9) {
        var806 += 5;
        var806++;
    }

    int var165 = 100;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
