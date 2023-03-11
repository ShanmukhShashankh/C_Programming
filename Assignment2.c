/* #include<stdio.h>
int main(){
    const int population = 80000;
    int men,women,lit_men,lit_women,illit_men=0,illit_women=0;
    men  = population*52/100;
    women = population*(100-52)/100;
    lit_men = population*35/100;
    lit_women = population*(48-35)/100;
    illit_men = men - lit_men;
    illit_women = women - lit_women;

    printf("Number of literate men in the town: %d \n", lit_men);
    printf("Number of literate women in the town: %d \n", lit_women);
    printf("Number of illiterate men in the town: %d \n", illit_men);
    printf("Number of illiterate women in the town: %d \n", illit_women);

    return 0;
} */


/* #include<stdio.h>
int main(){
    int C,F,O,D,M,TotalCost,MonthlyCost;
    scanf("%d", &C);
    scanf("%d", &F);
    scanf("%d", &O);
    scanf("%d", &D);
    scanf("%d", &M);

    if(2*D>=F){
        TotalCost = C + (2 * D - F ) * O;
    }
    else{
        TotalCost = C;
    }

    MonthlyCost = M * 30 * TotalCost;

    printf("Total Cost: %d \n",TotalCost);
    printf("Monthly Cost: %d \n",MonthlyCost);
    return 0;
} */