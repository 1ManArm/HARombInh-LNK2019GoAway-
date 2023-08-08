#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
#include <memory>
#include "service.h"
#include "menu.h"
#include "creature.h"

void setSize(bodyPart* inner_ptr);
void task1(std::string taskName) {
	float density = 75.0;
	partSize size = partSize::large;
	color color = color::fair;
	furDensity fur = furDensity::average;
	float limbslength = 95.0;
	float limbsquant = 4.0;
	float bodysize = 90;
	float headsize = 50;
	size_t eyesAmount = 2;
	std::string name = "Creature 1";

	do
	{
		system("cls");
		std::cout << "***\t" << taskName << "\n";
		creature creatureA(density, size, color, fur, limbslength, limbsquant, bodysize, headsize, eyesAmount, name);
		std::cout << "\n\n--- Class pointer";
		std::cout << "\nCreature*->size() " << (&creatureA)->size();
		{
			bodyPart* creatureA_ptr = &creatureA;
			bodyPart& creatureA_ref = creatureA;
			std::unique_ptr<bodyPart> creatureA_uniqptr(new creature(density, size, color, fur, limbslength, limbsquant, bodysize, headsize, eyesAmount, name));
			std::cout << "\n\n--- Base class pointer";
			std::cout << "\nBodyPart*->size() " << creatureA_ptr->size();
			std::cout << "\nBodyPart*u->size() " << creatureA_uniqptr->size();
			std::cout << "\n\n--- Base class reference";
			std::cout << "\nBodyPart&.size() " << creatureA_ref.size();
		}
		std::cout << "\n\n--- Direct parent class pointer";
		{
			head* creatureA_ptr = &creatureA;
			std::cout << "\nHead*->size() " << creatureA_ptr->size();
		}
		{
			body* creatureA_ptr = &creatureA;
			std::cout << "\nBody*->size() " << creatureA_ptr->size();
		}
		{
			limbs* creatureA_ptr = &creatureA;
			std::cout << "\nLimbs*->size() " << creatureA_ptr->size();
		}

		std::cout << "\n\nEsc - exit | any key to continue";
	} while (_getch() != 27);
}
void usingBodyPart(bodyPart* creature_ptr) { std::cout << creature_ptr->size(); }
void usingHead(head* creature_ptr) { std::cout << creature_ptr->size(); }
void usingBody(body* creature_ptr) { std::cout << creature_ptr->size(); }
void usingLimbs(limbs* creature_ptr) { std::cout << creature_ptr->size(); }

void Task_2(std::string name_of_task)
{
	do
	{
		system("cls");
		std::cout << "***\t" << name_of_task << "\n";

		std::cout << "\n\nEsc - exit | any key to continue";
	} while (_getch() != 27);
}

void Task_3() {}

void Task_4() {}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	mainMenu Menu;
	Menu.addElem("OOP Home Work 14: Multiple inheritance and the Diamond problem");	// Homework name
	Menu.addElem("Creature class demo");
	
	do
	{
		Menu.showMenu();
		if (!Menu.userChoiceHandle(_getch()))	break;
	} while (true);
	return 0;
}