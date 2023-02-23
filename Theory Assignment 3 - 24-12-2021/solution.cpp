#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

// MAX-SIZE OF ARRAY
const int max_size = 500;

// DECLARATION OF BOOK STRUCTURE
struct book
{
    string ID;
    string title;
    string author;
    double price;
    bool issued;
};

// FUNCTION PROTOTYPES
void read_data(string input_file_name, ifstream& input, book books_data[], int& actual_array_size);
void display_menu_system(int& user_choice);
void one_add_book_info(book books_data[], int &arr_size);
void two_display_book_info(book books_data[], int arr_size);
void three_display_book_info(book books_data[], int arr_size);
int four_unissued_books_count(book books_data[], int arr_size);
void five_bubble_sort_books(book books_data[], int arr_size);
void six_out_file(book books_data[], int arr_size);
void seven_in_file(book books_data[], int actual_array_size);
void run_operation(int choice, book books_data[], int &arr_size);
void issued_output(bool issued);
bool read_issued_letter(char letter);

int main()
{
    // VARIABLE DECLARATIONS
    ifstream input;
    int actual_array_size;
    int user_choice;
    book books_data[max_size];

    // FUNCTION TO READ DATA FROM INPUT FILE
    read_data("Assignment 3 (TH).txt", input, books_data, actual_array_size);

    cout<<"Welcome to the Library system\n\n";

    // LOOP THAT RETURNS TO MENU AFTER RUNNING SELECTED OPERATION UNTIL EXIT OPTION IS SELECTED
    do
    {
        // FUNCTION TO DISPLAY MENU, WHICH USES 'USER CHOICE' AS 'REFERENCE VARIABLE'
        display_menu_system(user_choice);
        // FUNCTION RUNS APPROPRIATE INSTRUCTION AS SELECTED FROM MENU
        run_operation(user_choice, books_data, actual_array_size);
        cout<<endl;

        // INPUT VALIDATION
        if(!cin)
        {
            cin.clear();
            cin.ignore(100, '\n');
        }
    }while(user_choice != 8);

    return 0;
}

// FUNCTION DEFINITIONS

    // FUNCTION THAT READS DATA FROM INPUT FILE AND STORES IT INSIDE STRUCTURE INSIDE AN ARRAY
void read_data(string input_file_name, ifstream& input, book books_data[], int& actual_array_size)
{

    input.open(input_file_name);

    if(input.fail())
    {
        cout<<"Error in opening data input file!"<<endl;
        return;
    }

    // This variable measures the actual size of the array
    actual_array_size = 0;
    char issued_letter;

    for(int i = 0; i < max_size; i++)
    {
        if(input.eof())
    {
        return;
    }

        input>>books_data[i].ID;
        input.ignore(100, '\n');
        getline(input, books_data[i].title);
        getline(input, books_data[i].author);
        input>>books_data[i].price;
        input>>issued_letter;
        books_data[i].issued = read_issued_letter(issued_letter);
        input.ignore(100, '\n');
        input.ignore(100, '\n');
        actual_array_size++; // counter for actual array size, which returns as reference variable to main function for future operations on array
    }

    input.close();
}

// DISPLAYS MENU SYSTEM - WHICH RETURNS USER CHOICE AS REFERENCE VARIABLE TO MAIN FUNCTION
void display_menu_system(int& user_choice)
{
    cout<<"Please select one of the following options by entering the corresponding option number: \n";
    cout<<"1. Add book information\n";
    cout<<"2. Display book information\n";
    cout<<"3. List all books of given author\n";
    cout<<"4. List the count of unissued books in the library\n";
    cout<<"5. List the books in the order of ID\n";
    cout<<"6. Save books information\n";
    cout<<"7. Load books information\n";
    cout<<"8. Exit\n\n";
    cout<<"Select option: ";
    cin>>user_choice;
    cout<<endl;
}

