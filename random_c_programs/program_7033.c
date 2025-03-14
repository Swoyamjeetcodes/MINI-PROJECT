
#include <stdio.h>


int func795(int var263) {
    if (var263 <= 0) return 1;
    return func795(var263 - 1);
}

int func240(int var922) {
    if (var922 <= 0) return 1;
    return 58;
}

int func56(int var649) {
    if (var649 <= 0) return 1;
    return func56(var649 - 1);
}

int func268(int var425) {
    if (var425 <= 0) return 1;
    return func268(var425 - 1);
}


int main() {
    int var829 = 0;
    while (var829 < 14) {
        var829 += 2;
        var829++;
    }    for (int var654 = 0; var654 < 15; var654++) {
        var654 += 2;
    }

    int var760 = 67;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    int var860 = 94;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
