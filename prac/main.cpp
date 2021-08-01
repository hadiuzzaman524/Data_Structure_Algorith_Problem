#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;

typedef struct ADT
{
    string type; //drone type
    float price; //drone price
    float sp; //sale price
    float orderSales; //sales for each drone
    int order; // number of order of each drone
    string name;
};

void printline(){
    for(int i=0; i<70; i++)
        cout<< "~";
    cout<<endl;
}

int getData(ADT obj[]){

}
int main()
{
    ADT *drone;
    drone=new ADT[500];

    ifstream file1;
    file1.open ("input.txt");

    int k=0;
  for(int i=0; i<50; i++){
    file1>>drone[i].name>>drone[i].price>>drone[i].order>>drone[i].type;
    if(drone[i].name!=""){
        k++;
    }
  }
  cout<<k<<endl;

  // Find the length of array
  int j=0;
  while(true){
    file1>>drone[j].name;
    j++;
    if(drone[j].name=="")
        break;
  }


  cout<< j<<endl;
  cout<< "PRINT ALL INFO"<<endl;
  printline();
  cout<<"Name"<< setw(10)<< "Price"<< setw(10)<< "Salse Price"<< setw(10)<< "Order"<< setw(10)<< "Sales"<<endl;
  printline();

  for(int i=0; i<50; i++){
    if(drone[i].name=="Agriculture"){
            drone[i].sp=drone[i].price*(1.5/100)+drone[i].price;
        cout<< drone[i].sp<<endl;
    }
    drone[i].orderSales=drone[i].order*drone[i].price;

  }

      int n = 0;


  for(int i=0; i<5; i++){

    cout<< drone[i].name<<setw(10)<<drone[i].price<<setw(10)<<drone[i].order<<" "<< drone[i].type <<endl;
  }

  file1.close();
    return 0;
}
