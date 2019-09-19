#include<iostream>
#include "header.h"
using namespace std;

void Store::insertItem(char itemName[], char company[], int c, float p) {
	strcpy(database[numItem].name, itemName);
	strcpy(database[numItem].company, company);
	database[numItem].copies = c;
	database[numItem].unit_price = p;
	cout << "Item Inserted Successfully.\n";
	++numItem;
}

void Store::deleteItem(char itemName[]) {
	int i;
	for (i = 0; i < numItem; i++) {
		if (strcmp(itemName, database[i].name) == 0) {
			database[i].copies--;
			cout << "Item Deleted Successfully.\n";
			return;
		}
	}
	cout << "Item not found.\n";
}

itemEntry* Store::search(char itemName[]) {
	int i;
	for (i = 0; i < numItem; i++) {
		if (strcmp(itemName, database[i].name) == 0)
			return &database[i];
	}
	return NULL;
}

void Store::updateItem(char itemName[], int total, float price)
{
	itemEntry* item = search(itemName);
	if (item == NULL)
	{
		cout << "Item not found.\n";
		return;
	}
	item->copies += total;
	item->unit_price = price;
}