#include "../header/helper.h"
#include "../header/dsa.h"

int main()
{
	int choice = 0;
	int input = 0;
	println("Starting.....");
	Node *head = nullptr;
	do
	{
		println("");
		println("1). Insert at the end ");
		println("2). Insert at a position (number, position) ");
		println("3). Delete");
		println("4). Sort");
		println("5). Print list");
		println("6). Exit");
		println("Enter you choice : ");
		std::cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			println("Enter number you want to insert: ");
			std::cin >> input;
			if (head == nullptr)
				head = Insert(input, head);
			else
				Insert(input, head);
			break;
		case 2:
			println("Enter the number and position you want to insert: ");
			int position;
			std::cin >> input >> position;
			head = InsertAtPosition(input, position, head);
			break;
		case 3:
			println("Enter the number to be deleted from the list: ");
			std::cin >> input;
			Delete(input, head);
			break;
		case 4:
			system("cls");
			SortList(head);
			break;
		case 5:
			PrintList(head);
		default:
			break;
		}
	} while (6 != choice);
	println("Exiting program.....");

	return 0;
}