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
	cout << "Sy�t� luku: "; 
	cin >> luku2; 
	Laske(luku1, luku2); 
						 
	if (summa < MINIMI)
		cout<<"Summa on pienempi kuin MINIMI ";
	if (summa > MAKSIMI)
		cout<<"Summa on suurempi kuin MAKSIMI ";
	if (summa < MAKSIMI && summa > MINIMI)  cout << "Summa on MINIMIN ja MAKSIMIN v�liss�";

 }
 void Laske(int eka, int toka) 
								
 {
 	summa = eka + toka; 
 }