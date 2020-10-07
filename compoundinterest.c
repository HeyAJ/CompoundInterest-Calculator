# include <stdio.h>
# include <math.h>

int main() {

    int time, principle;
    float rate;

    printf("please enter principle amount of which you want to find compound interet: ");
    scanf("%d", &principle); //input for principle

    printf("please enter the time peroid on which you want to find compound interet: ");
    scanf("%d", &time); //input for time period

    printf("please enter the rate of interest in decimal on which you want to find compound interet: ");
    scanf("%f", &rate);//input for rate of interest

    float main = 1 + rate;
    float maininterest = pow(main, time) * principle;

    printf("the interest calculated on the given principle, rate and time is: %f\n", maininterest - principle);

    printf("the total amount with compound interest calculated on the given principle, rate and time is: %f", maininterest);
    

    return 0;
}
