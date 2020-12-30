
/* Exercise 1-1 is trivial */

/* Exercise 1-2 is trivial */

/* Exercise 1-3 */
#ifdef EXERCISE_1_3
    #include <stdio.h>

    int print_fahrenheit_celsius_table() {
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        while(fahr <= upper) {
            celsius = (5.0 / 9.0) * (fahr - 32.0);
            printf("%3.0f %6.1f\n", fahr, celsius);
            fahr = fahr + step;
        }

        return 0;
    }
#endif /* EXERCISE_1_3 */

int main(int argc, char **argv)
{
    #ifdef EXERCISE_1_3
        print_fahrenheit_celsius_table();
    #endif
}