#include <iostream>
using namespace std;

int main(){

	int day=0;
	cout << "Ingrese una opci�n: \n1. Circulo \n2. Cuadrado \n3. Triangulo" << endl;
	cin>>day;
	
	
	switch (day){
	
		case 1:
			cout<<"        * * *     "<<endl;
			cout<<"      * * * * *    "<<endl;
			cout<<"    * * * * * * *  "<<endl;
			cout<<"    * * * * * * *  "<<endl;
			cout<<"      * * * * *    "<<endl;
			cout<<"        * * *      "<<endl;
			break;
		case 2:
			cout<<"    * * * * * * *  "<<endl;
			cout<<"    * * * * * * *  "<<endl;
			cout<<"    * * * * * * *  "<<endl;
			cout<<"    * * * * * * *  "<<endl;
			cout<<"    * * * * * * *  "<<endl;
			cout<<"    * * * * * * *  "<<endl;
			break;
		case 3:
			cout<<"          *       "<<endl;
			cout<<"         ***    "<<endl;
			cout<<"        * * *     "<<endl;
			cout<<"       * * * *    "<<endl;
			cout<<"      * * * * *  "<<endl;
			cout<<"     ** * * * **  "<<endl;
			break;
		default:
            cout << "Opci�n no v�lida" << endl;
    return 0;
	}
};
