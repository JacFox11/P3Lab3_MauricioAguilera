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
				
				cout<<"Ingrese la especie del animal: ";
				cin>>temps;
				espera.at(c)->setEspecie(temps);
				
				system("cls");
				cout<<"Ingrese el nombre del animal: ";
				cin>>temps;
				espera.at(c)->setNombre(temps);
				
				system("cls");
				cout<<"Ingrese el tamano del animal: ";
				cin>>tempi;
				espera.at(c)->setTamano(tempi);
				
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
						espera.at(c)->setTipo("Artico");
						break;
					}
					case 2:{
						espera.at(c)->setTipo("Desertico");
						break;
					}
					case 3:{
						espera.at(c)->setTipo("Tropical");
						break;
					}
					case 4:{
						espera.at(c)->setTipo("Sabana");
						break;
					}
				}
				
				system("cls");
				cout<<"Ingrese la cantidad de patas del animal: ";
				cin>>tempi;
				espera.at(c)->getPatas()->setCantidad(tempi);
				
				system("cls");
				cout<<"Ingrese el largo de las patas del animal: ";
				cin>>tempi;
				espera.at(c)->getPatas()->setLargo(tempi);
				
				system("cls");
				cout<<"Ingrese el tipo de las patas del animal(Pezunas, tentaculos. etc): ";
				cin>>temps;
				espera.at(c)->getPatas()->setTipo(temps);
				
				system("cls");
				cout<<"Ingrese el color del pelaje del animal: ";
				cin>>temps;
				espera.at(c)->getPelaje()->setColor(temps);
				
				system("cls");
				cout<<"Ingrese el grosor del pelaje del animal: ";
				cin>>tempi;
				espera.at(c)->getPelaje()->setGrosor(tempi);
				
				system("cls");
				cout<<"Ingrese el largo del pelaje del animal: ";
				cin>>tempi;
				espera.at(c)->getPelaje()->setLargo(tempi);
				
				system("cls");
				cout<<"Ingrese el color de los ojos del animal: ";
				cin>>temps;
				espera.at(c)->getOjos()->setColor(temps);
				
				system("cls");
				cout<<"...:::VISTA NOCTURNA:::..."<<endl;
				cout<<"1. Nocturna"<<endl<<
				"2. No nocturna"<<endl<<
				"Ingrese una opcion: ";
				cin>>tempi;
				switch (tempi){
					case 1:{
						espera.at(c)->getOjos()->setNocturno(true);
						break;
					}
					case 2:{
						espera.at(c)->getOjos()->setNocturno(false);
						break;
					}
				}
				
				system("cls");
				cout<<"Ingrese el tamano de las orejas del animal: ";
				cin>>tempi;
				espera.at(c)->getOrejas()->setTamano(tempi);
				
				system("cls");
				cout<<"...:::CAPACIDAD AUDITIVA:::..."<<endl;
				cout<<"1. Capaz"<<endl<<
				"2. No Capaz"<<endl<<
				"Ingrese una opcion: ";
				cin>>tempi;
				switch (tempi){
					case 1:{
						espera.at(c)->getOrejas()->setCapacidad(true);
						break;
					}
					case 2:{
						espera.at(c)->getOrejas()->setCapacidad(false);
						break;
					}
				}
				
				system("cls");
				cout<<"Ingrese el largo de la cola del animal: ";
				cin>>tempi;
				espera.at(c)->getCola()->setLargo(tempi);
				
				system("cls");
				cout<<"...:::CCOLA PELUDA:::..."<<endl;
				cout<<"1. Peluda"<<endl<<
				"2. No Peluda"<<endl<<
				"Ingrese una opcion: ";
				cin>>tempi;
				switch (tempi){
					case 1:{
						espera.at(c)->getOrejas()->setCapacidad(true);
						break;
					}
					case 2:{
						espera.at(c)->getOrejas()->setCapacidad(false);
						break;
					}
				}
				
				system("cls");
				cout<<"Animal exitosamente agregado a la lista de espera"<<endl;
				c++;
				system("pause");
				break;
			}
			
			case '2':{
				for (int i=0; i<espera.size() ; i++){
					if (espera.at(i)->getTipo() == "Artico" ){
						zoo->setArtico(espera.at(i) ); 
					}
					if (espera.at(i)->getTipo() == "Desertico" ){
						zoo->setDesertico(espera.at(i) ); 
					}
					if (espera.at(i)->getTipo() == "Tropical" ){
						zoo->setTropical(espera.at(i) ); 
					}
					if (espera.at(i)->getTipo() == "Sabana" ){
						zoo->setSabana(espera.at(i) ); 
					}
				}
				system("cls");
				cout<<"Animales exitosamente agregados al zoologico"<<endl;
				c=0;
				system("pause");
				break;
			}
			case '3':{
				cout<<"...:::LISTA DE ANIMALES:::..."<<endl;
				for (int i=0; i<zoo->getArticos().size() ; i++ ){
					zoo->getArticos().at(i)->print();  
				}
				for (int i=0; i<zoo->getDeserticos().size() ; i++ ){
					zoo->getDeserticos().at(i)->print();  
				}
				for (int i=0; i<zoo->getTropicales().size() ; i++ ){
					zoo->getTropicales().at(i)->print();  
				}
				for (int i=0; i<zoo->getSabanas().size() ; i++ ){
					zoo->getSabanas().at(i)->print();  
				}
				break;
			}
			case '4':{
				system("cls");
				cout<<"Gracias por usar este programa"<<endl;
				system("pause");
				return 0;
				
				break;
			}
			default:{
				
				break;
			}
		}
	}
	
	
}
