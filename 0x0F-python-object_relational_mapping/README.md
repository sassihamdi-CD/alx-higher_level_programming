# 0x0F. Python - Object-relational mapping


## Before you start…
Please make sure your MySQL server is in 8.0 -> [How to install MySQL 8.0 in Ubuntu 20.04](https://example.com/mysql-installation-guide)

## Background Context
In this project, we will link two amazing worlds: Databases and Python!

In the first part, i will use the module MySQLdb to connect to a MySQL database and execute my SQL queries.

In the second part, i will use the module SQLAlchemy (don’t ask me how to pronounce it…) an Object Relational Mapper (ORM).

The biggest difference is: no more SQL queries! Indeed, the purpose of an ORM is to abstract the storage to the usage. With an ORM, your biggest concern will be “What can I do with my objects” and not “How this object is stored? where? when?”. You won’t write any SQL queries only Python code. Last thing, your code won’t be “storage type” dependent. You will be able to change your storage easily without re-writing your entire project.

**Without ORM:**

```python
conn = MySQLdb.connect(host="localhost", port=3306, user="root", passwd="root", db="my_db", charset="utf8")
cur = conn.cursor()
cur.execute("SELECT * FROM states ORDER BY id ASC") # HERE I have to know SQL to grab all states in my database
query_rows = cur.fetchall()
for row in query_rows:
    print(row)
cur.close()
conn.close()

**With an ORM:**
engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format("root", "root", "my_db"), pool_pre_ping=True)
Base.metadata.create_all(engine)

session = Session(engine)
for state in session.query(State).order_by(State.id).all(): # HERE: no SQL query, only objects!
    print("{}: {}".format(state.id, state.name))
session.close()

Do you see the difference? Cool, right?

The biggest difficulty with ORM is: The syntax!

Indeed, all of them have the same type of syntax, but not always. Please read tutorials and don’t read the entire documentation before starting, just jump on it if you don’t get something.


## Resources

**Read or watch:**

- [Object-relational mappers](https://en.wikipedia.org/wiki/Object-relational_mapping)
- [mysqlclient/MySQLdb documentation](https://mysqlclient.readthedocs.io/user_guide.html) (please don't pay attention to _mysql)
- [MySQLdb tutorial](https://mysqlclient.readthedocs.io/user_guide.html)
- [SQLAlchemy tutorial](https://docs.sqlalchemy.org/en/20/tutorial/index.html)
- [SQLAlchemy](https://www.sqlalchemy.org/)
- [mysqlclient/MySQLdb](https://mysqlclient.readthedocs.io/)
- [Introduction to SQLAlchemy](https://auth0.com/blog/sqlalchemy-orm-tutorial-for-python-developers/)
- [Flask SQLAlchemy](https://flask-sqlalchemy.palletsprojects.com/en/3.x/)
- [10 common stumbling blocks for SQLAlchemy newbies](https://www.codementor.io/@bruce3557/10-common-stumbling-blocks-for-sqlalchemy-newbies-2flqhj08w5)
- [Python SQLAlchemy Cheatsheet](https://www.pythonsheets.com/notes/python-sqlalchemy.html)
- [SQLAlchemy ORM Tutorial for Python Developers](https://auth0.com/blog/sqlalchemy-orm-tutorial-for-python-developers/) (Warning: This tutorial is with PostgreSQL, but the concept of SQLAlchemy is the same with MySQL)
- [SQLAlchemy Tutorial](https://www.tutorialspoint.com/sqlalchemy/index.htm)
- [Python Virtual Environments: A primer](https://realpython.com/python-virtual-environments-a-primer/)
