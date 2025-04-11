class Book:
    def __init__(self, id, name, quantity):
        self.id = id
        self.name = name
        self.quantity = quantity


class User:
    def __init__(self, id, name, password):
        self.id = id
        self.name = name
        self.password = password
        self.borrowedBooks = []  # empty list
        self.returnedBooks = []


class Library:
    def __init__(self,  name):
        self.name = name
        self.users = []
        self.books = []



    def addBook(self, id, name, q):
        for book in self.books:
            if book.id == id:
                print("This Book already exists")
                return
        book = Book(self, id,  name, q)
        self.books.append(book)
        print(f"{book.name} added successfully")



    def addUser(self, id, name, p):
        for user in self.users:
            if user.id == id:
                print("This user already exists")
                return
        user = User(self, id,  name, p)
        self.users.append(user)
        print(f"{user.name} added successfully")



    def borrowBook(self, user, BookId):
        for book in self.books:
            if book.id == BookId:
                if book in user.borrowedBooks:
                    print("Already Borrowed")
                    return
                elif book.quantity < 1:
                    print("No available copies")
                    return
                else:
                    user.borrowedBooks.append(book)
                    book.quantity -= 1
                    print("Borrowed Successfully")
                    return
        print(f"Not found any book with id : {BookId}")



    def returnBook(self, user, BookId):
        for book in self.books:
            if book.id == BookId:
                if book in user.borrowedBooks:
                    book.quantity += 1
                    user.borrowedBooks.remove(book)
                    user.returnedBooks.append(book)
                    return
                else:
                    print("You did not borrow this book")
                    return
        print(f"Not found any book with id : {BookId}")


