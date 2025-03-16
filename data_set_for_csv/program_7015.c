
#include <stdio.h>


int func572(int var828) {
    if (var828 <= 0) return 1;
    return func572(var828 - 1);
}

int func823(int var169) {
    if (var169 <= 0) return 1;
    return 6;
}


int main() {
    int var110 = 0;
    while (var110 < 18) {
        var110 += 2;
        var110++;
    }    int var306 = 0;
    while (var306 < 16) {
        var306 += 5;
        var306++;
    }    for (int var989 = 0; var989 < 19; var989++) {
        var989 += 2;
    }

    int var860 = 29;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
