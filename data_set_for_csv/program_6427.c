
#include <stdio.h>


int func770(int var650) {
    if (var650 <= 0) return 1;
    return func770(var650 - 1);
}

int func594(int var163) {
    if (var163 <= 0) return 1;
    return func594(var163 - 1);
}


int main() {
    int var355 = 0;
    while (var355 < 20) {
        var355 += 5;
        var355++;
    }    int var86 = 0;
    while (var86 < 16) {
        var86 += 5;
        var86++;
    }    for (int var267 = 0; var267 < 18; var267++) {
        var267 += 1;
    }

    int var184 = 51;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
