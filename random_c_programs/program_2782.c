
#include <stdio.h>


int func164(int var182) {
    if (var182 <= 0) return 1;
    return 32;
}

int func975(int var739) {
    if (var739 <= 0) return 1;
    return func975(var739 - 1);
}

int func538(int var498) {
    if (var498 <= 0) return 1;
    return func538(var498 - 1);
}

int func122(int var105) {
    if (var105 <= 0) return 1;
    return func122(var105 - 1);
}


int main() {
    for (int var368 = 0; var368 < 19; var368++) {
        var368 += 4;
    }

    int var922 = 83;
    if (var922 % 2 == 0) {
        printf("var922 is even\n");
    } else {
        printf("var922 is odd\n");
    }

    int var219 = 0;
    if (var219 % 2 == 0) {
        printf("var219 is even\n");
    } else {
        printf("var219 is odd\n");
    }

    int var388 = 57;
    if (var388 % 2 == 0) {
        printf("var388 is even\n");
    } else {
        printf("var388 is odd\n");
    }

    return 0;
}
