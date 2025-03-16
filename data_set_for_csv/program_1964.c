
#include <stdio.h>


int func743(int var622) {
    if (var622 <= 0) return 1;
    return 22;
}

int func498(int var184) {
    if (var184 <= 0) return 1;
    return func498(var184 - 1);
}


int main() {
    int var142 = 0;
    while (var142 < 6) {
        var142 += 2;
        var142++;
    }    for (int var323 = 0; var323 < 12; var323++) {
        var323 += 2;
    }

    int var584 = 82;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    int var163 = 21;
    if (var163 % 2 == 0) {
        printf("var163 is even\n");
    } else {
        printf("var163 is odd\n");
    }

    return 0;
}
