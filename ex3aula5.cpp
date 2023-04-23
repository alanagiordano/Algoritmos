#include<stdio.h>

float celsiusFahrenheit(float Ce,float Fa);
float fahrenheitCelsius(float Ce,float Fa);
float celsiusKelvin(float Ce, float Ke);
float KelvinCelsius(float Ke, float Ce);
float CelsiusReaumur(float Ce, float Re);
float ReaumurCelsius(float Re, float Ce);
float KelvinRankine(float Ke, float Ra);
float RankineKelvin(float Ra, float Ke);

int main()
{
    int opcao;
    float Ce, Fa, Ke, Re, Ra, res1, res2, res3;
    float res4,res5,res6,res7,res8;
    printf("Observe as opcoes: \n");
    printf("1)Celsius para Fahrenheit\n");
    printf("2)Fahrenheit para Celsius\n");
    printf("3)Celsius para Kelvin\n");
    printf("4)Kelvin para Celsius\n");
    printf("5)Celsius para Reaumur\n");
    printf("6)Reaumur para Celsius\n");
    printf("7)Kelvin para Rankine\n");
    printf("8)Rankine para Kelvin\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Qual o valor em Celsius? ");
        scanf("%f", &Ce);
        res1=celsiusFahrenheit(Ce,Fa);
        printf("%.2f",res1);
        break;
    case 2:
        printf("Qual o valor em Fahrenheit? ");
        scanf("%f", &Fa);
        res2=fahrenheitCelsius(Ce,Fa);
        printf("%.2f",res2);
    case 3:
        printf("Qual o valor em Celsius? ");
        scanf("%f", &Ce);
        res3=celsiusKelvin(Ce,Ke);
        printf("%.2f",res3);
    case 4:
        printf("Qual o valor em kelvin? ");
        scanf("%f", &Ke);
        res1=KelvinCelsius(Ke,Ce);
        printf("%.2f",res4);
    case 5:
        printf("Qual o valor em Celsius? ");
        scanf("%f", &Ce);
        res1=CelsiusReaumur(Ce,Re);
        printf("%.2f",res5);
    case 6:
        printf("Qual o valor em Reamur? ");
        scanf("%f", &Re);
        res1=ReaumurCelsius(Re,Ce);
        printf("%.2f",res6);
    case 7:
        printf("Qual o valor em kelvin? ");
        scanf("%f", &Ke);
        res1=KelvinRankine(Ke,Ra);
        printf("%.2f",res7);
    case 8:
        printf("Qual o valor em Rankine? ");
        scanf("%f", &Ra);
        res1=RankineKelvin(Ra,Ke);
        printf("%.2f",res8);
    default:
        break;
    }

}

float celsiusFahrenheit(float Ce,float Fa){
    Fa=(9*Ce/5)+32;
    return Fa;
}

float fahrenheitCelsius(float Ce,float Fa){
    Ce=(Fa-32)*5/9;
    return Ce;
}

float celsiusKelvin(float Ce, float Ke){
    Ke=Ce+273.15;
    return Ke;
}

float KelvinCelsius(float Ke, float Ce){
    Ce = Ke - 273.15;
    return Ce;
}

float CelsiusReaumu(float Ce, float Re){
    Re = Ce * 4/5;
    return Re;
}

float ReaumurCelsius(float Re, float Ce){
    Ce = Re * 5/4;
    return Ce;
}

float KelvinRankine(float Ke, float Ra){
    Ra = Ke * 1.8;
    return Ra;
}

float RankineKelvin(float Ra, float Ke){
    Ke = Ra/1.8 ;
    return Ke;
}