
#include <stdio.h>


int func309(int var587) {
    if (var587 <= 0) return 1;
    return 11;
}

int func1(int var725) {
    if (var725 <= 0) return 1;
    return func1(var725 - 1);
}

int func236(int var495) {
    if (var495 <= 0) return 1;
    return func236(var495 - 1);
}


int main() {
    for (int var584 = 0; var584 < 19; var584++) {
        var584 += 4;
    }    for (int var497 = 0; var497 < 10; var497++) {
        var497 += 4;
    }    int var87 = 0;
    while (var87 < 6) {
        var87 += 4;
        var87++;
    }

    int var875 = 16;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    return 0;
}
