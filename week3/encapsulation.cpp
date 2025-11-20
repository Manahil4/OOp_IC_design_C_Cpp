#include <iostream>
#include <string>
using namespaces std;
class TemperatureConverter{

	private:const double ABS_ZERO_C=-273.15;
		 static bool isValidCelsius(double c){
                 return c>=ABS_ZERO_C;
}
	
public:static double celsiusToFahrenheit(double c){
	      if(!isValidCelsius(c)){
	      cout<<"\nInvalid Temp";
	return 0.0;
	       }
	   return (c*9.0/5.0)+32;

	       }
 double fahrenheitToCelsius(double f){
 if(!isValidCelsius(c)){
              cout<<"\nInvalid Temp";
        return 0.0;
               }
	       return (f-32.0)*5.0/9.0;
	       }
	


};
int main(){
	TemperatureConverter t1,t2;
	cout<<"temp =230 C converted into fahrenheie; \n"<<TemperatureConverter::celsiusToFahreheit(230);

	cout<<"temp =230F  converted into C; \n"<<t1.fahreheitToCelsius(230);
return 0;
}