// RUNS THE SELECTED OPERTAION FROM MENU SYSTEM - USES OTHER FUNCTIONS FOR THE OPERATIONS
void run_operation(int choice, book books_data[], int &arr_size)
{
    switch(choice)
    {
    case 1:
        one_add_book_info(books_data, arr_size);
        cout<<"Book record successfully added. Operation complete\n\n";

             for(int i = 0; i < arr_size; i++)
    {
        cout<<books_data[i].ID<<endl<<books_data[i].title<<endl<<books_data[i].author<<endl<<books_data[i].price<<endl<<books_data[i].issued<<endl;
        cout<<endl;
    }
        break;

    case 2:
        two_display_book_info(books_data, arr_size);
        cout<<"Operation complete\n";
        break;

    case 3:
        three_display_book_info(books_data, arr_size);
        cout<<"Operation complete\n";
        break;

    case 4:
        cout<<"Processing...\n";
        cout<<"The number of unissued books are: "<<four_unissued_books_count(books_data, arr_size)<<endl;
        break;

    case 5:
        cout<<"Processing...\n";
        five_bubble_sort_books(books_data, arr_size);
        cout<<"Operation complete\n\n";
         for(int i = 0; i < arr_size; i++)
    {
        cout<<books_data[i].ID<<endl<<books_data[i].title<<endl<<books_data[i].author<<endl<<books_data[i].price<<endl<<books_data[i].issued<<endl;
        cout<<endl;
    }
        break;

    case 6:
        cout<<"File write in progress...\n";
        six_out_file(books_data, arr_size);
        cout<<"Finished processing. Operation complete.\n";
        break;

    case 7:
        cout<<"File read in progress...\n";
        seven_in_file(books_data, arr_size);
        cout<<"Finished processing. Operation complete.\n";
        break;

    case 8:
        cout<<"Exited Program\n";
        return;
        break;

    default:
        cout<<"Invalid Option!\n";
        break;
    }
}

// WRITES BOOK INFORMATION TO BOOK.TXT FILE
void six_out_file(book books_data[], int arr_size)
{
    ofstream output;
    output.open("books.txt");

     if(output.fail())
    {
        cout<<"Error in opening output file!"<<endl;
        return;
    }

    for(int i = 0; i < arr_size ; i++)
    {
        output<<books_data[i].ID<<endl;
        output<<books_data[i].title<<endl;
        output<<books_data[i].author<<endl;
        output<<books_data[i].price<<endl;
        output<<books_data[i].issued<<endl;
        output<<"--\n";
    }

    output.close();
}

// READS BOOK INFORMATION FROM BOOK.TXT FILE
void seven_in_file(book books_data[], int actual_array_size)
{
    ifstream input;
    input.open("books.txt");

    if(input.fail())
    {
        cout<<"Error in opening data input file!"<<endl;
        return;
    }

      for(int i = 0; i < actual_array_size; i++)
    {
        if(input.eof())
    {
        return;
    }
        input>>books_data[i].ID;
        input.ignore(100, '\n');
        getline(input, books_data[i].title);
        getline(input, books_data[i].author);
        input>>books_data[i].price;
        input>>books_data[i].issued;
        input.ignore(100, '\n');
        input.ignore(100, '\n');
    }

    input.close();
}

// COUNTS THE NUMBER OF BOOKS WHICH HAVE NOT BEEN ISSUED
int four_unissued_books_count(book books_data[], int arr_size)
{
    int counter = 0;
    for(int i = 0; i < arr_size; i++)
    {
        if((books_data[i].issued) == 0)
        {
            counter++;
        }
    }
    return counter;
}

