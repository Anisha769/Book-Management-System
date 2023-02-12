#include <iostream>
#include <conio.h>

using namespace std;
int i = 0;
class book_var // Parent class
{
public:
    int book_id, price, pages;
    string author, name, publisher;
    book_var() // Constructor
    {
        book_id = 0;
        pages = 0;
        price = 0;
        name = "";
        author = "";
        publisher = "";
    }
} b[20]; // array object of size 20

class book_fun : public book_var // child class
{
public:
    void add();    // add new book function
    void menu();   // menu function
    void search(); // search book function
    void update(); // update book function
    void del();    // delete book function
    void show();   // show all book function
};

void book_fun ::menu()
{
p:
    int choice;
    cout << "\n\n\t\tBook Management System\n";
    cout << "\n 1. Add New Book";
    cout << "\n 2. Search Book";
    cout << "\n 3. Update Book";
    cout << "\n 4. Delete Book";
    cout << "\n 5. Show All Books";
    cout << "\n 6. Exit";
    cout << "\n\n Enter Your Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        search();
        break;
    case 3:
        update();
        break;
    case 4:
        del();
        break;
    case 5:
        show();
        break;
    case 6:
        exit(0);
    default:
        cout << "\n\n Invalid Choice ... Please try again!";
        break;
    }
    getch();
    goto p; // label
}
void book_fun::add()
{
p:
    cout << "\n\n\t\tBook Management System";
    cout << "\n Book Id: ";
    cin >> b[i].book_id;
    for (int a = 0; a < i; a++)
    {
        if (b[i].book_id == b[a].book_id)
        {
            cout << "\n\n Book ID Already Exist....";
            getch();
            goto p;
        }
    }
    cout << "\n Book Name: ";
    cin >> b[i].name;
    cout << "\n Author Name: ";
    cin >> b[i].author;
    cout << "\n Publisher Name: ";
    cin >> b[i].publisher;
    cout << "\n Pages: ";
    cin >> b[i].pages;
    cout << "\n Price: ";
    cin >> b[i].price;
    cout << "\n\n\t\t Congratulations! New Book Added Successfully......!";
    i++;
}
void book_fun::search()
{
    int id, found = 0, choice;
    string name;
    cout << "\n\n\t\t Book Management System";
    if (i == 0)
    {
        cout << "Database is empty...";
    }
    else
    {
        cout << "\n 1. According to Book ID";
        cout << "\n 2. According to Book Name";
        cout << "\n 3. According to Author Name";
        cout << "\n\n Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "\n Book ID: ";
            cin >> id;
            for (int a = 0; a < i; a++)
            {
                if (id == b[a].book_id)
                {
                    cout << "\n\n\t\tBook Management System";
                    cout << "\n Book ID: " << b[a].book_id;
                    cout << "\n Book Name: " << b[a].name;
                    cout << "\n Author Name: " << b[a].author;
                    cout << "\n Publisher Name" << b[a].publisher;
                    cout << "\n Pages: " << b[a].pages;
                    cout << "\n Price: " << b[a].price;
                    cout << "\n\n=============================";
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "\n\n Book Id Not Found.......";
            }
        }
        else if (choice == 2)
        {
            cout << "\n Book Name: ";
            cin >> name;
            cout << "\n\n\t\tBook Management System";
            for (int a = 0; a < i; a++)
            {
                if (name == b[a].name)
                {

                    cout << "\n Book ID: " << b[a].book_id;
                    cout << "\n Book Name: " << b[a].name;
                    cout << "\n Author Name: " << b[a].author;
                    cout << "\n Publisher Name" << b[a].publisher;
                    cout << "\n Pages: " << b[a].pages;
                    cout << "\n Price: " << b[a].price;
                    cout << "\n\n=============================";
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "\n\n Book Name Not Found.......";
            }
        }
        else if (choice == 3)
        {
            cout << "\n\n Author Name: ";
            cin >> name;
            // system("cls");
            cout << "\n\n\t\tBook Management System";
            for (int a = 0; a < i; a++)
            {
                if (name == b[a].author)
                {

                    cout << "\n Book ID: " << b[a].book_id;
                    cout << "\n Book Name: " << b[a].name;
                    cout << "\n Author Name: " << b[a].author;
                    cout << "\n Publisher Name" << b[a].publisher;
                    cout << "\n Pages: " << b[a].pages;
                    cout << "\n Price: " << b[a].price;
                    cout << "\n\n=============================";
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "\n\n Author Name Not Found.......";
            }
        }
    }
}
void book_fun::update()
{
    int id, found = 0;
    cout << "\n\n\n\t\t Book Management System";
    if (i == 0)
    {
        cout << "\n\n Database is empty......";
    }
    else
    {
        cout << "\n\n Book ID for update: ";
        cin >> id;
        for (int a = 0; a < i; a++)
        {
            if (id == b[a].book_id)
            {
                cout << "\n\n\t\t Book Management System";
                cout << "\nBook Id: ";
                cin >> b[a].book_id;
                cout << "Book Name: ";
                cin >> b[a].name;
                cout << "Author Name: ";
                cin >> b[a].author;
                cout << "Publisher Name: ";
                cin >> b[a].publisher;
                cout << "Pages: ";
                cin >> b[a].pages;
                cout << "Price: ";
                cin >> b[a].price;
                cout << "\n\n\n\t\tCongratulations! Book Updated Successfully.........!";
                found++;
            }
        }
        if (found == 0)
        {
            cout << "\n\n Book ID not found!";
        }
    }
}
void book_fun::del()
{
    int id, found = 0;
    cout << "\n\n\t\t Book Management System";
    if (i == 0)
    {
        cout << "\n\n Database is empty....";
    }
    else
    {
        cout << "\n\n Book ID for delete: ";
        cin >> id;
        for (int a = 0; a < i; a++)
        {
            if (id == b[a].book_id)
            {
                for (int k = a; k < i; k++)
                {
                    b[k].book_id = b[k + 1].book_id;
                    b[k].name = b[k + 1].name;
                    b[k].author = b[k + 1].author;
                    b[k].publisher = b[k + 1].publisher;
                    b[k].pages = b[k + 1].pages;
                    b[k].price = b[k + 1].price;
                }
                cout << "\n\n\n\t\tCongratulations! Book Deleted Successfully.....!";
                i--;
                found++;
            }
        }
        if (found == 0)
        {
            cout << "\n\n Book ID not found.....";
        }
    }
}
void book_fun::show()
{
    cout << "\n\n\t\t Book Management System";
    if (i == 0)
    {
        cout << "\n\n Database is empty....";
    }
    else
    {
        for (int a = 0; a < i; a++)
        {
            cout << "\n Book ID: " << b[a].book_id;
            cout << "\n Book Name: " << b[a].name;
            cout << "\n Author Name: " << b[a].author;
            cout << "\n Publisher Name" << b[a].publisher;
            cout << "\n Pages: " << b[a].pages;
            cout << "\n Price: " << b[a].price;
            cout << "\n\n=============================";
        }
    }
}
int main()
{
    book_fun obj;
    obj.menu();

    return 0;
}
