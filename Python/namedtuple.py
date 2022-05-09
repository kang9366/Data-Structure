import collections as cln

nt = cln.namedtuple("Person", ['name', 'age', 'gender'])

person1 = nt("강승구", 23, "남")
print("My name is %s\nMy age is %d\nI'm %c" % (person1.name, person1.age, person1.gender))