using namespace std;

namespace BooksInfo
{
    // struct Books //struct를 붙혀주는게 정석이지만 
    // {
    //     char title[50];
    //     char author[50];
    //     char subject[100];
    //     int book_id;
    // };
    typedef struct Books 
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    } BooksTag; 

    void PrintBooksInformation(BooksTag* book)
    {
        cout << "book title : " << book -> title << ", author : " << book -> author << ", subject : " << book -> subject << ", book -> book_id : " << book -> book_id << endl;
    
        return;
    }

    BooksTag SetBooksInformation(char *title, char *author, char *subject, int bookId) //struct내부의 함수
    {
        BooksTag book;
        strcpy(book.title, title);
        strcpy(book.author, author);
        strcpy(book.subject, subject);
        book.book_id = bookId;

        return book;
    }
}