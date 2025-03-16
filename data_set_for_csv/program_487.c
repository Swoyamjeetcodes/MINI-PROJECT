
#include <stdio.h>


int func886(int var594) {
    if (var594 <= 0) return 1;
    return func886(var594 - 1);
}


int main() {
    int var430 = 0;
    while (var430 < 8) {
        var430 += 2;
        var430++;
    }

    int var806 = 12;
    if (var806 % 2 == 0) {
        printf("var806 is even\n");
    } else {
        printf("var806 is odd\n");
    }

    return 0;
}
