/* Trabajo 1 

Crear una clase y hacer 2 o más clases hijas de esa misma clase*

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

string comprobarSexo(bool);

class Humano {
	protected: 
		int edad;
		string nombre;
		bool hombre;
	public:
		Humano(int, string, bool);
		virtual void desplazarse();
		virtual void saltar();
		virtual void mostrar();
};

class Adulto : public Humano{
	private:
		bool trabaja;
		bool hijos;
	public:
		Adulto(int, string, bool, bool, bool);
		void desplazarse();
		void saltar();
		void mostrar();
};

class Ninio : public Humano{
	private:
		bool estudia;
	public: 
		Ninio(int, string, bool, bool);
		void desplazarse();
		void saltar();
		void mostrar();
};

Humano::Humano(int _edad, string _nombre, bool _hombre){
	edad = _edad;
	nombre = _nombre;
	hombre = _hombre;
}

void Humano::desplazarse(){
	cout<<"\n\t"<<nombre<<" se desplaza."<<endl;
}

void Humano::saltar(){
	cout<<"\n\t"<<nombre<<" intenta saltar."<<endl;
}

void Humano::mostrar(){
	cout<<"\n\tNombre: "<<nombre<<endl;
	cout<<"\tEdad: "<<edad<<endl;
	cout<<"\tEs "<<comprobarSexo(hombre)<<endl;
}

Adulto::Adulto(int _edad, string _nombre, bool _hombre, bool _trabaja, bool _hijos) : Humano(_edad, _nombre, _hombre){
	trabaja = _trabaja;
	hijos = _hijos;
}

void Adulto::desplazarse(){
	Humano::desplazarse();
	cout<<"\n\t"<<nombre<<" es un adulto, por lo tanto, se desplaza lentamente."<<endl;
}

void Adulto::saltar(){
	Humano::saltar();
	cout<<"\n\t"<<nombre<<" es un adulto con edad de "<<edad<<" por lo cual no puede saltar muy alto o no puede."<<endl;
}

void Adulto::mostrar(){
	cout<<"\n\tNombre: "<<nombre<<endl;
	cout<<"\tEdad: "<<edad<<endl;
	cout<<"\tEs "<<comprobarSexo(hombre)<<endl;
	
	cout<<"\t";
	
	if(trabaja) cout<<"Si tiene trabajo."<<endl;
	else cout<<"No tiene trabajo."<<endl;
	
	cout<<"\t";
	
	if(hijos) cout<<"Si tiene hijos."<<endl;
	else cout<<"No tiene hijos."<<endl; 
}


Ninio::Ninio(int _edad, string _nombre, bool _hombre, bool _estudia) : Humano(_edad, _nombre, _hombre){
	estudia = _estudia;
}

void Ninio::desplazarse(){
	Humano::desplazarse();
	cout<<"\n\t"<<nombre<<" es un ninio, por lo tanto, se desplaza rapidamente."<<endl;
}

void Ninio::saltar(){
	Humano::saltar();
	cout<<"\n\t"<<nombre<<" es un ninio con edad de "<<edad<<" por lo cual puede saltar alto."<<endl;
}

void Ninio::mostrar(){
	cout<<"\n\tNombre: "<<nombre<<endl;
	cout<<"\tEdad: "<<edad<<endl;
	cout<<"\tEs "<<comprobarSexo(hombre)<<endl;
	
	cout<<"\t";
	
	if(estudia) cout<<"Si estudia"<<endl;
	else cout<<"No estudia"<<endl;
}

int main(){
	int edad;
	string nombre;
	int sexo;
	bool hombre;
	int opc, accion;
	
	cout<<"\t---- Trabajo 1 ----"<<endl<<endl;
	
	cout<<"Su persona es solamente un Humano (0), un Adulto (1) o un Ninio (2): "; cin>>opc;
	
	switch(opc){
		case 0: 
		{
			cout<<"Digite la edad: "; cin>>edad;
			cout<<"Digite el nombre: "; cin>>nombre;
			cout<<"Digite el sexo - hombre(0) o mujer(1): "; cin>>sexo;
			
			sexo == 0 ? hombre = true : hombre = false;
			
			Humano Humano1(edad, nombre, hombre);
			
			cout<<"\n\tControle a su humano."<<endl<<endl;
			
			do{
				
				cout<<"\n1. Desplazarse."<<endl;
				cout<<"2. Saltar."<<endl;
				cout<<"3. Mostrar datos."<<endl;
				cout<<"4. Salir."<<endl;
				cout<<"Opcion: "; cin>>accion;
				
				switch(accion){
					case 1: 
						Humano1.desplazarse();
						break;
					case 2: 
						Humano1.saltar();
						break;
					case 3: 
						Humano1.mostrar();
						break;
				}
				
			}while(accion != 4);
		}
		
			break;
		
		case 1: 
		{
			int opcTrab, opcHijos;
			bool trabaja, hijos;
		
			cout<<"Digite la edad: "; cin>>edad;
			cout<<"Digite el nombre: "; cin>>nombre;
			cout<<"Digite el sexo - hombre(0) o mujer(1): "; cin>>sexo;
			cout<<"Trabaja - Si(0) No(1): "; cin>>opcTrab;
			cout<<"Hijos - Si(0) No(1): "; cin>>opcHijos;
			
			sexo == 0 ? hombre = true : hombre = false;
			opcTrab == 0 ? trabaja = true : trabaja = false;
			opcHijos == 0 ? hijos = true : hijos = false;
			
			Adulto Adulto1 (edad, nombre, hombre, trabaja, hijos);
			
			cout<<"\n\tControle a su humano."<<endl<<endl;
			
			do{
				
				cout<<"\n1. Desplazarse."<<endl;
				cout<<"2. Saltar."<<endl;
				cout<<"3. Mostrar datos."<<endl;
				cout<<"4. Salir."<<endl;
				cout<<"Opcion: "; cin>>accion;
				
				switch(accion){
					case 1: 
						Adulto1.desplazarse();
						break;
					case 2: 
						Adulto1.saltar();
						break;
					case 3: 
						Adulto1.mostrar();
						break;
				}
				
			}while(accion != 4);
		}
			break;
		
		case 2: 
		{
			int opcEstud;
			bool estudia;
			
			cout<<"Digite la edad: "; cin>>edad;
			cout<<"Digite el nombre: "; cin>>nombre;
			cout<<"Digite el sexo - hombre(0) o mujer(1): "; cin>>sexo;
			cout<<"Estudia - Si(0) No(1): "; cin>>opcEstud;
			
			sexo == 0 ? hombre = true : hombre = false;
			opcEstud == 0 ? estudia = true : estudia = false;
			
			Ninio Ninio1 (edad, nombre, hombre, estudia);
			
			cout<<"\n\tControle a su humano."<<endl<<endl;
			
			do{
				
				cout<<"\n1. Desplazarse."<<endl;
				cout<<"2. Saltar."<<endl;
				cout<<"3. Mostrar datos."<<endl;
				cout<<"4. Salir."<<endl;
				cout<<"Opcion: "; cin>>accion;
				
				switch(accion){
					case 1: 
						Ninio1.desplazarse();
						break;
					case 2: 
						Ninio1.saltar();
						break;
					case 3: 
						Ninio1.mostrar();
						break;
				}
				
			}while(accion != 4);
		}
			break;
	}
	
	return 0;
}

string comprobarSexo(bool sexo){
	if(sexo) return "hombre.";
	return "mujer.";
}
