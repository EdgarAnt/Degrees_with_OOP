#include <iostream>
#include <cstdlib>
using namespace std;
class Celsius{
 private:
 double grados;
 public:
 void setGrado(double);
 double getGrado();
 void CalcularGradosF();
 void CalcularGradosK();
};
void Celsius::setGrado(double grados)
{
 this->grados=grados;
}
double Celsius::getGrado()
{
 return this->grados;
}
void Celsius::CalcularGradosF()
{
 this->grados=(this->grados*9/5+32);
}
void Celsius::CalcularGradosK()
{
 this->grados=(this->grados+273.15);
}
class Kelvin{
 private:
 double grados;
 public:
 void setGrado(double);
 double getGrado();
 void CalcularGrados();
};
void Kelvin::setGrado(double grados)
{
 this->grados=grados;
}
double Kelvin::getGrado()
{
 return this->grados;
}
void Kelvin::CalcularGrados()
{
 this->grados=(this->grados-273.15);
}
class Farenheit{
 private:
 double grados;
 public:
 void setGrado(double);
 double getGrado();
 void CalcularGrados();
};
void Farenheit::setGrado(double grados)
{
 this->grados=grados;
}
double Farenheit::getGrado()
{
 return this->grados;
}
void Farenheit::CalcularGrados()
{
 this->grados=(this->grados-273.15)*9/5+32;
}
void menu() {
 int opc;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"| Menu |"<<endl;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"1) Celsius-Kelvin"<<endl;
 cout<<"2) Kelvin-Celsius"<<endl;
 cout<<"3) Celsius-Farenheit"<<endl;
 cout<<"4) Farenheit-Celsius"<<endl;
 cout<<"5) Salir"<<endl;
 cout<<endl<<"opcion: ";
 cin>>opc;
 switch(opc)
 {
 case 1:
 {
 double grados=0;
 Celsius ob;
 system("cls");
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"| Celsius-Kelvin |"<<endl;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"Ingrese los grados celsius:";
 cin>>grados;
 ob.setGrado(grados);
 ob.CalcularGradosK();
 cout<<endl<<"Los grados en Kelvin son: "<<ob.getGrado();
 }
 break;
 case 2:
 {
 double grados=0;
 Kelvin ob;
 system("cls");
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"| Kelvin-Celsius |"<<endl;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"Ingrese los grados Kelvin:";
 cin>>grados;
 ob.setGrado(grados);
 ob.CalcularGrados();
 cout<<endl<<"Los grados en Celsius son: "<<ob.getGrado();
 }
 break;
 case 3:
 {
 double grados=0;
 Celsius ob;
 system("cls");
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"| Celsius-Farenheit |"<<endl;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"Ingrese los grados celsius:";
 cin>>grados;
 ob.setGrado(grados);
 ob.CalcularGradosF();
 cout<<endl<<"Los grados en Farenheitt son: "<<ob.getGrado();
 }
 break;
 case 4:
 {
{
 double grados=0;
 Farenheit ob;
 system("cls");
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"| Farenheit-Celsius |"<<endl;
 cout<<"--------------------------------------------------------------------------------"<<endl;
 cout<<"Ingrese los grados celsius:";
 cin>>grados;
 ob.setGrado(grados);
 ob.CalcularGrados();
 cout<<endl<<"Los grados en Celsius son: "<<ob.getGrado();
 }
 break;
 case 5: cout<<endl<<"Presione (0) para salir"<<endl;
 break;
 default: cout<<"Opcion invalida"<<endl;
 }
 }
}
int opc=0;
int main(int argc, char** argv) {
do{
 system("cls");
menu();
cout<<endl<<"Continuar 1[si] 0 [no] "<<endl;
 cin>>opc;
}while(opc!=0);
system("pause>>cls");
return 0;

}
