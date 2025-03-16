
#include <stdio.h>


int func308(int var498) {
    if (var498 <= 0) return 1;
    return func308(var498 - 1);
}


int main() {
    int var746 = 0;
    while (var746 < 18) {
        var746 += 5;
        var746++;
    }

    int var241 = 14;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    return 0;
}
