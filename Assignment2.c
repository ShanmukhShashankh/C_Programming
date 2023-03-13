/* #include<stdio.h>
int main(){
    const int population = 80000;
    int men,women,lit_men,lit_women,illit_men,illit_women;
    men  = population*52/100;
    women = population*(100-52)/100;
    lit_men = population*35/100;
    lit_women = population*(48-35)/100;
    illit_men = men - lit_men;
    illit_women = women - lit_women;

    printf("Number of illiterate men in the town: %d \n", illit_men);
    printf("Number of illiterate women in the town: %d \n", illit_women);

    return 0;
}
 */

#include<stdio.h>
int main(){
    int C,F,O,D,M,TotalCost,MonthlyCost;

    printf("Enter the cost C for the first F kms followed by the value of F: ");
    scanf("%d", &C);
    scanf("%d", &F);

    printf("Enter the cost O for every km afterward: ");
    scanf("%d", &O);

    printf("Enter the distance from your home to office: ");
    scanf("%d", &D);

    printf("Enter the number of months to calculate the fare for: ");
    scanf("%d", &M);

    if(D>=F){
        TotalCost = 2*(C + ( D - F ) * O);
    }
    else{
        TotalCost = 2*C;
    }

    MonthlyCost = M * 30 * TotalCost;

    printf("Total Cost of the round trip per day: %d \n",TotalCost);
    printf("Fare cost for %d months: %d \n",M,MonthlyCost);
    return 0;
}

