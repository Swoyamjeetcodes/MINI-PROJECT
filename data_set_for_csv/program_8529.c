
#include <stdio.h>


int func832(int var738) {
    if (var738 <= 0) return 1;
    return 52;
}

int func242(int var414) {
    if (var414 <= 0) return 1;
    return func242(var414 - 1);
}

int func758(int var627) {
    if (var627 <= 0) return 1;
    return func758(var627 - 1);
}

int func393(int var772) {
    if (var772 <= 0) return 1;
    return 54;
}


int main() {
    int var51 = 0;
    while (var51 < 20) {
        var51 += 3;
        var51++;
    }    for (int var857 = 0; var857 < 12; var857++) {
        var857 += 5;
    }

    int var382 = 33;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    return 0;
}
