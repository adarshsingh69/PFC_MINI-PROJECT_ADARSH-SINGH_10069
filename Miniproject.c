#include <stdio.h>     //Adarsh Singh, ERP-10069

int main() {
    int n, sum, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 9) {
        sum = 0;
        temp = n;

        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }

        n = sum;
    }

    printf("Digital Root (Single Digit) = %d\n", n);

    return 0;
}
//Output
// Enter a number: 345
// Digital Root (Single Digit) = 3
