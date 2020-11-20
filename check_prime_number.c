 /*************************************************************************
 * Check if given number is a Prime number 
 * __________________
 * Created by: Mohamed Maher . 
 * Embedded System Developper.
 * Penteration system Tester.
 * LinkedIn: https://www.linkedin.com/in/mohamed-maher-37b167a5/
 * ************************************************************************/
#include <stdio.h>

#include <stdio.h>
int main() {
    
while(1){
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    }
}