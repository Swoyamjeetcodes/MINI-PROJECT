
#include <stdio.h>


int func709(int var596) {
    if (var596 <= 0) return 1;
    return func709(var596 - 1);
}

int func712(int var647) {
    if (var647 <= 0) return 1;
    return 16;
}

int func269(int var4) {
    if (var4 <= 0) return 1;
    return func269(var4 - 1);
}


int main() {
    int var174 = 0;
    while (var174 < 11) {
        var174 += 5;
        var174++;
    }

    int var326 = 63;
    if (var326 % 2 == 0) {
        printf("var326 is even\n");
    } else {
        printf("var326 is odd\n");
    }

    int var497 = 41;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    int var417 = 83;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    return 0;
}
