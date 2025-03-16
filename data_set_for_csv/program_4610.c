
#include <stdio.h>


int func957(int var116) {
    if (var116 <= 0) return 1;
    return 59;
}

int func987(int var586) {
    if (var586 <= 0) return 1;
    return func987(var586 - 1);
}

int func783(int var401) {
    if (var401 <= 0) return 1;
    return func783(var401 - 1);
}

int func627(int var974) {
    if (var974 <= 0) return 1;
    return 82;
}


int main() {
    int var847 = 0;
    while (var847 < 9) {
        var847 += 3;
        var847++;
    }

    int var85 = 80;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    int var802 = 96;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    int var665 = 95;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
