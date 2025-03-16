
#include <stdio.h>


int func495(int var406) {
    if (var406 <= 0) return 1;
    return func495(var406 - 1);
}


int main() {
    for (int var430 = 0; var430 < 5; var430++) {
        var430 += 5;
    }

    int var799 = 75;
    if (var799 % 2 == 0) {
        printf("var799 is even\n");
    } else {
        printf("var799 is odd\n");
    }

    return 0;
}
