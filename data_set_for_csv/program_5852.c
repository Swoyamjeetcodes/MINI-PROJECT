
#include <stdio.h>


int func621(int var78) {
    if (var78 <= 0) return 1;
    return func621(var78 - 1);
}


int main() {
    for (int var641 = 0; var641 < 15; var641++) {
        var641 += 5;
    }

    int var673 = 12;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    return 0;
}
