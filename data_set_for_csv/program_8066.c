
#include <stdio.h>


int func35(int var827) {
    if (var827 <= 0) return 1;
    return 71;
}

int func913(int var531) {
    if (var531 <= 0) return 1;
    return func913(var531 - 1);
}

int func4(int var859) {
    if (var859 <= 0) return 1;
    return func4(var859 - 1);
}


int main() {
    int var415 = 0;
    while (var415 < 11) {
        var415 += 1;
        var415++;
    }

    int var837 = 86;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    return 0;
}
