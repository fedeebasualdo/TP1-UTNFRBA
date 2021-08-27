#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }
        cout << endl;
}


void revector(int v[], int dim){
	for(int k=0; k<dim/2; k++){
		int aux=v[k];
		v[k]=v[dim-1-k];
		v[dim-1-k]=aux;
	}
}

void Mtraspuesta(int m[][5], int fil){
	for(int k=0; k<fil; k++){
		for(int j=k+1; j<fil; j++){
			int aux=m[k][j];
			m[k][j]=m[j][k];
			m[j][k]=aux;
		}
	}
}

	
int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};
    

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    
	
	cout<<"VECTOR 5 ELEMENTOS"<<endl;		            
	mostrarvec(vec5, dim5);
	cout<<"Reverso"<<endl;
	revector(vec5, dim5);
	mostrarvec(vec5, dim5);
	cout<<endl<<endl;
	
	cout<<"VECTOR 10 ELEMENTOS"<<endl;
	mostrarvec(vec10, dim10);
	revector(vec10, dim10);
	cout<<"Reverso"<<endl;
	mostrarvec(vec10, dim10);
	cout<<endl<<endl;
	
	cout<<"MATRIZ 5X5"<<endl;
	mostrarmat(matriz, dim5);
	Mtraspuesta(matriz, dim5);
	cout<<"MATRIZ 5X5 TRASPUESTA"<<endl;
    mostrarmat(matriz, dim5);
    
    return 0;
}
