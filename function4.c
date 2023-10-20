#include<stdio.h>

float fahr_to_cel(float fahr);//{

    //float celsius;
    //celsius = (fahr-32)/1.8;
    //return celsius;
//}

float fahr_to_kelv(float fahr){

    float kelvin;
    kelvin = fahr_to_cel(fahr) + 273.15;
    return kelvin;
}
float fahr_to_cel(float fahr){

    float celsius;
    celsius = (fahr-32)/1.8;
    return celsius;
}

int main(){

    float fahernheit;
    int option;

    printf("enter temperature in fahernheit: \n");
    scanf("%f", &fahernheit);

    
    
    printf("1. fahernheit to celsius\n2. fahernheit to kelvin\n3. quit\n");
    scanf("%d", &option);
    switch(option){

            case 1 :    printf("converting fahernheit to celsius: %.2f\n", fahr_to_cel(fahernheit));
                        break;    
            case 2 :    printf("converting fahernheit to kelvin: %.2f\n", fahr_to_kelv(fahernheit));
                        break;                
            case 3 :    break;

            default:    break;
        
    }
    
    return 0;
}


