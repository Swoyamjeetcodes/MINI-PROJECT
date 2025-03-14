
#include <stdio.h>


int func28(int var334) {
    if (var334 <= 0) return 1;
    return func28(var334 - 1);
}


int main() {
    for (int var275 = 0; var275 < 18; var275++) {
        var275 += 1;
    }    for (int var349 = 0; var349 < 20; var349++) {
        var349 += 2;
    }    int var732 = 0;
    while (var732 < 8) {
        var732 += 1;
        var732++;
    }

    int var777 = 55;
    if (var777 % 2 == 0) {
        printf("var777 is even\n");
    } else {
        printf("var777 is odd\n");
    }

    return 0;
}
