
#include <stdio.h>


int func462(int var919) {
    if (var919 <= 0) return 1;
    return func462(var919 - 1);
}


int main() {
    for (int var876 = 0; var876 < 12; var876++) {
        var876 += 2;
    }

    int var359 = 12;
    if (var359 % 2 == 0) {
        printf("var359 is even\n");
    } else {
        printf("var359 is odd\n");
    }

    return 0;
}
