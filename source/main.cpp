#include "../header/helper.h"
#include "../header/dsa.h"
//#include <cstdlib>

int main()
{
	//system("cls");
	println("Starting.....");
	auto head = Insert(19, nullptr);
	Insert(8, head);
	Insert(10, head);
	Insert(12, head);
	Insert(2, head);
	Insert(16, head);
	Insert(3, head);
	// int choice = 0;
	// do
	// {
	// 	println("");
	// 	println("1). Insert at the end ");
	// 	println("2). Insert at a position (number, positio) ");
	// 	println("Enter you choice");
	// 	println("Enter you choice");
	// 	println("Enter you choice");
	// 	println("6). Exit");
	// 	println("Enter you choice : ");
	// 	std::cin >> choice;

	// 	switch (choice)
	// 	{
	// 	case 1:
	// 		println("Enter number you want to insert: ");
	// 		std::cin >> choice;
	// 		Insert(choice, head);
	// 		break;
	// 	case 2:
	// 		println("Enter the number and position you want to insert: ");
	// 		int position;
	// 		std::cin >> choice >> position;
	// 		head = InsertAtPosition(choice, position, head);
	// 		break;
	// 	case 3:
	// 		PrintList(head);
	// 	default:
	// 		break;
	// 	}
	// } while (choice != 6);
	head = InsertAtPosition(15, 1, head);
	head = Delete(15,head);
	println(head->data);
	println(head->next->data);
	println(head->next->next->data);
	std::cout << "\n";
	PrintList(head);
	Delete(3,head);
	std::cout << "\n";
	PrintList(head);
	return 0;
}