void main() 
{ 
	CStack *ptStack; 
	C_File fifo;				// file First In First  Out 
	C_Pile lifo;				// pile Last In First Out 
  
	ptStack = &fifo;				// ptStack pointe vers la pile FIFO 
	*ptStack < 0 < 1;				// empile 0 puis 1 
	cout << "pile = " << *ptStack;	// à l'écran : pile = 0 1 
	int i; 
	*ptStack > i;						// dépile dans i 
	cout << "pile = " << *ptStack << " i = " << i << endl;	// à l'écran : pile = 1 i = 0 
 
	ptStack = &lifo;				// ptStack pointe vers la pile LIFO 
	*ptStack < 0 < 1;				// empile 0 puis 1 
	cout << "pile = " << *ptStack; // à l'écran : pile = 0 1 
	*ptStack > i;						// dépile dans i 
	cout << "pile = " << *ptStack << " i = " << i << endl;	// à l'écran : pile = 0 i = 1 
}
