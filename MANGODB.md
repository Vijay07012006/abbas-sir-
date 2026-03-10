Mango DB:-
    mangodb is no sql database which is provide the BSON format for storing the data in the database .
    MangoDB is developed by 10 gen in 2009 approx.
    It is a document based database.
 
Prerequisits
Mangodb server
MangoDB GUI - Compass/CLI Shell

Collection =>
    collection is like table in mysql . which can store multiple documents like a table can store multiple record in mysql


db.User.aggregate({$sort:{quantity:-1}})
db.User.aggregate([{$limit:2}])
db.User.aggregate([{$skip:1},{$limit:2}])
db.User.createIndex({"prodId":1})
db.User.dropIndex("prodId_1")
