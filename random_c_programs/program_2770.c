
#include <stdio.h>


int func370(int var226) {
    if (var226 <= 0) return 1;
    return func370(var226 - 1);
}

int func188(int var770) {
    if (var770 <= 0) return 1;
    return 37;
}

int func583(int var885) {
    if (var885 <= 0) return 1;
    return 69;
}

int func372(int var215) {
    if (var215 <= 0) return 1;
    return func372(var215 - 1);
}


int main() {
    for (int var248 = 0; var248 < 17; var248++) {
        var248 += 5;
    }

    int var795 = 5;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
