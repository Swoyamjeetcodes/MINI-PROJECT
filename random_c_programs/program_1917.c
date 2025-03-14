
#include <stdio.h>


int func45(int var543) {
    if (var543 <= 0) return 1;
    return func45(var543 - 1);
}


int main() {
    for (int var966 = 0; var966 < 8; var966++) {
        var966 += 2;
    }

    int var773 = 2;
    if (var773 % 2 == 0) {
        printf("var773 is even\n");
    } else {
        printf("var773 is odd\n");
    }

    int var409 = 27;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    return 0;
}
