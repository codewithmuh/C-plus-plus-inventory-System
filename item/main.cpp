#include<iostream>
#include "header.h"
using namespace std;
int main() {
	Store sto;
	system("cls");
	char option = 'f', name[30], company[30];
	int copies;
	float unit_price;
	while (option != 'e') {
		cout << "\n----------->Enter your choice:<------------\n";
		cout << "I for insert\n";
		cout << "D for delete\n";
		cout << "S for search\n";
		cout << "U for update\n";
		cout << "E for exit\n";

		cin.getline(name, 80);
		option = name[0];

		switch (option) {

		case 'i':
			cout << "Enter Name of Item, Company and no of copies,Unit price  per line:\n";
			cin.getline(name, 80);
			cin.getline(company, 80);
			cin >> copies;
		cin>>unit_price;
			
			sto.insertItem(name, company, copies, unit_price);
			break;
		case 'd':
			cout << "Enter Name of Item:\n";
			cin.getline(name, 80);
			sto.deleteItem(name);
			break;
		case 's':
			cout << "Enter Name of Item:\n";
			cin.getline(name, 80);
			itemEntry* test;
			test = sto.search(name);
			if (test != NULL) {
				cout << "---------------->Searching Result<---------------------" << endl;
				cout << "Item found\n" << "Name of the Item:" << test->name << endl << "Company name:" << test->company << endl << "Number of copies available:" << test->copies << endl << "Unit price:" << test->unit_price << endl;
			}
			else
				cout << "Item not found\n";
			break;
		case 'u':
			cout << "Enter details for update...\n";
			cout << "Enter name: "; cin.getline(name, 80);
			cout << "Enter total new entry: "; 
			cin >> copies;
			cout << "Enter new price: "; 		
			cin >> unit_price;
			sto.updateItem(name, copies, unit_price);
			break;
			/*        case 'e':
			exit(0);
			break;*/
		}
	}
	return 0;

}