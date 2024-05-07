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
		case 0:
			if (head == nullptr)
				head = Insert(10, head);
			else
				Insert(10, head);
			Insert(9, head);
			Insert(8, head);
			Insert(7, head);
			Insert(6, head);
			Insert(5, head);
			Insert(4, head);
			PrintList(head);
			InsertAtPosition(-48, 4, head);
			Delete(6, head);
			PrintList(head);
			InsertAtPosition(63, 5, head);
			PrintList(head);
			SortList(head);
			PrintList(head);
			break;
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
			SortList(head);
			break;
		case 5:
			system("cls");
			PrintList(head);
		default:
			break;
		}
	} while (6 != choice);
	println("Exiting program.....");

	return 0;
}