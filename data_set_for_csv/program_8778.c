
#include <stdio.h>


int func336(int var165) {
    if (var165 <= 0) return 1;
    return func336(var165 - 1);
}


int main() {
    for (int var497 = 0; var497 < 12; var497++) {
        var497 += 5;
    }

    int var274 = 32;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    return 0;
}
