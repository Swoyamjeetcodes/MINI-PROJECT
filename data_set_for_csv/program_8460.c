
#include <stdio.h>


int func332(int var514) {
    if (var514 <= 0) return 1;
    return 87;
}

int func865(int var508) {
    if (var508 <= 0) return 1;
    return 50;
}

int func720(int var585) {
    if (var585 <= 0) return 1;
    return func720(var585 - 1);
}

int func965(int var973) {
    if (var973 <= 0) return 1;
    return 91;
}

int func898(int var217) {
    if (var217 <= 0) return 1;
    return func898(var217 - 1);
}

int func238(int var777) {
    if (var777 <= 0) return 1;
    return func238(var777 - 1);
}

int func410(int var552) {
    if (var552 <= 0) return 1;
    return func410(var552 - 1);
}

int func949(int var400) {
    if (var400 <= 0) return 1;
    return 71;
}


int main() {
    int var581 = 0;
    while (var581 < 9) {
        var581 += 5;
        var581++;
    }

    int var833 = 59;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
