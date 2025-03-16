
#include <stdio.h>


int func185(int var876) {
    if (var876 <= 0) return 1;
    return func185(var876 - 1);
}


int main() {
    for (int var177 = 0; var177 < 10; var177++) {
        var177 += 5;
    }

    int var902 = 62;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    return 0;
}
