#include "Zoologico.cpp"
using namespace std;

int main(){
	char op='0';
	Zoologico* zoo = new Zoologico();
	vector<Animal*> espera;
	int c=0;
	while (op != '4'){
		system("cls");
		cout<<"...:::MENU:::..."<<endl<<
		"1. Agregar animal"<<endl<<
		"2. Agregar al Zoologico"<<endl<<
		"3. Listar zoologico"<<endl<<
		"4. Salir"<<endl<<
		"Ingrese una opcion: ";
		cin>>op;
		switch (op){
			case '1':{
				system("cls");
				espera.push_back(new Animal()); 
				cout<<"...:::AGREGAR ANIMAL:::..."<<endl;
				string temps;
				int tempi;
				bool tempb;
				cout<<"Ingrese la especie del animal: ";
				cin>>temps;
				espera.at(0)->setEspecie(temps);
				
				system("cls");
				cout<<"Ingrese el nombre del animal: ";
				cin>>temps;
				espera.at(0)->setNombre(temps);
				
				system("cls");
				cout<<"Ingrese el tamano del animal: ";
				cin>>tempi;
				espera.at(0)->setTamano(tempi);
				
				system("cls");
				cout<<"...:::Tipo:::..."<<endl;
				cout<<"1. Artico"<<endl<<
				"2. Desertico"<<endl<<
				"3. Tropical"<<endl<<
				"4. Sabana"<<endl<<
				"Ingrese una opcion: ";
				cin>>tempi;
				switch (tempi){
					case 1:{
						espera.at(0)->setTipo("Artico");
						break;
					}
					case 2:{
						espera.at(0)->setTipo("Desertico");
						break;
					}
					case 3:{
						espera.at(0)->setTipo("Tropical");
						break;
					}
					case 4:{
						espera.at(0)->setTipo("Sabana");
						break;
					}
				}
				
				system("cls");
				cout<<"Ingrese la cantidad de patas del animal: ";
				cin>>tempi;
				espera.at(0)->getPatas()->setCantidad(tempi);
				
				system("cls");
				cout<<"Ingrese el largo de las patas del animal: ";
				cin>>tempi;
				espera.at(0)->getPatas()->setLargo(tempi);
				break;
			}
			
			case '2':{
				
				break;
			}
			case '3':{
				
				break;
			}
			case '4':{
				
				break;
			}
			default:{
				
				break;
			}
		}
	}
	
	system("pause");
	return 0;
}
