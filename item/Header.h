#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<conio.h>
#pragma warning(disable:4996)
#pragma warning(disable:4700)
using namespace std;

#define MAX    100

class itemEntry {
public:
	float unit_price;
	int copies;
	char name[30];
	char company[30];
};

class Store {
public:
	int numItem;
	itemEntry database[MAX];

	Store() {
		numItem = 0;
	}
	void insertItem(char itemName[], char company[], int c, float p);
	void deleteItem(char itemName[]);
	itemEntry* search(char itemName[]);
	void updateItem(char itemName[], int total, float price);
};
