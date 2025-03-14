
#include <stdio.h>


int func272(int var676) {
    if (var676 <= 0) return 1;
    return func272(var676 - 1);
}


int main() {
    for (int var745 = 0; var745 < 5; var745++) {
        var745 += 3;
    }

    int var904 = 1;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    return 0;
}
