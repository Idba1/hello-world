import mysql.connector
from mysql.connector import Error

print("1. Script started")
try:
    print("2. Trying to connect...")

    mydb = mysql.connector.connect(
        host='localhost',
        port=3307,          
        user='root',
        passwd='password'          
    )

    print("3. Connection done")

    if mydb.is_connected():
        print("4. ✅ Connection successful!")
except Error as e:
    print("5. ❌ MySQL Error:", e)

print("6. Script ended")
