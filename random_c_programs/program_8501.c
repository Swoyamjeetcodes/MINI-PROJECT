
#include <stdio.h>


int func87(int var575) {
    if (var575 <= 0) return 1;
    return func87(var575 - 1);
}


int main() {
    for (int var773 = 0; var773 < 19; var773++) {
        var773 += 2;
    }

    int var191 = 18;
    if (var191 % 2 == 0) {
        printf("var191 is even\n");
    } else {
        printf("var191 is odd\n");
    }

    return 0;
}
