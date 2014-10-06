 #include <iostream>		
  using namespace std;		
 #define MINIMI 10					
 const int MAKSIMI = 20;					
 int summa;								
 void Laske(int, int);	

 void main() 
 {
 	int luku1 = 2; 
	int luku2;  
	cout << "Syötä luku: "; 
	cin >> luku2; 
	Laske(luku1, luku2); 
						 
	if (summa < MINIMI)
		cout<<"Summa on pienempi kuin MINIMI ";
	if (summa > MAKSIMI)
		cout<<"Summa on suurempi kuin MAKSIMI ";
	if (summa < MAKSIMI && summa > MINIMI)  cout << "Summa on MINIMIN ja MAKSIMIN välissä";

 }
 void Laske(int eka, int toka) 
								
 {
 	summa = eka + toka; 
 }