// ALLOWS THE USER TO ADD ANOTHER BOOK RECORD TO THE ARRAY
void one_add_book_info(book books_data[], int &arr_size)
{
    if(arr_size == 500)
    {
        cout<<"Book capacity is full. Already added 500 books!\n";
        return;
    }
    int i = arr_size;
    cout<<"Enter Book ID: ";
    cin>>books_data[i].ID;
    cin.ignore(100, '\n');
    cout<<"Enter Book Title: ";
    getline(cin, books_data[i].title);
    cout<<"Enter Book Author: ";
    getline(cin, books_data[i].author);
    cout<<"Enter Book Price: ";
    cin>>books_data[i].price;
    cout<<"Enter 1 if Book is issued, else 0: ";
    cin>>books_data[i].issued;

    arr_size++;
    cout<<endl;
}

// USES BOOK ID TO SEARCH AND DISPLAY BOOK DETAILS, THROUGH USER INPUT
void two_display_book_info(book books_data[], int arr_size)
{
    string book_id;
    cout<<"Enter the Book ID to search for the desired book: ";
    cin>>book_id;
    cout<<endl;
    for(int i = 0; i < arr_size; i++)
    {
        if(books_data[i].ID == book_id)
        {
            cout<<"Book ID: "<<books_data[i].ID<<endl;
            cout<<"Book Title: "<<books_data[i].title<<endl;
            cout<<"Book Author: "<<books_data[i].author<<endl;
            cout<<"Book Price: "<<books_data[i].price<<endl;
            issued_output(books_data[i].issued);
            cout<<endl<<endl;
            return;
        }
    }
    cout<<"Book not found.\n";
    cout<<endl;
}

// USES AUTHOR NAME TO SEARCH AND DISPLAY BOOK DETAILS, THROUGH USER INPUT
void three_display_book_info(book books_data[], int arr_size)
{
    string book_author;
    cout<<"Enter the Book's Author's name to search for the desired book: ";
    cin.ignore(100, '\n');
    getline(cin, book_author);
    cout<<endl;
    for(int i = 0; i < arr_size; i++)
    {
        if(books_data[i].author == book_author)
        {
            cout<<"Book ID: "<<books_data[i].ID<<endl;
            cout<<"Book Title: "<<books_data[i].title<<endl;
            cout<<"Book Author: "<<books_data[i].author<<endl;
            cout<<"Book Price: "<<books_data[i].price<<endl;
            issued_output(books_data[i].issued);
            cout<<endl<<endl;
            return;
        }
    }
    cout<<"Book not found.\n";
    cout<<endl;
}

// USES BUBBLE SORT ALGORITHM TO SORT BOOK RECORDS IN ARRAY BASED ON BOOK ID
void five_bubble_sort_books(book books_data[], int arr_size)
{
    int pass;
    int i;
    string ID_hold;
    string title_hold;
    string author_hold;
    double price_hold;
    bool issued_hold;
    for ( pass = 0; pass < arr_size-1; pass++ )
        {
        for ( i = 0; i < arr_size - 1; i++ )
            {
            if (books_data[i].ID > books_data[i+1].ID)
            {
                ID_hold = books_data[i].ID;
                books_data[i].ID = books_data[i+1].ID;
                books_data[i+1].ID = ID_hold;

                title_hold = books_data[i].title;
                books_data[i].title = books_data[i+1].title;
                books_data[i+1].title = title_hold;

                author_hold = books_data[i].author;
                books_data[i].author = books_data[i+1].author;
                books_data[i+1].author = author_hold;

                price_hold = books_data[i].price;
                books_data[i].price = books_data[i+1].price;
                books_data[i+1].price = price_hold;

                issued_hold = books_data[i].issued;
                books_data[i].issued = books_data[i+1].issued;
                books_data[i+1].issued = issued_hold;
            }
        }
    }
}

// FUNCTION THAT DISPLAYS WHETHER BOOK IS ISSUED OR NOT
void issued_output(bool issued)
{
    if(issued == 1)
    {
        cout<<"Book is Issued\n";
    }
    else
    {
        cout<<"Book is not Issued\n";
    }
}

// FUNCTION THAT READS CHAR T AND F FROM INPUT INPUT FILE AND TRANSLATES IT INTO BOOL VALUE
bool read_issued_letter(char letter)
{
    if(letter == 'T')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
