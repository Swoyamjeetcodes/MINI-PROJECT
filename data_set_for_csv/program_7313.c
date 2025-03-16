
#include <stdio.h>


int func409(int var426) {
    if (var426 <= 0) return 1;
    return func409(var426 - 1);
}


int main() {
    for (int var341 = 0; var341 < 5; var341++) {
        var341 += 4;
    }

    int var99 = 78;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    return 0;
}
