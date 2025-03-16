
#include <stdio.h>


int func759(int var314) {
    if (var314 <= 0) return 1;
    return func759(var314 - 1);
}


int main() {
    for (int var985 = 0; var985 < 10; var985++) {
        var985 += 5;
    }

    int var571 = 34;
    if (var571 % 2 == 0) {
        printf("var571 is even\n");
    } else {
        printf("var571 is odd\n");
    }

    return 0;
}
